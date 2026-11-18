#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0141[4094] = {
    1, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 10, 0, 0, 11, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 14, 15, 0, 0,
    16, 0, 0, 17, 0, 18, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24,
    25, 0, 0, 26, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0,
    32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 36, 37, 0, 0, 38, 0, 39, 0, 0, 0, 40, 0, 0,
    0, 41, 0, 0, 42, 43, 0, 0, 44, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 48, 0, 0, 49, 0, 0,
    50, 0, 51, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 59, 0, 0, 60, 0, 61, 0, 0, 62, 63,
    0, 0, 64, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 67, 68, 0, 69, 0, 70, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0,
    74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 79, 0, 80, 0, 0,
    0, 81, 0, 0, 0, 0, 82, 83, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 86, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0,
    0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0,
    0, 92, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0,
    0, 109, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 121, 0, 122, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0,
    0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0,
    0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    145, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0,
    150, 0, 0, 0, 0, 151, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 156, 0,
    157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0,
    0, 0, 0, 162, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 166, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 169, 0, 0, 170,
    0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0,
    0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 179, 0, 0, 180, 0, 0, 0, 181, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184,
    0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 188, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 193, 0,
    194, 0, 195, 0, 0, 0, 196, 197, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0,
    0, 203, 0, 0, 0, 0, 0, 0, 204, 205, 0, 206, 0, 0, 0, 207, 0, 208, 0, 0, 0, 209, 210, 0, 211, 212, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0,
    216, 0, 217, 0, 218, 0, 219, 0, 220, 0, 221, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0,
    0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 234, 0, 235, 0, 0, 0,
    0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0,
    0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 244, 245, 0, 0, 246, 0, 247, 0, 0, 0,
    248, 0, 0, 0, 249, 0, 0, 250, 251, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0,
    0, 0, 0, 0, 256, 0, 0, 257, 0, 258, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0,
    0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0,
    280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 283, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0,
    290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0,
    294, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    304, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 308, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0,
    314, 0, 0, 0, 0, 0, 0, 315, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0,
    0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 326, 0, 0, 0,
    0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 334,
    0, 335, 0, 0, 336, 0, 0, 337, 0, 0, 338, 0, 0, 0, 339, 0, 0, 340, 0, 341, 342, 0, 0, 343, 344, 0, 0, 0, 0, 0, 0, 345,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 347, 348, 0, 0, 349, 0, 0, 0, 350,
    0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 353, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0,
    0, 0, 0, 0, 359, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 363, 0, 0, 0, 364, 0, 0, 365, 0,
    366, 367, 0, 0, 368, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0,
    0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0,
    0, 0, 0, 0, 0, 0, 378, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 384, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 388, 389, 0, 390, 391, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0,
    399, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0,
    0, 404, 0, 0, 405, 0, 406, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409,
    0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0,
    0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 418, 0, 419, 420, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 423, 0, 0, 0, 0, 0, 424, 0, 425, 0, 0,
    0, 426, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0,
    0, 0, 433, 0, 0, 434, 0, 0, 435, 436, 0, 0, 0, 0, 0, 0, 0, 437, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439,
    0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0,
    0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 445, 0, 0, 0, 0, 446, 447, 0, 0, 448, 0, 0, 0,
    0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 452, 0,
    0, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 458,
    0, 459, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0,
    0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 465, 0, 0, 0, 0, 466, 467, 0, 0, 0, 0, 0, 468,
    0, 0, 469, 0, 0, 470, 0, 0, 0, 0, 471, 0, 472, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 475, 0, 0, 0,
    0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 0,
    480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 484, 0, 485, 486, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 489, 0, 490, 0, 0, 491, 0, 0, 492, 0, 0, 0,
    0, 493, 0, 494, 0, 495, 0, 0, 0, 496, 0, 0, 0, 497, 0, 0, 0, 0, 0, 498, 0, 499, 0, 500, 0, 0, 501, 0, 502, 0, 0, 0,
    503, 504, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0,
    507, 0, 0, 0, 508, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 512, 0, 0,
    0, 0, 0, 513, 0, 0, 0, 0, 514, 0, 0, 515, 0, 0, 516, 0, 0, 517, 0, 518, 0, 0, 519, 0, 0, 520, 0, 0, 521, 0, 0, 0,
    522, 0, 523, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 526, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 528, 0, 0, 529, 0, 0, 530, 531, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0,
    0, 535, 0, 0, 0, 0, 536, 537, 0, 0, 538, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 543, 0, 0, 544, 0, 0, 0, 0, 545, 0, 0, 546, 0, 0,
    0, 547, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 550, 0, 0, 551, 0,
    0, 0, 552, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 554, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 556, 0, 557, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 558, 0, 0, 0, 559, 0, 0, 560, 561, 0, 0, 562, 0, 563, 0, 0, 0, 564, 0, 0, 0, 565, 0, 0, 566, 567, 0, 0,
    568, 0, 569, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 573, 0, 574, 0, 0,
    0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 577, 0, 0, 578, 0, 0, 579, 0, 580, 581, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 584, 0, 0, 0, 585, 0, 0, 586, 0, 0, 587, 0, 0, 0, 0, 0, 588, 0,
    0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 590, 0, 591, 0, 0, 0, 592, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 594, 0, 0, 0,
    0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 597, 0, 598, 599, 0, 0, 600, 0, 0, 0, 601, 0, 0,
    0, 0, 602, 0, 0, 603, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 605, 0, 606, 607, 0, 0, 608, 0, 0, 0, 609, 0, 0, 0, 0,
    610, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 613, 0, 614, 615, 0, 0, 616, 0, 0, 0, 617, 0, 0, 0, 0,
    618, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 622, 0, 0, 0, 0, 623, 0,
    0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 625, 0, 626, 0, 0, 0, 0, 0, 627, 0, 628, 0, 0, 0, 0, 629, 0, 630, 0, 0, 0,
    0, 0, 631, 0, 632, 0, 0, 0, 0, 633, 0, 634, 0, 0, 0, 0, 0, 635, 0, 636, 0, 0, 0, 0, 637, 0, 638, 0, 0, 0, 0, 0,
    639, 0, 640, 0, 0, 0, 0, 641, 0, 642, 0, 0, 0, 0, 0, 643, 0, 644, 0, 0, 0, 0, 645, 0, 646, 0, 0, 0, 0, 0, 647, 0,
    648, 0, 0, 0, 0, 649, 0, 650, 0, 0, 0, 0, 0, 651, 0, 652, 0, 0, 0, 0, 653, 0, 654, 0, 0, 0, 0, 0, 655, 0, 656, 0,
    0, 0, 0, 657, 0, 658, 0, 0, 0, 0, 0, 659, 0, 660, 0, 0, 0, 0, 661, 0, 662, 0, 0, 0, 0, 0, 663, 0, 664, 0, 0, 0,
    0, 665, 0, 666, 0, 0, 0, 0, 0, 667, 0, 668, 0, 0, 0, 0, 669, 0, 670, 0, 0, 0, 0, 0, 671, 0, 672, 0, 0, 0, 0, 673,
    0, 674, 0, 0, 0, 0, 0, 675, 0, 676, 0, 0, 0, 0, 677, 0, 678, 0, 0, 0, 0, 0, 679, 0, 680, 0, 0, 0, 0, 681, 0, 682,
    0, 0, 0, 0, 0, 683, 0, 684, 0, 0, 0, 0, 685, 0, 686, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 690, 0, 0, 0, 691, 0, 0, 0, 692, 0, 0, 0, 0, 0, 693, 0, 0, 694, 0, 0,
    695, 0, 0, 0, 696, 0, 0, 697, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 700, 0, 0, 0, 0, 0, 701,
    0, 0, 0, 702, 0, 0, 0, 703, 0, 0, 0, 704, 0, 0, 705, 0, 706, 0, 0, 707, 0, 708, 0, 0, 709, 0, 0, 0, 0, 0, 0, 710,
    0, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 0, 714, 0, 0, 715, 0, 0, 0, 0,
    716, 0, 0, 0, 717, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 721,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 724, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 726, 0, 0, 727, 0, 0, 0, 0, 728, 0, 0, 729, 0, 0, 730, 0, 0, 0, 731, 0, 0,
    732, 0, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 734, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 0, 0, 0, 736, 0, 737, 0, 738, 0,
    739, 0, 0, 740, 0, 0, 0, 741, 0, 0, 742, 0, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 744, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 745, 0, 746, 0, 0, 0, 747, 748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 0, 750, 0, 0, 0,
    0, 751, 0, 0, 0, 752, 0, 0, 0, 753, 0, 0, 0, 754, 0, 0, 0, 0, 0, 0, 755, 0, 0, 756, 0, 0, 0, 0, 0, 0, 757, 0,
    0, 758, 0, 0, 0, 759, 0, 0, 760, 0, 0, 761, 0, 0, 762, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 764,
    0, 0, 765, 0, 0, 0, 0, 766, 0, 767, 0, 0, 0, 768, 0, 0, 0, 0, 0, 769, 0, 0, 0, 0, 0, 0, 770, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 771, 0, 772, 0, 0, 0, 0, 0, 0, 0, 773, 0, 774, 0, 0, 0, 0, 0, 775, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 776, 0, 0, 0, 0, 0, 777, 0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 779, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 780, 0, 0, 0, 0, 781, 0, 0, 782, 0, 0, 0, 0, 783, 0, 784, 0, 0, 0, 785, 0, 0, 0, 0, 0, 786,
};
void recomp_unit_0141_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A38000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0141[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A38000;
    case 2u: goto L_08A38008;
    case 3u: goto L_08A38020;
    case 4u: goto L_08A38030;
    case 5u: goto L_08A3803C;
    case 6u: goto L_08A3804C;
    case 7u: goto L_08A3807C;
    case 8u: goto L_08A380A4;
    case 9u: goto L_08A380AC;
    case 10u: goto L_08A380B8;
    case 11u: goto L_08A380C4;
    case 12u: goto L_08A380D4;
    case 13u: goto L_08A380DC;
    case 14u: goto L_08A380F0;
    case 15u: goto L_08A380F4;
    case 16u: goto L_08A38100;
    case 17u: goto L_08A3810C;
    case 18u: goto L_08A38114;
    case 19u: goto L_08A38118;
    case 20u: goto L_08A3814C;
    case 21u: goto L_08A381A0;
    case 22u: goto L_08A381D0;
    case 23u: goto L_08A381E8;
    case 24u: goto L_08A381FC;
    case 25u: goto L_08A38200;
    case 26u: goto L_08A3820C;
    case 27u: goto L_08A38218;
    case 28u: goto L_08A38228;
    case 29u: goto L_08A3823C;
    case 30u: goto L_08A38254;
    case 31u: goto L_08A38264;
    case 32u: goto L_08A38280;
    case 33u: goto L_08A38288;
    case 34u: goto L_08A382B0;
    case 35u: goto L_08A382C0;
    case 36u: goto L_08A382CC;
    case 37u: goto L_08A382D0;
    case 38u: goto L_08A382DC;
    case 39u: goto L_08A382E4;
    case 40u: goto L_08A382F4;
    case 41u: goto L_08A38304;
    case 42u: goto L_08A38310;
    case 43u: goto L_08A38314;
    case 44u: goto L_08A38320;
    case 45u: goto L_08A38328;
    case 46u: goto L_08A38338;
    case 47u: goto L_08A38364;
    case 48u: goto L_08A38368;
    case 49u: goto L_08A38374;
    case 50u: goto L_08A38380;
    case 51u: goto L_08A38388;
    case 52u: goto L_08A3838C;
    case 53u: goto L_08A383C0;
    case 54u: goto L_08A3842C;
    case 55u: goto L_08A3843C;
    case 56u: goto L_08A38448;
    case 57u: goto L_08A384C4;
    case 58u: goto L_08A384CC;
    case 59u: goto L_08A384D8;
    case 60u: goto L_08A384E4;
    case 61u: goto L_08A384EC;
    case 62u: goto L_08A384F8;
    case 63u: goto L_08A384FC;
    case 64u: goto L_08A38508;
    case 65u: goto L_08A38518;
    case 66u: goto L_08A38524;
    case 67u: goto L_08A38538;
    case 68u: goto L_08A3853C;
    case 69u: goto L_08A38544;
    case 70u: goto L_08A3854C;
    case 71u: goto L_08A38554;
    case 72u: goto L_08A3856C;
    case 73u: goto L_08A38578;
    case 74u: goto L_08A38580;
    case 75u: goto L_08A38590;
    case 76u: goto L_08A385B8;
    case 77u: goto L_08A385CC;
    case 78u: goto L_08A385D8;
    case 79u: goto L_08A385EC;
    case 80u: goto L_08A385F4;
    case 81u: goto L_08A38604;
    case 82u: goto L_08A38618;
    case 83u: goto L_08A3861C;
    case 84u: goto L_08A3862C;
    case 85u: goto L_08A38638;
    case 86u: goto L_08A3864C;
    case 87u: goto L_08A38650;
    case 88u: goto L_08A38668;
    case 89u: goto L_08A38684;
    case 90u: goto L_08A386B8;
    case 91u: goto L_08A386EC;
    case 92u: goto L_08A38704;
    case 93u: goto L_08A38718;
    case 94u: goto L_08A38720;
    case 95u: goto L_08A38738;
    case 96u: goto L_08A38740;
    case 97u: goto L_08A38758;
    case 98u: goto L_08A38780;
    case 99u: goto L_08A3878C;
    case 100u: goto L_08A387B4;
    case 101u: goto L_08A387C8;
    case 102u: goto L_08A387D4;
    case 103u: goto L_08A387E8;
    case 104u: goto L_08A38800;
    case 105u: goto L_08A3881C;
    case 106u: goto L_08A38850;
    case 107u: goto L_08A38868;
    case 108u: goto L_08A38874;
    case 109u: goto L_08A38884;
    case 110u: goto L_08A3889C;
    case 111u: goto L_08A388A4;
    case 112u: goto L_08A388D0;
    case 113u: goto L_08A388E0;
    case 114u: goto L_08A38908;
    case 115u: goto L_08A3891C;
    case 116u: goto L_08A38928;
    case 117u: goto L_08A3893C;
    case 118u: goto L_08A38944;
    case 119u: goto L_08A38954;
    case 120u: goto L_08A38968;
    case 121u: goto L_08A38970;
    case 122u: goto L_08A38978;
    case 123u: goto L_08A389B8;
    case 124u: goto L_08A389D0;
    case 125u: goto L_08A389E4;
    case 126u: goto L_08A389F4;
    case 127u: goto L_08A38A08;
    case 128u: goto L_08A38A24;
    case 129u: goto L_08A38A74;
    case 130u: goto L_08A38A8C;
    case 131u: goto L_08A38AA8;
    case 132u: goto L_08A38ABC;
    case 133u: goto L_08A38AC0;
    case 134u: goto L_08A38ACC;
    case 135u: goto L_08A38B00;
    case 136u: goto L_08A38B18;
    case 137u: goto L_08A38B2C;
    case 138u: goto L_08A38B38;
    case 139u: goto L_08A38B50;
    case 140u: goto L_08A38B58;
    case 141u: goto L_08A38B70;
    case 142u: goto L_08A38B98;
    case 143u: goto L_08A38BC8;
    case 144u: goto L_08A38BCC;
    case 145u: goto L_08A38C00;
    case 146u: goto L_08A38C0C;
    case 147u: goto L_08A38C20;
    case 148u: goto L_08A38C64;
    case 149u: goto L_08A38C74;
    case 150u: goto L_08A38C80;
    case 151u: goto L_08A38C94;
    case 152u: goto L_08A38C98;
    case 153u: goto L_08A38CA8;
    case 154u: goto L_08A38CE8;
    case 155u: goto L_08A38CF4;
    case 156u: goto L_08A38CF8;
    case 157u: goto L_08A38D00;
    case 158u: goto L_08A38D0C;
    case 159u: goto L_08A38D4C;
    case 160u: goto L_08A38D64;
    case 161u: goto L_08A38D70;
    case 162u: goto L_08A38D8C;
    case 163u: goto L_08A38D90;
    case 164u: goto L_08A38DAC;
    case 165u: goto L_08A38DBC;
    case 166u: goto L_08A38DC4;
    case 167u: goto L_08A38DD4;
    case 168u: goto L_08A38DE0;
    case 169u: goto L_08A38DF0;
    case 170u: goto L_08A38DFC;
    case 171u: goto L_08A38E08;
    case 172u: goto L_08A38E1C;
    case 173u: goto L_08A38E34;
    case 174u: goto L_08A38E3C;
    case 175u: goto L_08A38E54;
    case 176u: goto L_08A38E64;
    case 177u: goto L_08A38E88;
    case 178u: goto L_08A38EA4;
    case 179u: goto L_08A38EA8;
    case 180u: goto L_08A38EB4;
    case 181u: goto L_08A38EC4;
    case 182u: goto L_08A38ECC;
    case 183u: goto L_08A38ED4;
    case 184u: goto L_08A38EFC;
    case 185u: goto L_08A38F04;
    case 186u: goto L_08A38F10;
    case 187u: goto L_08A38F30;
    case 188u: goto L_08A38F34;
    case 189u: goto L_08A38F40;
    case 190u: goto L_08A38F4C;
    case 191u: goto L_08A38F58;
    case 192u: goto L_08A38F74;
    case 193u: goto L_08A38F78;
    case 194u: goto L_08A38F80;
    case 195u: goto L_08A38F88;
    case 196u: goto L_08A38F98;
    case 197u: goto L_08A38F9C;
    case 198u: goto L_08A38FAC;
    case 199u: goto L_08A38FB8;
    case 200u: goto L_08A38FC8;
    case 201u: goto L_08A38FD8;
    case 202u: goto L_08A38FE0;
    case 203u: goto L_08A39004;
    case 204u: goto L_08A39020;
    case 205u: goto L_08A39024;
    case 206u: goto L_08A3902C;
    case 207u: goto L_08A3903C;
    case 208u: goto L_08A39044;
    case 209u: goto L_08A39054;
    case 210u: goto L_08A39058;
    case 211u: goto L_08A39060;
    case 212u: goto L_08A39064;
    case 213u: goto L_08A39098;
    case 214u: goto L_08A390DC;
    case 215u: goto L_08A390F8;
    case 216u: goto L_08A39100;
    case 217u: goto L_08A39108;
    case 218u: goto L_08A39110;
    case 219u: goto L_08A39118;
    case 220u: goto L_08A39120;
    case 221u: goto L_08A39128;
    case 222u: goto L_08A3912C;
    case 223u: goto L_08A3913C;
    case 224u: goto L_08A39174;
    case 225u: goto L_08A39184;
    case 226u: goto L_08A391A0;
    case 227u: goto L_08A391B8;
    case 228u: goto L_08A391D4;
    case 229u: goto L_08A39218;
    case 230u: goto L_08A3922C;
    case 231u: goto L_08A39238;
    case 232u: goto L_08A3924C;
    case 233u: goto L_08A39254;
    case 234u: goto L_08A39268;
    case 235u: goto L_08A39270;
    case 236u: goto L_08A39288;
    case 237u: goto L_08A392CC;
    case 238u: goto L_08A392E0;
    case 239u: goto L_08A392F0;
    case 240u: goto L_08A3930C;
    case 241u: goto L_08A39314;
    case 242u: goto L_08A3933C;
    case 243u: goto L_08A3934C;
    case 244u: goto L_08A39358;
    case 245u: goto L_08A3935C;
    case 246u: goto L_08A39368;
    case 247u: goto L_08A39370;
    case 248u: goto L_08A39380;
    case 249u: goto L_08A39390;
    case 250u: goto L_08A3939C;
    case 251u: goto L_08A393A0;
    case 252u: goto L_08A393AC;
    case 253u: goto L_08A393BC;
    case 254u: goto L_08A393E4;
    case 255u: goto L_08A393F0;
    case 256u: goto L_08A39410;
    case 257u: goto L_08A3941C;
    case 258u: goto L_08A39424;
    case 259u: goto L_08A39428;
    case 260u: goto L_08A39450;
    case 261u: goto L_08A39488;
    case 262u: goto L_08A39498;
    case 263u: goto L_08A394B4;
    case 264u: goto L_08A394D4;
    case 265u: goto L_08A394F0;
    case 266u: goto L_08A39528;
    case 267u: goto L_08A39554;
    case 268u: goto L_08A39568;
    case 269u: goto L_08A39574;
    case 270u: goto L_08A39588;
    case 271u: goto L_08A39590;
    case 272u: goto L_08A395B0;
    case 273u: goto L_08A395B8;
    case 274u: goto L_08A395D0;
    case 275u: goto L_08A39614;
    case 276u: goto L_08A39628;
    case 277u: goto L_08A39638;
    case 278u: goto L_08A3964C;
    case 279u: goto L_08A39674;
    case 280u: goto L_08A39680;
    case 281u: goto L_08A396A0;
    case 282u: goto L_08A396AC;
    case 283u: goto L_08A396B4;
    case 284u: goto L_08A396B8;
    case 285u: goto L_08A396E0;
    case 286u: goto L_08A39718;
    case 287u: goto L_08A39728;
    case 288u: goto L_08A39744;
    case 289u: goto L_08A39764;
    case 290u: goto L_08A39780;
    case 291u: goto L_08A397B4;
    case 292u: goto L_08A397E0;
    case 293u: goto L_08A397F4;
    case 294u: goto L_08A39800;
    case 295u: goto L_08A39814;
    case 296u: goto L_08A3981C;
    case 297u: goto L_08A3983C;
    case 298u: goto L_08A39844;
    case 299u: goto L_08A3985C;
    case 300u: goto L_08A398A0;
    case 301u: goto L_08A398B4;
    case 302u: goto L_08A398C4;
    case 303u: goto L_08A398D8;
    case 304u: goto L_08A39900;
    case 305u: goto L_08A3990C;
    case 306u: goto L_08A3992C;
    case 307u: goto L_08A39938;
    case 308u: goto L_08A39940;
    case 309u: goto L_08A39944;
    case 310u: goto L_08A3996C;
    case 311u: goto L_08A3999C;
    case 312u: goto L_08A399DC;
    case 313u: goto L_08A399F4;
    case 314u: goto L_08A39A00;
    case 315u: goto L_08A39A1C;
    case 316u: goto L_08A39A20;
    case 317u: goto L_08A39A34;
    case 318u: goto L_08A39A48;
    case 319u: goto L_08A39A54;
    case 320u: goto L_08A39A70;
    case 321u: goto L_08A39A90;
    case 322u: goto L_08A39AA8;
    case 323u: goto L_08A39AB4;
    case 324u: goto L_08A39AD4;
    case 325u: goto L_08A39AEC;
    case 326u: goto L_08A39AF0;
    case 327u: goto L_08A39B04;
    case 328u: goto L_08A39B28;
    case 329u: goto L_08A39B80;
    case 330u: goto L_08A39BB8;
    case 331u: goto L_08A39BC8;
    case 332u: goto L_08A39BD8;
    case 333u: goto L_08A39BE0;
    case 334u: goto L_08A39BFC;
    case 335u: goto L_08A39C04;
    case 336u: goto L_08A39C10;
    case 337u: goto L_08A39C1C;
    case 338u: goto L_08A39C28;
    case 339u: goto L_08A39C38;
    case 340u: goto L_08A39C44;
    case 341u: goto L_08A39C4C;
    case 342u: goto L_08A39C50;
    case 343u: goto L_08A39C5C;
    case 344u: goto L_08A39C60;
    case 345u: goto L_08A39C7C;
    case 346u: goto L_08A39CBC;
    case 347u: goto L_08A39CDC;
    case 348u: goto L_08A39CE0;
    case 349u: goto L_08A39CEC;
    case 350u: goto L_08A39CFC;
    case 351u: goto L_08A39D08;
    case 352u: goto L_08A39D28;
    case 353u: goto L_08A39D2C;
    case 354u: goto L_08A39D34;
    case 355u: goto L_08A39D60;
    case 356u: goto L_08A39DD0;
    case 357u: goto L_08A39DE8;
    case 358u: goto L_08A39DF4;
    case 359u: goto L_08A39E10;
    case 360u: goto L_08A39E14;
    case 361u: goto L_08A39E28;
    case 362u: goto L_08A39E54;
    case 363u: goto L_08A39E5C;
    case 364u: goto L_08A39E6C;
    case 365u: goto L_08A39E78;
    case 366u: goto L_08A39E80;
    case 367u: goto L_08A39E84;
    case 368u: goto L_08A39E90;
    case 369u: goto L_08A39E94;
    case 370u: goto L_08A39EAC;
    case 371u: goto L_08A39EC8;
    case 372u: goto L_08A39EDC;
    case 373u: goto L_08A39EF8;
    case 374u: goto L_08A39F0C;
    case 375u: goto L_08A39F50;
    case 376u: goto L_08A39F68;
    case 377u: goto L_08A39F78;
    case 378u: goto L_08A39F98;
    case 379u: goto L_08A39FA4;
    case 380u: goto L_08A39FCC;
    case 381u: goto L_08A3A008;
    case 382u: goto L_08A3A020;
    case 383u: goto L_08A3A034;
    case 384u: goto L_08A3A038;
    case 385u: goto L_08A3A048;
    case 386u: goto L_08A3A058;
    case 387u: goto L_08A3A068;
    case 388u: goto L_08A3A0A0;
    case 389u: goto L_08A3A0A4;
    case 390u: goto L_08A3A0AC;
    case 391u: goto L_08A3A0B0;
    case 392u: goto L_08A3A0C0;
    case 393u: goto L_08A3A0CC;
    case 394u: goto L_08A3A104;
    case 395u: goto L_08A3A120;
    case 396u: goto L_08A3A134;
    case 397u: goto L_08A3A150;
    case 398u: goto L_08A3A164;
    case 399u: goto L_08A3A180;
    case 400u: goto L_08A3A194;
    case 401u: goto L_08A3A1B0;
    case 402u: goto L_08A3A1C4;
    case 403u: goto L_08A3A1F4;
    case 404u: goto L_08A3A204;
    case 405u: goto L_08A3A210;
    case 406u: goto L_08A3A218;
    case 407u: goto L_08A3A21C;
    case 408u: goto L_08A3A238;
    case 409u: goto L_08A3A27C;
    case 410u: goto L_08A3A298;
    case 411u: goto L_08A3A2C8;
    case 412u: goto L_08A3A2E4;
    case 413u: goto L_08A3A308;
    case 414u: goto L_08A3A320;
    case 415u: goto L_08A3A330;
    case 416u: goto L_08A3A344;
    case 417u: goto L_08A3A358;
    case 418u: goto L_08A3A364;
    case 419u: goto L_08A3A36C;
    case 420u: goto L_08A3A370;
    case 421u: goto L_08A3A398;
    case 422u: goto L_08A3A3CC;
    case 423u: goto L_08A3A3D4;
    case 424u: goto L_08A3A3EC;
    case 425u: goto L_08A3A3F4;
    case 426u: goto L_08A3A404;
    case 427u: goto L_08A3A40C;
    case 428u: goto L_08A3A424;
    case 429u: goto L_08A3A438;
    case 430u: goto L_08A3A444;
    case 431u: goto L_08A3A45C;
    case 432u: goto L_08A3A470;
    case 433u: goto L_08A3A488;
    case 434u: goto L_08A3A494;
    case 435u: goto L_08A3A4A0;
    case 436u: goto L_08A3A4A4;
    case 437u: goto L_08A3A4C4;
    case 438u: goto L_08A3A4CC;
    case 439u: goto L_08A3A4FC;
    case 440u: goto L_08A3A514;
    case 441u: goto L_08A3A530;
    case 442u: goto L_08A3A574;
    case 443u: goto L_08A3A590;
    case 444u: goto L_08A3A5C0;
    case 445u: goto L_08A3A5CC;
    case 446u: goto L_08A3A5E0;
    case 447u: goto L_08A3A5E4;
    case 448u: goto L_08A3A5F0;
    case 449u: goto L_08A3A608;
    case 450u: goto L_08A3A620;
    case 451u: goto L_08A3A664;
    case 452u: goto L_08A3A678;
    case 453u: goto L_08A3A688;
    case 454u: goto L_08A3A69C;
    case 455u: goto L_08A3A6C4;
    case 456u: goto L_08A3A6D0;
    case 457u: goto L_08A3A6F0;
    case 458u: goto L_08A3A6FC;
    case 459u: goto L_08A3A704;
    case 460u: goto L_08A3A708;
    case 461u: goto L_08A3A730;
    case 462u: goto L_08A3A778;
    case 463u: goto L_08A3A794;
    case 464u: goto L_08A3A7C0;
    case 465u: goto L_08A3A7CC;
    case 466u: goto L_08A3A7E0;
    case 467u: goto L_08A3A7E4;
    case 468u: goto L_08A3A7FC;
    case 469u: goto L_08A3A808;
    case 470u: goto L_08A3A814;
    case 471u: goto L_08A3A828;
    case 472u: goto L_08A3A830;
    case 473u: goto L_08A3A844;
    case 474u: goto L_08A3A868;
    case 475u: goto L_08A3A870;
    case 476u: goto L_08A3A884;
    case 477u: goto L_08A3A8C8;
    case 478u: goto L_08A3A8DC;
    case 479u: goto L_08A3A8EC;
    case 480u: goto L_08A3A900;
    case 481u: goto L_08A3A928;
    case 482u: goto L_08A3A934;
    case 483u: goto L_08A3A954;
    case 484u: goto L_08A3A960;
    case 485u: goto L_08A3A968;
    case 486u: goto L_08A3A96C;
    case 487u: goto L_08A3A998;
    case 488u: goto L_08A3A9C8;
    case 489u: goto L_08A3A9D0;
    case 490u: goto L_08A3A9D8;
    case 491u: goto L_08A3A9E4;
    case 492u: goto L_08A3A9F0;
    case 493u: goto L_08A3AA04;
    case 494u: goto L_08A3AA0C;
    case 495u: goto L_08A3AA14;
    case 496u: goto L_08A3AA24;
    case 497u: goto L_08A3AA34;
    case 498u: goto L_08A3AA4C;
    case 499u: goto L_08A3AA54;
    case 500u: goto L_08A3AA5C;
    case 501u: goto L_08A3AA68;
    case 502u: goto L_08A3AA70;
    case 503u: goto L_08A3AA80;
    case 504u: goto L_08A3AA84;
    case 505u: goto L_08A3AAA4;
    case 506u: goto L_08A3AADC;
    case 507u: goto L_08A3AB00;
    case 508u: goto L_08A3AB10;
    case 509u: goto L_08A3AB28;
    case 510u: goto L_08A3AB40;
    case 511u: goto L_08A3AB64;
    case 512u: goto L_08A3AB74;
    case 513u: goto L_08A3AB8C;
    case 514u: goto L_08A3ABA0;
    case 515u: goto L_08A3ABAC;
    case 516u: goto L_08A3ABB8;
    case 517u: goto L_08A3ABC4;
    case 518u: goto L_08A3ABCC;
    case 519u: goto L_08A3ABD8;
    case 520u: goto L_08A3ABE4;
    case 521u: goto L_08A3ABF0;
    case 522u: goto L_08A3AC00;
    case 523u: goto L_08A3AC08;
    case 524u: goto L_08A3AC0C;
    case 525u: goto L_08A3AC34;
    case 526u: goto L_08A3AC84;
    case 527u: goto L_08A3AC9C;
    case 528u: goto L_08A3ACB4;
    case 529u: goto L_08A3ACC0;
    case 530u: goto L_08A3ACCC;
    case 531u: goto L_08A3ACD0;
    case 532u: goto L_08A3ACE8;
    case 533u: goto L_08A3AD3C;
    case 534u: goto L_08A3AD6C;
    case 535u: goto L_08A3AD84;
    case 536u: goto L_08A3AD98;
    case 537u: goto L_08A3AD9C;
    case 538u: goto L_08A3ADA8;
    case 539u: goto L_08A3ADBC;
    case 540u: goto L_08A3ADD4;
    case 541u: goto L_08A3ADF0;
    case 542u: goto L_08A3AE34;
    case 543u: goto L_08A3AE48;
    case 544u: goto L_08A3AE54;
    case 545u: goto L_08A3AE68;
    case 546u: goto L_08A3AE74;
    case 547u: goto L_08A3AE84;
    case 548u: goto L_08A3AE94;
    case 549u: goto L_08A3AED8;
    case 550u: goto L_08A3AEEC;
    case 551u: goto L_08A3AEF8;
    case 552u: goto L_08A3AF08;
    case 553u: goto L_08A3AF1C;
    case 554u: goto L_08A3AF34;
    case 555u: goto L_08A3AF44;
    case 556u: goto L_08A3AF60;
    case 557u: goto L_08A3AF68;
    case 558u: goto L_08A3AF90;
    case 559u: goto L_08A3AFA0;
    case 560u: goto L_08A3AFAC;
    case 561u: goto L_08A3AFB0;
    case 562u: goto L_08A3AFBC;
    case 563u: goto L_08A3AFC4;
    case 564u: goto L_08A3AFD4;
    case 565u: goto L_08A3AFE4;
    case 566u: goto L_08A3AFF0;
    case 567u: goto L_08A3AFF4;
    case 568u: goto L_08A3B000;
    case 569u: goto L_08A3B008;
    case 570u: goto L_08A3B018;
    case 571u: goto L_08A3B040;
    case 572u: goto L_08A3B04C;
    case 573u: goto L_08A3B06C;
    case 574u: goto L_08A3B074;
    case 575u: goto L_08A3B084;
    case 576u: goto L_08A3B0B0;
    case 577u: goto L_08A3B0B4;
    case 578u: goto L_08A3B0C0;
    case 579u: goto L_08A3B0CC;
    case 580u: goto L_08A3B0D4;
    case 581u: goto L_08A3B0D8;
    case 582u: goto L_08A3B10C;
    case 583u: goto L_08A3B128;
    case 584u: goto L_08A3B138;
    case 585u: goto L_08A3B148;
    case 586u: goto L_08A3B154;
    case 587u: goto L_08A3B160;
    case 588u: goto L_08A3B178;
    case 589u: goto L_08A3B190;
    case 590u: goto L_08A3B1AC;
    case 591u: goto L_08A3B1B4;
    case 592u: goto L_08A3B1C4;
    case 593u: goto L_08A3B1DC;
    case 594u: goto L_08A3B1F0;
    case 595u: goto L_08A3B204;
    case 596u: goto L_08A3B234;
    case 597u: goto L_08A3B24C;
    case 598u: goto L_08A3B254;
    case 599u: goto L_08A3B258;
    case 600u: goto L_08A3B264;
    case 601u: goto L_08A3B274;
    case 602u: goto L_08A3B288;
    case 603u: goto L_08A3B294;
    case 604u: goto L_08A3B2AC;
    case 605u: goto L_08A3B2C4;
    case 606u: goto L_08A3B2CC;
    case 607u: goto L_08A3B2D0;
    case 608u: goto L_08A3B2DC;
    case 609u: goto L_08A3B2EC;
    case 610u: goto L_08A3B300;
    case 611u: goto L_08A3B30C;
    case 612u: goto L_08A3B32C;
    case 613u: goto L_08A3B344;
    case 614u: goto L_08A3B34C;
    case 615u: goto L_08A3B350;
    case 616u: goto L_08A3B35C;
    case 617u: goto L_08A3B36C;
    case 618u: goto L_08A3B380;
    case 619u: goto L_08A3B38C;
    case 620u: goto L_08A3B3B8;
    case 621u: goto L_08A3B3D0;
    case 622u: goto L_08A3B3E4;
    case 623u: goto L_08A3B3F8;
    case 624u: goto L_08A3B418;
    case 625u: goto L_08A3B42C;
    case 626u: goto L_08A3B434;
    case 627u: goto L_08A3B44C;
    case 628u: goto L_08A3B454;
    case 629u: goto L_08A3B468;
    case 630u: goto L_08A3B470;
    case 631u: goto L_08A3B488;
    case 632u: goto L_08A3B490;
    case 633u: goto L_08A3B4A4;
    case 634u: goto L_08A3B4AC;
    case 635u: goto L_08A3B4C4;
    case 636u: goto L_08A3B4CC;
    case 637u: goto L_08A3B4E0;
    case 638u: goto L_08A3B4E8;
    case 639u: goto L_08A3B500;
    case 640u: goto L_08A3B508;
    case 641u: goto L_08A3B51C;
    case 642u: goto L_08A3B524;
    case 643u: goto L_08A3B53C;
    case 644u: goto L_08A3B544;
    case 645u: goto L_08A3B558;
    case 646u: goto L_08A3B560;
    case 647u: goto L_08A3B578;
    case 648u: goto L_08A3B580;
    case 649u: goto L_08A3B594;
    case 650u: goto L_08A3B59C;
    case 651u: goto L_08A3B5B4;
    case 652u: goto L_08A3B5BC;
    case 653u: goto L_08A3B5D0;
    case 654u: goto L_08A3B5D8;
    case 655u: goto L_08A3B5F0;
    case 656u: goto L_08A3B5F8;
    case 657u: goto L_08A3B60C;
    case 658u: goto L_08A3B614;
    case 659u: goto L_08A3B62C;
    case 660u: goto L_08A3B634;
    case 661u: goto L_08A3B648;
    case 662u: goto L_08A3B650;
    case 663u: goto L_08A3B668;
    case 664u: goto L_08A3B670;
    case 665u: goto L_08A3B684;
    case 666u: goto L_08A3B68C;
    case 667u: goto L_08A3B6A4;
    case 668u: goto L_08A3B6AC;
    case 669u: goto L_08A3B6C0;
    case 670u: goto L_08A3B6C8;
    case 671u: goto L_08A3B6E0;
    case 672u: goto L_08A3B6E8;
    case 673u: goto L_08A3B6FC;
    case 674u: goto L_08A3B704;
    case 675u: goto L_08A3B71C;
    case 676u: goto L_08A3B724;
    case 677u: goto L_08A3B738;
    case 678u: goto L_08A3B740;
    case 679u: goto L_08A3B758;
    case 680u: goto L_08A3B760;
    case 681u: goto L_08A3B774;
    case 682u: goto L_08A3B77C;
    case 683u: goto L_08A3B794;
    case 684u: goto L_08A3B79C;
    case 685u: goto L_08A3B7B0;
    case 686u: goto L_08A3B7B8;
    case 687u: goto L_08A3B7D0;
    case 688u: goto L_08A3B7E8;
    case 689u: goto L_08A3B818;
    case 690u: goto L_08A3B830;
    case 691u: goto L_08A3B840;
    case 692u: goto L_08A3B850;
    case 693u: goto L_08A3B868;
    case 694u: goto L_08A3B874;
    case 695u: goto L_08A3B880;
    case 696u: goto L_08A3B890;
    case 697u: goto L_08A3B89C;
    case 698u: goto L_08A3B8B0;
    case 699u: goto L_08A3B8D4;
    case 700u: goto L_08A3B8E4;
    case 701u: goto L_08A3B8FC;
    case 702u: goto L_08A3B90C;
    case 703u: goto L_08A3B91C;
    case 704u: goto L_08A3B92C;
    case 705u: goto L_08A3B938;
    case 706u: goto L_08A3B940;
    case 707u: goto L_08A3B94C;
    case 708u: goto L_08A3B954;
    case 709u: goto L_08A3B960;
    case 710u: goto L_08A3B97C;
    case 711u: goto L_08A3B98C;
    case 712u: goto L_08A3B9B0;
    case 713u: goto L_08A3B9D0;
    case 714u: goto L_08A3B9E0;
    case 715u: goto L_08A3B9EC;
    case 716u: goto L_08A3BA00;
    case 717u: goto L_08A3BA10;
    case 718u: goto L_08A3BA28;
    case 719u: goto L_08A3BA50;
    case 720u: goto L_08A3BA64;
    case 721u: goto L_08A3BA7C;
    case 722u: goto L_08A3BAC0;
    case 723u: goto L_08A3BADC;
    case 724u: goto L_08A3BAF0;
    case 725u: goto L_08A3BB18;
    case 726u: goto L_08A3BB2C;
    case 727u: goto L_08A3BB38;
    case 728u: goto L_08A3BB4C;
    case 729u: goto L_08A3BB58;
    case 730u: goto L_08A3BB64;
    case 731u: goto L_08A3BB74;
    case 732u: goto L_08A3BB80;
    case 733u: goto L_08A3BB9C;
    case 734u: goto L_08A3BBB0;
    case 735u: goto L_08A3BBC4;
    case 736u: goto L_08A3BBE8;
    case 737u: goto L_08A3BBF0;
    case 738u: goto L_08A3BBF8;
    case 739u: goto L_08A3BC00;
    case 740u: goto L_08A3BC0C;
    case 741u: goto L_08A3BC1C;
    case 742u: goto L_08A3BC28;
    case 743u: goto L_08A3BC40;
    case 744u: goto L_08A3BC58;
    case 745u: goto L_08A3BC84;
    case 746u: goto L_08A3BC8C;
    case 747u: goto L_08A3BC9C;
    case 748u: goto L_08A3BCA0;
    case 749u: goto L_08A3BCDC;
    case 750u: goto L_08A3BCF0;
    case 751u: goto L_08A3BD04;
    case 752u: goto L_08A3BD14;
    case 753u: goto L_08A3BD24;
    case 754u: goto L_08A3BD34;
    case 755u: goto L_08A3BD50;
    case 756u: goto L_08A3BD5C;
    case 757u: goto L_08A3BD78;
    case 758u: goto L_08A3BD84;
    case 759u: goto L_08A3BD94;
    case 760u: goto L_08A3BDA0;
    case 761u: goto L_08A3BDAC;
    case 762u: goto L_08A3BDB8;
    case 763u: goto L_08A3BDE8;
    case 764u: goto L_08A3BDFC;
    case 765u: goto L_08A3BE08;
    case 766u: goto L_08A3BE1C;
    case 767u: goto L_08A3BE24;
    case 768u: goto L_08A3BE34;
    case 769u: goto L_08A3BE4C;
    case 770u: goto L_08A3BE68;
    case 771u: goto L_08A3BEA8;
    case 772u: goto L_08A3BEB0;
    case 773u: goto L_08A3BED0;
    case 774u: goto L_08A3BED8;
    case 775u: goto L_08A3BEF0;
    case 776u: goto L_08A3BF1C;
    case 777u: goto L_08A3BF34;
    case 778u: goto L_08A3BF48;
    case 779u: goto L_08A3BF60;
    case 780u: goto L_08A3BF90;
    case 781u: goto L_08A3BFA4;
    case 782u: goto L_08A3BFB0;
    case 783u: goto L_08A3BFC4;
    case 784u: goto L_08A3BFCC;
    case 785u: goto L_08A3BFDC;
    case 786u: goto L_08A3BFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A38000:
    ctx.set_gpr(31, 0x08A38008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 470u, 0x0884D91Cu>(ctx, &aot_mem) && ctx.pc == 0x08A38008u) goto L_08A38008;
    return;
L_08A38008:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A38020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 844u, 0x0890FFD4u>(ctx, &aot_mem) && ctx.pc == 0x08A38020u) goto L_08A38020;
    return;
L_08A38020:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08A38030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A38030u) goto L_08A38030;
    return;
L_08A38030:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38100;
      }
      goto L_08A3803C;
    }
L_08A3803C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A380F4;
      }
      goto L_08A3804C;
    }
L_08A3804C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(21, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A3807Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3807Cu) goto L_08A3807C;
    return;
L_08A3807C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A380B8;
      }
      goto L_08A380A4;
    }
L_08A380A4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A380B8;
      }
      goto L_08A380AC;
    }
L_08A380AC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A380B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A380B8u) goto L_08A380B8;
    return;
L_08A380B8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A380C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 624u, 0x08A2EE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A380C4u) goto L_08A380C4;
    return;
L_08A380C4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A380DC;
      }
      goto L_08A380D4;
    }
L_08A380D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A380DC;
L_08A380DC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A380F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A380F0u) goto L_08A380F0;
    return;
L_08A380F0:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(-4));
    goto L_08A380F4;
L_08A380F4:
    ctx.set_gpr(1, ctx.gpr[19] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3804C;
      }
      goto L_08A38100;
    }
L_08A38100:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A38114;
      }
      goto L_08A3810C;
    }
L_08A3810C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38118;
      }
      goto L_08A38114;
    }
L_08A38114:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A38118;
L_08A38118:
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
L_08A3814C:
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
    ctx.set_gpr(23, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(30, ctx.gpr[19] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38200;
      }
      goto L_08A381A0;
    }
L_08A381A0:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08A381D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A381D0u) goto L_08A381D0;
    return;
L_08A381D0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08A381E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 538u, 0x08A2E4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A381E8u) goto L_08A381E8;
    return;
L_08A381E8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08A381FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A381FCu) goto L_08A381FC;
    return;
L_08A381FC:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    goto L_08A38200;
L_08A38200:
    ctx.set_gpr(2, ctx.gpr[19] < ctx.gpr[30] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A381A0;
      }
      goto L_08A3820C;
    }
L_08A3820C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38254;
      }
      goto L_08A38218;
    }
L_08A38218:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x08A38228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 477u, 0x08A2DFE0u>(ctx, &aot_mem) && ctx.pc == 0x08A38228u) goto L_08A38228;
    return;
L_08A38228:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08A3823Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 470u, 0x0884D91Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3823Cu) goto L_08A3823C;
    return;
L_08A3823C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A38254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 844u, 0x0890FFD4u>(ctx, &aot_mem) && ctx.pc == 0x08A38254u) goto L_08A38254;
    return;
L_08A38254:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38320;
      }
      goto L_08A38264;
    }
L_08A38264:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(22, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38314;
      }
      goto L_08A38280;
    }
L_08A38280:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A382D0;
      }
      goto L_08A38288;
    }
L_08A38288:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A382B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A382B0u) goto L_08A382B0;
    return;
L_08A382B0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A38320;
      }
      goto L_08A382C0;
    }
L_08A382C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A38320;
      }
      goto L_08A382CC;
    }
L_08A382CC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_08A382D0;
L_08A382D0:
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38288;
      }
      goto L_08A382DC;
    }
L_08A382DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38320;
      }
      goto L_08A382E4;
    }
L_08A382E4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A382F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 317u, 0x08A69C98u>(ctx, &aot_mem) && ctx.pc == 0x08A382F4u) goto L_08A382F4;
    return;
L_08A382F4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A38320;
      }
      goto L_08A38304;
    }
L_08A38304:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A38320;
      }
      goto L_08A38310;
    }
L_08A38310:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_08A38314;
L_08A38314:
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A382E4;
      }
      goto L_08A38320;
    }
L_08A38320:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38374;
      }
      goto L_08A38328;
    }
L_08A38328:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38368;
      }
      goto L_08A38338;
    }
L_08A38338:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A38364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 591u, 0x08A2EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A38364u) goto L_08A38364;
    return;
L_08A38364:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(-4));
    goto L_08A38368;
L_08A38368:
    ctx.set_gpr(1, ctx.gpr[19] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38338;
      }
      goto L_08A38374;
    }
L_08A38374:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A38388;
      }
      goto L_08A38380;
    }
L_08A38380:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3838C;
      }
      goto L_08A38388;
    }
L_08A38388:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A3838C;
L_08A3838C:
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
L_08A383C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
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
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22104)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22100)));
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22104), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22100), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3843C;
      }
      goto L_08A3842C;
    }
L_08A3842C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38448;
      }
      goto L_08A3843C;
    }
L_08A3843C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38BCC;
      }
      goto L_08A38448;
    }
L_08A38448:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(23700)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] ^ 0u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(17, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(23692)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A384D8;
      }
      goto L_08A384C4;
    }
L_08A384C4:
    ctx.set_gpr(31, 0x08A384CCu);
    // nop
    goto L_08A38C0C;
L_08A384CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A384FC;
      }
      goto L_08A384D8;
    }
L_08A384D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A384F8;
      }
      goto L_08A384E4;
    }
L_08A384E4:
    ctx.set_gpr(31, 0x08A384ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 114u, 0x08A28A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A384ECu) goto L_08A384EC;
    return;
L_08A384EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A384FC;
      }
      goto L_08A384F8;
    }
L_08A384F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08A384FC;
L_08A384FC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38544;
      }
      goto L_08A38508;
    }
L_08A38508:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(248)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A38538;
      }
      goto L_08A38518;
    }
L_08A38518:
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A38524u);
    // nop
    goto L_08A38C00;
L_08A38524:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3853C;
      }
      goto L_08A38538;
    }
L_08A38538:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A3853C;
L_08A3853C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    goto L_08A38544;
L_08A38544:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38578;
      }
      goto L_08A3854C;
    }
L_08A3854C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38578;
      }
      goto L_08A38554;
    }
L_08A38554:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A3856Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 388u, 0x08A61EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A3856Cu) goto L_08A3856C;
    return;
L_08A3856C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38BCC;
      }
      goto L_08A38578;
    }
L_08A38578:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3878C;
      }
      goto L_08A38580;
    }
L_08A38580:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3861C;
      }
      goto L_08A38590;
    }
L_08A38590:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A385B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A385B8u) goto L_08A385B8;
    return;
L_08A385B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[4] ^ 0u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A385D8;
      }
      goto L_08A385CC;
    }
L_08A385CC:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A385EC;
      }
      goto L_08A385D8;
    }
L_08A385D8:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08A385EC;
L_08A385EC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3861C;
      }
      goto L_08A385F4;
    }
L_08A385F4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x08A38604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 717u, 0x089FF778u>(ctx, &aot_mem) && ctx.pc == 0x08A38604u) goto L_08A38604;
    return;
L_08A38604:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A38618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08A38618u) goto L_08A38618;
    return;
L_08A38618:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    goto L_08A3861C;
L_08A3861C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(248)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A3864C;
      }
      goto L_08A3862C;
    }
L_08A3862C:
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A38638u);
    // nop
    goto L_08A38C00;
L_08A38638:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38650;
      }
      goto L_08A3864C;
    }
L_08A3864C:
    ctx.set_gpr(18, 0u + 0u);
    goto L_08A38650;
L_08A38650:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38684;
      }
      goto L_08A38668;
    }
L_08A38668:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(31, 0x08A38684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 478u, 0x0895DF98u>(ctx, &aot_mem) && ctx.pc == 0x08A38684u) goto L_08A38684;
    return;
L_08A38684:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A386B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A386B8u) goto L_08A386B8;
    return;
L_08A386B8:
    ctx.set_gpr(23, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(30, ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08A386ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A386ECu) goto L_08A386EC;
    return;
L_08A386EC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x08A38704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 538u, 0x08A2E4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A38704u) goto L_08A38704;
    return;
L_08A38704:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08A38718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A38718u) goto L_08A38718;
    return;
L_08A38718:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38740;
      }
      goto L_08A38720;
    }
L_08A38720:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x08A38738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 388u, 0x08A61EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A38738u) goto L_08A38738;
    return;
L_08A38738:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38758;
      }
      goto L_08A38740;
    }
L_08A38740:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A38758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 388u, 0x08A61EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A38758u) goto L_08A38758;
    return;
L_08A38758:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A38780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 591u, 0x08A2EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A38780u) goto L_08A38780;
    return;
L_08A38780:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38BCC;
      }
      goto L_08A3878C;
    }
L_08A3878C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23700)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A387B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A387B4u) goto L_08A387B4;
    return;
L_08A387B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[4] ^ 0u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A387D4;
      }
      goto L_08A387C8;
    }
L_08A387C8:
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A387E8;
      }
      goto L_08A387D4;
    }
L_08A387D4:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08A387E8;
L_08A387E8:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3881C;
      }
      goto L_08A38800;
    }
L_08A38800:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23700)));
    ctx.set_gpr(31, 0x08A3881Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 478u, 0x0895DF98u>(ctx, &aot_mem) && ctx.pc == 0x08A3881Cu) goto L_08A3881C;
    return;
L_08A3881C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08A38850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 312u, 0x089495E8u>(ctx, &aot_mem) && ctx.pc == 0x08A38850u) goto L_08A38850;
    return;
L_08A38850:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38874;
      }
      goto L_08A38868;
    }
L_08A38868:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A38874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A38874u) goto L_08A38874;
    return;
L_08A38874:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A388A4;
      }
      goto L_08A38884;
    }
L_08A38884:
    ctx.set_gpr(6, ctx.gpr[23] << 6u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A3889Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 15u, 0x08948168u>(ctx, &aot_mem) && ctx.pc == 0x08A3889Cu) goto L_08A3889C;
    return;
L_08A3889C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[23]);
    goto L_08A388A4;
L_08A388A4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23708)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[22] + ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23712)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[22] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A388D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 498u, 0x088D2598u>(ctx, &aot_mem) && ctx.pc == 0x08A388D0u) goto L_08A388D0;
    return;
L_08A388D0:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38970;
      }
      goto L_08A388E0;
    }
L_08A388E0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A38908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A38908u) goto L_08A38908;
    return;
L_08A38908:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[4] ^ 0u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38928;
      }
      goto L_08A3891C;
    }
L_08A3891C:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3893C;
      }
      goto L_08A38928;
    }
L_08A38928:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08A3893C;
L_08A3893C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38970;
      }
      goto L_08A38944;
    }
L_08A38944:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x08A38954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 717u, 0x089FF778u>(ctx, &aot_mem) && ctx.pc == 0x08A38954u) goto L_08A38954;
    return;
L_08A38954:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A38968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08A38968u) goto L_08A38968;
    return;
L_08A38968:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08A38970;
L_08A38970:
    ctx.set_gpr(31, 0x08A38978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 183u, 0x088CCE5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A38978u) goto L_08A38978;
    return;
L_08A38978:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[18] + static_cast<std::uint32_t>(10));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(30, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x08A389B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A389B8u) goto L_08A389B8;
    return;
L_08A389B8:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x08A389D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 538u, 0x08A2E4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A389D0u) goto L_08A389D0;
    return;
L_08A389D0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x08A389E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A389E4u) goto L_08A389E4;
    return;
L_08A389E4:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38AC0;
      }
      goto L_08A389F4;
    }
L_08A389F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38A24;
      }
      goto L_08A38A08;
    }
L_08A38A08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20604)));
    ctx.set_gpr(31, 0x08A38A24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 478u, 0x0895DF98u>(ctx, &aot_mem) && ctx.pc == 0x08A38A24u) goto L_08A38A24;
    return;
L_08A38A24:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20600)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[30] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08A38A74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A38A74u) goto L_08A38A74;
    return;
L_08A38A74:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[30]);
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x08A38A8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 270u, 0x0883D560u>(ctx, &aot_mem) && ctx.pc == 0x08A38A8Cu) goto L_08A38A8C;
    return;
L_08A38A8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A38AA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A38AA8u) goto L_08A38AA8;
    return;
L_08A38AA8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08A38ABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 23u, 0x088D019Cu>(ctx, &aot_mem) && ctx.pc == 0x08A38ABCu) goto L_08A38ABC;
    return;
L_08A38ABC:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A38AC0;
L_08A38AC0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A389F4;
      }
      goto L_08A38ACC;
    }
L_08A38ACC:
    ctx.set_gpr(22, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(23, ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A38B00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A38B00u) goto L_08A38B00;
    return;
L_08A38B00:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A38B18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 538u, 0x08A2E4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A38B18u) goto L_08A38B18;
    return;
L_08A38B18:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A38B2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A38B2Cu) goto L_08A38B2C;
    return;
L_08A38B2C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38B58;
      }
      goto L_08A38B38;
    }
L_08A38B38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(31, 0x08A38B50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 388u, 0x08A61EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A38B50u) goto L_08A38B50;
    return;
L_08A38B50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38B70;
      }
      goto L_08A38B58;
    }
L_08A38B58:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A38B70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 388u, 0x08A61EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A38B70u) goto L_08A38B70;
    return;
L_08A38B70:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A38B98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 591u, 0x08A2EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A38B98u) goto L_08A38B98;
    return;
L_08A38B98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A38BC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 591u, 0x08A2EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A38BC8u) goto L_08A38BC8;
    return;
L_08A38BC8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A38BCC;
L_08A38BCC:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A38C00:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A38C0C:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A38C20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22104)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22100)));
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22104), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22100), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38C74;
      }
      goto L_08A38C64;
    }
L_08A38C64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38C80;
      }
      goto L_08A38C74;
    }
L_08A38C74:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38C98;
      }
      goto L_08A38C80;
    }
L_08A38C80:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A38C94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 388u, 0x08A61EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A38C94u) goto L_08A38C94;
    return;
L_08A38C94:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A38C98;
L_08A38C98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A38CA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
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
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38CF4;
      }
      goto L_08A38CE8;
    }
L_08A38CE8:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38CF8;
      }
      goto L_08A38CF4;
    }
L_08A38CF4:
    ctx.set_gpr(19, 0u + 0u);
    goto L_08A38CF8;
L_08A38CF8:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38D0C;
      }
      goto L_08A38D00;
    }
L_08A38D00:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39064;
      }
      goto L_08A38D0C;
    }
L_08A38D0C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A38D64;
      }
      goto L_08A38D4C;
    }
L_08A38D4C:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38D90;
      }
      goto L_08A38D64;
    }
L_08A38D64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38D8C;
      }
      goto L_08A38D70;
    }
L_08A38D70:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38D90;
      }
      goto L_08A38D8C;
    }
L_08A38D8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08A38D90;
L_08A38D90:
    ctx.set_gpr(30, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38F9C;
      }
      goto L_08A38DAC;
    }
L_08A38DAC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A38DBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 600u, 0x08A5E878u>(ctx, &aot_mem) && ctx.pc == 0x08A38DBCu) goto L_08A38DBC;
    return;
L_08A38DBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38F98;
      }
      goto L_08A38DC4;
    }
L_08A38DC4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A38DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 599u, 0x08A5E85Cu>(ctx, &aot_mem) && ctx.pc == 0x08A38DD4u) goto L_08A38DD4;
    return;
L_08A38DD4:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38E64;
      }
      goto L_08A38DE0;
    }
L_08A38DE0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A38DF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 598u, 0x08A5E844u>(ctx, &aot_mem) && ctx.pc == 0x08A38DF0u) goto L_08A38DF0;
    return;
L_08A38DF0:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38E3C;
      }
      goto L_08A38DFC;
    }
L_08A38DFC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08A38E08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A38E08u) goto L_08A38E08;
    return;
L_08A38E08:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x08A38E1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A38E1Cu) goto L_08A38E1C;
    return;
L_08A38E1C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A38E34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A38E34u) goto L_08A38E34;
    return;
L_08A38E34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38E54;
      }
      goto L_08A38E3C;
    }
L_08A38E3C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A38E54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A38E54u) goto L_08A38E54;
    return;
L_08A38E54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A38E64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 585u, 0x08A2E9A8u>(ctx, &aot_mem) && ctx.pc == 0x08A38E64u) goto L_08A38E64;
    return;
L_08A38E64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38EA8;
      }
      goto L_08A38E88;
    }
L_08A38E88:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08A38EA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 585u, 0x08A2E9A8u>(ctx, &aot_mem) && ctx.pc == 0x08A38EA4u) goto L_08A38EA4;
    return;
L_08A38EA4:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A38EA8;
L_08A38EA8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38E88;
      }
      goto L_08A38EB4;
    }
L_08A38EB4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A38F04;
      }
      goto L_08A38EC4;
    }
L_08A38EC4:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38ED4;
      }
      goto L_08A38ECC;
    }
L_08A38ECC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38F40;
      }
      goto L_08A38ED4;
    }
L_08A38ED4:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(3, ctx.hi);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A38EFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 317u, 0x08A69C98u>(ctx, &aot_mem) && ctx.pc == 0x08A38EFCu) goto L_08A38EFC;
    return;
L_08A38EFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38F40;
      }
      goto L_08A38F04;
    }
L_08A38F04:
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38F34;
      }
      goto L_08A38F10;
    }
L_08A38F10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A38F30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 317u, 0x08A69C98u>(ctx, &aot_mem) && ctx.pc == 0x08A38F30u) goto L_08A38F30;
    return;
L_08A38F30:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A38F34;
L_08A38F34:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38F10;
      }
      goto L_08A38F40;
    }
L_08A38F40:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38F98;
      }
      goto L_08A38F4C;
    }
L_08A38F4C:
    ctx.set_gpr(20, ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38F78;
      }
      goto L_08A38F58;
    }
L_08A38F58:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08A38F74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 589u, 0x08A2EA40u>(ctx, &aot_mem) && ctx.pc == 0x08A38F74u) goto L_08A38F74;
    return;
L_08A38F74:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    goto L_08A38F78;
L_08A38F78:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A38F58;
      }
      goto L_08A38F80;
    }
L_08A38F80:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38F98;
      }
      goto L_08A38F88;
    }
L_08A38F88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A38F98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 589u, 0x08A2EA40u>(ctx, &aot_mem) && ctx.pc == 0x08A38F98u) goto L_08A38F98;
    return;
L_08A38F98:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A38F9C;
L_08A38F9C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38DAC;
      }
      goto L_08A38FAC;
    }
L_08A38FAC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39060;
      }
      goto L_08A38FB8;
    }
L_08A38FB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39058;
      }
      goto L_08A38FC8;
    }
L_08A38FC8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A38FD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 600u, 0x08A5E878u>(ctx, &aot_mem) && ctx.pc == 0x08A38FD8u) goto L_08A38FD8;
    return;
L_08A38FD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39054;
      }
      goto L_08A38FE0;
    }
L_08A38FE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(20, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39024;
      }
      goto L_08A39004;
    }
L_08A39004:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08A39020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 589u, 0x08A2EA40u>(ctx, &aot_mem) && ctx.pc == 0x08A39020u) goto L_08A39020;
    return;
L_08A39020:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    goto L_08A39024;
L_08A39024:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A39004;
      }
      goto L_08A3902C;
    }
L_08A3902C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A3903Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 599u, 0x08A5E85Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3903Cu) goto L_08A3903C;
    return;
L_08A3903C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39054;
      }
      goto L_08A39044;
    }
L_08A39044:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A39054u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 589u, 0x08A2EA40u>(ctx, &aot_mem) && ctx.pc == 0x08A39054u) goto L_08A39054;
    return;
L_08A39054:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    goto L_08A39058;
L_08A39058:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A38FC8;
      }
      goto L_08A39060;
    }
L_08A39060:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A39064;
L_08A39064:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A39098:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22088)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22084)));
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22088), ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22084), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39128;
      }
      goto L_08A390DC;
    }
L_08A390DC:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-27336));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A390F8:
    ctx.set_gpr(31, 0x08A39100u);
    // nop
    goto L_08A3913C;
L_08A39100:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3912C;
      }
      goto L_08A39108;
    }
L_08A39108:
    ctx.set_gpr(31, 0x08A39110u);
    // nop
    goto L_08A39450;
L_08A39110:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3912C;
      }
      goto L_08A39118;
    }
L_08A39118:
    ctx.set_gpr(31, 0x08A39120u);
    // nop
    goto L_08A396E0;
L_08A39120:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3912C;
      }
      goto L_08A39128;
    }
L_08A39128:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A3912C;
L_08A3912C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3913C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A391A0;
      }
      goto L_08A39174;
    }
L_08A39174:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A39184u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A39184u) goto L_08A39184;
    return;
L_08A39184:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A391A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A391A0u) goto L_08A391A0;
    return;
L_08A391A0:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A391D4;
      }
      goto L_08A391B8;
    }
L_08A391B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(31, 0x08A391D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 478u, 0x0895DF98u>(ctx, &aot_mem) && ctx.pc == 0x08A391D4u) goto L_08A391D4;
    return;
L_08A391D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A39218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A39218u) goto L_08A39218;
    return;
L_08A39218:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[4] ^ 0u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39238;
      }
      goto L_08A3922C;
    }
L_08A3922C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3924C;
      }
      goto L_08A39238;
    }
L_08A39238:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08A3924C;
L_08A3924C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39270;
      }
      goto L_08A39254;
    }
L_08A39254:
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A39268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A39268u) goto L_08A39268;
    return;
L_08A39268:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39288;
      }
      goto L_08A39270;
    }
L_08A39270:
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A39288u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A39288u) goto L_08A39288;
    return;
L_08A39288:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08A392CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 538u, 0x08A2E4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A392CCu) goto L_08A392CC;
    return;
L_08A392CC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A392E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A392E0u) goto L_08A392E0;
    return;
L_08A392E0:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A393AC;
      }
      goto L_08A392F0;
    }
L_08A392F0:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(19, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A393A0;
      }
      goto L_08A3930C;
    }
L_08A3930C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3935C;
      }
      goto L_08A39314;
    }
L_08A39314:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A3933Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3933Cu) goto L_08A3933C;
    return;
L_08A3933C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A393AC;
      }
      goto L_08A3934C;
    }
L_08A3934C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A393AC;
      }
      goto L_08A39358;
    }
L_08A39358:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(4));
    goto L_08A3935C;
L_08A3935C:
    ctx.set_gpr(2, ctx.gpr[21] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A39314;
      }
      goto L_08A39368;
    }
L_08A39368:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A393AC;
      }
      goto L_08A39370;
    }
L_08A39370:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A39380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 317u, 0x08A69C98u>(ctx, &aot_mem) && ctx.pc == 0x08A39380u) goto L_08A39380;
    return;
L_08A39380:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A393AC;
      }
      goto L_08A39390;
    }
L_08A39390:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A393AC;
      }
      goto L_08A3939C;
    }
L_08A3939C:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(4));
    goto L_08A393A0;
L_08A393A0:
    ctx.set_gpr(2, ctx.gpr[21] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A39370;
      }
      goto L_08A393AC;
    }
L_08A393AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A393BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A393BCu) goto L_08A393BC;
    return;
L_08A393BC:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A393F0;
      }
      goto L_08A393E4;
    }
L_08A393E4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A393F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A393F0u) goto L_08A393F0;
    return;
L_08A393F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A39410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A39410u) goto L_08A39410;
    return;
L_08A39410:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A39424;
      }
      goto L_08A3941C;
    }
L_08A3941C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39428;
      }
      goto L_08A39424;
    }
L_08A39424:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A39428;
L_08A39428:
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
L_08A39450:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A394B4;
      }
      goto L_08A39488;
    }
L_08A39488:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A39498u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A39498u) goto L_08A39498;
    return;
L_08A39498:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A394B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A394B4u) goto L_08A394B4;
    return;
L_08A394B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(20, ctx.gpr[2] + static_cast<std::uint32_t>(-9));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A394F0;
      }
      goto L_08A394D4;
    }
L_08A394D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23816)));
    ctx.set_gpr(31, 0x08A394F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 478u, 0x0895DF98u>(ctx, &aot_mem) && ctx.pc == 0x08A394F0u) goto L_08A394F0;
    return;
L_08A394F0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[20]))));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A39528u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A39528u) goto L_08A39528;
    return;
L_08A39528:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23816)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A39554u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A39554u) goto L_08A39554;
    return;
L_08A39554:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[4] ^ 0u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39574;
      }
      goto L_08A39568;
    }
L_08A39568:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39588;
      }
      goto L_08A39574;
    }
L_08A39574:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08A39588;
L_08A39588:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A395B8;
      }
      goto L_08A39590;
    }
L_08A39590:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23820)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A395B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A395B0u) goto L_08A395B0;
    return;
L_08A395B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A395D0;
      }
      goto L_08A395B8;
    }
L_08A395B8:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A395D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A395D0u) goto L_08A395D0;
    return;
L_08A395D0:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08A39614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 538u, 0x08A2E4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A39614u) goto L_08A39614;
    return;
L_08A39614:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A39628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A39628u) goto L_08A39628;
    return;
L_08A39628:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A39638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A39638u) goto L_08A39638;
    return;
L_08A39638:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A3964Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3964Cu) goto L_08A3964C;
    return;
L_08A3964C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39680;
      }
      goto L_08A39674;
    }
L_08A39674:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A39680u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A39680u) goto L_08A39680;
    return;
L_08A39680:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A396A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A396A0u) goto L_08A396A0;
    return;
L_08A396A0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A396B4;
      }
      goto L_08A396AC;
    }
L_08A396AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A396B8;
      }
      goto L_08A396B4;
    }
L_08A396B4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A396B8;
L_08A396B8:
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
L_08A396E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39744;
      }
      goto L_08A39718;
    }
L_08A39718:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A39728u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A39728u) goto L_08A39728;
    return;
L_08A39728:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A39744u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A39744u) goto L_08A39744;
    return;
L_08A39744:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(20, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A39780;
      }
      goto L_08A39764;
    }
L_08A39764:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23732)));
    ctx.set_gpr(31, 0x08A39780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 478u, 0x0895DF98u>(ctx, &aot_mem) && ctx.pc == 0x08A39780u) goto L_08A39780;
    return;
L_08A39780:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[20]))));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A397B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A397B4u) goto L_08A397B4;
    return;
L_08A397B4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23732)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A397E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A397E0u) goto L_08A397E0;
    return;
L_08A397E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[4] ^ 0u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39800;
      }
      goto L_08A397F4;
    }
L_08A397F4:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39814;
      }
      goto L_08A39800;
    }
L_08A39800:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08A39814;
L_08A39814:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39844;
      }
      goto L_08A3981C;
    }
L_08A3981C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23736)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A3983Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A3983Cu) goto L_08A3983C;
    return;
L_08A3983C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3985C;
      }
      goto L_08A39844;
    }
L_08A39844:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3985Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3985Cu) goto L_08A3985C;
    return;
L_08A3985C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08A398A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 538u, 0x08A2E4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A398A0u) goto L_08A398A0;
    return;
L_08A398A0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A398B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A398B4u) goto L_08A398B4;
    return;
L_08A398B4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A398C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A398C4u) goto L_08A398C4;
    return;
L_08A398C4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A398D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A398D8u) goto L_08A398D8;
    return;
L_08A398D8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3990C;
      }
      goto L_08A39900;
    }
L_08A39900:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A3990Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3990Cu) goto L_08A3990C;
    return;
L_08A3990C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A3992Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A3992Cu) goto L_08A3992C;
    return;
L_08A3992C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A39940;
      }
      goto L_08A39938;
    }
L_08A39938:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39944;
      }
      goto L_08A39940;
    }
L_08A39940:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A39944;
L_08A39944:
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
L_08A3996C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08A3999Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 498u, 0x08A62738u>(ctx, &aot_mem) && ctx.pc == 0x08A3999Cu) goto L_08A3999C;
    return;
L_08A3999C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A399F4;
      }
      goto L_08A399DC;
    }
L_08A399DC:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39A20;
      }
      goto L_08A399F4;
    }
L_08A399F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39A1C;
      }
      goto L_08A39A00;
    }
L_08A39A00:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39A20;
      }
      goto L_08A39A1C;
    }
L_08A39A1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08A39A20;
L_08A39A20:
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(164));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08A39A34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A39A34u) goto L_08A39A34;
    return;
L_08A39A34:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A39A48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A39A48u) goto L_08A39A48;
    return;
L_08A39A48:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39AF0;
      }
      goto L_08A39A54;
    }
L_08A39A54:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39AA8;
      }
      goto L_08A39A70;
    }
L_08A39A70:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24940)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08A39A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08A39A90u) goto L_08A39A90;
    return;
L_08A39A90:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A39AA8;
L_08A39AA8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A39AEC;
      }
      goto L_08A39AB4;
    }
L_08A39AB4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24956)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08A39AD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 270u, 0x08A031C4u>(ctx, &aot_mem) && ctx.pc == 0x08A39AD4u) goto L_08A39AD4;
    return;
L_08A39AD4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A39AEC;
L_08A39AEC:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A39AF0;
L_08A39AF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A39A54;
      }
      goto L_08A39B04;
    }
L_08A39B04:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A39B28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22080)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22076)));
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22080), ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22076), ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39BB8;
      }
      goto L_08A39B80;
    }
L_08A39B80:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22088)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22084)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22088), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22084), ctx.gpr[3]);
    goto L_08A39BB8;
L_08A39BB8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08A39BC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 62u, 0x08A604F0u>(ctx, &aot_mem) && ctx.pc == 0x08A39BC8u) goto L_08A39BC8;
    return;
L_08A39BC8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A39BD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 445u, 0x08A3E044u>(ctx, &aot_mem) && ctx.pc == 0x08A39BD8u) goto L_08A39BD8;
    return;
L_08A39BD8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A39C04;
      }
      goto L_08A39BE0;
    }
L_08A39BE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A39BFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 844u, 0x0890FFD4u>(ctx, &aot_mem) && ctx.pc == 0x08A39BFCu) goto L_08A39BFC;
    return;
L_08A39BFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39C5C;
      }
      goto L_08A39C04;
    }
L_08A39C04:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A39C1C;
      }
      goto L_08A39C10;
    }
L_08A39C10:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A39C28;
      }
      goto L_08A39C1C;
    }
L_08A39C1C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39C60;
      }
      goto L_08A39C28;
    }
L_08A39C28:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A39C38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A39C38u) goto L_08A39C38;
    return;
L_08A39C38:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A39C4C;
      }
      goto L_08A39C44;
    }
L_08A39C44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39C50;
      }
      goto L_08A39C4C;
    }
L_08A39C4C:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08A39C50;
L_08A39C50:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39C60;
      }
      goto L_08A39C5C;
    }
L_08A39C5C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A39C60;
L_08A39C60:
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
L_08A39C7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39CE0;
      }
      goto L_08A39CBC;
    }
L_08A39CBC:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A39CDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 513u, 0x08A2E258u>(ctx, &aot_mem) && ctx.pc == 0x08A39CDCu) goto L_08A39CDC;
    return;
L_08A39CDC:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A39CE0;
L_08A39CE0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A39CBC;
      }
      goto L_08A39CEC;
    }
L_08A39CEC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A39CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A39CFCu) goto L_08A39CFC;
    return;
L_08A39CFC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39D2C;
      }
      goto L_08A39D08;
    }
L_08A39D08:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A39D28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 542u, 0x08A2E570u>(ctx, &aot_mem) && ctx.pc == 0x08A39D28u) goto L_08A39D28;
    return;
L_08A39D28:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    goto L_08A39D2C;
L_08A39D2C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A39D08;
      }
      goto L_08A39D34;
    }
L_08A39D34:
    ctx.set_gpr(2, 0u + 0u);
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
L_08A39D60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A39DE8;
      }
      goto L_08A39DD0;
    }
L_08A39DD0:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39E14;
      }
      goto L_08A39DE8;
    }
L_08A39DE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39E10;
      }
      goto L_08A39DF4;
    }
L_08A39DF4:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39E14;
      }
      goto L_08A39E10;
    }
L_08A39E10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08A39E14;
L_08A39E14:
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A39E28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08A39E28u) goto L_08A39E28;
    return;
L_08A39E28:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A39E54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 354u, 0x08A55804u>(ctx, &aot_mem) && ctx.pc == 0x08A39E54u) goto L_08A39E54;
    return;
L_08A39E54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39E90;
      }
      goto L_08A39E5C;
    }
L_08A39E5C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A39E6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 317u, 0x08A69C98u>(ctx, &aot_mem) && ctx.pc == 0x08A39E6Cu) goto L_08A39E6C;
    return;
L_08A39E6C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A39E80;
      }
      goto L_08A39E78;
    }
L_08A39E78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39E84;
      }
      goto L_08A39E80;
    }
L_08A39E80:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08A39E84;
L_08A39E84:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39E94;
      }
      goto L_08A39E90;
    }
L_08A39E90:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A39E94;
L_08A39E94:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A39EAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A39EC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 515u, 0x08A32C04u>(ctx, &aot_mem) && ctx.pc == 0x08A39EC8u) goto L_08A39EC8;
    return;
L_08A39EC8:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A39EDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A39EF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 3u, 0x08A34028u>(ctx, &aot_mem) && ctx.pc == 0x08A39EF8u) goto L_08A39EF8;
    return;
L_08A39EF8:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A39F0C:
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
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A39F78;
      }
      goto L_08A39F50;
    }
L_08A39F50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A39F68u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A39F68u) goto L_08A39F68;
    return;
L_08A39F68:
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A39F78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 51u, 0x08A58400u>(ctx, &aot_mem) && ctx.pc == 0x08A39F78u) goto L_08A39F78;
    return;
L_08A39F78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A39F98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 505u, 0x08A627F8u>(ctx, &aot_mem) && ctx.pc == 0x08A39F98u) goto L_08A39F98;
    return;
L_08A39F98:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A0B0;
      }
      goto L_08A39FA4;
    }
L_08A39FA4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A038;
      }
      goto L_08A39FCC;
    }
L_08A39FCC:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(30, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x08A3A008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3A008u) goto L_08A3A008;
    return;
L_08A3A008:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08A3A020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 538u, 0x08A2E4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3A020u) goto L_08A3A020;
    return;
L_08A3A020:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x08A3A034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A3A034u) goto L_08A3A034;
    return;
L_08A3A034:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A3A038;
L_08A3A038:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A39FCC;
      }
      goto L_08A3A048;
    }
L_08A3A048:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A3A058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A3A058u) goto L_08A3A058;
    return;
L_08A3A058:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A0A4;
      }
      goto L_08A3A068;
    }
L_08A3A068:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A3A0A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 591u, 0x08A2EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A0A0u) goto L_08A3A0A0;
    return;
L_08A3A0A0:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    goto L_08A3A0A4;
L_08A3A0A4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A3A068;
      }
      goto L_08A3A0AC;
    }
L_08A3A0AC:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A3A0B0;
L_08A3A0B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A39FA4;
      }
      goto L_08A3A0C0;
    }
L_08A3A0C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08A3A0CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 515u, 0x08A62900u>(ctx, &aot_mem) && ctx.pc == 0x08A3A0CCu) goto L_08A3A0CC;
    return;
L_08A3A0CC:
    ctx.set_gpr(2, 0u + 0u);
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
L_08A3A104:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A3A120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 473u, 0x08A5A3CCu>(ctx, &aot_mem) && ctx.pc == 0x08A3A120u) goto L_08A3A120;
    return;
L_08A3A120:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3A134:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A3A150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 148u, 0x08A5CC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A150u) goto L_08A3A150;
    return;
L_08A3A150:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3A164:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A3A180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 566u, 0x08A5E5E4u>(ctx, &aot_mem) && ctx.pc == 0x08A3A180u) goto L_08A3A180;
    return;
L_08A3A180:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3A194:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A3A1B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 262u, 0x08A41268u>(ctx, &aot_mem) && ctx.pc == 0x08A3A1B0u) goto L_08A3A1B0;
    return;
L_08A3A1B0:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3A1C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3A1F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3A1F4u) goto L_08A3A1F4;
    return;
L_08A3A1F4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A3A204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A3A204u) goto L_08A3A204;
    return;
L_08A3A204:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A3A218;
      }
      goto L_08A3A210;
    }
L_08A3A210:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A21C;
      }
      goto L_08A3A218;
    }
L_08A3A218:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08A3A21C;
L_08A3A21C:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
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
L_08A3A238:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A298;
      }
      goto L_08A3A27C;
    }
L_08A3A27C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23760)));
    ctx.set_gpr(31, 0x08A3A298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 478u, 0x0895DF98u>(ctx, &aot_mem) && ctx.pc == 0x08A3A298u) goto L_08A3A298;
    return;
L_08A3A298:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3A2C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3A2C8u) goto L_08A3A2C8;
    return;
L_08A3A2C8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3A2E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3A2E4u) goto L_08A3A2E4;
    return;
L_08A3A2E4:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3A308u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3A308u) goto L_08A3A308;
    return;
L_08A3A308:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A3A320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 585u, 0x08A2E9A8u>(ctx, &aot_mem) && ctx.pc == 0x08A3A320u) goto L_08A3A320;
    return;
L_08A3A320:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A3A330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A3A330u) goto L_08A3A330;
    return;
L_08A3A330:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A3A344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 589u, 0x08A2EA40u>(ctx, &aot_mem) && ctx.pc == 0x08A3A344u) goto L_08A3A344;
    return;
L_08A3A344:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3A358u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3A358u) goto L_08A3A358;
    return;
L_08A3A358:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A3A36C;
      }
      goto L_08A3A364;
    }
L_08A3A364:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A370;
      }
      goto L_08A3A36C;
    }
L_08A3A36C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A3A370;
L_08A3A370:
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
L_08A3A398:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3A3CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3A3CCu) goto L_08A3A3CC;
    return;
L_08A3A3CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A40C;
      }
      goto L_08A3A3D4;
    }
L_08A3A3D4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3A3ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3A3ECu) goto L_08A3A3EC;
    return;
L_08A3A3EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A40C;
      }
      goto L_08A3A3F4;
    }
L_08A3A3F4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A3A404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A3A404u) goto L_08A3A404;
    return;
L_08A3A404:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A4A4;
      }
      goto L_08A3A40C;
    }
L_08A3A40C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3A424u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3A424u) goto L_08A3A424;
    return;
L_08A3A424:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3A438u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3A438u) goto L_08A3A438;
    return;
L_08A3A438:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A470;
      }
      goto L_08A3A444;
    }
L_08A3A444:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3A45Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3A45Cu) goto L_08A3A45C;
    return;
L_08A3A45C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A3A470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 505u, 0x08A627F8u>(ctx, &aot_mem) && ctx.pc == 0x08A3A470u) goto L_08A3A470;
    return;
L_08A3A470:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3A488u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3A488u) goto L_08A3A488;
    return;
L_08A3A488:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A4A0;
      }
      goto L_08A3A494;
    }
L_08A3A494:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08A3A4A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 515u, 0x08A62900u>(ctx, &aot_mem) && ctx.pc == 0x08A3A4A0u) goto L_08A3A4A0;
    return;
L_08A3A4A0:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08A3A4A4;
L_08A3A4A4:
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
L_08A3A4C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3A4CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3A4FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3A4FCu) goto L_08A3A4FC;
    return;
L_08A3A4FC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3A514u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3A514u) goto L_08A3A514;
    return;
L_08A3A514:
    ctx.set_gpr(2, 0u + 0u);
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
L_08A3A530:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A590;
      }
      goto L_08A3A574;
    }
L_08A3A574:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(31, 0x08A3A590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 478u, 0x0895DF98u>(ctx, &aot_mem) && ctx.pc == 0x08A3A590u) goto L_08A3A590;
    return;
L_08A3A590:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(248)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A3A5E0;
      }
      goto L_08A3A5C0;
    }
L_08A3A5C0:
    ctx.set_gpr(21, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A3A5CCu);
    // nop
    goto L_08A38C00;
L_08A3A5CC:
    ctx.set_gpr(3, ctx.gpr[21] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A5E4;
      }
      goto L_08A3A5E0;
    }
L_08A3A5E0:
    ctx.set_gpr(21, 0u + 0u);
    goto L_08A3A5E4;
L_08A3A5E4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A3A5F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A3A5F0u) goto L_08A3A5F0;
    return;
L_08A3A5F0:
    ctx.set_gpr(2, ctx.gpr[16] << 6u);
    ctx.set_gpr(5, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A3A608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A3A608u) goto L_08A3A608;
    return;
L_08A3A608:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3A620u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3A620u) goto L_08A3A620;
    return;
L_08A3A620:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08A3A664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 538u, 0x08A2E4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3A664u) goto L_08A3A664;
    return;
L_08A3A664:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A3A678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A3A678u) goto L_08A3A678;
    return;
L_08A3A678:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A3A688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A3A688u) goto L_08A3A688;
    return;
L_08A3A688:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A3A69Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3A69Cu) goto L_08A3A69C;
    return;
L_08A3A69C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A6D0;
      }
      goto L_08A3A6C4;
    }
L_08A3A6C4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A3A6D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3A6D0u) goto L_08A3A6D0;
    return;
L_08A3A6D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A3A6F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A3A6F0u) goto L_08A3A6F0;
    return;
L_08A3A6F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A3A704;
      }
      goto L_08A3A6FC;
    }
L_08A3A6FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A708;
      }
      goto L_08A3A704;
    }
L_08A3A704:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A3A708;
L_08A3A708:
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
L_08A3A730:
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
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A794;
      }
      goto L_08A3A778;
    }
L_08A3A778:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25504)));
    ctx.set_gpr(31, 0x08A3A794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 478u, 0x0895DF98u>(ctx, &aot_mem) && ctx.pc == 0x08A3A794u) goto L_08A3A794;
    return;
L_08A3A794:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(252)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A3A7E0;
      }
      goto L_08A3A7C0;
    }
L_08A3A7C0:
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A3A7CCu);
    // nop
    goto L_08A38C00;
L_08A3A7CC:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A7E4;
      }
      goto L_08A3A7E0;
    }
L_08A3A7E0:
    ctx.set_gpr(22, 0u + 0u);
    goto L_08A3A7E4;
L_08A3A7E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A830;
      }
      goto L_08A3A7FC;
    }
L_08A3A7FC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A814;
      }
      goto L_08A3A808;
    }
L_08A3A808:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3A814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x08A3A814u) goto L_08A3A814;
    return;
L_08A3A814:
    ctx.set_gpr(5, ctx.gpr[18] << 6u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A3A828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 6u, 0x0894806Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A828u) goto L_08A3A828;
    return;
L_08A3A828:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    goto L_08A3A830;
L_08A3A830:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A870;
      }
      goto L_08A3A844;
    }
L_08A3A844:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 6u);
    ctx.set_gpr(5, ctx.gpr[22] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A3A868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A868u) goto L_08A3A868;
    return;
L_08A3A868:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(64));
    goto L_08A3A870;
L_08A3A870:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A844;
      }
      goto L_08A3A884;
    }
L_08A3A884:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08A3A8C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 538u, 0x08A2E4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3A8C8u) goto L_08A3A8C8;
    return;
L_08A3A8C8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A3A8DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A3A8DCu) goto L_08A3A8DC;
    return;
L_08A3A8DC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A3A8ECu);
    // nop
    goto L_08A3814C;
L_08A3A8EC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A3A900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3A900u) goto L_08A3A900;
    return;
L_08A3A900:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A934;
      }
      goto L_08A3A928;
    }
L_08A3A928:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A3A934u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3A934u) goto L_08A3A934;
    return;
L_08A3A934:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A3A954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A3A954u) goto L_08A3A954;
    return;
L_08A3A954:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A3A968;
      }
      goto L_08A3A960;
    }
L_08A3A960:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A96C;
      }
      goto L_08A3A968;
    }
L_08A3A968:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A3A96C;
L_08A3A96C:
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
L_08A3A998:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A9D0;
      }
      goto L_08A3A9C8;
    }
L_08A3A9C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A9D8;
      }
      goto L_08A3A9D0;
    }
L_08A3A9D0:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8240));
    goto L_08A3A9D8;
L_08A3A9D8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3A9E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 567u, 0x08A37140u>(ctx, &aot_mem) && ctx.pc == 0x08A3A9E4u) goto L_08A3A9E4;
    return;
L_08A3A9E4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AA70;
      }
      goto L_08A3A9F0;
    }
L_08A3A9F0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AA0C;
      }
      goto L_08A3AA04;
    }
L_08A3AA04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AA14;
      }
      goto L_08A3AA0C;
    }
L_08A3AA0C:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8240));
    goto L_08A3AA14;
L_08A3AA14:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A3AA24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 537u, 0x08A36EA8u>(ctx, &aot_mem) && ctx.pc == 0x08A3AA24u) goto L_08A3AA24;
    return;
L_08A3AA24:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A3AA34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 317u, 0x08A69C98u>(ctx, &aot_mem) && ctx.pc == 0x08A3AA34u) goto L_08A3AA34;
    return;
L_08A3AA34:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AA54;
      }
      goto L_08A3AA4C;
    }
L_08A3AA4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AA5C;
      }
      goto L_08A3AA54;
    }
L_08A3AA54:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8240));
    goto L_08A3AA5C;
L_08A3AA5C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3AA68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 559u, 0x08A3706Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3AA68u) goto L_08A3AA68;
    return;
L_08A3AA68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AA84;
      }
      goto L_08A3AA70;
    }
L_08A3AA70:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A3AA80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A3AA80u) goto L_08A3AA80;
    return;
L_08A3AA80:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    goto L_08A3AA84;
L_08A3AA84:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
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
L_08A3AAA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3AADCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3AADCu) goto L_08A3AADC;
    return;
L_08A3AADC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, 15258u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] | 51712u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A3AB00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 305u, 0x0881D5C0u>(ctx, &aot_mem) && ctx.pc == 0x08A3AB00u) goto L_08A3AB00;
    return;
L_08A3AB00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A3AB10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 116u, 0x0881C89Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3AB10u) goto L_08A3AB10;
    return;
L_08A3AB10:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(20, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, 15258u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 51712u);
    ctx.set_gpr(31, 0x08A3AB28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3AB28u) goto L_08A3AB28;
    return;
L_08A3AB28:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A3AB40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08A3AB40u) goto L_08A3AB40;
    return;
L_08A3AB40:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(20, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, 15258u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] | 51712u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A3AB64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 187u, 0x0881CF34u>(ctx, &aot_mem) && ctx.pc == 0x08A3AB64u) goto L_08A3AB64;
    return;
L_08A3AB64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A3AB74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 116u, 0x0881C89Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3AB74u) goto L_08A3AB74;
    return;
L_08A3AB74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A3AB8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08A3AB8Cu) goto L_08A3AB8C;
    return;
L_08A3AB8C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A3ABA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 72u, 0x08A6472Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3ABA0u) goto L_08A3ABA0;
    return;
L_08A3ABA0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3ABB8;
      }
      goto L_08A3ABAC;
    }
L_08A3ABAC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08A3ABB8;
L_08A3ABB8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3ABE4;
      }
      goto L_08A3ABC4;
    }
L_08A3ABC4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3ABD8;
      }
      goto L_08A3ABCC;
    }
L_08A3ABCC:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A3ABD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A3ABD8u) goto L_08A3ABD8;
    return;
L_08A3ABD8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AC0C;
      }
      goto L_08A3ABE4;
    }
L_08A3ABE4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A3ABF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 317u, 0x08A69C98u>(ctx, &aot_mem) && ctx.pc == 0x08A3ABF0u) goto L_08A3ABF0;
    return;
L_08A3ABF0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AC08;
      }
      goto L_08A3AC00;
    }
L_08A3AC00:
    ctx.set_gpr(31, 0x08A3AC08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A3AC08u) goto L_08A3AC08;
    return;
L_08A3AC08:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08A3AC0C;
L_08A3AC0C:
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
L_08A3AC34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22080)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22076)));
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22080), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22076), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AC9C;
      }
      goto L_08A3AC84;
    }
L_08A3AC84:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3AC9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3AC9Cu) goto L_08A3AC9C;
    return;
L_08A3AC9C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3ACB4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3ACB4u) goto L_08A3ACB4;
    return;
L_08A3ACB4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A3ACCC;
      }
      goto L_08A3ACC0;
    }
L_08A3ACC0:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3ACD0;
      }
      goto L_08A3ACCC;
    }
L_08A3ACCC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A3ACD0;
L_08A3ACD0:
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
L_08A3ACE8:
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
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(30, ctx.gpr[19] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AD9C;
      }
      goto L_08A3AD3C;
    }
L_08A3AD3C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08A3AD6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3AD6Cu) goto L_08A3AD6C;
    return;
L_08A3AD6C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08A3AD84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 538u, 0x08A2E4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3AD84u) goto L_08A3AD84;
    return;
L_08A3AD84:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08A3AD98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A3AD98u) goto L_08A3AD98;
    return;
L_08A3AD98:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    goto L_08A3AD9C;
L_08A3AD9C:
    ctx.set_gpr(2, ctx.gpr[19] < ctx.gpr[30] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AD3C;
      }
      goto L_08A3ADA8;
    }
L_08A3ADA8:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AEEC;
      }
      goto L_08A3ADBC;
    }
L_08A3ADBC:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(472)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3ADF0;
      }
      goto L_08A3ADD4;
    }
L_08A3ADD4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24276)));
    ctx.set_gpr(31, 0x08A3ADF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 478u, 0x0895DF98u>(ctx, &aot_mem) && ctx.pc == 0x08A3ADF0u) goto L_08A3ADF0;
    return;
L_08A3ADF0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24276)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A3AE34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3AE34u) goto L_08A3AE34;
    return;
L_08A3AE34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[4] ^ 0u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AE54;
      }
      goto L_08A3AE48;
    }
L_08A3AE48:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AE68;
      }
      goto L_08A3AE54;
    }
L_08A3AE54:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08A3AE68;
L_08A3AE68:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AE84;
      }
      goto L_08A3AE74;
    }
L_08A3AE74:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A3AE84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 305u, 0x08949578u>(ctx, &aot_mem) && ctx.pc == 0x08A3AE84u) goto L_08A3AE84;
    return;
L_08A3AE84:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A3AE94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 305u, 0x08949578u>(ctx, &aot_mem) && ctx.pc == 0x08A3AE94u) goto L_08A3AE94;
    return;
L_08A3AE94:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[22] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08A3AED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 538u, 0x08A2E4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3AED8u) goto L_08A3AED8;
    return;
L_08A3AED8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08A3AEECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A3AEECu) goto L_08A3AEEC;
    return;
L_08A3AEEC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AF34;
      }
      goto L_08A3AEF8;
    }
L_08A3AEF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x08A3AF08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 477u, 0x08A2DFE0u>(ctx, &aot_mem) && ctx.pc == 0x08A3AF08u) goto L_08A3AF08;
    return;
L_08A3AF08:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08A3AF1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 470u, 0x0884D91Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3AF1Cu) goto L_08A3AF1C;
    return;
L_08A3AF1C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A3AF34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 844u, 0x0890FFD4u>(ctx, &aot_mem) && ctx.pc == 0x08A3AF34u) goto L_08A3AF34;
    return;
L_08A3AF34:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B000;
      }
      goto L_08A3AF44;
    }
L_08A3AF44:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(30, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AFF4;
      }
      goto L_08A3AF60;
    }
L_08A3AF60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AFB0;
      }
      goto L_08A3AF68;
    }
L_08A3AF68:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A3AF90u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3AF90u) goto L_08A3AF90;
    return;
L_08A3AF90:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A3B000;
      }
      goto L_08A3AFA0;
    }
L_08A3AFA0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A3B000;
      }
      goto L_08A3AFAC;
    }
L_08A3AFAC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_08A3AFB0;
L_08A3AFB0:
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[30] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AF68;
      }
      goto L_08A3AFBC;
    }
L_08A3AFBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B000;
      }
      goto L_08A3AFC4;
    }
L_08A3AFC4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A3AFD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 317u, 0x08A69C98u>(ctx, &aot_mem) && ctx.pc == 0x08A3AFD4u) goto L_08A3AFD4;
    return;
L_08A3AFD4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A3B000;
      }
      goto L_08A3AFE4;
    }
L_08A3AFE4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A3B000;
      }
      goto L_08A3AFF0;
    }
L_08A3AFF0:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_08A3AFF4;
L_08A3AFF4:
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[30] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AFC4;
      }
      goto L_08A3B000;
    }
L_08A3B000:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B06C;
      }
      goto L_08A3B008;
    }
L_08A3B008:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08A3B018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3B018u) goto L_08A3B018;
    return;
L_08A3B018:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B04C;
      }
      goto L_08A3B040;
    }
L_08A3B040:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A3B04Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3B04Cu) goto L_08A3B04C;
    return;
L_08A3B04C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08A3B06Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A3B06Cu) goto L_08A3B06C;
    return;
L_08A3B06C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B0C0;
      }
      goto L_08A3B074;
    }
L_08A3B074:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B0B4;
      }
      goto L_08A3B084;
    }
L_08A3B084:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A3B0B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 591u, 0x08A2EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B0B0u) goto L_08A3B0B0;
    return;
L_08A3B0B0:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(-4));
    goto L_08A3B0B4;
L_08A3B0B4:
    ctx.set_gpr(1, ctx.gpr[19] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B084;
      }
      goto L_08A3B0C0;
    }
L_08A3B0C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A3B0D4;
      }
      goto L_08A3B0CC;
    }
L_08A3B0CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B0D8;
      }
      goto L_08A3B0D4;
    }
L_08A3B0D4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A3B0D8;
L_08A3B0D8:
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
L_08A3B10C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22060)));
    ctx.set_gpr(31, 0x08A3B128u);
    // nop
    goto L_08A3B3F8;
L_08A3B128:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3B138:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A3B148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A3B148u) goto L_08A3B148;
    return;
L_08A3B148:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A3B154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A3B154u) goto L_08A3B154;
    return;
L_08A3B154:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A3B160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 362u, 0x08A0DE90u>(ctx, &aot_mem) && ctx.pc == 0x08A3B160u) goto L_08A3B160;
    return;
L_08A3B160:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22060), ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3B178:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-22060)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B1B4;
      }
      goto L_08A3B190;
    }
L_08A3B190:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B1B4;
      }
      goto L_08A3B1AC;
    }
L_08A3B1AC:
    ctx.set_gpr(31, 0x08A3B1B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A3B1B4u) goto L_08A3B1B4;
    return;
L_08A3B1B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3B1C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A3B1DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 376u, 0x08A36134u>(ctx, &aot_mem) && ctx.pc == 0x08A3B1DCu) goto L_08A3B1DC;
    return;
L_08A3B1DC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22060)));
    ctx.set_gpr(31, 0x08A3B1F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A3B1F0u) goto L_08A3B1F0;
    return;
L_08A3B1F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3B204:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(496)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B258;
      }
      goto L_08A3B234;
    }
L_08A3B234:
    ctx.set_gpr(4, ctx.gpr[19] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B254;
      }
      goto L_08A3B24C;
    }
L_08A3B24C:
    ctx.set_gpr(31, 0x08A3B254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A3B254u) goto L_08A3B254;
    return;
L_08A3B254:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A3B258;
L_08A3B258:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B234;
      }
      goto L_08A3B264;
    }
L_08A3B264:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B288;
      }
      goto L_08A3B274;
    }
L_08A3B274:
    ctx.set_gpr(4, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A3B288;
L_08A3B288:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B274;
      }
      goto L_08A3B294;
    }
L_08A3B294:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(500)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B2D0;
      }
      goto L_08A3B2AC;
    }
L_08A3B2AC:
    ctx.set_gpr(4, ctx.gpr[19] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B2CC;
      }
      goto L_08A3B2C4;
    }
L_08A3B2C4:
    ctx.set_gpr(31, 0x08A3B2CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A3B2CCu) goto L_08A3B2CC;
    return;
L_08A3B2CC:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A3B2D0;
L_08A3B2D0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B2AC;
      }
      goto L_08A3B2DC;
    }
L_08A3B2DC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B300;
      }
      goto L_08A3B2EC;
    }
L_08A3B2EC:
    ctx.set_gpr(4, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A3B300;
L_08A3B300:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B2EC;
      }
      goto L_08A3B30C;
    }
L_08A3B30C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(516)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(528)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B350;
      }
      goto L_08A3B32C;
    }
L_08A3B32C:
    ctx.set_gpr(4, ctx.gpr[19] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B34C;
      }
      goto L_08A3B344;
    }
L_08A3B344:
    ctx.set_gpr(31, 0x08A3B34Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A3B34Cu) goto L_08A3B34C;
    return;
L_08A3B34C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A3B350;
L_08A3B350:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B32C;
      }
      goto L_08A3B35C;
    }
L_08A3B35C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B380;
      }
      goto L_08A3B36C;
    }
L_08A3B36C:
    ctx.set_gpr(4, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A3B380;
L_08A3B380:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B36C;
      }
      goto L_08A3B38C;
    }
L_08A3B38C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(508), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(520), static_cast<std::uint8_t>(0u));
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
L_08A3B3B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A3B3D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 398u, 0x08A36278u>(ctx, &aot_mem) && ctx.pc == 0x08A3B3D0u) goto L_08A3B3D0;
    return;
L_08A3B3D0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3B3E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3B3E4u) goto L_08A3B3E4;
    return;
L_08A3B3E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3B3F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A3B418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 361u, 0x08A35E48u>(ctx, &aot_mem) && ctx.pc == 0x08A3B418u) goto L_08A3B418;
    return;
L_08A3B418:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25400)));
    ctx.set_gpr(31, 0x08A3B42Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B42Cu) goto L_08A3B42C;
    return;
L_08A3B42C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B454;
      }
      goto L_08A3B434;
    }
L_08A3B434:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 2212u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14120));
    ctx.set_gpr(31, 0x08A3B44Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 339u, 0x08A69EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A3B44Cu) goto L_08A3B44C;
    return;
L_08A3B44C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B7D0;
      }
      goto L_08A3B454;
    }
L_08A3B454:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24016)));
    ctx.set_gpr(31, 0x08A3B468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B468u) goto L_08A3B468;
    return;
L_08A3B468:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B490;
      }
      goto L_08A3B470;
    }
L_08A3B470:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 2212u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14100));
    ctx.set_gpr(31, 0x08A3B488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 339u, 0x08A69EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A3B488u) goto L_08A3B488;
    return;
L_08A3B488:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B7D0;
      }
      goto L_08A3B490;
    }
L_08A3B490:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24180)));
    ctx.set_gpr(31, 0x08A3B4A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B4A4u) goto L_08A3B4A4;
    return;
L_08A3B4A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B4CC;
      }
      goto L_08A3B4AC;
    }
L_08A3B4AC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 2212u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13980));
    ctx.set_gpr(31, 0x08A3B4C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 339u, 0x08A69EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A3B4C4u) goto L_08A3B4C4;
    return;
L_08A3B4C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B7D0;
      }
      goto L_08A3B4CC;
    }
L_08A3B4CC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25044)));
    ctx.set_gpr(31, 0x08A3B4E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B4E0u) goto L_08A3B4E0;
    return;
L_08A3B4E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B508;
      }
      goto L_08A3B4E8;
    }
L_08A3B4E8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 2212u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14080));
    ctx.set_gpr(31, 0x08A3B500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 339u, 0x08A69EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A3B500u) goto L_08A3B500;
    return;
L_08A3B500:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B7D0;
      }
      goto L_08A3B508;
    }
L_08A3B508:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23488)));
    ctx.set_gpr(31, 0x08A3B51Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B51Cu) goto L_08A3B51C;
    return;
L_08A3B51C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B544;
      }
      goto L_08A3B524;
    }
L_08A3B524:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 2212u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14060));
    ctx.set_gpr(31, 0x08A3B53Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 339u, 0x08A69EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A3B53Cu) goto L_08A3B53C;
    return;
L_08A3B53C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B7D0;
      }
      goto L_08A3B544;
    }
L_08A3B544:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23360)));
    ctx.set_gpr(31, 0x08A3B558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B558u) goto L_08A3B558;
    return;
L_08A3B558:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B580;
      }
      goto L_08A3B560;
    }
L_08A3B560:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 2212u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14040));
    ctx.set_gpr(31, 0x08A3B578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 339u, 0x08A69EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A3B578u) goto L_08A3B578;
    return;
L_08A3B578:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B7D0;
      }
      goto L_08A3B580;
    }
L_08A3B580:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25204)));
    ctx.set_gpr(31, 0x08A3B594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B594u) goto L_08A3B594;
    return;
L_08A3B594:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B5BC;
      }
      goto L_08A3B59C;
    }
L_08A3B59C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 2212u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14020));
    ctx.set_gpr(31, 0x08A3B5B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 339u, 0x08A69EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A3B5B4u) goto L_08A3B5B4;
    return;
L_08A3B5B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B7D0;
      }
      goto L_08A3B5BC;
    }
L_08A3B5BC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25752)));
    ctx.set_gpr(31, 0x08A3B5D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B5D0u) goto L_08A3B5D0;
    return;
L_08A3B5D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B5F8;
      }
      goto L_08A3B5D8;
    }
L_08A3B5D8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 2212u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14000));
    ctx.set_gpr(31, 0x08A3B5F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 339u, 0x08A69EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A3B5F0u) goto L_08A3B5F0;
    return;
L_08A3B5F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B7D0;
      }
      goto L_08A3B5F8;
    }
L_08A3B5F8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24260)));
    ctx.set_gpr(31, 0x08A3B60Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B60Cu) goto L_08A3B60C;
    return;
L_08A3B60C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B634;
      }
      goto L_08A3B614;
    }
L_08A3B614:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 2212u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-15728));
    ctx.set_gpr(31, 0x08A3B62Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 339u, 0x08A69EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A3B62Cu) goto L_08A3B62C;
    return;
L_08A3B62C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B7D0;
      }
      goto L_08A3B634;
    }
L_08A3B634:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24564)));
    ctx.set_gpr(31, 0x08A3B648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B648u) goto L_08A3B648;
    return;
L_08A3B648:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B670;
      }
      goto L_08A3B650;
    }
L_08A3B650:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 2212u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-15952));
    ctx.set_gpr(31, 0x08A3B668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 339u, 0x08A69EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A3B668u) goto L_08A3B668;
    return;
L_08A3B668:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B7D0;
      }
      goto L_08A3B670;
    }
L_08A3B670:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26360)));
    ctx.set_gpr(31, 0x08A3B684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B684u) goto L_08A3B684;
    return;
L_08A3B684:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B6AC;
      }
      goto L_08A3B68C;
    }
L_08A3B68C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 2212u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-17880));
    ctx.set_gpr(31, 0x08A3B6A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 339u, 0x08A69EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A3B6A4u) goto L_08A3B6A4;
    return;
L_08A3B6A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B7D0;
      }
      goto L_08A3B6AC;
    }
L_08A3B6AC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23836)));
    ctx.set_gpr(31, 0x08A3B6C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B6C0u) goto L_08A3B6C0;
    return;
L_08A3B6C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B6E8;
      }
      goto L_08A3B6C8;
    }
L_08A3B6C8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 2212u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13156));
    ctx.set_gpr(31, 0x08A3B6E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 339u, 0x08A69EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A3B6E0u) goto L_08A3B6E0;
    return;
L_08A3B6E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B7D0;
      }
      goto L_08A3B6E8;
    }
L_08A3B6E8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24624)));
    ctx.set_gpr(31, 0x08A3B6FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B6FCu) goto L_08A3B6FC;
    return;
L_08A3B6FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B724;
      }
      goto L_08A3B704;
    }
L_08A3B704:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 2212u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13892));
    ctx.set_gpr(31, 0x08A3B71Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 339u, 0x08A69EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A3B71Cu) goto L_08A3B71C;
    return;
L_08A3B71C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B7D0;
      }
      goto L_08A3B724;
    }
L_08A3B724:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23196)));
    ctx.set_gpr(31, 0x08A3B738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B738u) goto L_08A3B738;
    return;
L_08A3B738:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B760;
      }
      goto L_08A3B740;
    }
L_08A3B740:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 2212u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13560));
    ctx.set_gpr(31, 0x08A3B758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 339u, 0x08A69EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A3B758u) goto L_08A3B758;
    return;
L_08A3B758:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B7D0;
      }
      goto L_08A3B760;
    }
L_08A3B760:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22500)));
    ctx.set_gpr(31, 0x08A3B774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B774u) goto L_08A3B774;
    return;
L_08A3B774:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B79C;
      }
      goto L_08A3B77C;
    }
L_08A3B77C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 2212u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13028));
    ctx.set_gpr(31, 0x08A3B794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 339u, 0x08A69EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A3B794u) goto L_08A3B794;
    return;
L_08A3B794:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B7D0;
      }
      goto L_08A3B79C;
    }
L_08A3B79C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25504)));
    ctx.set_gpr(31, 0x08A3B7B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B7B0u) goto L_08A3B7B0;
    return;
L_08A3B7B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B7D0;
      }
      goto L_08A3B7B8;
    }
L_08A3B7B8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 2212u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13016));
    ctx.set_gpr(31, 0x08A3B7D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 339u, 0x08A69EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A3B7D0u) goto L_08A3B7D0;
    return;
L_08A3B7D0:
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
L_08A3B7E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B868;
      }
      goto L_08A3B818;
    }
L_08A3B818:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25424)));
    ctx.set_gpr(31, 0x08A3B830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 521u, 0x08A36D78u>(ctx, &aot_mem) && ctx.pc == 0x08A3B830u) goto L_08A3B830;
    return;
L_08A3B830:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A3B840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 116u, 0x08A28AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A3B840u) goto L_08A3B840;
    return;
L_08A3B840:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A3B850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 115u, 0x08A28AA8u>(ctx, &aot_mem) && ctx.pc == 0x08A3B850u) goto L_08A3B850;
    return;
L_08A3B850:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3B868u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3B868u) goto L_08A3B868;
    return;
L_08A3B868:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3B874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B874u) goto L_08A3B874;
    return;
L_08A3B874:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A3B880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 355u, 0x088BA060u>(ctx, &aot_mem) && ctx.pc == 0x08A3B880u) goto L_08A3B880;
    return;
L_08A3B880:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3B890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B890u) goto L_08A3B890;
    return;
L_08A3B890:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A3B89Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 365u, 0x08A1DF18u>(ctx, &aot_mem) && ctx.pc == 0x08A3B89Cu) goto L_08A3B89C;
    return;
L_08A3B89C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A3B8B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A3B8B0u) goto L_08A3B8B0;
    return;
L_08A3B8B0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(540), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08A3B8D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A3B8D4u) goto L_08A3B8D4;
    return;
L_08A3B8D4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08A3B8E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 444u, 0x08A36694u>(ctx, &aot_mem) && ctx.pc == 0x08A3B8E4u) goto L_08A3B8E4;
    return;
L_08A3B8E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3B8FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3B8FCu) goto L_08A3B8FC;
    return;
L_08A3B8FC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(496)));
    ctx.set_gpr(31, 0x08A3B90Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A3B90Cu) goto L_08A3B90C;
    return;
L_08A3B90C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(500)));
    ctx.set_gpr(31, 0x08A3B91Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A3B91Cu) goto L_08A3B91C;
    return;
L_08A3B91C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x08A3B92Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 585u, 0x08A2E9A8u>(ctx, &aot_mem) && ctx.pc == 0x08A3B92Cu) goto L_08A3B92C;
    return;
L_08A3B92C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B940;
      }
      goto L_08A3B938;
    }
L_08A3B938:
    ctx.set_gpr(31, 0x08A3B940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A3B940u) goto L_08A3B940;
    return;
L_08A3B940:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B954;
      }
      goto L_08A3B94C;
    }
L_08A3B94C:
    ctx.set_gpr(31, 0x08A3B954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A3B954u) goto L_08A3B954;
    return;
L_08A3B954:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B97C;
      }
      goto L_08A3B960;
    }
L_08A3B960:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3B97Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3B97Cu) goto L_08A3B97C;
    return;
L_08A3B97C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A3B98Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 331u, 0x08A69DB4u>(ctx, &aot_mem) && ctx.pc == 0x08A3B98Cu) goto L_08A3B98C;
    return;
L_08A3B98C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3B9B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A3B9D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 489u, 0x08A36A68u>(ctx, &aot_mem) && ctx.pc == 0x08A3B9D0u) goto L_08A3B9D0;
    return;
L_08A3B9D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08A3B9E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 62u, 0x08A604F0u>(ctx, &aot_mem) && ctx.pc == 0x08A3B9E0u) goto L_08A3B9E0;
    return;
L_08A3B9E0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BA00;
      }
      goto L_08A3B9EC;
    }
L_08A3B9EC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3BA00u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3BA00u) goto L_08A3BA00;
    return;
L_08A3BA00:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A3BA10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 333u, 0x08A69E08u>(ctx, &aot_mem) && ctx.pc == 0x08A3BA10u) goto L_08A3BA10;
    return;
L_08A3BA10:
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
L_08A3BA28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3BA50u);
    // nop
    goto L_08A3BA7C;
L_08A3BA50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3BA64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 10u, 0x08A3C0DCu>(ctx, &aot_mem) && ctx.pc == 0x08A3BA64u) goto L_08A3BA64;
    return;
L_08A3BA64:
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
L_08A3BA7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
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
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3BAC0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3BAC0u) goto L_08A3BAC0;
    return;
L_08A3BAC0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3BADCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3BADCu) goto L_08A3BADC;
    return;
L_08A3BADC:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BDA0;
      }
      goto L_08A3BAF0;
    }
L_08A3BAF0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A3BB18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3BB18u) goto L_08A3BB18;
    return;
L_08A3BB18:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[4] ^ 0u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BB38;
      }
      goto L_08A3BB2C;
    }
L_08A3BB2C:
    ctx.set_gpr(23, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BB4C;
      }
      goto L_08A3BB38;
    }
L_08A3BB38:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08A3BB4C;
L_08A3BB4C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A3BB58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3BB58u) goto L_08A3BB58;
    return;
L_08A3BB58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A3BB64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 355u, 0x088BA060u>(ctx, &aot_mem) && ctx.pc == 0x08A3BB64u) goto L_08A3BB64;
    return;
L_08A3BB64:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A3BB74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3BB74u) goto L_08A3BB74;
    return;
L_08A3BB74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A3BB80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 365u, 0x08A1DF18u>(ctx, &aot_mem) && ctx.pc == 0x08A3BB80u) goto L_08A3BB80;
    return;
L_08A3BB80:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(516)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BBB0;
      }
      goto L_08A3BB9C;
    }
L_08A3BB9C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BBC4;
      }
      goto L_08A3BBB0;
    }
L_08A3BBB0:
    ctx.set_gpr(5, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A3BBC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3BBC4u) goto L_08A3BBC4;
    return;
L_08A3BBC4:
    ctx.set_gpr(3, ctx.gpr[22] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BBF0;
      }
      goto L_08A3BBE8;
    }
L_08A3BBE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BBF8;
      }
      goto L_08A3BBF0;
    }
L_08A3BBF0:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8240));
    goto L_08A3BBF8;
L_08A3BBF8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BC0C;
      }
      goto L_08A3BC00;
    }
L_08A3BC00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x08A3BC0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x08A3BC0Cu) goto L_08A3BC0C;
    return;
L_08A3BC0C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A3BC1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A3BC1Cu) goto L_08A3BC1C;
    return;
L_08A3BC1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BC40;
      }
      goto L_08A3BC28;
    }
L_08A3BC28:
    ctx.set_gpr(5, ctx.gpr[21] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3BC40u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3BC40u) goto L_08A3BC40;
    return;
L_08A3BC40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(496)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A3BC58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x08A3BC58u) goto L_08A3BC58;
    return;
L_08A3BC58:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(540)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(540)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(540), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24564)));
    ctx.set_gpr(31, 0x08A3BC84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3BC84u) goto L_08A3BC84;
    return;
L_08A3BC84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BD14;
      }
      goto L_08A3BC8C;
    }
L_08A3BC8C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(532)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A3BCA0;
      }
      goto L_08A3BC9C;
    }
L_08A3BC9C:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08A3BCA0;
L_08A3BCA0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24560)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(504)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(504)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BCF0;
      }
      goto L_08A3BCDC;
    }
L_08A3BCDC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BD04;
      }
      goto L_08A3BCF0;
    }
L_08A3BCF0:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A3BD04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3BD04u) goto L_08A3BD04;
    return;
L_08A3BD04:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    goto L_08A3BD14;
L_08A3BD14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(496)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A3BD24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A3BD24u) goto L_08A3BD24;
    return;
L_08A3BD24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(500)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A3BD34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A3BD34u) goto L_08A3BD34;
    return;
L_08A3BD34:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BD5C;
      }
      goto L_08A3BD50;
    }
L_08A3BD50:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A3BD5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A3BD5Cu) goto L_08A3BD5C;
    return;
L_08A3BD5C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BD84;
      }
      goto L_08A3BD78;
    }
L_08A3BD78:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A3BD84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A3BD84u) goto L_08A3BD84;
    return;
L_08A3BD84:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A3BD94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 585u, 0x08A2E9A8u>(ctx, &aot_mem) && ctx.pc == 0x08A3BD94u) goto L_08A3BD94;
    return;
L_08A3BD94:
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 9u, 0x08A3C0ACu>(ctx, &aot_mem); return;
      }
      goto L_08A3BDA0;
    }
L_08A3BDA0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BF60;
      }
      goto L_08A3BDAC;
    }
L_08A3BDAC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BF60;
      }
      goto L_08A3BDB8;
    }
L_08A3BDB8:
    ctx.set_gpr(19, ctx.gpr[3] + static_cast<std::uint32_t>(-9));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23816)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A3BDE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3BDE8u) goto L_08A3BDE8;
    return;
L_08A3BDE8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[4] ^ 0u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BE08;
      }
      goto L_08A3BDFC;
    }
L_08A3BDFC:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BE1C;
      }
      goto L_08A3BE08;
    }
L_08A3BE08:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08A3BE1C;
L_08A3BE1C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BE34;
      }
      goto L_08A3BE24;
    }
L_08A3BE24:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23820)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[2]);
    goto L_08A3BE34;
L_08A3BE34:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BE68;
      }
      goto L_08A3BE4C;
    }
L_08A3BE4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23816)));
    ctx.set_gpr(31, 0x08A3BE68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 478u, 0x0895DF98u>(ctx, &aot_mem) && ctx.pc == 0x08A3BE68u) goto L_08A3BE68;
    return;
L_08A3BE68:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(80), static_cast<std::uint16_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[19]))));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3BEA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3BEA8u) goto L_08A3BEA8;
    return;
L_08A3BEA8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BED8;
      }
      goto L_08A3BEB0;
    }
L_08A3BEB0:
    ctx.set_gpr(5, ctx.gpr[21] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23820)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A3BED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A3BED0u) goto L_08A3BED0;
    return;
L_08A3BED0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BEF0;
      }
      goto L_08A3BED8;
    }
L_08A3BED8:
    ctx.set_gpr(5, ctx.gpr[21] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3BEF0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3BEF0u) goto L_08A3BEF0;
    return;
L_08A3BEF0:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A3BF1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3BF1Cu) goto L_08A3BF1C;
    return;
L_08A3BF1C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08A3BF34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 538u, 0x08A2E4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3BF34u) goto L_08A3BF34;
    return;
L_08A3BF34:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A3BF48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A3BF48u) goto L_08A3BF48;
    return;
L_08A3BF48:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23820)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 9u, 0x08A3C0ACu>(ctx, &aot_mem); return;
      }
      goto L_08A3BF60;
    }
L_08A3BF60:
    ctx.set_gpr(19, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23732)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A3BF90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3BF90u) goto L_08A3BF90;
    return;
L_08A3BF90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[4] ^ 0u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BFB0;
      }
      goto L_08A3BFA4;
    }
L_08A3BFA4:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BFC4;
      }
      goto L_08A3BFB0;
    }
L_08A3BFB0:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08A3BFC4;
L_08A3BFC4:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BFDC;
      }
      goto L_08A3BFCC;
    }
L_08A3BFCC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23736)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[2]);
    goto L_08A3BFDC;
L_08A3BFDC:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 2u, 0x08A3C010u>(ctx, &aot_mem); return;
      }
      goto L_08A3BFF4;
    }
L_08A3BFF4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.pc = 0x08A3C000u; return;
}

void recomp_unit_0141(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0141_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_141(Runtime &runtime) {
    runtime.register_generated_unit(141u, 0x08A38000u, 16384u, &recomp_unit_0141, &recomp_unit_0141_entry);
    runtime.register_function(0x08A38000u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38008u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38020u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38030u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3803Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3804Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3807Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A380A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A380ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A380B8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A380C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A380D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A380DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A380F0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A380F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38100u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3810Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38114u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38118u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3814Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A381A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A381D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A381E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A381FCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38200u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3820Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38218u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38228u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3823Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38254u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38264u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38280u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38288u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A382B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A382C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A382CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A382D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A382DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A382E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A382F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38304u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38310u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38314u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38320u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38328u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38338u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38364u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38368u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38374u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38380u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38388u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3838Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A383C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3842Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3843Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38448u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A384C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A384CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A384D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A384E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A384ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A384F8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A384FCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38508u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38518u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38524u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38538u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3853Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38544u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3854Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38554u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3856Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38578u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38580u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38590u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A385B8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A385CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A385D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A385ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A385F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38604u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38618u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3861Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3862Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38638u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3864Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38650u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38668u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38684u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A386B8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A386ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38704u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38718u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38720u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38738u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38740u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38758u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38780u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3878Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A387B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A387C8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A387D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A387E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38800u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3881Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38850u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38868u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38874u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38884u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3889Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A388A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A388D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A388E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38908u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3891Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38928u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3893Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38944u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38954u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38968u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38970u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38978u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A389B8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A389D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A389E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A389F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A08u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A24u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A74u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A8Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38AA8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38ABCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38AC0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38ACCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B00u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B18u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B2Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B38u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B50u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B58u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B70u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B98u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38BC8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38BCCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C00u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C0Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C20u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C64u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C74u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C80u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C94u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C98u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38CA8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38CE8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38CF4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38CF8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38D00u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38D0Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38D4Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38D64u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38D70u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38D8Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38D90u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38DACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38DBCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38DC4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38DD4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38DE0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38DF0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38DFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E08u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E1Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E3Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E54u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E64u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E88u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38EA4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38EA8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38EB4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38EC4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38ECCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38ED4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38EFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F04u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F10u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F30u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F40u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F4Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F58u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F74u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F78u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F80u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F88u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F98u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F9Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38FACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38FB8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38FC8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38FD8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38FE0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39004u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39020u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39024u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3902Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3903Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39044u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39054u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39058u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39060u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39064u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39098u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A390DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A390F8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39100u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39108u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39110u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39118u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39120u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39128u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3912Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3913Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39174u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39184u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A391A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A391B8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A391D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39218u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3922Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39238u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3924Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39254u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39268u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39270u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39288u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A392CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A392E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A392F0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3930Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39314u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3933Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3934Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39358u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3935Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39368u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39370u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39380u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39390u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3939Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A393A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A393ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A393BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A393E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A393F0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39410u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3941Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39424u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39428u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39450u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39488u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39498u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A394B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A394D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A394F0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39528u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39554u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39568u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39574u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39588u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39590u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A395B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A395B8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A395D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39614u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39628u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39638u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3964Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39674u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39680u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A396A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A396ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A396B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A396B8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A396E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39718u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39728u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39744u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39764u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39780u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A397B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A397E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A397F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39800u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39814u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3981Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3983Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39844u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3985Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A398A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A398B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A398C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A398D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39900u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3990Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3992Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39938u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39940u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39944u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3996Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3999Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A399DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A399F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A00u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A1Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A20u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A48u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A54u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A70u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A90u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39AA8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39AB4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39AD4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39AECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39AF0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B04u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B28u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B80u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39BB8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39BC8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39BD8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39BE0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39BFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C04u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C10u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C1Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C28u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C38u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C44u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C4Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C50u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C5Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C60u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C7Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39CBCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39CDCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39CE0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39CECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39CFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39D08u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39D28u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39D2Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39D34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39D60u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39DD0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39DE8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39DF4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E10u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E14u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E28u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E54u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E5Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E6Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E78u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E80u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E84u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E90u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E94u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39EACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39EC8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39EDCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39EF8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39F0Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39F50u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39F68u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39F78u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39F98u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39FA4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39FCCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A008u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A020u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A034u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A038u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A048u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A058u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A068u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A0A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A0A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A0ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A0B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A0C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A0CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A104u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A120u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A134u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A150u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A164u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A180u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A194u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A1B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A1C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A1F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A204u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A210u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A218u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A21Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A238u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A27Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A298u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A2C8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A2E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A308u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A320u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A330u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A344u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A358u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A364u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A36Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A370u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A398u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A3CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A3D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A3ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A3F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A404u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A40Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A424u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A438u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A444u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A45Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A470u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A488u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A494u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A4A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A4A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A4C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A4CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A4FCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A514u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A530u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A574u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A590u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A5C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A5CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A5E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A5E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A5F0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A608u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A620u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A664u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A678u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A688u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A69Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A6C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A6D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A6F0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A6FCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A704u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A708u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A730u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A778u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A794u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A7C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A7CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A7E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A7E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A7FCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A808u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A814u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A828u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A830u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A844u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A868u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A870u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A884u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A8C8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A8DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A8ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A900u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A928u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A934u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A954u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A960u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A968u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A96Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A998u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A9C8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A9D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A9D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A9E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A9F0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AA04u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AA0Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AA14u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AA24u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AA34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AA4Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AA54u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AA5Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AA68u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AA70u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AA80u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AA84u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AAA4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AADCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB00u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB10u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB28u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB40u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB64u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB74u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB8Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ABA0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ABACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ABB8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ABC4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ABCCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ABD8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ABE4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ABF0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC00u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC08u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC0Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC84u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC9Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ACB4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ACC0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ACCCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ACD0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ACE8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD3Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD6Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD84u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD98u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD9Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ADA8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ADBCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ADD4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ADF0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE48u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE54u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE68u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE74u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE84u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE94u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AED8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AEECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AEF8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF08u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF1Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF44u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF60u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF68u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF90u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFA0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFB0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFBCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFC4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFD4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFE4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFF0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFF4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B000u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B008u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B018u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B040u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B04Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B06Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B074u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B084u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B10Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B128u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B138u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B148u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B154u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B160u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B178u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B190u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B1ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B1B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B1C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B1DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B1F0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B204u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B234u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B24Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B254u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B258u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B264u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B274u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B288u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B294u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B2ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B2C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B2CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B2D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B2DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B2ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B300u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B30Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B32Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B344u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B34Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B350u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B35Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B36Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B380u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B38Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B3B8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B3D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B3E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B3F8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B418u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B42Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B434u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B44Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B454u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B468u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B470u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B488u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B490u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B4A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B4ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B4C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B4CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B4E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B4E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B500u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B508u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B51Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B524u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B53Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B544u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B558u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B560u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B578u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B580u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B594u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B59Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B5B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B5BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B5D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B5D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B5F0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B5F8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B60Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B614u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B62Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B634u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B648u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B650u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B668u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B670u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B684u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B68Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B6A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B6ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B6C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B6C8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B6E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B6E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B6FCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B704u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B71Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B724u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B738u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B740u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B758u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B760u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B774u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B77Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B794u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B79Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7B8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B818u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B830u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B840u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B850u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B868u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B874u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B880u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B890u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B89Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B8B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B8D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B8E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B8FCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B90Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B91Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B92Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B938u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B940u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B94Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B954u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B960u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B97Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B98Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B9B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B9D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B9E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B9ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA00u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA10u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA28u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA50u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA64u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA7Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BAC0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BADCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BAF0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB18u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB2Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB38u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB4Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB58u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB64u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB74u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB80u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB9Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBB0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBC4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBE8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBF0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBF8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC00u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC0Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC1Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC28u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC40u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC58u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC84u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC8Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC9Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BCA0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BCDCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BCF0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD04u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD14u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD24u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD50u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD5Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD78u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD84u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD94u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BDA0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BDACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BDB8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BDE8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BDFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE08u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE1Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE24u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE4Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE68u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BEA8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BEB0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BED0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BED8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BEF0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF1Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF48u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF60u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF90u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BFA4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BFB0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BFC4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BFCCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BFDCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BFF4u, &recomp_unit_0141, "recomp_unit_0141");
}
} // namespace psprecomp
