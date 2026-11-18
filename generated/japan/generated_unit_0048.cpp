#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0048[4095] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0,
    13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0,
    0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0,
    0, 34, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 42, 0, 0,
    0, 43, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 51,
    0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0,
    61, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0,
    74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0,
    0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0,
    93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0,
    0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 110,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0,
    115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120,
    0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0,
    128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    131, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 135, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0,
    138, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0,
    0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0,
    0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 164, 0, 0, 165, 0, 0,
    0, 166, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0,
    0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 176, 0, 177, 0, 0, 0, 0,
    178, 0, 0, 179, 0, 180, 0, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 184, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 190, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 194, 0, 0,
    0, 195, 0, 0, 196, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 0, 203, 0,
    0, 204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0,
    210, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0,
    216, 0, 0, 0, 217, 0, 218, 0, 0, 0, 219, 0, 0, 220, 0, 0, 221, 0, 222, 0, 0, 223, 0, 224, 0, 0, 225, 0, 0, 226, 0, 227,
    228, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 236,
    0, 0, 237, 0, 238, 0, 0, 239, 0, 240, 0, 0, 241, 0, 242, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0,
    246, 0, 0, 247, 248, 0, 0, 249, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 254, 0,
    0, 255, 0, 256, 0, 0, 257, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 262, 263, 0, 264, 0, 0, 0,
    0, 0, 265, 0, 266, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0,
    272, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0,
    279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 283, 0, 0, 284, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287,
    288, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 293, 0, 294, 0, 0, 295, 0, 0, 0,
    0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0,
    301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0,
    306, 0, 0, 0, 0, 0, 0, 307, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0,
    0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0,
    0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0,
    0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 329, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0,
    334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0,
    344, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 352, 0, 353, 0, 354, 0, 355, 0, 356, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 360, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0,
    0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0,
    373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 378,
    0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 383,
    0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 386, 0, 387, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0,
    0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0,
    0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0,
    0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0,
    416, 0, 0, 0, 417, 0, 0, 0, 418, 0, 419, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 422, 0, 0, 0, 0, 423, 424,
    0, 0, 0, 425, 0, 0, 426, 0, 427, 0, 0, 428, 0, 0, 429, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 433, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 436, 0, 437, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 442, 0, 0, 443,
    0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0,
    0, 453, 0, 0, 0, 454, 0, 455, 0, 0, 0, 0, 456, 0, 0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    459, 0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0,
    0, 465, 0, 0, 0, 466, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 468, 0, 469, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0,
    471, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 476, 0, 0,
    0, 0, 0, 477, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0,
    482, 0, 483, 0, 484, 0, 0, 485, 0, 0, 0, 0, 486, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0,
    490, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 492, 0, 493, 0, 0, 0, 494, 0, 495, 0, 0, 0, 0, 496, 0, 0, 0,
    0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 499, 0, 0, 500, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 502, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 506, 0, 0, 0, 507,
    0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 510, 0, 0, 511, 0, 0, 0, 0, 0, 0, 512, 0, 0,
    0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 517, 0,
    0, 0, 518, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 522, 0, 0, 0,
    0, 523, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 527, 0,
    0, 0, 528, 0, 0, 0, 529, 0, 530, 0, 531, 0, 532, 0, 533, 0, 534, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0,
    0, 537, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 541, 0, 542, 0, 0, 0, 543, 0, 544, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 546, 547, 0, 0, 548, 0, 0, 0, 549, 0, 550, 0,
    0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 553, 0, 554,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 557, 0, 0, 558, 0, 0,
    559, 0, 0, 560, 0, 0, 561, 0, 0, 562, 0, 0, 563, 0, 0, 564, 0, 0, 565, 0, 0, 566, 0, 0, 567, 0, 0, 568, 0, 0, 569, 0,
    0, 570, 0, 0, 571, 0, 0, 572, 0, 0, 573, 0, 0, 574, 0, 0, 575, 0, 0, 576, 0, 0, 577, 0, 0, 578, 0, 0, 579, 0, 0, 580,
    0, 0, 581, 0, 0, 582, 0, 0, 583, 0, 0, 584, 0, 0, 585, 0, 0, 586, 0, 0, 587, 0, 0, 588, 0, 0, 589, 0, 0, 590, 0, 0,
    591, 0, 0, 592, 0, 0, 593, 0, 0, 594, 0, 0, 595, 0, 0, 596, 0, 0, 597, 0, 0, 598, 0, 0, 599, 0, 0, 600, 0, 0, 601, 0,
    602, 0, 0, 0, 0, 0, 0, 603, 0, 604, 0, 0, 0, 0, 605, 0, 606, 0, 0, 0, 0, 607, 0, 0, 0, 608, 0, 609, 0, 0, 0, 0,
    610, 0, 611, 0, 0, 0, 0, 612, 0, 613, 0, 0, 614, 0, 0, 0, 615, 0, 0, 0, 616, 0, 0, 0, 0, 617, 0, 618, 0, 0, 0, 0,
    619, 0, 620, 0, 0, 0, 0, 621, 0, 622, 0, 0, 0, 0, 0, 623, 0, 0, 0, 624, 0, 625, 0, 0, 0, 626, 0, 627, 0, 0, 0, 0,
    628, 0, 629, 0, 0, 0, 0, 630, 0, 631, 0, 0, 0, 0, 632, 0, 633, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 635, 0, 0, 0, 636,
    0, 0, 0, 637, 0, 0, 0, 638, 0, 639, 0, 0, 0, 0, 640, 0, 641, 0, 0, 0, 0, 642, 0, 643, 0, 0, 0, 0, 0, 0, 644, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 646, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 648, 0, 649, 0, 0, 0, 650, 0, 651, 0, 0, 0, 0, 652, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654,
    0, 655, 0, 0, 0, 656, 0, 657, 0, 0, 0, 0, 658, 0, 659, 0, 0, 0, 660, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 662,
    0, 663, 0, 0, 0, 664, 0, 665, 0, 0, 0, 666, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 669, 0, 0, 0,
    670, 0, 0, 0, 671, 0, 672, 0, 0, 0, 0, 673, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675,
    0, 676, 0, 0, 0, 0, 0, 677, 0, 678, 0, 0, 0, 0, 679, 0, 680, 0, 0, 0, 0, 0, 681, 0, 682, 0, 0, 0, 0, 0, 683, 0,
    684, 0, 0, 0, 0, 0, 685, 0, 686, 0, 0, 0, 0, 687, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 690, 0,
    0, 0, 691, 0, 692, 0, 0, 0, 0, 693, 0, 0, 0, 694, 0, 0, 0, 0, 695, 0, 696, 0, 0, 697, 0, 698, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 701, 0, 0, 0, 0,
    0, 0, 702, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0,
    0, 0, 707, 0, 708, 0, 0, 0, 0, 0, 0, 709, 0, 710, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 712, 0, 0, 0, 0, 713, 0, 0,
    0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 715, 0, 716, 0, 0, 0, 0, 0, 717, 718, 0, 0, 719, 0, 0, 0, 0, 0, 720, 0, 0, 0,
    0, 0, 721, 0, 0, 722, 0, 0, 723, 0, 724, 0, 0, 725, 0, 0, 0, 0, 726, 0, 0, 0, 727, 0, 728, 0, 0, 729, 0, 0, 0, 0,
    730, 731, 0, 0, 0, 0, 732, 0, 0, 733, 0, 0, 734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 736,
    0, 0, 0, 737, 0, 0, 0, 738, 0, 0, 0, 739, 0, 0, 0, 740, 0, 0, 0, 741, 0, 0, 0, 742, 0, 0, 0, 743, 0, 0, 0, 744,
    0, 0, 0, 745, 0, 0, 0, 746, 0, 0, 0, 747, 0, 0, 0, 748, 0, 0, 749, 750, 0, 0, 0, 0, 0, 751, 752, 0, 0, 753, 0, 0,
    0, 0, 754, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 757, 0, 0, 758, 0, 0,
    759, 0, 0, 0, 0, 0, 0, 0, 760, 0, 0, 0, 0, 761, 0, 0, 762, 0, 0, 0, 763, 0, 764, 0, 0, 0, 0, 0, 0, 765, 0, 0,
    0, 766, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 768, 0, 0, 0, 769, 0, 0, 770, 0, 0, 0, 0, 0, 0, 771, 772, 0, 0,
    0, 0, 773, 0, 774, 0, 0, 0, 0, 775, 776, 0, 0, 0, 777, 0, 778, 0, 0, 0, 779, 0, 0, 0, 780, 0, 0, 781, 0, 782, 0, 0,
    783, 0, 0, 784, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0, 0, 0, 786, 0, 0, 0, 787, 0, 0, 788, 0, 0, 789, 0, 790, 0, 0, 0,
    0, 791, 0, 0, 792, 0, 793, 794, 0, 795, 0, 0, 796, 0, 0, 797, 0, 798, 0, 0, 799, 0, 800, 0, 0, 801, 0, 802, 0, 0, 803,
};
void recomp_unit_0048_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088C4004u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0048[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088C4004;
    case 2u: goto L_088C403C;
    case 3u: goto L_088C4048;
    case 4u: goto L_088C4068;
    case 5u: goto L_088C4074;
    case 6u: goto L_088C40BC;
    case 7u: goto L_088C40C8;
    case 8u: goto L_088C40F0;
    case 9u: goto L_088C40FC;
    case 10u: goto L_088C412C;
    case 11u: goto L_088C4138;
    case 12u: goto L_088C4178;
    case 13u: goto L_088C4184;
    case 14u: goto L_088C41CC;
    case 15u: goto L_088C41D8;
    case 16u: goto L_088C4248;
    case 17u: goto L_088C4254;
    case 18u: goto L_088C42CC;
    case 19u: goto L_088C42D8;
    case 20u: goto L_088C42F0;
    case 21u: goto L_088C42FC;
    case 22u: goto L_088C4314;
    case 23u: goto L_088C4320;
    case 24u: goto L_088C4340;
    case 25u: goto L_088C434C;
    case 26u: goto L_088C4374;
    case 27u: goto L_088C4380;
    case 28u: goto L_088C43A8;
    case 29u: goto L_088C43B4;
    case 30u: goto L_088C4444;
    case 31u: goto L_088C4450;
    case 32u: goto L_088C4468;
    case 33u: goto L_088C4474;
    case 34u: goto L_088C4488;
    case 35u: goto L_088C4490;
    case 36u: goto L_088C44A4;
    case 37u: goto L_088C44B8;
    case 38u: goto L_088C44C0;
    case 39u: goto L_088C44CC;
    case 40u: goto L_088C44D8;
    case 41u: goto L_088C44F4;
    case 42u: goto L_088C44F8;
    case 43u: goto L_088C4508;
    case 44u: goto L_088C4514;
    case 45u: goto L_088C4520;
    case 46u: goto L_088C4534;
    case 47u: goto L_088C4544;
    case 48u: goto L_088C4550;
    case 49u: goto L_088C4564;
    case 50u: goto L_088C4574;
    case 51u: goto L_088C4580;
    case 52u: goto L_088C4594;
    case 53u: goto L_088C45A4;
    case 54u: goto L_088C45AC;
    case 55u: goto L_088C45B8;
    case 56u: goto L_088C45F0;
    case 57u: goto L_088C45FC;
    case 58u: goto L_088C462C;
    case 59u: goto L_088C4638;
    case 60u: goto L_088C4678;
    case 61u: goto L_088C4684;
    case 62u: goto L_088C469C;
    case 63u: goto L_088C46A8;
    case 64u: goto L_088C46C8;
    case 65u: goto L_088C46D4;
    case 66u: goto L_088C4714;
    case 67u: goto L_088C4720;
    case 68u: goto L_088C4768;
    case 69u: goto L_088C4774;
    case 70u: goto L_088C47B4;
    case 71u: goto L_088C47C0;
    case 72u: goto L_088C47D8;
    case 73u: goto L_088C47E4;
    case 74u: goto L_088C4804;
    case 75u: goto L_088C4810;
    case 76u: goto L_088C4838;
    case 77u: goto L_088C4844;
    case 78u: goto L_088C4874;
    case 79u: goto L_088C4880;
    case 80u: goto L_088C4894;
    case 81u: goto L_088C48B4;
    case 82u: goto L_088C48C0;
    case 83u: goto L_088C48E8;
    case 84u: goto L_088C48F4;
    case 85u: goto L_088C4914;
    case 86u: goto L_088C4920;
    case 87u: goto L_088C4950;
    case 88u: goto L_088C4970;
    case 89u: goto L_088C4998;
    case 90u: goto L_088C49A8;
    case 91u: goto L_088C49C0;
    case 92u: goto L_088C49EC;
    case 93u: goto L_088C4A04;
    case 94u: goto L_088C4A18;
    case 95u: goto L_088C4A30;
    case 96u: goto L_088C4A48;
    case 97u: goto L_088C4A54;
    case 98u: goto L_088C4A60;
    case 99u: goto L_088C4A88;
    case 100u: goto L_088C4AAC;
    case 101u: goto L_088C4ABC;
    case 102u: goto L_088C4AD8;
    case 103u: goto L_088C4AE8;
    case 104u: goto L_088C4AF8;
    case 105u: goto L_088C4B14;
    case 106u: goto L_088C4B24;
    case 107u: goto L_088C4B48;
    case 108u: goto L_088C4B60;
    case 109u: goto L_088C4B74;
    case 110u: goto L_088C4B80;
    case 111u: goto L_088C4BB8;
    case 112u: goto L_088C4BC8;
    case 113u: goto L_088C4BE4;
    case 114u: goto L_088C4BF4;
    case 115u: goto L_088C4C04;
    case 116u: goto L_088C4C20;
    case 117u: goto L_088C4C30;
    case 118u: goto L_088C4C4C;
    case 119u: goto L_088C4C5C;
    case 120u: goto L_088C4C80;
    case 121u: goto L_088C4C88;
    case 122u: goto L_088C4C94;
    case 123u: goto L_088C4CA0;
    case 124u: goto L_088C4CB4;
    case 125u: goto L_088C4CCC;
    case 126u: goto L_088C4CDC;
    case 127u: goto L_088C4CF4;
    case 128u: goto L_088C4D04;
    case 129u: goto L_088C4D14;
    case 130u: goto L_088C4D3C;
    case 131u: goto L_088C4D84;
    case 132u: goto L_088C4D8C;
    case 133u: goto L_088C4D98;
    case 134u: goto L_088C4DD4;
    case 135u: goto L_088C4DD8;
    case 136u: goto L_088C4DE4;
    case 137u: goto L_088C4DEC;
    case 138u: goto L_088C4E04;
    case 139u: goto L_088C4E10;
    case 140u: goto L_088C4E28;
    case 141u: goto L_088C4E34;
    case 142u: goto L_088C4E3C;
    case 143u: goto L_088C4E50;
    case 144u: goto L_088C4E6C;
    case 145u: goto L_088C4E74;
    case 146u: goto L_088C4E88;
    case 147u: goto L_088C4EA8;
    case 148u: goto L_088C4EB4;
    case 149u: goto L_088C4ED0;
    case 150u: goto L_088C4ED8;
    case 151u: goto L_088C4EE4;
    case 152u: goto L_088C4EF0;
    case 153u: goto L_088C4F0C;
    case 154u: goto L_088C4F18;
    case 155u: goto L_088C4F30;
    case 156u: goto L_088C4F48;
    case 157u: goto L_088C4F64;
    case 158u: goto L_088C4F74;
    case 159u: goto L_088C4F8C;
    case 160u: goto L_088C4FA0;
    case 161u: goto L_088C4FBC;
    case 162u: goto L_088C4FD4;
    case 163u: goto L_088C4FE4;
    case 164u: goto L_088C4FEC;
    case 165u: goto L_088C4FF8;
    case 166u: goto L_088C5008;
    case 167u: goto L_088C501C;
    case 168u: goto L_088C5028;
    case 169u: goto L_088C5050;
    case 170u: goto L_088C5060;
    case 171u: goto L_088C5070;
    case 172u: goto L_088C508C;
    case 173u: goto L_088C50A8;
    case 174u: goto L_088C50CC;
    case 175u: goto L_088C50DC;
    case 176u: goto L_088C50E8;
    case 177u: goto L_088C50F0;
    case 178u: goto L_088C5104;
    case 179u: goto L_088C5110;
    case 180u: goto L_088C5118;
    case 181u: goto L_088C5128;
    case 182u: goto L_088C5134;
    case 183u: goto L_088C5140;
    case 184u: goto L_088C5148;
    case 185u: goto L_088C5154;
    case 186u: goto L_088C515C;
    case 187u: goto L_088C5174;
    case 188u: goto L_088C51A8;
    case 189u: goto L_088C51B8;
    case 190u: goto L_088C51C4;
    case 191u: goto L_088C51CC;
    case 192u: goto L_088C51DC;
    case 193u: goto L_088C51F0;
    case 194u: goto L_088C51F8;
    case 195u: goto L_088C5208;
    case 196u: goto L_088C5214;
    case 197u: goto L_088C521C;
    case 198u: goto L_088C5230;
    case 199u: goto L_088C5248;
    case 200u: goto L_088C5258;
    case 201u: goto L_088C5264;
    case 202u: goto L_088C5270;
    case 203u: goto L_088C527C;
    case 204u: goto L_088C5288;
    case 205u: goto L_088C5298;
    case 206u: goto L_088C52A8;
    case 207u: goto L_088C52B4;
    case 208u: goto L_088C52C4;
    case 209u: goto L_088C52E0;
    case 210u: goto L_088C5304;
    case 211u: goto L_088C531C;
    case 212u: goto L_088C5324;
    case 213u: goto L_088C5344;
    case 214u: goto L_088C5358;
    case 215u: goto L_088C5378;
    case 216u: goto L_088C5384;
    case 217u: goto L_088C5394;
    case 218u: goto L_088C539C;
    case 219u: goto L_088C53AC;
    case 220u: goto L_088C53B8;
    case 221u: goto L_088C53C4;
    case 222u: goto L_088C53CC;
    case 223u: goto L_088C53D8;
    case 224u: goto L_088C53E0;
    case 225u: goto L_088C53EC;
    case 226u: goto L_088C53F8;
    case 227u: goto L_088C5400;
    case 228u: goto L_088C5404;
    case 229u: goto L_088C5410;
    case 230u: goto L_088C5420;
    case 231u: goto L_088C5438;
    case 232u: goto L_088C5448;
    case 233u: goto L_088C5454;
    case 234u: goto L_088C5464;
    case 235u: goto L_088C5474;
    case 236u: goto L_088C5480;
    case 237u: goto L_088C548C;
    case 238u: goto L_088C5494;
    case 239u: goto L_088C54A0;
    case 240u: goto L_088C54A8;
    case 241u: goto L_088C54B4;
    case 242u: goto L_088C54BC;
    case 243u: goto L_088C54C0;
    case 244u: goto L_088C54E4;
    case 245u: goto L_088C54F0;
    case 246u: goto L_088C5504;
    case 247u: goto L_088C5510;
    case 248u: goto L_088C5514;
    case 249u: goto L_088C5520;
    case 250u: goto L_088C5528;
    case 251u: goto L_088C553C;
    case 252u: goto L_088C5564;
    case 253u: goto L_088C5570;
    case 254u: goto L_088C557C;
    case 255u: goto L_088C5588;
    case 256u: goto L_088C5590;
    case 257u: goto L_088C559C;
    case 258u: goto L_088C55A4;
    case 259u: goto L_088C55B0;
    case 260u: goto L_088C55D0;
    case 261u: goto L_088C55DC;
    case 262u: goto L_088C55E8;
    case 263u: goto L_088C55EC;
    case 264u: goto L_088C55F4;
    case 265u: goto L_088C560C;
    case 266u: goto L_088C5614;
    case 267u: goto L_088C5620;
    case 268u: goto L_088C562C;
    case 269u: goto L_088C5640;
    case 270u: goto L_088C5658;
    case 271u: goto L_088C5674;
    case 272u: goto L_088C5684;
    case 273u: goto L_088C568C;
    case 274u: goto L_088C56A8;
    case 275u: goto L_088C56B4;
    case 276u: goto L_088C56C4;
    case 277u: goto L_088C56D8;
    case 278u: goto L_088C56E8;
    case 279u: goto L_088C5704;
    case 280u: goto L_088C5714;
    case 281u: goto L_088C572C;
    case 282u: goto L_088C5734;
    case 283u: goto L_088C5740;
    case 284u: goto L_088C574C;
    case 285u: goto L_088C5758;
    case 286u: goto L_088C5768;
    case 287u: goto L_088C5780;
    case 288u: goto L_088C5784;
    case 289u: goto L_088C5790;
    case 290u: goto L_088C57A8;
    case 291u: goto L_088C57C8;
    case 292u: goto L_088C57D8;
    case 293u: goto L_088C57E0;
    case 294u: goto L_088C57E8;
    case 295u: goto L_088C57F4;
    case 296u: goto L_088C5808;
    case 297u: goto L_088C5818;
    case 298u: goto L_088C5840;
    case 299u: goto L_088C5850;
    case 300u: goto L_088C5870;
    case 301u: goto L_088C5884;
    case 302u: goto L_088C58B0;
    case 303u: goto L_088C58C8;
    case 304u: goto L_088C58DC;
    case 305u: goto L_088C58F4;
    case 306u: goto L_088C5904;
    case 307u: goto L_088C5920;
    case 308u: goto L_088C5928;
    case 309u: goto L_088C5940;
    case 310u: goto L_088C5950;
    case 311u: goto L_088C5964;
    case 312u: goto L_088C5974;
    case 313u: goto L_088C598C;
    case 314u: goto L_088C599C;
    case 315u: goto L_088C59B0;
    case 316u: goto L_088C59D8;
    case 317u: goto L_088C59E8;
    case 318u: goto L_088C59FC;
    case 319u: goto L_088C5A08;
    case 320u: goto L_088C5A14;
    case 321u: goto L_088C5A3C;
    case 322u: goto L_088C5A64;
    case 323u: goto L_088C5A74;
    case 324u: goto L_088C5A90;
    case 325u: goto L_088C5AA0;
    case 326u: goto L_088C5AB0;
    case 327u: goto L_088C5AD0;
    case 328u: goto L_088C5AE0;
    case 329u: goto L_088C5AE8;
    case 330u: goto L_088C5B10;
    case 331u: goto L_088C5B38;
    case 332u: goto L_088C5B48;
    case 333u: goto L_088C5B64;
    case 334u: goto L_088C5B84;
    case 335u: goto L_088C5BA4;
    case 336u: goto L_088C5BB4;
    case 337u: goto L_088C5BBC;
    case 338u: goto L_088C5BE4;
    case 339u: goto L_088C5C0C;
    case 340u: goto L_088C5C1C;
    case 341u: goto L_088C5C38;
    case 342u: goto L_088C5C58;
    case 343u: goto L_088C5C74;
    case 344u: goto L_088C5C84;
    case 345u: goto L_088C5CA8;
    case 346u: goto L_088C5CC0;
    case 347u: goto L_088C5CD4;
    case 348u: goto L_088C5D0C;
    case 349u: goto L_088C5D1C;
    case 350u: goto L_088C5D38;
    case 351u: goto L_088C5D48;
    case 352u: goto L_088C5D58;
    case 353u: goto L_088C5D60;
    case 354u: goto L_088C5D68;
    case 355u: goto L_088C5D70;
    case 356u: goto L_088C5D78;
    case 357u: goto L_088C5DA0;
    case 358u: goto L_088C5DB0;
    case 359u: goto L_088C5DC0;
    case 360u: goto L_088C5DCC;
    case 361u: goto L_088C5DD8;
    case 362u: goto L_088C5DF0;
    case 363u: goto L_088C5E20;
    case 364u: goto L_088C5E38;
    case 365u: goto L_088C5E48;
    case 366u: goto L_088C5E68;
    case 367u: goto L_088C5E88;
    case 368u: goto L_088C5EA0;
    case 369u: goto L_088C5EB0;
    case 370u: goto L_088C5EC4;
    case 371u: goto L_088C5EDC;
    case 372u: goto L_088C5EF4;
    case 373u: goto L_088C5F04;
    case 374u: goto L_088C5F18;
    case 375u: goto L_088C5F30;
    case 376u: goto L_088C5F4C;
    case 377u: goto L_088C5F5C;
    case 378u: goto L_088C5F80;
    case 379u: goto L_088C5F98;
    case 380u: goto L_088C5FAC;
    case 381u: goto L_088C5FB8;
    case 382u: goto L_088C5FF0;
    case 383u: goto L_088C6000;
    case 384u: goto L_088C601C;
    case 385u: goto L_088C602C;
    case 386u: goto L_088C603C;
    case 387u: goto L_088C6044;
    case 388u: goto L_088C604C;
    case 389u: goto L_088C6064;
    case 390u: goto L_088C6074;
    case 391u: goto L_088C608C;
    case 392u: goto L_088C60A4;
    case 393u: goto L_088C60B4;
    case 394u: goto L_088C60CC;
    case 395u: goto L_088C60E8;
    case 396u: goto L_088C60F8;
    case 397u: goto L_088C611C;
    case 398u: goto L_088C6134;
    case 399u: goto L_088C6140;
    case 400u: goto L_088C6160;
    case 401u: goto L_088C6178;
    case 402u: goto L_088C61AC;
    case 403u: goto L_088C61BC;
    case 404u: goto L_088C61D0;
    case 405u: goto L_088C61E0;
    case 406u: goto L_088C61F0;
    case 407u: goto L_088C620C;
    case 408u: goto L_088C621C;
    case 409u: goto L_088C622C;
    case 410u: goto L_088C6244;
    case 411u: goto L_088C626C;
    case 412u: goto L_088C627C;
    case 413u: goto L_088C62B0;
    case 414u: goto L_088C62E4;
    case 415u: goto L_088C62F4;
    case 416u: goto L_088C6304;
    case 417u: goto L_088C6314;
    case 418u: goto L_088C6324;
    case 419u: goto L_088C632C;
    case 420u: goto L_088C6334;
    case 421u: goto L_088C635C;
    case 422u: goto L_088C6368;
    case 423u: goto L_088C637C;
    case 424u: goto L_088C6380;
    case 425u: goto L_088C6390;
    case 426u: goto L_088C639C;
    case 427u: goto L_088C63A4;
    case 428u: goto L_088C63B0;
    case 429u: goto L_088C63BC;
    case 430u: goto L_088C63C4;
    case 431u: goto L_088C63D4;
    case 432u: goto L_088C63E8;
    case 433u: goto L_088C641C;
    case 434u: goto L_088C6424;
    case 435u: goto L_088C6448;
    case 436u: goto L_088C6464;
    case 437u: goto L_088C646C;
    case 438u: goto L_088C6498;
    case 439u: goto L_088C64B0;
    case 440u: goto L_088C64C4;
    case 441u: goto L_088C64DC;
    case 442u: goto L_088C64F4;
    case 443u: goto L_088C6500;
    case 444u: goto L_088C650C;
    case 445u: goto L_088C6534;
    case 446u: goto L_088C6544;
    case 447u: goto L_088C655C;
    case 448u: goto L_088C659C;
    case 449u: goto L_088C65AC;
    case 450u: goto L_088C65C8;
    case 451u: goto L_088C65D8;
    case 452u: goto L_088C65E8;
    case 453u: goto L_088C6608;
    case 454u: goto L_088C6618;
    case 455u: goto L_088C6620;
    case 456u: goto L_088C6634;
    case 457u: goto L_088C6640;
    case 458u: goto L_088C6654;
    case 459u: goto L_088C6684;
    case 460u: goto L_088C6690;
    case 461u: goto L_088C66A4;
    case 462u: goto L_088C66B8;
    case 463u: goto L_088C66D0;
    case 464u: goto L_088C66E8;
    case 465u: goto L_088C6708;
    case 466u: goto L_088C6718;
    case 467u: goto L_088C6730;
    case 468u: goto L_088C6748;
    case 469u: goto L_088C6750;
    case 470u: goto L_088C6764;
    case 471u: goto L_088C6784;
    case 472u: goto L_088C67A8;
    case 473u: goto L_088C67B4;
    case 474u: goto L_088C67C8;
    case 475u: goto L_088C67E4;
    case 476u: goto L_088C67F8;
    case 477u: goto L_088C6810;
    case 478u: goto L_088C6824;
    case 479u: goto L_088C683C;
    case 480u: goto L_088C6854;
    case 481u: goto L_088C6874;
    case 482u: goto L_088C6884;
    case 483u: goto L_088C688C;
    case 484u: goto L_088C6894;
    case 485u: goto L_088C68A0;
    case 486u: goto L_088C68B4;
    case 487u: goto L_088C68C4;
    case 488u: goto L_088C68E0;
    case 489u: goto L_088C68F4;
    case 490u: goto L_088C6904;
    case 491u: goto L_088C6928;
    case 492u: goto L_088C6940;
    case 493u: goto L_088C6948;
    case 494u: goto L_088C6958;
    case 495u: goto L_088C6960;
    case 496u: goto L_088C6974;
    case 497u: goto L_088C6998;
    case 498u: goto L_088C69B0;
    case 499u: goto L_088C69C4;
    case 500u: goto L_088C69D0;
    case 501u: goto L_088C69EC;
    case 502u: goto L_088C69FC;
    case 503u: goto L_088C6A34;
    case 504u: goto L_088C6A44;
    case 505u: goto L_088C6A60;
    case 506u: goto L_088C6A70;
    case 507u: goto L_088C6A80;
    case 508u: goto L_088C6AA4;
    case 509u: goto L_088C6ABC;
    case 510u: goto L_088C6AD0;
    case 511u: goto L_088C6ADC;
    case 512u: goto L_088C6AF8;
    case 513u: goto L_088C6B08;
    case 514u: goto L_088C6B40;
    case 515u: goto L_088C6B50;
    case 516u: goto L_088C6B6C;
    case 517u: goto L_088C6B7C;
    case 518u: goto L_088C6B8C;
    case 519u: goto L_088C6BA8;
    case 520u: goto L_088C6BB8;
    case 521u: goto L_088C6BDC;
    case 522u: goto L_088C6BF4;
    case 523u: goto L_088C6C08;
    case 524u: goto L_088C6C14;
    case 525u: goto L_088C6C50;
    case 526u: goto L_088C6C60;
    case 527u: goto L_088C6C7C;
    case 528u: goto L_088C6C8C;
    case 529u: goto L_088C6C9C;
    case 530u: goto L_088C6CA4;
    case 531u: goto L_088C6CAC;
    case 532u: goto L_088C6CB4;
    case 533u: goto L_088C6CBC;
    case 534u: goto L_088C6CC4;
    case 535u: goto L_088C6CCC;
    case 536u: goto L_088C6CFC;
    case 537u: goto L_088C6D08;
    case 538u: goto L_088C6D10;
    case 539u: goto L_088C6D48;
    case 540u: goto L_088C6EC0;
    case 541u: goto L_088C6ECC;
    case 542u: goto L_088C6ED4;
    case 543u: goto L_088C6EE4;
    case 544u: goto L_088C6EEC;
    case 545u: goto L_088C6F3C;
    case 546u: goto L_088C6F54;
    case 547u: goto L_088C6F58;
    case 548u: goto L_088C6F64;
    case 549u: goto L_088C6F74;
    case 550u: goto L_088C6F7C;
    case 551u: goto L_088C6F88;
    case 552u: goto L_088C6FDC;
    case 553u: goto L_088C6FF8;
    case 554u: goto L_088C7000;
    case 555u: goto L_088C7040;
    case 556u: goto L_088C7060;
    case 557u: goto L_088C706C;
    case 558u: goto L_088C7078;
    case 559u: goto L_088C7084;
    case 560u: goto L_088C7090;
    case 561u: goto L_088C709C;
    case 562u: goto L_088C70A8;
    case 563u: goto L_088C70B4;
    case 564u: goto L_088C70C0;
    case 565u: goto L_088C70CC;
    case 566u: goto L_088C70D8;
    case 567u: goto L_088C70E4;
    case 568u: goto L_088C70F0;
    case 569u: goto L_088C70FC;
    case 570u: goto L_088C7108;
    case 571u: goto L_088C7114;
    case 572u: goto L_088C7120;
    case 573u: goto L_088C712C;
    case 574u: goto L_088C7138;
    case 575u: goto L_088C7144;
    case 576u: goto L_088C7150;
    case 577u: goto L_088C715C;
    case 578u: goto L_088C7168;
    case 579u: goto L_088C7174;
    case 580u: goto L_088C7180;
    case 581u: goto L_088C718C;
    case 582u: goto L_088C7198;
    case 583u: goto L_088C71A4;
    case 584u: goto L_088C71B0;
    case 585u: goto L_088C71BC;
    case 586u: goto L_088C71C8;
    case 587u: goto L_088C71D4;
    case 588u: goto L_088C71E0;
    case 589u: goto L_088C71EC;
    case 590u: goto L_088C71F8;
    case 591u: goto L_088C7204;
    case 592u: goto L_088C7210;
    case 593u: goto L_088C721C;
    case 594u: goto L_088C7228;
    case 595u: goto L_088C7234;
    case 596u: goto L_088C7240;
    case 597u: goto L_088C724C;
    case 598u: goto L_088C7258;
    case 599u: goto L_088C7264;
    case 600u: goto L_088C7270;
    case 601u: goto L_088C727C;
    case 602u: goto L_088C7284;
    case 603u: goto L_088C72A0;
    case 604u: goto L_088C72A8;
    case 605u: goto L_088C72BC;
    case 606u: goto L_088C72C4;
    case 607u: goto L_088C72D8;
    case 608u: goto L_088C72E8;
    case 609u: goto L_088C72F0;
    case 610u: goto L_088C7304;
    case 611u: goto L_088C730C;
    case 612u: goto L_088C7320;
    case 613u: goto L_088C7328;
    case 614u: goto L_088C7334;
    case 615u: goto L_088C7344;
    case 616u: goto L_088C7354;
    case 617u: goto L_088C7368;
    case 618u: goto L_088C7370;
    case 619u: goto L_088C7384;
    case 620u: goto L_088C738C;
    case 621u: goto L_088C73A0;
    case 622u: goto L_088C73A8;
    case 623u: goto L_088C73C0;
    case 624u: goto L_088C73D0;
    case 625u: goto L_088C73D8;
    case 626u: goto L_088C73E8;
    case 627u: goto L_088C73F0;
    case 628u: goto L_088C7404;
    case 629u: goto L_088C740C;
    case 630u: goto L_088C7420;
    case 631u: goto L_088C7428;
    case 632u: goto L_088C743C;
    case 633u: goto L_088C7444;
    case 634u: goto L_088C7460;
    case 635u: goto L_088C7470;
    case 636u: goto L_088C7480;
    case 637u: goto L_088C7490;
    case 638u: goto L_088C74A0;
    case 639u: goto L_088C74A8;
    case 640u: goto L_088C74BC;
    case 641u: goto L_088C74C4;
    case 642u: goto L_088C74D8;
    case 643u: goto L_088C74E0;
    case 644u: goto L_088C74FC;
    case 645u: goto L_088C7528;
    case 646u: goto L_088C7534;
    case 647u: goto L_088C753C;
    case 648u: goto L_088C7588;
    case 649u: goto L_088C7590;
    case 650u: goto L_088C75A0;
    case 651u: goto L_088C75A8;
    case 652u: goto L_088C75BC;
    case 653u: goto L_088C75C4;
    case 654u: goto L_088C7600;
    case 655u: goto L_088C7608;
    case 656u: goto L_088C7618;
    case 657u: goto L_088C7620;
    case 658u: goto L_088C7634;
    case 659u: goto L_088C763C;
    case 660u: goto L_088C764C;
    case 661u: goto L_088C7654;
    case 662u: goto L_088C7680;
    case 663u: goto L_088C7688;
    case 664u: goto L_088C7698;
    case 665u: goto L_088C76A0;
    case 666u: goto L_088C76B0;
    case 667u: goto L_088C76B8;
    case 668u: goto L_088C76E4;
    case 669u: goto L_088C76F4;
    case 670u: goto L_088C7704;
    case 671u: goto L_088C7714;
    case 672u: goto L_088C771C;
    case 673u: goto L_088C7730;
    case 674u: goto L_088C7738;
    case 675u: goto L_088C7780;
    case 676u: goto L_088C7788;
    case 677u: goto L_088C77A0;
    case 678u: goto L_088C77A8;
    case 679u: goto L_088C77BC;
    case 680u: goto L_088C77C4;
    case 681u: goto L_088C77DC;
    case 682u: goto L_088C77E4;
    case 683u: goto L_088C77FC;
    case 684u: goto L_088C7804;
    case 685u: goto L_088C781C;
    case 686u: goto L_088C7824;
    case 687u: goto L_088C7838;
    case 688u: goto L_088C7840;
    case 689u: goto L_088C7874;
    case 690u: goto L_088C787C;
    case 691u: goto L_088C788C;
    case 692u: goto L_088C7894;
    case 693u: goto L_088C78A8;
    case 694u: goto L_088C78B8;
    case 695u: goto L_088C78CC;
    case 696u: goto L_088C78D4;
    case 697u: goto L_088C78E0;
    case 698u: goto L_088C78E8;
    case 699u: goto L_088C791C;
    case 700u: goto L_088C7958;
    case 701u: goto L_088C7970;
    case 702u: goto L_088C798C;
    case 703u: goto L_088C79A0;
    case 704u: goto L_088C79BC;
    case 705u: goto L_088C79D8;
    case 706u: goto L_088C79F0;
    case 707u: goto L_088C7A0C;
    case 708u: goto L_088C7A14;
    case 709u: goto L_088C7A30;
    case 710u: goto L_088C7A38;
    case 711u: goto L_088C7A50;
    case 712u: goto L_088C7A64;
    case 713u: goto L_088C7A78;
    case 714u: goto L_088C7A90;
    case 715u: goto L_088C7AAC;
    case 716u: goto L_088C7AB4;
    case 717u: goto L_088C7ACC;
    case 718u: goto L_088C7AD0;
    case 719u: goto L_088C7ADC;
    case 720u: goto L_088C7AF4;
    case 721u: goto L_088C7B0C;
    case 722u: goto L_088C7B18;
    case 723u: goto L_088C7B24;
    case 724u: goto L_088C7B2C;
    case 725u: goto L_088C7B38;
    case 726u: goto L_088C7B4C;
    case 727u: goto L_088C7B5C;
    case 728u: goto L_088C7B64;
    case 729u: goto L_088C7B70;
    case 730u: goto L_088C7B84;
    case 731u: goto L_088C7B88;
    case 732u: goto L_088C7B9C;
    case 733u: goto L_088C7BA8;
    case 734u: goto L_088C7BB4;
    case 735u: goto L_088C7BF0;
    case 736u: goto L_088C7C00;
    case 737u: goto L_088C7C10;
    case 738u: goto L_088C7C20;
    case 739u: goto L_088C7C30;
    case 740u: goto L_088C7C40;
    case 741u: goto L_088C7C50;
    case 742u: goto L_088C7C60;
    case 743u: goto L_088C7C70;
    case 744u: goto L_088C7C80;
    case 745u: goto L_088C7C90;
    case 746u: goto L_088C7CA0;
    case 747u: goto L_088C7CB0;
    case 748u: goto L_088C7CC0;
    case 749u: goto L_088C7CCC;
    case 750u: goto L_088C7CD0;
    case 751u: goto L_088C7CE8;
    case 752u: goto L_088C7CEC;
    case 753u: goto L_088C7CF8;
    case 754u: goto L_088C7D0C;
    case 755u: goto L_088C7D18;
    case 756u: goto L_088C7D54;
    case 757u: goto L_088C7D6C;
    case 758u: goto L_088C7D78;
    case 759u: goto L_088C7D84;
    case 760u: goto L_088C7DA4;
    case 761u: goto L_088C7DB8;
    case 762u: goto L_088C7DC4;
    case 763u: goto L_088C7DD4;
    case 764u: goto L_088C7DDC;
    case 765u: goto L_088C7DF8;
    case 766u: goto L_088C7E08;
    case 767u: goto L_088C7E34;
    case 768u: goto L_088C7E3C;
    case 769u: goto L_088C7E4C;
    case 770u: goto L_088C7E58;
    case 771u: goto L_088C7E74;
    case 772u: goto L_088C7E78;
    case 773u: goto L_088C7E8C;
    case 774u: goto L_088C7E94;
    case 775u: goto L_088C7EA8;
    case 776u: goto L_088C7EAC;
    case 777u: goto L_088C7EBC;
    case 778u: goto L_088C7EC4;
    case 779u: goto L_088C7ED4;
    case 780u: goto L_088C7EE4;
    case 781u: goto L_088C7EF0;
    case 782u: goto L_088C7EF8;
    case 783u: goto L_088C7F04;
    case 784u: goto L_088C7F10;
    case 785u: goto L_088C7F34;
    case 786u: goto L_088C7F44;
    case 787u: goto L_088C7F54;
    case 788u: goto L_088C7F60;
    case 789u: goto L_088C7F6C;
    case 790u: goto L_088C7F74;
    case 791u: goto L_088C7F88;
    case 792u: goto L_088C7F94;
    case 793u: goto L_088C7F9C;
    case 794u: goto L_088C7FA0;
    case 795u: goto L_088C7FA8;
    case 796u: goto L_088C7FB4;
    case 797u: goto L_088C7FC0;
    case 798u: goto L_088C7FC8;
    case 799u: goto L_088C7FD4;
    case 800u: goto L_088C7FDC;
    case 801u: goto L_088C7FE8;
    case 802u: goto L_088C7FF0;
    case 803u: goto L_088C7FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088C4004:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(6))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(7))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4950;
      }
      goto L_088C403C;
    }
L_088C403C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x088C4048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C3D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4048u) goto L_088C4048;
    return;
L_088C4048:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(156)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4950;
      }
      goto L_088C4068;
    }
L_088C4068:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(29));
    ctx.set_gpr(31, 0x088C4074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C3D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4074u) goto L_088C4074;
    return;
L_088C4074:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4950;
      }
      goto L_088C40BC;
    }
L_088C40BC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(31, 0x088C40C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C3D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C40C8u) goto L_088C40C8;
    return;
L_088C40C8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4950;
      }
      goto L_088C40F0;
    }
L_088C40F0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(31, 0x088C40FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C3D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C40FCu) goto L_088C40FC;
    return;
L_088C40FC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4950;
      }
      goto L_088C412C;
    }
L_088C412C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(25));
    ctx.set_gpr(31, 0x088C4138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C3D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4138u) goto L_088C4138;
    return;
L_088C4138:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4950;
      }
      goto L_088C4178;
    }
L_088C4178:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(26));
    ctx.set_gpr(31, 0x088C4184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C3D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4184u) goto L_088C4184;
    return;
L_088C4184:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(6))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4950;
      }
      goto L_088C41CC;
    }
L_088C41CC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x088C41D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C3D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C41D8u) goto L_088C41D8;
    return;
L_088C41D8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4950;
      }
      goto L_088C4248;
    }
L_088C4248:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(31, 0x088C4254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C3D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4254u) goto L_088C4254;
    return;
L_088C4254:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4950;
      }
      goto L_088C42CC;
    }
L_088C42CC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x088C42D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C3D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C42D8u) goto L_088C42D8;
    return;
L_088C42D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4950;
      }
      goto L_088C42F0;
    }
L_088C42F0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x088C42FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C3D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C42FCu) goto L_088C42FC;
    return;
L_088C42FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4950;
      }
      goto L_088C4314;
    }
L_088C4314:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x088C4320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C3D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4320u) goto L_088C4320;
    return;
L_088C4320:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(6))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4950;
      }
      goto L_088C4340;
    }
L_088C4340:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x088C434Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C3D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C434Cu) goto L_088C434C;
    return;
L_088C434C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(6))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(7))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4950;
      }
      goto L_088C4374;
    }
L_088C4374:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088C4380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C3D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4380u) goto L_088C4380;
    return;
L_088C4380:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4950;
      }
      goto L_088C43A8;
    }
L_088C43A8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x088C43B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C3D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C43B4u) goto L_088C43B4;
    return;
L_088C43B4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(120)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(128)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4950;
      }
      goto L_088C4444;
    }
L_088C4444:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x088C4450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C3D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4450u) goto L_088C4450;
    return;
L_088C4450:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4950;
      }
      goto L_088C4468;
    }
L_088C4468:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x088C4474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C3D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4474u) goto L_088C4474;
    return;
L_088C4474:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(31, 0x088C4488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4488u) goto L_088C4488;
    return;
L_088C4488:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4950;
      }
      goto L_088C4490;
    }
L_088C4490:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(292)));
    ctx.set_gpr(2, ctx.gpr[2] << 6u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(19));
    ctx.set_gpr(31, 0x088C44A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C3D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C44A4u) goto L_088C44A4;
    return;
L_088C44A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(292)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C44C0;
      }
      goto L_088C44B8;
    }
L_088C44B8:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_088C44C0;
L_088C44C0:
    ctx.set_gpr(3, ctx.gpr[17] & 15u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C44B8;
      }
      goto L_088C44CC;
    }
L_088C44CC:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C44F8;
      }
      goto L_088C44D8;
    }
L_088C44D8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(3, ctx.gpr[16] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(288)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x088C44F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C44F4u) goto L_088C44F4;
    return;
L_088C44F4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_088C44F8;
L_088C44F8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(292)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C44D8;
      }
      goto L_088C4508;
    }
L_088C4508:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(300), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4950;
      }
      goto L_088C4514;
    }
L_088C4514:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(65));
    ctx.set_gpr(31, 0x088C4520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C3D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4520u) goto L_088C4520;
    return;
L_088C4520:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(31, 0x088C4534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4534u) goto L_088C4534;
    return;
L_088C4534:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4950;
      }
      goto L_088C4544;
    }
L_088C4544:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x088C4550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C3D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4550u) goto L_088C4550;
    return;
L_088C4550:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(31, 0x088C4564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4564u) goto L_088C4564;
    return;
L_088C4564:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4950;
      }
      goto L_088C4574;
    }
L_088C4574:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x088C4580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C3D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4580u) goto L_088C4580;
    return;
L_088C4580:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(31, 0x088C4594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4594u) goto L_088C4594;
    return;
L_088C4594:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(31, 0x088C45A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C45A4u) goto L_088C45A4;
    return;
L_088C45A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4950;
      }
      goto L_088C45AC;
    }
L_088C45AC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x088C45B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C3D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C45B8u) goto L_088C45B8;
    return;
L_088C45B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(6))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(7))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(8))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4950;
      }
      goto L_088C45F0;
    }
L_088C45F0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(31, 0x088C45FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C3D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C45FCu) goto L_088C45FC;
    return;
L_088C45FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(140)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4950;
      }
      goto L_088C462C;
    }
L_088C462C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(22));
    ctx.set_gpr(31, 0x088C4638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C3D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4638u) goto L_088C4638;
    return;
L_088C4638:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(140)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(6))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4950;
      }
      goto L_088C4678;
    }
L_088C4678:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x088C4684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C3D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4684u) goto L_088C4684;
    return;
L_088C4684:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4950;
      }
      goto L_088C469C;
    }
L_088C469C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x088C46A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C3D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C46A8u) goto L_088C46A8;
    return;
L_088C46A8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4950;
      }
      goto L_088C46C8;
    }
L_088C46C8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088C46D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C3D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C46D4u) goto L_088C46D4;
    return;
L_088C46D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(140)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(6))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(7))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(8))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4950;
      }
      goto L_088C4714;
    }
L_088C4714:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088C4720u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C3D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4720u) goto L_088C4720;
    return;
L_088C4720:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(140)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(6))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(7))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(8))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4950;
      }
      goto L_088C4768;
    }
L_088C4768:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088C4774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C3D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4774u) goto L_088C4774;
    return;
L_088C4774:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(140)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(16))))));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18))))));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4950;
      }
      goto L_088C47B4;
    }
L_088C47B4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088C47C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C3D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C47C0u) goto L_088C47C0;
    return;
L_088C47C0:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(6))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4950;
      }
      goto L_088C47D8;
    }
L_088C47D8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088C47E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C3D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C47E4u) goto L_088C47E4;
    return;
L_088C47E4:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(6))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(7))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4950;
      }
      goto L_088C4804;
    }
L_088C4804:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088C4810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C3D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4810u) goto L_088C4810;
    return;
L_088C4810:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(6))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(7))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(8))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4950;
      }
      goto L_088C4838;
    }
L_088C4838:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x088C4844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C3D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4844u) goto L_088C4844;
    return;
L_088C4844:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(6))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(7))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(8))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(9))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4950;
      }
      goto L_088C4874;
    }
L_088C4874:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x088C4880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C3D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4880u) goto L_088C4880;
    return;
L_088C4880:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(31, 0x088C4894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4894u) goto L_088C4894;
    return;
L_088C4894:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(6))))));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(67), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4950;
      }
      goto L_088C48B4;
    }
L_088C48B4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088C48C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C3D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C48C0u) goto L_088C48C0;
    return;
L_088C48C0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(140)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4950;
      }
      goto L_088C48E8;
    }
L_088C48E8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x088C48F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C3D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C48F4u) goto L_088C48F4;
    return;
L_088C48F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(140)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4950;
      }
      goto L_088C4914;
    }
L_088C4914:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088C4920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 680u, 0x088C3D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4920u) goto L_088C4920;
    return;
L_088C4920:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(140)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088C4950;
L_088C4950:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
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
L_088C4970:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C4998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 6u, 0x089DC0B4u>(ctx, &aot_mem) && ctx.pc == 0x088C4998u) goto L_088C4998;
    return;
L_088C4998:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x088C49A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 8u, 0x089DC0D8u>(ctx, &aot_mem) && ctx.pc == 0x088C49A8u) goto L_088C49A8;
    return;
L_088C49A8:
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
L_088C49C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(888)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C49ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C49ECu) goto L_088C49EC;
    return;
L_088C49EC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C4A04u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C4A04u) goto L_088C4A04;
    return;
L_088C4A04:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(896)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C4A18u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C4A18u) goto L_088C4A18;
    return;
L_088C4A18:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C4A30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C4A30u) goto L_088C4A30;
    return;
L_088C4A30:
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
L_088C4A48:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4A54:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4A60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088C4A88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 670u, 0x088C3CA8u>(ctx, &aot_mem) && ctx.pc == 0x088C4A88u) goto L_088C4A88;
    return;
L_088C4A88:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C4AACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088C4AACu) goto L_088C4AAC;
    return;
L_088C4AAC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C4ABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088C4ABCu) goto L_088C4ABC;
    return;
L_088C4ABC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088C4AD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C4AE8u);
    // nop
    goto L_088C501C;
L_088C4AE8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4AF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x088C4B14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 2u, 0x089DC038u>(ctx, &aot_mem) && ctx.pc == 0x088C4B14u) goto L_088C4B14;
    return;
L_088C4B14:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4B24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(880)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C4B48u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C4B48u) goto L_088C4B48;
    return;
L_088C4B48:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C4B60u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C4B60u) goto L_088C4B60;
    return;
L_088C4B60:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4B74:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4B80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088C4BB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088C4BB8u) goto L_088C4BB8;
    return;
L_088C4BB8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C4BC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088C4BC8u) goto L_088C4BC8;
    return;
L_088C4BC8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088C4BE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C4BF4u);
    // nop
    goto L_088C501C;
L_088C4BF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4C04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25676));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088C4C20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088C4C20u) goto L_088C4C20;
    return;
L_088C4C20:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4C30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25676)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C4E74;
      }
      goto L_088C4C4C;
    }
L_088C4C4C:
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(19876));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(18));
    goto L_088C4C5C;
L_088C4C5C:
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
          goto L_088C4C5C;
      }
      goto L_088C4C80;
    }
L_088C4C80:
    ctx.set_gpr(31, 0x088C4C88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 223u, 0x0893CE4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4C88u) goto L_088C4C88;
    return;
L_088C4C88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088C4C94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088C4C94u) goto L_088C4C94;
    return;
L_088C4C94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C4CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 321u, 0x088E975Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4CA0u) goto L_088C4CA0;
    return;
L_088C4CA0:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25676));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C4CB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4CB4u) goto L_088C4CB4;
    return;
L_088C4CB4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25676)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4CDC;
      }
      goto L_088C4CCC;
    }
L_088C4CCC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088C4CDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4CDCu) goto L_088C4CDC;
    return;
L_088C4CDC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25676)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C4D04;
      }
      goto L_088C4CF4;
    }
L_088C4CF4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4D14;
      }
      goto L_088C4D04;
    }
L_088C4D04:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088C4D14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4D14u) goto L_088C4D14;
    return;
L_088C4D14:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4DD8;
      }
      goto L_088C4D3C;
    }
L_088C4D3C:
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
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(58)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25676)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4DD4;
      }
      goto L_088C4D84;
    }
L_088C4D84:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    // nop
      if (branch_taken) {
          goto L_088C4DD4;
      }
      goto L_088C4D8C;
    }
L_088C4D8C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4DD4;
      }
      goto L_088C4D98;
    }
L_088C4D98:
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
    goto L_088C4DD4;
L_088C4DD4:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_088C4DD8;
L_088C4DD8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[8]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C4D3C;
      }
      goto L_088C4DE4;
    }
L_088C4DE4:
    ctx.set_gpr(31, 0x088C4DECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088C4DECu) goto L_088C4DEC;
    return;
L_088C4DEC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25676)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4E10;
      }
      goto L_088C4E04;
    }
L_088C4E04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_088C4E10;
L_088C4E10:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088C4E28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 158u, 0x08958B08u>(ctx, &aot_mem) && ctx.pc == 0x088C4E28u) goto L_088C4E28;
    return;
L_088C4E28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4E3C;
      }
      goto L_088C4E34;
    }
L_088C4E34:
    ctx.set_gpr(31, 0x088C4E3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088C4E3Cu) goto L_088C4E3C;
    return;
L_088C4E3C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088C4E50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 189u, 0x08958D00u>(ctx, &aot_mem) && ctx.pc == 0x088C4E50u) goto L_088C4E50;
    return;
L_088C4E50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25832), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4E74;
      }
      goto L_088C4E6C;
    }
L_088C4E6C:
    ctx.set_gpr(31, 0x088C4E74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088C4E74u) goto L_088C4E74;
    return;
L_088C4E74:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4E88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4EF0;
      }
      goto L_088C4EA8;
    }
L_088C4EA8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4ED8;
      }
      goto L_088C4EB4;
    }
L_088C4EB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C4ED8;
      }
      goto L_088C4ED0;
    }
L_088C4ED0:
    ctx.set_gpr(31, 0x088C4ED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088C4ED8u) goto L_088C4ED8;
    return;
L_088C4ED8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088C4EF0;
      }
      goto L_088C4EE4;
    }
L_088C4EE4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C4EF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x088C4EF0u) goto L_088C4EF0;
    return;
L_088C4EF0:
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
L_088C4F0C:
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4F18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088C4F30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 438u, 0x08945F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4F30u) goto L_088C4F30;
    return;
L_088C4F30:
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C4F48u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C4F48u) goto L_088C4F48;
    return;
L_088C4F48:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4F64:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25616)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4F74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088C4F8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 433u, 0x08945EE4u>(ctx, &aot_mem) && ctx.pc == 0x088C4F8Cu) goto L_088C4F8C;
    return;
L_088C4F8C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C4FA0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C4FA0u) goto L_088C4FA0;
    return;
L_088C4FA0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4FBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088C4FD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 511u, 0x088C2D50u>(ctx, &aot_mem) && ctx.pc == 0x088C4FD4u) goto L_088C4FD4;
    return;
L_088C4FD4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C4FE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4FE4u) goto L_088C4FE4;
    return;
L_088C4FE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5008;
      }
      goto L_088C4FEC;
    }
L_088C4FEC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5008;
      }
      goto L_088C4FF8;
    }
L_088C4FF8:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-32206))))));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-32206), static_cast<std::uint16_t>(ctx.gpr[3]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_088C5008;
L_088C5008:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C501C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5028:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(296)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C508C;
      }
      goto L_088C5050;
    }
L_088C5050:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088C5060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 670u, 0x088C3CA8u>(ctx, &aot_mem) && ctx.pc == 0x088C5060u) goto L_088C5060;
    return;
L_088C5060:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088C5070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088C5070u) goto L_088C5070;
    return;
L_088C5070:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(316), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C508Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088C508Cu) goto L_088C508C;
    return;
L_088C508C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088C50A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C50CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C50CCu) goto L_088C50CC;
    return;
L_088C50CC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C50E8;
      }
      goto L_088C50DC;
    }
L_088C50DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_088C50E8;
L_088C50E8:
    ctx.set_gpr(31, 0x088C50F0u);
    // nop
    goto L_088C55F4;
L_088C50F0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088C5104u);
    // nop
    goto L_088C5174;
L_088C5104:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5118;
      }
      goto L_088C5110;
    }
L_088C5110:
    ctx.set_gpr(31, 0x088C5118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088C5118u) goto L_088C5118;
    return;
L_088C5118:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5134;
      }
      goto L_088C5128;
    }
L_088C5128:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_088C5134;
L_088C5134:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5148;
      }
      goto L_088C5140;
    }
L_088C5140:
    ctx.set_gpr(31, 0x088C5148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088C5148u) goto L_088C5148;
    return;
L_088C5148:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C515C;
      }
      goto L_088C5154;
    }
L_088C5154:
    ctx.set_gpr(31, 0x088C515Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088C515Cu) goto L_088C515C;
    return;
L_088C515C:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5174:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C51CC;
      }
      goto L_088C51A8;
    }
L_088C51A8:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C51C4;
      }
      goto L_088C51B8;
    }
L_088C51B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_088C51C4;
L_088C51C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C54C0;
      }
      goto L_088C51CC;
    }
L_088C51CC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C51DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C51DCu) goto L_088C51DC;
    return;
L_088C51DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x088C51F0u);
    // nop
    goto L_088C5528;
L_088C51F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C521C;
      }
      goto L_088C51F8;
    }
L_088C51F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5214;
      }
      goto L_088C5208;
    }
L_088C5208:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_088C5214;
L_088C5214:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C54C0;
      }
      goto L_088C521C;
    }
L_088C521C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C5230u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C5230u) goto L_088C5230;
    return;
L_088C5230:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x088C5248u);
    // nop
    goto L_088C5528;
L_088C5248:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5264;
      }
      goto L_088C5258;
    }
L_088C5258:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_088C5264;
L_088C5264:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088C5324;
      }
      goto L_088C5270;
    }
L_088C5270:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088C527Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x088C527Cu) goto L_088C527C;
    return;
L_088C527C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C5288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 534u, 0x088C2F6Cu>(ctx, &aot_mem) && ctx.pc == 0x088C5288u) goto L_088C5288;
    return;
L_088C5288:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C5298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x088C5298u) goto L_088C5298;
    return;
L_088C5298:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C52B4;
      }
      goto L_088C52A8;
    }
L_088C52A8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C52B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883D588u>(ctx, &aot_mem) && ctx.pc == 0x088C52B4u) goto L_088C52B4;
    return;
L_088C52B4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x088C52C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 81u, 0x088D44E0u>(ctx, &aot_mem) && ctx.pc == 0x088C52C4u) goto L_088C52C4;
    return;
L_088C52C4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x088C52E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 837u, 0x0890FF10u>(ctx, &aot_mem) && ctx.pc == 0x088C52E0u) goto L_088C52E0;
    return;
L_088C52E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x088C5304u);
    // nop
    goto L_088C54E4;
L_088C5304:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x088C531Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 837u, 0x0890FF10u>(ctx, &aot_mem) && ctx.pc == 0x088C531Cu) goto L_088C531C;
    return;
L_088C531C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5344;
      }
      goto L_088C5324;
    }
L_088C5324:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x088C5344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088C5344u) goto L_088C5344;
    return;
L_088C5344:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5404;
      }
      goto L_088C5358;
    }
L_088C5358:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5384;
      }
      goto L_088C5378;
    }
L_088C5378:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_088C5384;
L_088C5384:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088C5394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 801u, 0x08947B00u>(ctx, &aot_mem) && ctx.pc == 0x088C5394u) goto L_088C5394;
    return;
L_088C5394:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C53EC;
      }
      goto L_088C539C;
    }
L_088C539C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C53B8;
      }
      goto L_088C53AC;
    }
L_088C53AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_088C53B8;
L_088C53B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C53CC;
      }
      goto L_088C53C4;
    }
L_088C53C4:
    ctx.set_gpr(31, 0x088C53CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088C53CCu) goto L_088C53CC;
    return;
L_088C53CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C53E0;
      }
      goto L_088C53D8;
    }
L_088C53D8:
    ctx.set_gpr(31, 0x088C53E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088C53E0u) goto L_088C53E0;
    return;
L_088C53E0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C54C0;
      }
      goto L_088C53EC;
    }
L_088C53EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5400;
      }
      goto L_088C53F8;
    }
L_088C53F8:
    ctx.set_gpr(31, 0x088C5400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088C5400u) goto L_088C5400;
    return;
L_088C5400:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_088C5404;
L_088C5404:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5358;
      }
      goto L_088C5410;
    }
L_088C5410:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088C5420u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x088C5420u) goto L_088C5420;
    return;
L_088C5420:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x088C5438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 47u, 0x089483B8u>(ctx, &aot_mem) && ctx.pc == 0x088C5438u) goto L_088C5438;
    return;
L_088C5438:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5454;
      }
      goto L_088C5448;
    }
L_088C5448:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_088C5454;
L_088C5454:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x088C5464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x088C5464u) goto L_088C5464;
    return;
L_088C5464:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5480;
      }
      goto L_088C5474;
    }
L_088C5474:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_088C5480;
L_088C5480:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5494;
      }
      goto L_088C548C;
    }
L_088C548C:
    ctx.set_gpr(31, 0x088C5494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088C5494u) goto L_088C5494;
    return;
L_088C5494:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C54A8;
      }
      goto L_088C54A0;
    }
L_088C54A0:
    ctx.set_gpr(31, 0x088C54A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088C54A8u) goto L_088C54A8;
    return;
L_088C54A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C54BC;
      }
      goto L_088C54B4;
    }
L_088C54B4:
    ctx.set_gpr(31, 0x088C54BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088C54BCu) goto L_088C54BC;
    return;
L_088C54BC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_088C54C0;
L_088C54C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_088C54E4:
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5514;
      }
      goto L_088C54F0;
    }
L_088C54F0:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5510;
      }
      goto L_088C5504;
    }
L_088C5504:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_088C5510;
L_088C5510:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_088C5514;
L_088C5514:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C54F0;
      }
      goto L_088C5520;
    }
L_088C5520:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5528:
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5590;
      }
      goto L_088C553C;
    }
L_088C553C:
    ctx.set_gpr(2, ctx.gpr[9] + ctx.gpr[8]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    ctx.set_gpr(6, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5570;
      }
      goto L_088C5564;
    }
L_088C5564:
    ctx.set_gpr(9, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5590;
      }
      goto L_088C5570;
    }
L_088C5570:
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5588;
      }
      goto L_088C557C;
    }
L_088C557C:
    ctx.set_gpr(8, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5590;
      }
      goto L_088C5588;
    }
L_088C5588:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C55EC;
      }
      goto L_088C5590;
    }
L_088C5590:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C553C;
      }
      goto L_088C559C;
    }
L_088C559C:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C55B0;
      }
      goto L_088C55A4;
    }
L_088C55A4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C55EC;
      }
      goto L_088C55B0;
    }
L_088C55B0:
    ctx.set_gpr(3, ctx.gpr[9] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C55DC;
      }
      goto L_088C55D0;
    }
L_088C55D0:
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C55E8;
      }
      goto L_088C55DC;
    }
L_088C55DC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C55EC;
      }
      goto L_088C55E8;
    }
L_088C55E8:
    ctx.set_gpr(2, ctx.gpr[9] + 0u);
    goto L_088C55EC;
L_088C55EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C55F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25692)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5640;
      }
      goto L_088C560C;
    }
L_088C560C:
    ctx.set_gpr(31, 0x088C5614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x088C5614u) goto L_088C5614;
    return;
L_088C5614:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088C5620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088C5620u) goto L_088C5620;
    return;
L_088C5620:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C562Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 450u, 0x088C2858u>(ctx, &aot_mem) && ctx.pc == 0x088C562Cu) goto L_088C562C;
    return;
L_088C562C:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25692));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C5640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x088C5640u) goto L_088C5640;
    return;
L_088C5640:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25692)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5658:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25692));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088C5674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088C5674u) goto L_088C5674;
    return;
L_088C5674:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5684:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C568C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C56B4;
      }
      goto L_088C56A8;
    }
L_088C56A8:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088C56B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x088C56B4u) goto L_088C56B4;
    return;
L_088C56B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C56C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x088C56D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 355u, 0x08949938u>(ctx, &aot_mem) && ctx.pc == 0x088C56D8u) goto L_088C56D8;
    return;
L_088C56D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C56E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088C5704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 433u, 0x08945EE4u>(ctx, &aot_mem) && ctx.pc == 0x088C5704u) goto L_088C5704;
    return;
L_088C5704:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C572C;
      }
      goto L_088C5714;
    }
L_088C5714:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    // nop
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5714;
      }
      goto L_088C572C;
    }
L_088C572C:
    ctx.set_gpr(31, 0x088C5734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 364u, 0x088B21ECu>(ctx, &aot_mem) && ctx.pc == 0x088C5734u) goto L_088C5734;
    return;
L_088C5734:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088C5740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 418u, 0x088B2698u>(ctx, &aot_mem) && ctx.pc == 0x088C5740u) goto L_088C5740;
    return;
L_088C5740:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088C574Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 16u, 0x088BC138u>(ctx, &aot_mem) && ctx.pc == 0x088C574Cu) goto L_088C574C;
    return;
L_088C574C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088C5758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 657u, 0x088BBCB8u>(ctx, &aot_mem) && ctx.pc == 0x088C5758u) goto L_088C5758;
    return;
L_088C5758:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5784;
      }
      goto L_088C5768;
    }
L_088C5768:
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x088C5780u);
    // nop
    goto L_088C56C4;
L_088C5780:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_088C5784;
L_088C5784:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5768;
      }
      goto L_088C5790;
    }
L_088C5790:
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
L_088C57A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C57C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C57C8u) goto L_088C57C8;
    return;
L_088C57C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088C57D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 118u, 0x089448B4u>(ctx, &aot_mem) && ctx.pc == 0x088C57D8u) goto L_088C57D8;
    return;
L_088C57D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C57E8;
      }
      goto L_088C57E0;
    }
L_088C57E0:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25696), 0u);
    goto L_088C57E8;
L_088C57E8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C57F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 435u, 0x08945EF4u>(ctx, &aot_mem) && ctx.pc == 0x088C57F4u) goto L_088C57F4;
    return;
L_088C57F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5808:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25520)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5818:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C5840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 395u, 0x089DB340u>(ctx, &aot_mem) && ctx.pc == 0x088C5840u) goto L_088C5840;
    return;
L_088C5840:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25696)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5870;
      }
      goto L_088C5850;
    }
L_088C5850:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25696)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C5870u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C5870u) goto L_088C5870;
    return;
L_088C5870:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5884:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(636)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C58B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C58B0u) goto L_088C58B0;
    return;
L_088C58B0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C58C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C58C8u) goto L_088C58C8;
    return;
L_088C58C8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(644)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C58DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C58DCu) goto L_088C58DC;
    return;
L_088C58DC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C58F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C58F4u) goto L_088C58F4;
    return;
L_088C58F4:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25696)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5928;
      }
      goto L_088C5904;
    }
L_088C5904:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20020));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C5920u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C5920u) goto L_088C5920;
    return;
L_088C5920:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25696), ctx.gpr[2]);
    goto L_088C5928;
L_088C5928:
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
L_088C5940:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5950:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(31, 0x088C5964u);
    // nop
    goto L_088C4F0C;
L_088C5964:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5974:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088C598Cu);
    // nop
    goto L_088C4F18;
L_088C598C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(30))))));
    ctx.set_gpr(31, 0x088C599Cu);
    // nop
    goto L_088C4F0C;
L_088C599C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C59B0:
    ctx.set_gpr(3, 17279u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C59E8;
      }
      goto L_088C59D8;
    }
L_088C59D8:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C59FC;
      }
      goto L_088C59E8;
    }
L_088C59E8:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[5] | ctx.gpr[3]);
    goto L_088C59FC;
L_088C59FC:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5A08:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5A14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(296)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C5A74;
      }
      goto L_088C5A3C;
    }
L_088C5A3C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(41));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x088C5A64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088C5A64u) goto L_088C5A64;
    return;
L_088C5A64:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C5A74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088C5A74u) goto L_088C5A74;
    return;
L_088C5A74:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088C5A90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C5AA0u);
    // nop
    goto L_088C501C;
L_088C5AA0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5AB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x088C5AD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 577u, 0x089E3AA4u>(ctx, &aot_mem) && ctx.pc == 0x088C5AD0u) goto L_088C5AD0;
    return;
L_088C5AD0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5AE0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5AE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088C5B10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 670u, 0x088C3CA8u>(ctx, &aot_mem) && ctx.pc == 0x088C5B10u) goto L_088C5B10;
    return;
L_088C5B10:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(55));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(292), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(288), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x088C5B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088C5B38u) goto L_088C5B38;
    return;
L_088C5B38:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C5B48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088C5B48u) goto L_088C5B48;
    return;
L_088C5B48:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088C5B64:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30960)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5B84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x088C5BA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 577u, 0x089E3AA4u>(ctx, &aot_mem) && ctx.pc == 0x088C5BA4u) goto L_088C5BA4;
    return;
L_088C5BA4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5BB4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5BBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088C5BE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 670u, 0x088C3CA8u>(ctx, &aot_mem) && ctx.pc == 0x088C5BE4u) goto L_088C5BE4;
    return;
L_088C5BE4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(55));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(292), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(288), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x088C5C0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088C5C0Cu) goto L_088C5C0C;
    return;
L_088C5C0C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C5C1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088C5C1Cu) goto L_088C5C1C;
    return;
L_088C5C1C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088C5C38:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30960)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5C58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x088C5C74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 387u, 0x089DB27Cu>(ctx, &aot_mem) && ctx.pc == 0x088C5C74u) goto L_088C5C74;
    return;
L_088C5C74:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5C84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(628)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C5CA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C5CA8u) goto L_088C5CA8;
    return;
L_088C5CA8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C5CC0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C5CC0u) goto L_088C5CC0;
    return;
L_088C5CC0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5CD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x088C5D0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088C5D0Cu) goto L_088C5D0C;
    return;
L_088C5D0C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C5D1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088C5D1Cu) goto L_088C5D1C;
    return;
L_088C5D1C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088C5D38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C5D48u);
    // nop
    goto L_088C501C;
L_088C5D48:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5D58:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5D60:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5D68:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5D70:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5D78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x088C5DA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 429u, 0x089DB5F8u>(ctx, &aot_mem) && ctx.pc == 0x088C5DA0u) goto L_088C5DA0;
    return;
L_088C5DA0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x088C5DB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 424u, 0x089DB598u>(ctx, &aot_mem) && ctx.pc == 0x088C5DB0u) goto L_088C5DB0;
    return;
L_088C5DB0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x088C5DC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 432u, 0x089DB628u>(ctx, &aot_mem) && ctx.pc == 0x088C5DC0u) goto L_088C5DC0;
    return;
L_088C5DC0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5DD8;
      }
      goto L_088C5DCC;
    }
L_088C5DCC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C5DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 119u, 0x089C8BD4u>(ctx, &aot_mem) && ctx.pc == 0x088C5DD8u) goto L_088C5DD8;
    return;
L_088C5DD8:
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
L_088C5DF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(760)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C5E20u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C5E20u) goto L_088C5E20;
    return;
L_088C5E20:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(752)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C5E38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C5E38u) goto L_088C5E38;
    return;
L_088C5E38:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x088C5E48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x088C5E48u) goto L_088C5E48;
    return;
L_088C5E48:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(744)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C5E68u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C5E68u) goto L_088C5E68;
    return;
L_088C5E68:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
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
L_088C5E88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088C5EA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 434u, 0x08945EECu>(ctx, &aot_mem) && ctx.pc == 0x088C5EA0u) goto L_088C5EA0;
    return;
L_088C5EA0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088C5EB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x088C5EB0u) goto L_088C5EB0;
    return;
L_088C5EB0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x088C5EC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x088C5EC4u) goto L_088C5EC4;
    return;
L_088C5EC4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5EDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088C5EF4u);
    // nop
    goto L_088C4F18;
L_088C5EF4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088C5F04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x088C5F04u) goto L_088C5F04;
    return;
L_088C5F04:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x088C5F18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x088C5F18u) goto L_088C5F18;
    return;
L_088C5F18:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5F30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x088C5F4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 10u, 0x089DC0FCu>(ctx, &aot_mem) && ctx.pc == 0x088C5F4Cu) goto L_088C5F4C;
    return;
L_088C5F4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5F5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(904)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C5F80u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C5F80u) goto L_088C5F80;
    return;
L_088C5F80:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C5F98u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C5F98u) goto L_088C5F98;
    return;
L_088C5F98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5FAC:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5FB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x088C5FF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088C5FF0u) goto L_088C5FF0;
    return;
L_088C5FF0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C6000u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088C6000u) goto L_088C6000;
    return;
L_088C6000:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088C601C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C602Cu);
    // nop
    goto L_088C501C;
L_088C602C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C603C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6044:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C604C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088C6064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 434u, 0x08945EECu>(ctx, &aot_mem) && ctx.pc == 0x088C6064u) goto L_088C6064;
    return;
L_088C6064:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088C6074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x088C6074u) goto L_088C6074;
    return;
L_088C6074:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C608C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088C60A4u);
    // nop
    goto L_088C4F18;
L_088C60A4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088C60B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x088C60B4u) goto L_088C60B4;
    return;
L_088C60B4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C60CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x088C60E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 381u, 0x089DB1C0u>(ctx, &aot_mem) && ctx.pc == 0x088C60E8u) goto L_088C60E8;
    return;
L_088C60E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C60F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C611Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C611Cu) goto L_088C611C;
    return;
L_088C611C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6134:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6140:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088C6160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x088C6160u) goto L_088C6160;
    return;
L_088C6160:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6178:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(24));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x088C61ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 308u, 0x08A037E4u>(ctx, &aot_mem) && ctx.pc == 0x088C61ACu) goto L_088C61AC;
    return;
L_088C61AC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088C61BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x088C61BCu) goto L_088C61BC;
    return;
L_088C61BC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088C61D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 670u, 0x088C3CA8u>(ctx, &aot_mem) && ctx.pc == 0x088C61D0u) goto L_088C61D0;
    return;
L_088C61D0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x088C61E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088C61E0u) goto L_088C61E0;
    return;
L_088C61E0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C61F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088C61F0u) goto L_088C61F0;
    return;
L_088C61F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088C620C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C621Cu);
    // nop
    goto L_088C501C;
L_088C621C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C622C:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[6]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(ctx.gpr[7]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(ctx.gpr[8]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6244:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(13)));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(14)));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(15)));
    ctx.set_gpr(31, 0x088C626Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 14u, 0x089DC17Cu>(ctx, &aot_mem) && ctx.pc == 0x088C626Cu) goto L_088C626C;
    return;
L_088C626C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C627C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(31));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(30));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(29));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(912)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C62B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C62B0u) goto L_088C62B0;
    return;
L_088C62B0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(30)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C62E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C62F4u);
    // nop
    goto L_088C5028;
L_088C62F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6304:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C6314u);
    // nop
    goto L_088C501C;
L_088C6314:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6324:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C632C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6334:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6368;
      }
      goto L_088C635C;
    }
L_088C635C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6380;
      }
      goto L_088C6368;
    }
L_088C6368:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C637Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C637Cu) goto L_088C637C;
    return;
L_088C637C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_088C6380;
L_088C6380:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088C6448;
      }
      goto L_088C6390;
    }
L_088C6390:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088C6448;
      }
      goto L_088C639C;
    }
L_088C639C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6448;
      }
      goto L_088C63A4;
    }
L_088C63A4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088C6424;
      }
      goto L_088C63B0;
    }
L_088C63B0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088C63C4;
      }
      goto L_088C63BC;
    }
L_088C63BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6448;
      }
      goto L_088C63C4;
    }
L_088C63C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088C63E8;
      }
      goto L_088C63D4;
    }
L_088C63D4:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C63E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C63E8u) goto L_088C63E8;
    return;
L_088C63E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x088C641Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 266u, 0x089C9D38u>(ctx, &aot_mem) && ctx.pc == 0x088C641Cu) goto L_088C641C;
    return;
L_088C641C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6448;
      }
      goto L_088C6424;
    }
L_088C6424:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x088C6448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 279u, 0x089C9EF4u>(ctx, &aot_mem) && ctx.pc == 0x088C6448u) goto L_088C6448;
    return;
L_088C6448:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6464:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C646C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(928)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C6498u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C6498u) goto L_088C6498;
    return;
L_088C6498:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C64B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C64B0u) goto L_088C64B0;
    return;
L_088C64B0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(936)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C64C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C64C4u) goto L_088C64C4;
    return;
L_088C64C4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C64DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C64DCu) goto L_088C64DC;
    return;
L_088C64DC:
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
L_088C64F4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6500:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C650C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x088C6534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 32u, 0x089DC32Cu>(ctx, &aot_mem) && ctx.pc == 0x088C6534u) goto L_088C6534;
    return;
L_088C6534:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C6544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 36u, 0x089DC39Cu>(ctx, &aot_mem) && ctx.pc == 0x088C6544u) goto L_088C6544;
    return;
L_088C6544:
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
L_088C655C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x088C659Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088C659Cu) goto L_088C659C;
    return;
L_088C659C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C65ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088C65ACu) goto L_088C65AC;
    return;
L_088C65AC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088C65C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C65D8u);
    // nop
    goto L_088C501C;
L_088C65D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C65E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C6608u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C6608u) goto L_088C6608;
    return;
L_088C6608:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088C6618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 118u, 0x089448B4u>(ctx, &aot_mem) && ctx.pc == 0x088C6618u) goto L_088C6618;
    return;
L_088C6618:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C6634;
      }
      goto L_088C6620;
    }
L_088C6620:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C6634u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C6634u) goto L_088C6634;
    return;
L_088C6634:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C6640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 435u, 0x08945EF4u>(ctx, &aot_mem) && ctx.pc == 0x088C6640u) goto L_088C6640;
    return;
L_088C6640:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6654:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C6684u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C6684u) goto L_088C6684;
    return;
L_088C6684:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088C6764;
      }
      goto L_088C6690;
    }
L_088C6690:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C66A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C66A4u) goto L_088C66A4;
    return;
L_088C66A4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C66B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C66B8u) goto L_088C66B8;
    return;
L_088C66B8:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C66D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C66D0u) goto L_088C66D0;
    return;
L_088C66D0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C66E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C66E8u) goto L_088C66E8;
    return;
L_088C66E8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(1152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C6708u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C6708u) goto L_088C6708;
    return;
L_088C6708:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C6750;
      }
      goto L_088C6718;
    }
L_088C6718:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C6730u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C6730u) goto L_088C6730;
    return;
L_088C6730:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C6748u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C6748u) goto L_088C6748;
    return;
L_088C6748:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6764;
      }
      goto L_088C6750;
    }
L_088C6750:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C6764u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C6764u) goto L_088C6764;
    return;
L_088C6764:
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
L_088C6784:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C67A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C67A8u) goto L_088C67A8;
    return;
L_088C67A8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088C683C;
      }
      goto L_088C67B4;
    }
L_088C67B4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C67C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C67C8u) goto L_088C67C8;
    return;
L_088C67C8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C67E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C67E4u) goto L_088C67E4;
    return;
L_088C67E4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C67F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C67F8u) goto L_088C67F8;
    return;
L_088C67F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(1160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C6810u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C6810u) goto L_088C6810;
    return;
L_088C6810:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C6824u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C6824u) goto L_088C6824;
    return;
L_088C6824:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C683Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C683Cu) goto L_088C683C;
    return;
L_088C683C:
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
L_088C6854:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C6874u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C6874u) goto L_088C6874;
    return;
L_088C6874:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088C6884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 118u, 0x089448B4u>(ctx, &aot_mem) && ctx.pc == 0x088C6884u) goto L_088C6884;
    return;
L_088C6884:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C6894;
      }
      goto L_088C688C;
    }
L_088C688C:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25716), 0u);
    goto L_088C6894;
L_088C6894:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C68A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 435u, 0x08945EF4u>(ctx, &aot_mem) && ctx.pc == 0x088C68A0u) goto L_088C68A0;
    return;
L_088C68A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C68B4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25300)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C68C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25716)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C68F4;
      }
      goto L_088C68E0;
    }
L_088C68E0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C68F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C68F4u) goto L_088C68F4;
    return;
L_088C68F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6904:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25716)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C6948;
      }
      goto L_088C6928;
    }
L_088C6928:
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20040));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C6940u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C6940u) goto L_088C6940;
    return;
L_088C6940:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25716), ctx.gpr[2]);
    goto L_088C6948;
L_088C6948:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25716)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6960;
      }
      goto L_088C6958;
    }
L_088C6958:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    goto L_088C6960;
L_088C6960:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6974:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(952)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C6998u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C6998u) goto L_088C6998;
    return;
L_088C6998:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C69B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C69B0u) goto L_088C69B0;
    return;
L_088C69B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C69C4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C69D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C69ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 44u, 0x089DC49Cu>(ctx, &aot_mem) && ctx.pc == 0x088C69ECu) goto L_088C69EC;
    return;
L_088C69EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C69FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(13));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x088C6A34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088C6A34u) goto L_088C6A34;
    return;
L_088C6A34:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C6A44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088C6A44u) goto L_088C6A44;
    return;
L_088C6A44:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088C6A60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C6A70u);
    // nop
    goto L_088C501C;
L_088C6A70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6A80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(944)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C6AA4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C6AA4u) goto L_088C6AA4;
    return;
L_088C6AA4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C6ABCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C6ABCu) goto L_088C6ABC;
    return;
L_088C6ABC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6AD0:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6ADC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x088C6AF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 40u, 0x089DC420u>(ctx, &aot_mem) && ctx.pc == 0x088C6AF8u) goto L_088C6AF8;
    return;
L_088C6AF8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6B08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x088C6B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088C6B40u) goto L_088C6B40;
    return;
L_088C6B40:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C6B50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088C6B50u) goto L_088C6B50;
    return;
L_088C6B50:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088C6B6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C6B7Cu);
    // nop
    goto L_088C501C;
L_088C6B7C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6B8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x088C6BA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 46u, 0x089DC50Cu>(ctx, &aot_mem) && ctx.pc == 0x088C6BA8u) goto L_088C6BA8;
    return;
L_088C6BA8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6BB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(960)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C6BDCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C6BDCu) goto L_088C6BDC;
    return;
L_088C6BDC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C6BF4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C6BF4u) goto L_088C6BF4;
    return;
L_088C6BF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6C08:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6C14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(31, 0x088C6C50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088C6C50u) goto L_088C6C50;
    return;
L_088C6C50:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C6C60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 682u, 0x088C3DC0u>(ctx, &aot_mem) && ctx.pc == 0x088C6C60u) goto L_088C6C60;
    return;
L_088C6C60:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_088C6C7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C6C8Cu);
    // nop
    goto L_088C501C;
L_088C6C8C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6C9C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6CA4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6CAC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6CB4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6CBC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6CC4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C6CCC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32204)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C6D10;
      }
      goto L_088C6CFC;
    }
L_088C6CFC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088C6D08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 192u, 0x08958D34u>(ctx, &aot_mem) && ctx.pc == 0x088C6D08u) goto L_088C6D08;
    return;
L_088C6D08:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32204), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_088C6D10;
L_088C6D10:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25728)));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25732)));
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25728), ctx.gpr[6]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25732), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6EEC;
      }
      goto L_088C6D48;
    }
L_088C6D48:
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25728), ctx.gpr[4]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25732), ctx.gpr[3]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 31u));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25720)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25724)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25720), ctx.gpr[4]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25724), ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25736)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25740)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25736), ctx.gpr[4]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25740), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25816)));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25820)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25816), ctx.gpr[5]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25820), ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25888)));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25892)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25888), ctx.gpr[5]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25892), ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26072)));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26076)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(26072), ctx.gpr[5]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(26076), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26144)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26148)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26144), ctx.gpr[4]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26148), ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C6ED4;
      }
      goto L_088C6EC0;
    }
L_088C6EC0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C6ECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 374u, 0x089DE970u>(ctx, &aot_mem) && ctx.pc == 0x088C6ECCu) goto L_088C6ECC;
    return;
L_088C6ECC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6F64;
      }
      goto L_088C6ED4;
    }
L_088C6ED4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C6EE4u);
    // nop
    goto L_088C7000;
L_088C6EE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6F64;
      }
      goto L_088C6EEC;
    }
L_088C6EEC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(16, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25720)));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25724)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25720), ctx.gpr[5]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25724), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6F58;
      }
      goto L_088C6F3C;
    }
L_088C6F3C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C6F54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C6F54u) goto L_088C6F54;
    return;
L_088C6F54:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    goto L_088C6F58;
L_088C6F58:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C6F3C;
      }
      goto L_088C6F64;
    }
L_088C6F64:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C6F7C;
      }
      goto L_088C6F74;
    }
L_088C6F74:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6FDC;
      }
      goto L_088C6F7C;
    }
L_088C6F7C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088C6F88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 192u, 0x08958D34u>(ctx, &aot_mem) && ctx.pc == 0x088C6F88u) goto L_088C6F88;
    return;
L_088C6F88:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[7] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[7] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[6] - ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25744)));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25748)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25744), ctx.gpr[5]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25748), ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32204), static_cast<std::uint8_t>(0u));
    goto L_088C6FDC;
L_088C6FDC:
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
L_088C6FF8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C7000:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78E0;
      }
      goto L_088C7040;
    }
L_088C7040:
    ctx.set_gpr(5, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(30936));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C7060;
    }
L_088C7060:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(164));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C7894;
      }
      goto L_088C706C;
    }
L_088C706C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(163));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C787C;
      }
      goto L_088C7078;
    }
L_088C7078:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(44));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C7840;
      }
      goto L_088C7084;
    }
L_088C7084:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(43));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C7824;
      }
      goto L_088C7090;
    }
L_088C7090:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(42));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C7804;
      }
      goto L_088C709C;
    }
L_088C709C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(41));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C77E4;
      }
      goto L_088C70A8;
    }
L_088C70A8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(40));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C77C4;
      }
      goto L_088C70B4;
    }
L_088C70B4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(39));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C77A8;
      }
      goto L_088C70C0;
    }
L_088C70C0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(38));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C7788;
      }
      goto L_088C70CC;
    }
L_088C70CC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(37));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C7738;
      }
      goto L_088C70D8;
    }
L_088C70D8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(36));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C70E4;
    }
L_088C70E4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(35));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C70F0;
    }
L_088C70F0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(34));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C771C;
      }
      goto L_088C70FC;
    }
L_088C70FC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(33));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C76B8;
      }
      goto L_088C7108;
    }
L_088C7108:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C76A0;
      }
      goto L_088C7114;
    }
L_088C7114:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(31));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C7688;
      }
      goto L_088C7120;
    }
L_088C7120:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(30));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C7654;
      }
      goto L_088C712C;
    }
L_088C712C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(29));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C763C;
      }
      goto L_088C7138;
    }
L_088C7138:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(28));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C7620;
      }
      goto L_088C7144;
    }
L_088C7144:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(27));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C7608;
      }
      goto L_088C7150;
    }
L_088C7150:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(26));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C715C;
    }
L_088C715C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(25));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C75C4;
      }
      goto L_088C7168;
    }
L_088C7168:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C7174;
    }
L_088C7174:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(23));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C7180;
    }
L_088C7180:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(22));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C75A8;
      }
      goto L_088C718C;
    }
L_088C718C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(21));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C7590;
      }
      goto L_088C7198;
    }
L_088C7198:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(20));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C753C;
      }
      goto L_088C71A4;
    }
L_088C71A4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(19));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C71B0;
    }
L_088C71B0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(18));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C74E0;
      }
      goto L_088C71BC;
    }
L_088C71BC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(17));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C74C4;
      }
      goto L_088C71C8;
    }
L_088C71C8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C74A8;
      }
      goto L_088C71D4;
    }
L_088C71D4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(15));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C7444;
      }
      goto L_088C71E0;
    }
L_088C71E0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(14));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C7428;
      }
      goto L_088C71EC;
    }
L_088C71EC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(13));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C740C;
      }
      goto L_088C71F8;
    }
L_088C71F8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C73F0;
      }
      goto L_088C7204;
    }
L_088C7204:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(11));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C73D8;
      }
      goto L_088C7210;
    }
L_088C7210:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C73A8;
      }
      goto L_088C721C;
    }
L_088C721C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(9));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C738C;
      }
      goto L_088C7228;
    }
L_088C7228:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C7370;
      }
      goto L_088C7234;
    }
L_088C7234:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C7354;
      }
      goto L_088C7240;
    }
L_088C7240:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C730C;
      }
      goto L_088C724C;
    }
L_088C724C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C72F0;
      }
      goto L_088C7258;
    }
L_088C7258:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C72C4;
      }
      goto L_088C7264;
    }
L_088C7264:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C72A8;
      }
      goto L_088C7270;
    }
L_088C7270:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C7284;
      }
      goto L_088C727C;
    }
L_088C727C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C7284;
    }
L_088C7284:
    ctx.set_gpr(4, rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(1), ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C72A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C72A0u) goto L_088C72A0;
    return;
L_088C72A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C72A8;
    }
L_088C72A8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(5, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C72BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 2u, 0x089DC038u>(ctx, &aot_mem) && ctx.pc == 0x088C72BCu) goto L_088C72BC;
    return;
L_088C72BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C72C4;
    }
L_088C72C4:
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(5))))));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C72D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 6u, 0x089DC0B4u>(ctx, &aot_mem) && ctx.pc == 0x088C72D8u) goto L_088C72D8;
    return;
L_088C72D8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x088C72E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 8u, 0x089DC0D8u>(ctx, &aot_mem) && ctx.pc == 0x088C72E8u) goto L_088C72E8;
    return;
L_088C72E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C72F0;
    }
L_088C72F0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C7304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 395u, 0x089DB340u>(ctx, &aot_mem) && ctx.pc == 0x088C7304u) goto L_088C7304;
    return;
L_088C7304:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C730C;
    }
L_088C730C:
    ctx.set_gpr(19, rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(1), ctx.gpr[19]));
    ctx.set_gpr(19, rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[19]));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7328;
      }
      goto L_088C7320;
    }
L_088C7320:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_088C7328;
L_088C7328:
    ctx.set_gpr(2, ctx.gpr[6] & 15u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7320;
      }
      goto L_088C7334;
    }
L_088C7334:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088C7344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 577u, 0x089E3AA4u>(ctx, &aot_mem) && ctx.pc == 0x088C7344u) goto L_088C7344;
    return;
L_088C7344:
    ctx.set_gpr(3, ctx.gpr[19] << 6u);
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C7354;
    }
L_088C7354:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(5, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C7368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 387u, 0x089DB27Cu>(ctx, &aot_mem) && ctx.pc == 0x088C7368u) goto L_088C7368;
    return;
L_088C7368:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C7370;
    }
L_088C7370:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(5, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C7384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 10u, 0x089DC0FCu>(ctx, &aot_mem) && ctx.pc == 0x088C7384u) goto L_088C7384;
    return;
L_088C7384:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C738C;
    }
L_088C738C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(1), ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]));
    ctx.set_gpr(31, 0x088C73A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 381u, 0x089DB1C0u>(ctx, &aot_mem) && ctx.pc == 0x088C73A0u) goto L_088C73A0;
    return;
L_088C73A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C73A8;
    }
L_088C73A8:
    ctx.set_gpr(19, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(5, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C73C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 32u, 0x089DC32Cu>(ctx, &aot_mem) && ctx.pc == 0x088C73C0u) goto L_088C73C0;
    return;
L_088C73C0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088C73D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 36u, 0x089DC39Cu>(ctx, &aot_mem) && ctx.pc == 0x088C73D0u) goto L_088C73D0;
    return;
L_088C73D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C73D8;
    }
L_088C73D8:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C73E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 44u, 0x089DC49Cu>(ctx, &aot_mem) && ctx.pc == 0x088C73E8u) goto L_088C73E8;
    return;
L_088C73E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C73F0;
    }
L_088C73F0:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(5, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C7404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 40u, 0x089DC420u>(ctx, &aot_mem) && ctx.pc == 0x088C7404u) goto L_088C7404;
    return;
L_088C7404:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C740C;
    }
L_088C740C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(5, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C7420u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 46u, 0x089DC50Cu>(ctx, &aot_mem) && ctx.pc == 0x088C7420u) goto L_088C7420;
    return;
L_088C7420:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C7428;
    }
L_088C7428:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(5, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C743Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 541u, 0x089DBF6Cu>(ctx, &aot_mem) && ctx.pc == 0x088C743Cu) goto L_088C743C;
    return;
L_088C743C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C7444;
    }
L_088C7444:
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(9)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(29))))));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C7460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 56u, 0x089DC68Cu>(ctx, &aot_mem) && ctx.pc == 0x088C7460u) goto L_088C7460;
    return;
L_088C7460:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x088C7470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 54u, 0x089DC674u>(ctx, &aot_mem) && ctx.pc == 0x088C7470u) goto L_088C7470;
    return;
L_088C7470:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(13));
    ctx.set_gpr(31, 0x088C7480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 58u, 0x089DC6A0u>(ctx, &aot_mem) && ctx.pc == 0x088C7480u) goto L_088C7480;
    return;
L_088C7480:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(31, 0x088C7490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 62u, 0x089DC714u>(ctx, &aot_mem) && ctx.pc == 0x088C7490u) goto L_088C7490;
    return;
L_088C7490:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x088C74A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 64u, 0x089DC738u>(ctx, &aot_mem) && ctx.pc == 0x088C74A0u) goto L_088C74A0;
    return;
L_088C74A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C74A8;
    }
L_088C74A8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(5, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C74BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 50u, 0x089DC5F4u>(ctx, &aot_mem) && ctx.pc == 0x088C74BCu) goto L_088C74BC;
    return;
L_088C74BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C74C4;
    }
L_088C74C4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(5, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C74D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 54u, 0x089D8294u>(ctx, &aot_mem) && ctx.pc == 0x088C74D8u) goto L_088C74D8;
    return;
L_088C74D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C74E0;
    }
L_088C74E0:
    ctx.set_gpr(5, rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(1), ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(5))))));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7528;
      }
      goto L_088C74FC;
    }
L_088C74FC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25864)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25868)));
    ctx.set_gpr(4, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25864), ctx.gpr[4]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25868), ctx.gpr[3]);
    goto L_088C7528;
L_088C7528:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C7534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 87u, 0x089D8650u>(ctx, &aot_mem) && ctx.pc == 0x088C7534u) goto L_088C7534;
    return;
L_088C7534:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C753C;
    }
L_088C753C:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(65)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25888)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25892)));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25888), ctx.gpr[4]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25892), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(17));
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(33));
    ctx.set_gpr(8, ctx.gpr[17] + static_cast<std::uint32_t>(49));
    ctx.set_gpr(31, 0x088C7588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 146u, 0x089D9014u>(ctx, &aot_mem) && ctx.pc == 0x088C7588u) goto L_088C7588;
    return;
L_088C7588:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C7590;
    }
L_088C7590:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C75A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 133u, 0x089D8E14u>(ctx, &aot_mem) && ctx.pc == 0x088C75A0u) goto L_088C75A0;
    return;
L_088C75A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C75A8;
    }
L_088C75A8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(5, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C75BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 145u, 0x089D8FFCu>(ctx, &aot_mem) && ctx.pc == 0x088C75BCu) goto L_088C75BC;
    return;
L_088C75BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C75C4;
    }
L_088C75C4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26072)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26076)));
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26072), ctx.gpr[4]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26076), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088C7600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 243u, 0x089D9FF0u>(ctx, &aot_mem) && ctx.pc == 0x088C7600u) goto L_088C7600;
    return;
L_088C7600:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C7608;
    }
L_088C7608:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C7618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 48u, 0x089DC580u>(ctx, &aot_mem) && ctx.pc == 0x088C7618u) goto L_088C7618;
    return;
L_088C7618:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C7620;
    }
L_088C7620:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088C7634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 243u, 0x089D9FF0u>(ctx, &aot_mem) && ctx.pc == 0x088C7634u) goto L_088C7634;
    return;
L_088C7634:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C763C;
    }
L_088C763C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088C764Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 147u, 0x089D90C0u>(ctx, &aot_mem) && ctx.pc == 0x088C764Cu) goto L_088C764C;
    return;
L_088C764C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C7654;
    }
L_088C7654:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(1), ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]));
    ctx.set_gpr(6, rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(5), ctx.gpr[6]));
    ctx.set_gpr(6, rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[6]));
    ctx.set_gpr(7, rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(9), ctx.gpr[7]));
    ctx.set_gpr(7, rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[7]));
    ctx.set_gpr(8, rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(13), ctx.gpr[8]));
    ctx.set_gpr(8, rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[8]));
    ctx.set_gpr(31, 0x088C7680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 535u, 0x089DBEE0u>(ctx, &aot_mem) && ctx.pc == 0x088C7680u) goto L_088C7680;
    return;
L_088C7680:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C7688;
    }
L_088C7688:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C7698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 539u, 0x089DBF48u>(ctx, &aot_mem) && ctx.pc == 0x088C7698u) goto L_088C7698;
    return;
L_088C7698:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C76A0;
    }
L_088C76A0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C76B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 30u, 0x089DC2BCu>(ctx, &aot_mem) && ctx.pc == 0x088C76B0u) goto L_088C76B0;
    return;
L_088C76B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C76B8;
    }
L_088C76B8:
    ctx.set_gpr(19, rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(5), ctx.gpr[19]));
    ctx.set_gpr(19, rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[19]));
    ctx.set_gpr(20, rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(1), ctx.gpr[20]));
    ctx.set_gpr(20, rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[20]));
    ctx.set_gpr(21, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(13))))));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(14))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(15))))));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(16))))));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C76E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 405u, 0x089DB438u>(ctx, &aot_mem) && ctx.pc == 0x088C76E4u) goto L_088C76E4;
    return;
L_088C76E4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x088C76F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 401u, 0x089DB3F0u>(ctx, &aot_mem) && ctx.pc == 0x088C76F4u) goto L_088C76F4;
    return;
L_088C76F4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x088C7704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 403u, 0x089DB414u>(ctx, &aot_mem) && ctx.pc == 0x088C7704u) goto L_088C7704;
    return;
L_088C7704:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088C7714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 413u, 0x089DB490u>(ctx, &aot_mem) && ctx.pc == 0x088C7714u) goto L_088C7714;
    return;
L_088C7714:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C771C;
    }
L_088C771C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(5, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C7730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 397u, 0x089DB374u>(ctx, &aot_mem) && ctx.pc == 0x088C7730u) goto L_088C7730;
    return;
L_088C7730:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C7738;
    }
L_088C7738:
    ctx.set_gpr(6, rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(5), ctx.gpr[6]));
    ctx.set_gpr(6, rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[6]));
    ctx.set_gpr(5, rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(1), ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26144)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26148)));
    ctx.set_gpr(4, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26144), ctx.gpr[4]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26148), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C7780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 367u, 0x089E242Cu>(ctx, &aot_mem) && ctx.pc == 0x088C7780u) goto L_088C7780;
    return;
L_088C7780:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C7788;
    }
L_088C7788:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C77A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 521u, 0x089E315Cu>(ctx, &aot_mem) && ctx.pc == 0x088C77A0u) goto L_088C77A0;
    return;
L_088C77A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C77A8;
    }
L_088C77A8:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C77BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 518u, 0x089E3130u>(ctx, &aot_mem) && ctx.pc == 0x088C77BCu) goto L_088C77BC;
    return;
L_088C77BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C77C4;
    }
L_088C77C4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(67))))));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088C77DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 243u, 0x089D9FF0u>(ctx, &aot_mem) && ctx.pc == 0x088C77DCu) goto L_088C77DC;
    return;
L_088C77DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C77E4;
    }
L_088C77E4:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(6, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C77FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 534u, 0x089E3260u>(ctx, &aot_mem) && ctx.pc == 0x088C77FCu) goto L_088C77FC;
    return;
L_088C77FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C7804;
    }
L_088C7804:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(6, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C781Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 270u, 0x089E16F4u>(ctx, &aot_mem) && ctx.pc == 0x088C781Cu) goto L_088C781C;
    return;
L_088C781C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C7824;
    }
L_088C7824:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(5, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C7838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 581u, 0x089E3B1Cu>(ctx, &aot_mem) && ctx.pc == 0x088C7838u) goto L_088C7838;
    return;
L_088C7838:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C7840;
    }
L_088C7840:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(1), ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]));
    ctx.set_gpr(6, rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(5), ctx.gpr[6]));
    ctx.set_gpr(6, rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[6]));
    ctx.set_gpr(7, rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(9), ctx.gpr[7]));
    ctx.set_gpr(7, rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[7]));
    ctx.set_gpr(8, rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(13), ctx.gpr[8]));
    ctx.set_gpr(8, rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[8]));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21)));
    ctx.set_gpr(31, 0x088C7874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 515u, 0x089DBB74u>(ctx, &aot_mem) && ctx.pc == 0x088C7874u) goto L_088C7874;
    return;
L_088C7874:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C787C;
    }
L_088C787C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(31, 0x088C788Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 540u, 0x089E3308u>(ctx, &aot_mem) && ctx.pc == 0x088C788Cu) goto L_088C788C;
    return;
L_088C788C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78B8;
      }
      goto L_088C7894;
    }
L_088C7894:
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(31, 0x088C78A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 540u, 0x089E3308u>(ctx, &aot_mem) && ctx.pc == 0x088C78A8u) goto L_088C78A8;
    return;
L_088C78A8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x088C78B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 539u, 0x089E32BCu>(ctx, &aot_mem) && ctx.pc == 0x088C78B8u) goto L_088C78B8;
    return;
L_088C78B8:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78D4;
      }
      goto L_088C78CC;
    }
L_088C78CC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_088C78D4;
L_088C78D4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C78CC;
      }
      goto L_088C78E0;
    }
L_088C78E0:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7040;
      }
      goto L_088C78E8;
    }
L_088C78E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C791C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-528));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 10u, 0x088C805Cu>(ctx, &aot_mem); return;
      }
      goto L_088C7958;
    }
L_088C7958:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(904)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C7970u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7970u) goto L_088C7970;
    return;
L_088C7970:
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(900)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C798Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C798Cu) goto L_088C798C;
    return;
L_088C798C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(960)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C79A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C79A0u) goto L_088C79A0;
    return;
L_088C79A0:
    ctx.set_gpr(22, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(956)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C79BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C79BCu) goto L_088C79BC;
    return;
L_088C79BC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] << 2u);
    ctx.set_gpr(23, ctx.gpr[17] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7AD0;
      }
      goto L_088C79D8;
    }
L_088C79D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C79F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C79F0u) goto L_088C79F0;
    return;
L_088C79F0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25504)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C7A0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7A0Cu) goto L_088C7A0C;
    return;
L_088C7A0C:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C7A38;
      }
      goto L_088C7A14;
    }
L_088C7A14:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25480)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C7A30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7A30u) goto L_088C7A30;
    return;
L_088C7A30:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C7A64;
      }
      goto L_088C7A38;
    }
L_088C7A38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C7A50u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7A50u) goto L_088C7A50;
    return;
L_088C7A50:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7A90;
      }
      goto L_088C7A64;
    }
L_088C7A64:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C7A78u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7A78u) goto L_088C7A78;
    return;
L_088C7A78:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[2]);
    goto L_088C7A90;
L_088C7A90:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23968)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C7AACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7AACu) goto L_088C7AAC;
    return;
L_088C7AAC:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C7ACC;
      }
      goto L_088C7AB4;
    }
L_088C7AB4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C7ACCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7ACCu) goto L_088C7ACC;
    return;
L_088C7ACC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    goto L_088C7AD0;
L_088C7AD0:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[23] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C79D8;
      }
      goto L_088C7ADC;
    }
L_088C7ADC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(956)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C7AF4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7AF4u) goto L_088C7AF4;
    return;
L_088C7AF4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(900)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C7B0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7B0Cu) goto L_088C7B0C;
    return;
L_088C7B0C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 9u, 0x088C8054u>(ctx, &aot_mem); return;
      }
      goto L_088C7B18;
    }
L_088C7B18:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 9u, 0x088C8054u>(ctx, &aot_mem); return;
      }
      goto L_088C7B24;
    }
L_088C7B24:
    ctx.set_gpr(31, 0x088C7B2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 227u, 0x0893CE8Cu>(ctx, &aot_mem) && ctx.pc == 0x088C7B2Cu) goto L_088C7B2C;
    return;
L_088C7B2C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088C7B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088C7B38u) goto L_088C7B38;
    return;
L_088C7B38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C7B4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 413u, 0x08929D48u>(ctx, &aot_mem) && ctx.pc == 0x088C7B4Cu) goto L_088C7B4C;
    return;
L_088C7B4C:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7B88;
      }
      goto L_088C7B5C;
    }
L_088C7B5C:
    ctx.set_gpr(31, 0x088C7B64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 227u, 0x0893CE8Cu>(ctx, &aot_mem) && ctx.pc == 0x088C7B64u) goto L_088C7B64;
    return;
L_088C7B64:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088C7B70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088C7B70u) goto L_088C7B70;
    return;
L_088C7B70:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C7B84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 413u, 0x08929D48u>(ctx, &aot_mem) && ctx.pc == 0x088C7B84u) goto L_088C7B84;
    return;
L_088C7B84:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    goto L_088C7B88;
L_088C7B88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, ctx.gpr[17] + ctx.gpr[16]);
    ctx.set_gpr(31, 0x088C7B9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x088C7B9Cu) goto L_088C7B9C;
    return;
L_088C7B9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088C7BA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088C7BA8u) goto L_088C7BA8;
    return;
L_088C7BA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C7BB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 557u, 0x088C3150u>(ctx, &aot_mem) && ctx.pc == 0x088C7BB4u) goto L_088C7BB4;
    return;
L_088C7BB4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(21, ctx.gpr[29] + static_cast<std::uint32_t>(420));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x088C7BF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 557u, 0x088C3150u>(ctx, &aot_mem) && ctx.pc == 0x088C7BF0u) goto L_088C7BF0;
    return;
L_088C7BF0:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C7C00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x088C7C00u) goto L_088C7C00;
    return;
L_088C7C00:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(404), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x088C7C10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 557u, 0x088C3150u>(ctx, &aot_mem) && ctx.pc == 0x088C7C10u) goto L_088C7C10;
    return;
L_088C7C10:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C7C20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x088C7C20u) goto L_088C7C20;
    return;
L_088C7C20:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(400), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x088C7C30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 557u, 0x088C3150u>(ctx, &aot_mem) && ctx.pc == 0x088C7C30u) goto L_088C7C30;
    return;
L_088C7C30:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C7C40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x088C7C40u) goto L_088C7C40;
    return;
L_088C7C40:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(396), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x088C7C50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 557u, 0x088C3150u>(ctx, &aot_mem) && ctx.pc == 0x088C7C50u) goto L_088C7C50;
    return;
L_088C7C50:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C7C60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x088C7C60u) goto L_088C7C60;
    return;
L_088C7C60:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(392), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x088C7C70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 557u, 0x088C3150u>(ctx, &aot_mem) && ctx.pc == 0x088C7C70u) goto L_088C7C70;
    return;
L_088C7C70:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C7C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x088C7C80u) goto L_088C7C80;
    return;
L_088C7C80:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(388), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x088C7C90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 557u, 0x088C3150u>(ctx, &aot_mem) && ctx.pc == 0x088C7C90u) goto L_088C7C90;
    return;
L_088C7C90:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C7CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x088C7CA0u) goto L_088C7CA0;
    return;
L_088C7CA0:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(384), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x088C7CB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 557u, 0x088C3150u>(ctx, &aot_mem) && ctx.pc == 0x088C7CB0u) goto L_088C7CB0;
    return;
L_088C7CB0:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C7CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x088C7CC0u) goto L_088C7CC0;
    return;
L_088C7CC0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x088C7CCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 11u, 0x088C808Cu>(ctx, &aot_mem) && ctx.pc == 0x088C7CCCu) goto L_088C7CCC;
    return;
L_088C7CCC:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    goto L_088C7CD0;
L_088C7CD0:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    // nop
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7CD0;
      }
      goto L_088C7CE8;
    }
L_088C7CE8:
    ctx.set_gpr(21, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    goto L_088C7CEC;
L_088C7CEC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x088C7CF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x088C7CF8u) goto L_088C7CF8;
    return;
L_088C7CF8:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(344));
    ctx.set_gpr(2, ctx.gpr[21] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7CEC;
      }
      goto L_088C7D0C;
    }
L_088C7D0C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x088C7D18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 662u, 0x088C3AE0u>(ctx, &aot_mem) && ctx.pc == 0x088C7D18u) goto L_088C7D18;
    return;
L_088C7D18:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), ctx.gpr[19]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(420));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[20] + static_cast<std::uint32_t>(20));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(524));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7DB8;
      }
      goto L_088C7D54;
    }
L_088C7D54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C7D6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7D6Cu) goto L_088C7D6C;
    return;
L_088C7D6C:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7DC4;
      }
      goto L_088C7D78;
    }
L_088C7D78:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7DA4;
      }
      goto L_088C7D84;
    }
L_088C7D84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.set_gpr(31, 0x088C7DA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 837u, 0x0890FF10u>(ctx, &aot_mem) && ctx.pc == 0x088C7DA4u) goto L_088C7DA4;
    return;
L_088C7DA4:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(372), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    goto L_088C7DB8;
L_088C7DB8:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7D54;
      }
      goto L_088C7DC4;
    }
L_088C7DC4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088C7DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 678u, 0x088C3D30u>(ctx, &aot_mem) && ctx.pc == 0x088C7DD4u) goto L_088C7DD4;
    return;
L_088C7DD4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7E94;
      }
      goto L_088C7DDC;
    }
L_088C7DDC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x088C7DF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 415u, 0x08929D80u>(ctx, &aot_mem) && ctx.pc == 0x088C7DF8u) goto L_088C7DF8;
    return;
L_088C7DF8:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7E78;
      }
      goto L_088C7E08;
    }
L_088C7E08:
    ctx.set_gpr(17, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), ctx.gpr[2]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(412));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088C7E34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x088C7E34u) goto L_088C7E34;
    return;
L_088C7E34:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_088C7E4C;
      }
      goto L_088C7E3C;
    }
L_088C7E3C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C7E4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x088C7E4Cu) goto L_088C7E4C;
    return;
L_088C7E4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7E74;
      }
      goto L_088C7E58;
    }
L_088C7E58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088C7E74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 338u, 0x089497CCu>(ctx, &aot_mem) && ctx.pc == 0x088C7E74u) goto L_088C7E74;
    return;
L_088C7E74:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_088C7E78;
L_088C7E78:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7E08;
      }
      goto L_088C7E8C;
    }
L_088C7E8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7EAC;
      }
      goto L_088C7E94;
    }
L_088C7E94:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C7EA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7EA8u) goto L_088C7EA8;
    return;
L_088C7EA8:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), 0u);
    goto L_088C7EAC;
L_088C7EAC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(520));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088C7EBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088C7EBCu) goto L_088C7EBC;
    return;
L_088C7EBC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7FA8;
      }
      goto L_088C7EC4;
    }
L_088C7EC4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C7FA8;
      }
      goto L_088C7ED4;
    }
L_088C7ED4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C7EF8;
      }
      goto L_088C7EE4;
    }
L_088C7EE4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088C7EF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 280u, 0x089DDEA4u>(ctx, &aot_mem) && ctx.pc == 0x088C7EF0u) goto L_088C7EF0;
    return;
L_088C7EF0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    goto L_088C7EF8;
L_088C7EF8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088C7F04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 267u, 0x089DDD30u>(ctx, &aot_mem) && ctx.pc == 0x088C7F04u) goto L_088C7F04;
    return;
L_088C7F04:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_088C7FA8;
      }
      goto L_088C7F10;
    }
L_088C7F10:
    ctx.set_gpr(17, ctx.gpr[19] + static_cast<std::uint32_t>(856));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(856)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(856), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(1188)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088C7F34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7F34u) goto L_088C7F34;
    return;
L_088C7F34:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C7F44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 292u, 0x089DDFECu>(ctx, &aot_mem) && ctx.pc == 0x088C7F44u) goto L_088C7F44;
    return;
L_088C7F44:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088C7F54u);
    // nop
    goto L_088C7000;
L_088C7F54:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088C7F60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 317u, 0x089DE1DCu>(ctx, &aot_mem) && ctx.pc == 0x088C7F60u) goto L_088C7F60;
    return;
L_088C7F60:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7F74;
      }
      goto L_088C7F6C;
    }
L_088C7F6C:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    goto L_088C7F74;
L_088C7F74:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C7FA8;
      }
      goto L_088C7F88;
    }
L_088C7F88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7FA0;
      }
      goto L_088C7F94;
    }
L_088C7F94:
    ctx.set_gpr(31, 0x088C7F9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x088C7F9Cu) goto L_088C7F9C;
    return;
L_088C7F9C:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), 0u);
    goto L_088C7FA0;
L_088C7FA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), 0u);
    goto L_088C7FA8;
L_088C7FA8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(420));
    ctx.set_gpr(31, 0x088C7FB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 11u, 0x088C808Cu>(ctx, &aot_mem) && ctx.pc == 0x088C7FB4u) goto L_088C7FB4;
    return;
L_088C7FB4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7FC8;
      }
      goto L_088C7FC0;
    }
L_088C7FC0:
    ctx.set_gpr(31, 0x088C7FC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088C7FC8u) goto L_088C7FC8;
    return;
L_088C7FC8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7FDC;
      }
      goto L_088C7FD4;
    }
L_088C7FD4:
    ctx.set_gpr(31, 0x088C7FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088C7FDCu) goto L_088C7FDC;
    return;
L_088C7FDC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7FF0;
      }
      goto L_088C7FE8;
    }
L_088C7FE8:
    ctx.set_gpr(31, 0x088C7FF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088C7FF0u) goto L_088C7FF0;
    return;
L_088C7FF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 1u, 0x088C8004u>(ctx, &aot_mem); return;
      }
      goto L_088C7FFC;
    }
L_088C7FFC:
    ctx.set_gpr(31, 0x088C8004u);
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0048(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0048_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_48(Runtime &runtime) {
    runtime.register_generated_unit(48u, 0x088C4000u, 16384u, &recomp_unit_0048, &recomp_unit_0048_entry);
    runtime.register_function(0x088C4004u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C403Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4048u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4068u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4074u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C40BCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C40C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C40F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C40FCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C412Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4138u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4178u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4184u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C41CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C41D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4248u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4254u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C42CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C42D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C42F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C42FCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4314u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4320u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4340u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C434Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4374u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4380u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C43A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C43B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4444u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4450u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4468u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4474u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4488u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4490u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C44A4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C44B8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C44C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C44CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C44D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C44F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C44F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4508u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4514u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4520u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4534u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4544u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4550u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4564u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4574u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4580u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4594u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C45A4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C45ACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C45B8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C45F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C45FCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C462Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4638u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4678u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4684u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C469Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C46A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C46C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C46D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4714u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4720u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4768u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4774u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C47B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C47C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C47D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C47E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4804u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4810u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4838u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4844u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4874u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4880u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4894u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C48B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C48C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C48E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C48F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4914u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4920u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4950u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4970u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4998u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C49A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C49C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C49ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A04u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A18u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A30u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A48u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A54u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A60u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A88u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4AACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4ABCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4AD8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4AE8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4AF8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B14u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B24u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B48u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B60u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B74u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B80u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4BB8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4BC8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4BE4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4BF4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C04u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C20u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C30u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C4Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C5Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C80u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C88u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C94u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4CA0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4CB4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4CCCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4CDCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4CF4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4D04u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4D14u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4D3Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4D84u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4D8Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4D98u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4DD4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4DD8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4DE4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4DECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E04u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E10u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E28u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E34u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E3Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E50u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E6Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E74u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E88u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4EA8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4EB4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4ED0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4ED8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4EE4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4EF0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F0Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F18u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F30u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F48u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F64u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F74u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F8Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4FA0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4FBCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4FD4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4FE4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4FECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4FF8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5008u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C501Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5028u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5050u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5060u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5070u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C508Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C50A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C50CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C50DCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C50E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C50F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5104u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5110u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5118u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5128u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5134u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5140u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5148u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5154u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C515Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5174u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C51A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C51B8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C51C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C51CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C51DCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C51F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C51F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5208u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5214u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C521Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5230u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5248u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5258u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5264u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5270u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C527Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5288u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5298u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C52A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C52B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C52C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C52E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5304u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C531Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5324u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5344u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5358u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5378u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5384u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5394u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C539Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C53ACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C53B8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C53C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C53CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C53D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C53E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C53ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C53F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5400u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5404u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5410u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5420u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5438u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5448u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5454u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5464u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5474u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5480u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C548Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5494u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C54A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C54A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C54B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C54BCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C54C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C54E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C54F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5504u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5510u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5514u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5520u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5528u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C553Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5564u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5570u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C557Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5588u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5590u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C559Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C55A4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C55B0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C55D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C55DCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C55E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C55ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C55F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C560Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5614u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5620u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C562Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5640u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5658u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5674u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5684u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C568Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C56A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C56B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C56C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C56D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C56E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5704u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5714u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C572Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5734u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5740u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C574Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5758u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5768u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5780u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5784u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5790u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C57A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C57C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C57D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C57E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C57E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C57F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5808u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5818u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5840u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5850u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5870u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5884u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C58B0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C58C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C58DCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C58F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5904u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5920u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5928u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5940u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5950u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5964u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5974u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C598Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C599Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C59B0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C59D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C59E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C59FCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5A08u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5A14u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5A3Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5A64u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5A74u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5A90u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5AA0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5AB0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5AD0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5AE0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5AE8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5B10u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5B38u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5B48u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5B64u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5B84u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5BA4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5BB4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5BBCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5BE4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C0Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C1Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C38u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C58u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C74u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C84u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5CA8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5CC0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5CD4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5D0Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5D1Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5D38u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5D48u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5D58u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5D60u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5D68u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5D70u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5D78u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5DA0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5DB0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5DC0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5DCCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5DD8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5DF0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E20u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E38u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E48u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E68u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E88u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5EA0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5EB0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5EC4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5EDCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5EF4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F04u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F18u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F30u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F4Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F5Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F80u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F98u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5FACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5FB8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5FF0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6000u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C601Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C602Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C603Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6044u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C604Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6064u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6074u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C608Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C60A4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C60B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C60CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C60E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C60F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C611Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6134u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6140u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6160u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6178u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C61ACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C61BCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C61D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C61E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C61F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C620Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C621Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C622Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6244u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C626Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C627Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C62B0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C62E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C62F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6304u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6314u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6324u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C632Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6334u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C635Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6368u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C637Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6380u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6390u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C639Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C63A4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C63B0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C63BCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C63C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C63D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C63E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C641Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6424u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6448u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6464u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C646Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6498u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C64B0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C64C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C64DCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C64F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6500u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C650Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6534u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6544u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C655Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C659Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C65ACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C65C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C65D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C65E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6608u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6618u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6620u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6634u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6640u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6654u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6684u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6690u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C66A4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C66B8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C66D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C66E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6708u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6718u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6730u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6748u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6750u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6764u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6784u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C67A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C67B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C67C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C67E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C67F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6810u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6824u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C683Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6854u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6874u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6884u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C688Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6894u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C68A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C68B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C68C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C68E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C68F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6904u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6928u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6940u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6948u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6958u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6960u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6974u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6998u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C69B0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C69C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C69D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C69ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C69FCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A34u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A44u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A60u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A70u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A80u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6AA4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6ABCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6AD0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6ADCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6AF8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B08u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B40u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B50u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B6Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B7Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B8Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6BA8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6BB8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6BDCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6BF4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C08u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C14u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C50u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C60u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C7Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C8Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C9Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6CA4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6CACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6CB4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6CBCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6CC4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6CCCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6CFCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6D08u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6D10u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6D48u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6EC0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6ECCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6ED4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6EE4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6EECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6F3Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6F54u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6F58u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6F64u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6F74u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6F7Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6F88u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6FDCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6FF8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7000u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7040u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7060u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C706Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7078u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7084u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7090u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C709Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C70A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C70B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C70C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C70CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C70D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C70E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C70F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C70FCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7108u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7114u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7120u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C712Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7138u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7144u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7150u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C715Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7168u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7174u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7180u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C718Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7198u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C71A4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C71B0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C71BCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C71C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C71D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C71E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C71ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C71F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7204u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7210u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C721Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7228u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7234u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7240u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C724Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7258u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7264u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7270u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C727Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7284u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C72A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C72A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C72BCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C72C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C72D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C72E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C72F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7304u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C730Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7320u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7328u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7334u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7344u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7354u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7368u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7370u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7384u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C738Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C73A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C73A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C73C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C73D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C73D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C73E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C73F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7404u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C740Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7420u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7428u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C743Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7444u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7460u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7470u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7480u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7490u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C74A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C74A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C74BCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C74C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C74D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C74E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C74FCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7528u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7534u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C753Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7588u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7590u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C75A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C75A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C75BCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C75C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7600u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7608u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7618u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7620u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7634u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C763Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C764Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7654u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7680u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7688u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7698u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C76A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C76B0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C76B8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C76E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C76F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7704u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7714u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C771Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7730u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7738u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7780u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7788u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C77A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C77A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C77BCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C77C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C77DCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C77E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C77FCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7804u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C781Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7824u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7838u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7840u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7874u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C787Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C788Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7894u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C78A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C78B8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C78CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C78D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C78E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C78E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C791Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7958u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7970u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C798Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C79A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C79BCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C79D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C79F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7A0Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7A14u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7A30u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7A38u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7A50u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7A64u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7A78u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7A90u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7AACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7AB4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7ACCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7AD0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7ADCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7AF4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B0Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B18u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B24u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B2Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B38u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B4Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B5Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B64u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B70u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B84u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B88u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B9Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7BA8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7BB4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7BF0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C00u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C10u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C20u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C30u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C40u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C50u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C60u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C70u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C80u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C90u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7CA0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7CB0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7CC0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7CCCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7CD0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7CE8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7CECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7CF8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D0Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D18u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D54u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D6Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D78u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D84u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7DA4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7DB8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7DC4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7DD4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7DDCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7DF8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E08u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E34u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E3Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E4Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E58u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E74u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E78u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E8Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E94u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7EA8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7EACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7EBCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7EC4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7ED4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7EE4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7EF0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7EF8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7F04u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7F10u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7F34u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7F44u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7F54u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7F60u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7F6Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7F74u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7F88u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7F94u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7F9Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7FA0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7FA8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7FB4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7FC0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7FC8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7FD4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7FDCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7FE8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7FF0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7FFCu, &recomp_unit_0048, "recomp_unit_0048");
}
} // namespace psprecomp
