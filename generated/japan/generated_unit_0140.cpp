#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0140[4094] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 6, 0, 0,
    0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0,
    0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 20, 0, 0, 21, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 28, 0, 0, 29, 0, 0, 0, 0, 30,
    0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 34, 0, 35, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    42, 0, 0, 0, 43, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0,
    48, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 54, 0,
    0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 59, 0, 0, 0, 60, 0, 0,
    0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 77, 0, 0, 0, 78, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0,
    0, 83, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 89, 0,
    0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 94, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 104, 0, 0, 105, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 108, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 0,
    114, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0,
    119, 0, 0, 120, 0, 0, 121, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 0, 138, 0, 139,
    0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 144,
    0, 0, 145, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 150, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 0, 162, 0, 163, 0, 0, 0,
    0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 168, 0, 0,
    169, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0,
    176, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 181, 0, 0, 0,
    182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 186, 0, 0, 0, 187, 0, 0, 0,
    0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 208, 0, 0, 209, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0,
    212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 215, 0, 0, 216, 0, 0, 217, 0,
    0, 0, 218, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 223, 0, 0, 0, 224,
    0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 230,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0, 0, 247, 0,
    248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 252, 0,
    0, 253, 0, 0, 254, 0, 0, 0, 255, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 259, 0, 260, 0, 0, 261, 0, 0, 262, 0, 0, 0, 263, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 268, 0, 0, 269, 0, 0, 270, 0, 0, 0, 271, 0, 272, 0, 0, 0,
    0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 277, 0, 0,
    278, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 283, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0, 0, 287, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 292, 0, 0, 293, 0, 0, 294, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 297,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 0, 301, 0, 0, 302, 0,
    0, 0, 303, 0, 304, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 310, 311, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0,
    0, 316, 0, 0, 0, 0, 0, 317, 0, 318, 319, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 0, 0,
    0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0,
    0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 335,
    0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337,
    0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340,
    0, 0, 0, 341, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 347, 0, 0, 348, 0,
    0, 0, 349, 0, 0, 350, 0, 0, 351, 0, 352, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 356, 0, 0, 0, 357, 0,
    358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 363, 0,
    0, 0, 364, 0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 371, 0, 0, 0, 0, 372,
    0, 373, 374, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 377, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0,
    380, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 384, 0, 0, 385, 0, 0, 0, 386, 0, 387, 0, 388, 0, 389,
    0, 390, 0, 391, 0, 392, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 396, 0, 397, 0, 0, 0, 398, 0,
    0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 407,
    0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0,
    0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 420, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 424, 0, 0, 425, 0, 0, 426, 0, 0, 427, 0, 0, 428,
    0, 0, 429, 0, 0, 430, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 435,
    436, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 440, 0, 441, 0, 0, 442, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0,
    453, 0, 0, 454, 0, 0, 455, 0, 0, 0, 456, 0, 0, 457, 0, 0, 458, 0, 0, 0, 459, 0, 0, 460, 0, 0, 461, 0, 0, 462, 0, 0,
    463, 0, 0, 0, 0, 464, 0, 0, 0, 465, 0, 0, 0, 466, 0, 467, 0, 0, 468, 0, 0, 469, 0, 0, 470, 0, 0, 0, 0, 471, 0, 0,
    0, 472, 0, 0, 0, 473, 0, 474, 0, 475, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 478, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 0, 0,
    0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 489, 0, 0, 0, 0, 0,
    0, 490, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 493, 0, 0, 0, 0, 494, 0, 0, 0, 495, 0, 0,
    0, 496, 0, 0, 497, 0, 0, 0, 0, 498, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 502, 0, 0, 0, 0, 0, 0, 503, 0, 504, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 506, 0, 0, 507, 0, 0, 0, 508, 0, 0,
    0, 509, 0, 0, 510, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    513, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 515, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 519, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0,
    0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 524, 0, 0, 525, 0, 0, 526, 0, 0, 0, 0, 527, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 529, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 532, 0, 533, 0,
    0, 0, 534, 0, 535, 0, 536, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 539, 0, 0, 540, 0,
    0, 541, 0, 0, 0, 0, 542, 0, 0, 543, 0, 0, 0, 544, 0, 0, 545, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 547, 0,
    0, 0, 0, 0, 0, 548, 0, 0, 549, 0, 0, 550, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 553, 0, 0,
    0, 0, 0, 0, 554, 0, 0, 555, 0, 556, 0, 0, 0, 0, 557, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 560, 0, 561, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 564,
    0, 0, 0, 565, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 569, 0, 570, 0, 0,
    571, 0, 0, 0, 0, 0, 572, 0, 573, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 576, 0, 0, 0, 0, 577, 0, 0, 0, 0,
    0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 580, 581, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    583, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 585, 0, 0, 586, 0, 0, 587, 588, 0, 0, 589, 590, 0, 0, 0, 0, 0, 0, 0, 0, 591,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 593, 0, 0, 0, 594, 0, 0, 0, 0, 595, 0, 0, 0, 596, 0, 0, 0, 0, 0, 597,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 599, 0, 0, 0, 600, 0, 0, 0, 0, 601, 0, 0, 0, 602, 0, 0, 0, 603, 0, 0,
    0, 0, 604, 605, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 608, 0, 0, 609, 0, 0, 0, 0, 0, 0, 610, 611, 0, 0, 0, 0, 612, 0, 0, 613, 0,
    0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 616, 0, 0, 0, 0, 617, 0, 618, 0, 0, 0,
    619, 0, 0, 0, 620, 0, 621, 0, 0, 0, 0, 622, 0, 0, 623, 0, 624, 0, 0, 625, 0, 0, 0, 626, 0, 627, 0, 0, 628, 0, 0, 0,
    629, 0, 0, 0, 630, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0,
    0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0,
    635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 637, 0, 638, 0, 0, 639, 0, 0, 0, 0, 640, 0, 0, 0,
    0, 0, 0, 641, 0, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 646, 0, 0, 647, 0,
    648, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0,
    0, 0, 0, 652, 0, 0, 653, 0, 0, 0, 0, 654, 0, 655, 0, 0, 0, 0, 656, 0, 657, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0,
    0, 659, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 661, 0, 0, 0, 662, 0, 0, 0, 0,
    663, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 667, 0, 668, 0, 0, 669, 670, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 675, 0, 0, 676, 0, 0, 0, 0, 677, 0, 678, 0, 0, 0, 679, 0, 680,
    0, 0, 681, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    689, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 692, 0, 0, 0, 693, 0, 0, 0,
    694, 695, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 698, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 700, 0, 0, 701, 0, 0, 0, 0, 702, 0, 703, 0, 0, 704, 0, 0, 0, 0, 705,
    0, 0, 0, 0, 0, 706, 0, 707, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 710, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 712, 0, 0, 0, 713, 0, 0, 0, 0, 714, 0, 0, 715, 0, 716, 717, 0, 0, 0, 0, 0,
    0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 720, 0, 0, 0, 721, 0, 722, 0, 0, 0, 723, 0, 0, 0, 0, 724, 725, 0, 0, 726, 0, 0, 727, 0, 0, 0, 728,
};
void recomp_unit_0140_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A34000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0140[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A34000;
    case 2u: goto L_08A34010;
    case 3u: goto L_08A34028;
    case 4u: goto L_08A34060;
    case 5u: goto L_08A3406C;
    case 6u: goto L_08A34074;
    case 7u: goto L_08A34088;
    case 8u: goto L_08A340A4;
    case 9u: goto L_08A340C0;
    case 10u: goto L_08A340DC;
    case 11u: goto L_08A340F8;
    case 12u: goto L_08A34114;
    case 13u: goto L_08A34130;
    case 14u: goto L_08A34148;
    case 15u: goto L_08A34160;
    case 16u: goto L_08A34180;
    case 17u: goto L_08A34190;
    case 18u: goto L_08A341A0;
    case 19u: goto L_08A341D8;
    case 20u: goto L_08A341DC;
    case 21u: goto L_08A341E8;
    case 22u: goto L_08A34200;
    case 23u: goto L_08A34210;
    case 24u: goto L_08A34220;
    case 25u: goto L_08A3422C;
    case 26u: goto L_08A3423C;
    case 27u: goto L_08A34258;
    case 28u: goto L_08A3425C;
    case 29u: goto L_08A34268;
    case 30u: goto L_08A3427C;
    case 31u: goto L_08A3428C;
    case 32u: goto L_08A342A4;
    case 33u: goto L_08A342B0;
    case 34u: goto L_08A342C0;
    case 35u: goto L_08A342C8;
    case 36u: goto L_08A342D4;
    case 37u: goto L_08A342E0;
    case 38u: goto L_08A34300;
    case 39u: goto L_08A3431C;
    case 40u: goto L_08A34334;
    case 41u: goto L_08A3434C;
    case 42u: goto L_08A34380;
    case 43u: goto L_08A34390;
    case 44u: goto L_08A34398;
    case 45u: goto L_08A343A8;
    case 46u: goto L_08A343BC;
    case 47u: goto L_08A343F0;
    case 48u: goto L_08A34400;
    case 49u: goto L_08A34408;
    case 50u: goto L_08A34418;
    case 51u: goto L_08A3442C;
    case 52u: goto L_08A34460;
    case 53u: goto L_08A34470;
    case 54u: goto L_08A34478;
    case 55u: goto L_08A34488;
    case 56u: goto L_08A3449C;
    case 57u: goto L_08A344CC;
    case 58u: goto L_08A344DC;
    case 59u: goto L_08A344E4;
    case 60u: goto L_08A344F4;
    case 61u: goto L_08A34508;
    case 62u: goto L_08A3453C;
    case 63u: goto L_08A3454C;
    case 64u: goto L_08A34554;
    case 65u: goto L_08A34564;
    case 66u: goto L_08A34578;
    case 67u: goto L_08A345A8;
    case 68u: goto L_08A345B8;
    case 69u: goto L_08A345C0;
    case 70u: goto L_08A345D0;
    case 71u: goto L_08A345E4;
    case 72u: goto L_08A34618;
    case 73u: goto L_08A34628;
    case 74u: goto L_08A34630;
    case 75u: goto L_08A34640;
    case 76u: goto L_08A34654;
    case 77u: goto L_08A34684;
    case 78u: goto L_08A34694;
    case 79u: goto L_08A3469C;
    case 80u: goto L_08A346AC;
    case 81u: goto L_08A346C0;
    case 82u: goto L_08A346F4;
    case 83u: goto L_08A34704;
    case 84u: goto L_08A3470C;
    case 85u: goto L_08A3471C;
    case 86u: goto L_08A34730;
    case 87u: goto L_08A34760;
    case 88u: goto L_08A34770;
    case 89u: goto L_08A34778;
    case 90u: goto L_08A34788;
    case 91u: goto L_08A3479C;
    case 92u: goto L_08A347AC;
    case 93u: goto L_08A347DC;
    case 94u: goto L_08A34804;
    case 95u: goto L_08A3480C;
    case 96u: goto L_08A34818;
    case 97u: goto L_08A34824;
    case 98u: goto L_08A34834;
    case 99u: goto L_08A3483C;
    case 100u: goto L_08A34850;
    case 101u: goto L_08A34884;
    case 102u: goto L_08A348AC;
    case 103u: goto L_08A348B4;
    case 104u: goto L_08A348C0;
    case 105u: goto L_08A348CC;
    case 106u: goto L_08A348DC;
    case 107u: goto L_08A348E4;
    case 108u: goto L_08A348F8;
    case 109u: goto L_08A34928;
    case 110u: goto L_08A34950;
    case 111u: goto L_08A34958;
    case 112u: goto L_08A34964;
    case 113u: goto L_08A34970;
    case 114u: goto L_08A34980;
    case 115u: goto L_08A34988;
    case 116u: goto L_08A3499C;
    case 117u: goto L_08A349D0;
    case 118u: goto L_08A349F8;
    case 119u: goto L_08A34A00;
    case 120u: goto L_08A34A0C;
    case 121u: goto L_08A34A18;
    case 122u: goto L_08A34A28;
    case 123u: goto L_08A34A30;
    case 124u: goto L_08A34A44;
    case 125u: goto L_08A34A74;
    case 126u: goto L_08A34A9C;
    case 127u: goto L_08A34AA4;
    case 128u: goto L_08A34AB0;
    case 129u: goto L_08A34ABC;
    case 130u: goto L_08A34ACC;
    case 131u: goto L_08A34AD4;
    case 132u: goto L_08A34AE8;
    case 133u: goto L_08A34B1C;
    case 134u: goto L_08A34B44;
    case 135u: goto L_08A34B4C;
    case 136u: goto L_08A34B58;
    case 137u: goto L_08A34B64;
    case 138u: goto L_08A34B74;
    case 139u: goto L_08A34B7C;
    case 140u: goto L_08A34B90;
    case 141u: goto L_08A34BC0;
    case 142u: goto L_08A34BE8;
    case 143u: goto L_08A34BF0;
    case 144u: goto L_08A34BFC;
    case 145u: goto L_08A34C08;
    case 146u: goto L_08A34C18;
    case 147u: goto L_08A34C20;
    case 148u: goto L_08A34C34;
    case 149u: goto L_08A34C68;
    case 150u: goto L_08A34C90;
    case 151u: goto L_08A34C98;
    case 152u: goto L_08A34CA4;
    case 153u: goto L_08A34CB0;
    case 154u: goto L_08A34CC0;
    case 155u: goto L_08A34CC8;
    case 156u: goto L_08A34CDC;
    case 157u: goto L_08A34D10;
    case 158u: goto L_08A34D38;
    case 159u: goto L_08A34D40;
    case 160u: goto L_08A34D4C;
    case 161u: goto L_08A34D58;
    case 162u: goto L_08A34D68;
    case 163u: goto L_08A34D70;
    case 164u: goto L_08A34D84;
    case 165u: goto L_08A34DB8;
    case 166u: goto L_08A34DE0;
    case 167u: goto L_08A34DE8;
    case 168u: goto L_08A34DF4;
    case 169u: goto L_08A34E00;
    case 170u: goto L_08A34E10;
    case 171u: goto L_08A34E18;
    case 172u: goto L_08A34E2C;
    case 173u: goto L_08A34E34;
    case 174u: goto L_08A34E68;
    case 175u: goto L_08A34E78;
    case 176u: goto L_08A34E80;
    case 177u: goto L_08A34E90;
    case 178u: goto L_08A34EA4;
    case 179u: goto L_08A34ED8;
    case 180u: goto L_08A34EE8;
    case 181u: goto L_08A34EF0;
    case 182u: goto L_08A34F00;
    case 183u: goto L_08A34F14;
    case 184u: goto L_08A34F48;
    case 185u: goto L_08A34F58;
    case 186u: goto L_08A34F60;
    case 187u: goto L_08A34F70;
    case 188u: goto L_08A34F84;
    case 189u: goto L_08A34FB8;
    case 190u: goto L_08A34FC8;
    case 191u: goto L_08A34FD0;
    case 192u: goto L_08A34FE0;
    case 193u: goto L_08A34FF4;
    case 194u: goto L_08A35024;
    case 195u: goto L_08A35034;
    case 196u: goto L_08A3503C;
    case 197u: goto L_08A3504C;
    case 198u: goto L_08A35060;
    case 199u: goto L_08A35090;
    case 200u: goto L_08A350A0;
    case 201u: goto L_08A350A8;
    case 202u: goto L_08A350B8;
    case 203u: goto L_08A350CC;
    case 204u: goto L_08A350DC;
    case 205u: goto L_08A3510C;
    case 206u: goto L_08A35134;
    case 207u: goto L_08A3513C;
    case 208u: goto L_08A35148;
    case 209u: goto L_08A35154;
    case 210u: goto L_08A35164;
    case 211u: goto L_08A3516C;
    case 212u: goto L_08A35180;
    case 213u: goto L_08A351B0;
    case 214u: goto L_08A351D8;
    case 215u: goto L_08A351E0;
    case 216u: goto L_08A351EC;
    case 217u: goto L_08A351F8;
    case 218u: goto L_08A35208;
    case 219u: goto L_08A35210;
    case 220u: goto L_08A35224;
    case 221u: goto L_08A35254;
    case 222u: goto L_08A35264;
    case 223u: goto L_08A3526C;
    case 224u: goto L_08A3527C;
    case 225u: goto L_08A35290;
    case 226u: goto L_08A352C0;
    case 227u: goto L_08A352D0;
    case 228u: goto L_08A352D8;
    case 229u: goto L_08A352E8;
    case 230u: goto L_08A352FC;
    case 231u: goto L_08A35330;
    case 232u: goto L_08A35340;
    case 233u: goto L_08A35348;
    case 234u: goto L_08A35358;
    case 235u: goto L_08A3536C;
    case 236u: goto L_08A353A0;
    case 237u: goto L_08A353B0;
    case 238u: goto L_08A353B8;
    case 239u: goto L_08A353C8;
    case 240u: goto L_08A353DC;
    case 241u: goto L_08A353EC;
    case 242u: goto L_08A35420;
    case 243u: goto L_08A35448;
    case 244u: goto L_08A35450;
    case 245u: goto L_08A3545C;
    case 246u: goto L_08A35468;
    case 247u: goto L_08A35478;
    case 248u: goto L_08A35480;
    case 249u: goto L_08A35494;
    case 250u: goto L_08A354C8;
    case 251u: goto L_08A354F0;
    case 252u: goto L_08A354F8;
    case 253u: goto L_08A35504;
    case 254u: goto L_08A35510;
    case 255u: goto L_08A35520;
    case 256u: goto L_08A35528;
    case 257u: goto L_08A3553C;
    case 258u: goto L_08A3556C;
    case 259u: goto L_08A35594;
    case 260u: goto L_08A3559C;
    case 261u: goto L_08A355A8;
    case 262u: goto L_08A355B4;
    case 263u: goto L_08A355C4;
    case 264u: goto L_08A355CC;
    case 265u: goto L_08A355E0;
    case 266u: goto L_08A35610;
    case 267u: goto L_08A35638;
    case 268u: goto L_08A35640;
    case 269u: goto L_08A3564C;
    case 270u: goto L_08A35658;
    case 271u: goto L_08A35668;
    case 272u: goto L_08A35670;
    case 273u: goto L_08A35684;
    case 274u: goto L_08A356B8;
    case 275u: goto L_08A356E0;
    case 276u: goto L_08A356E8;
    case 277u: goto L_08A356F4;
    case 278u: goto L_08A35700;
    case 279u: goto L_08A35710;
    case 280u: goto L_08A35718;
    case 281u: goto L_08A3572C;
    case 282u: goto L_08A35760;
    case 283u: goto L_08A35788;
    case 284u: goto L_08A35790;
    case 285u: goto L_08A3579C;
    case 286u: goto L_08A357A8;
    case 287u: goto L_08A357B8;
    case 288u: goto L_08A357C0;
    case 289u: goto L_08A357D4;
    case 290u: goto L_08A35808;
    case 291u: goto L_08A35830;
    case 292u: goto L_08A35838;
    case 293u: goto L_08A35844;
    case 294u: goto L_08A35850;
    case 295u: goto L_08A35860;
    case 296u: goto L_08A35868;
    case 297u: goto L_08A3587C;
    case 298u: goto L_08A358B0;
    case 299u: goto L_08A358D8;
    case 300u: goto L_08A358E0;
    case 301u: goto L_08A358EC;
    case 302u: goto L_08A358F8;
    case 303u: goto L_08A35908;
    case 304u: goto L_08A35910;
    case 305u: goto L_08A35924;
    case 306u: goto L_08A35930;
    case 307u: goto L_08A3595C;
    case 308u: goto L_08A3598C;
    case 309u: goto L_08A359A4;
    case 310u: goto L_08A359AC;
    case 311u: goto L_08A359B0;
    case 312u: goto L_08A359BC;
    case 313u: goto L_08A359CC;
    case 314u: goto L_08A359E0;
    case 315u: goto L_08A359EC;
    case 316u: goto L_08A35A04;
    case 317u: goto L_08A35A1C;
    case 318u: goto L_08A35A24;
    case 319u: goto L_08A35A28;
    case 320u: goto L_08A35A34;
    case 321u: goto L_08A35A44;
    case 322u: goto L_08A35A58;
    case 323u: goto L_08A35A64;
    case 324u: goto L_08A35A88;
    case 325u: goto L_08A35AB8;
    case 326u: goto L_08A35AD0;
    case 327u: goto L_08A35AF8;
    case 328u: goto L_08A35B0C;
    case 329u: goto L_08A35B6C;
    case 330u: goto L_08A35B78;
    case 331u: goto L_08A35BB8;
    case 332u: goto L_08A35BD0;
    case 333u: goto L_08A35BDC;
    case 334u: goto L_08A35BF8;
    case 335u: goto L_08A35BFC;
    case 336u: goto L_08A35C10;
    case 337u: goto L_08A35C7C;
    case 338u: goto L_08A35C94;
    case 339u: goto L_08A35CD4;
    case 340u: goto L_08A35CFC;
    case 341u: goto L_08A35D0C;
    case 342u: goto L_08A35D18;
    case 343u: goto L_08A35D24;
    case 344u: goto L_08A35D38;
    case 345u: goto L_08A35D50;
    case 346u: goto L_08A35D60;
    case 347u: goto L_08A35D6C;
    case 348u: goto L_08A35D78;
    case 349u: goto L_08A35D88;
    case 350u: goto L_08A35D94;
    case 351u: goto L_08A35DA0;
    case 352u: goto L_08A35DA8;
    case 353u: goto L_08A35DB4;
    case 354u: goto L_08A35DCC;
    case 355u: goto L_08A35DE0;
    case 356u: goto L_08A35DE8;
    case 357u: goto L_08A35DF8;
    case 358u: goto L_08A35E00;
    case 359u: goto L_08A35E1C;
    case 360u: goto L_08A35E38;
    case 361u: goto L_08A35E48;
    case 362u: goto L_08A35E70;
    case 363u: goto L_08A35E78;
    case 364u: goto L_08A35E88;
    case 365u: goto L_08A35E90;
    case 366u: goto L_08A35EA0;
    case 367u: goto L_08A35EC4;
    case 368u: goto L_08A360BC;
    case 369u: goto L_08A360D4;
    case 370u: goto L_08A360E0;
    case 371u: goto L_08A360E8;
    case 372u: goto L_08A360FC;
    case 373u: goto L_08A36104;
    case 374u: goto L_08A36108;
    case 375u: goto L_08A36114;
    case 376u: goto L_08A36134;
    case 377u: goto L_08A36154;
    case 378u: goto L_08A3615C;
    case 379u: goto L_08A36174;
    case 380u: goto L_08A36180;
    case 381u: goto L_08A36194;
    case 382u: goto L_08A361AC;
    case 383u: goto L_08A361BC;
    case 384u: goto L_08A361C8;
    case 385u: goto L_08A361D4;
    case 386u: goto L_08A361E4;
    case 387u: goto L_08A361EC;
    case 388u: goto L_08A361F4;
    case 389u: goto L_08A361FC;
    case 390u: goto L_08A36204;
    case 391u: goto L_08A3620C;
    case 392u: goto L_08A36214;
    case 393u: goto L_08A3621C;
    case 394u: goto L_08A3622C;
    case 395u: goto L_08A36244;
    case 396u: goto L_08A36260;
    case 397u: goto L_08A36268;
    case 398u: goto L_08A36278;
    case 399u: goto L_08A36288;
    case 400u: goto L_08A36298;
    case 401u: goto L_08A362B4;
    case 402u: goto L_08A362CC;
    case 403u: goto L_08A362DC;
    case 404u: goto L_08A36344;
    case 405u: goto L_08A36358;
    case 406u: goto L_08A36368;
    case 407u: goto L_08A3637C;
    case 408u: goto L_08A3638C;
    case 409u: goto L_08A363DC;
    case 410u: goto L_08A363F0;
    case 411u: goto L_08A36404;
    case 412u: goto L_08A36418;
    case 413u: goto L_08A3642C;
    case 414u: goto L_08A36440;
    case 415u: goto L_08A3644C;
    case 416u: goto L_08A36460;
    case 417u: goto L_08A3647C;
    case 418u: goto L_08A364AC;
    case 419u: goto L_08A364D4;
    case 420u: goto L_08A36508;
    case 421u: goto L_08A36514;
    case 422u: goto L_08A3652C;
    case 423u: goto L_08A36540;
    case 424u: goto L_08A3654C;
    case 425u: goto L_08A36558;
    case 426u: goto L_08A36564;
    case 427u: goto L_08A36570;
    case 428u: goto L_08A3657C;
    case 429u: goto L_08A36588;
    case 430u: goto L_08A36594;
    case 431u: goto L_08A365A0;
    case 432u: goto L_08A365B4;
    case 433u: goto L_08A365DC;
    case 434u: goto L_08A365F4;
    case 435u: goto L_08A365FC;
    case 436u: goto L_08A36600;
    case 437u: goto L_08A3660C;
    case 438u: goto L_08A3661C;
    case 439u: goto L_08A36630;
    case 440u: goto L_08A3663C;
    case 441u: goto L_08A36644;
    case 442u: goto L_08A36650;
    case 443u: goto L_08A3665C;
    case 444u: goto L_08A36694;
    case 445u: goto L_08A366B8;
    case 446u: goto L_08A366C8;
    case 447u: goto L_08A366E0;
    case 448u: goto L_08A36708;
    case 449u: goto L_08A36718;
    case 450u: goto L_08A36734;
    case 451u: goto L_08A3674C;
    case 452u: goto L_08A36774;
    case 453u: goto L_08A36780;
    case 454u: goto L_08A3678C;
    case 455u: goto L_08A36798;
    case 456u: goto L_08A367A8;
    case 457u: goto L_08A367B4;
    case 458u: goto L_08A367C0;
    case 459u: goto L_08A367D0;
    case 460u: goto L_08A367DC;
    case 461u: goto L_08A367E8;
    case 462u: goto L_08A367F4;
    case 463u: goto L_08A36800;
    case 464u: goto L_08A36814;
    case 465u: goto L_08A36824;
    case 466u: goto L_08A36834;
    case 467u: goto L_08A3683C;
    case 468u: goto L_08A36848;
    case 469u: goto L_08A36854;
    case 470u: goto L_08A36860;
    case 471u: goto L_08A36874;
    case 472u: goto L_08A36884;
    case 473u: goto L_08A36894;
    case 474u: goto L_08A3689C;
    case 475u: goto L_08A368A4;
    case 476u: goto L_08A368B8;
    case 477u: goto L_08A368D4;
    case 478u: goto L_08A36908;
    case 479u: goto L_08A36924;
    case 480u: goto L_08A36958;
    case 481u: goto L_08A36968;
    case 482u: goto L_08A36988;
    case 483u: goto L_08A369BC;
    case 484u: goto L_08A369D8;
    case 485u: goto L_08A36A0C;
    case 486u: goto L_08A36A1C;
    case 487u: goto L_08A36A3C;
    case 488u: goto L_08A36A58;
    case 489u: goto L_08A36A68;
    case 490u: goto L_08A36A84;
    case 491u: goto L_08A36A94;
    case 492u: goto L_08A36AC8;
    case 493u: goto L_08A36AD0;
    case 494u: goto L_08A36AE4;
    case 495u: goto L_08A36AF4;
    case 496u: goto L_08A36B04;
    case 497u: goto L_08A36B10;
    case 498u: goto L_08A36B24;
    case 499u: goto L_08A36B34;
    case 500u: goto L_08A36B44;
    case 501u: goto L_08A36B54;
    case 502u: goto L_08A36B84;
    case 503u: goto L_08A36BA0;
    case 504u: goto L_08A36BA8;
    case 505u: goto L_08A36BC0;
    case 506u: goto L_08A36BD8;
    case 507u: goto L_08A36BE4;
    case 508u: goto L_08A36BF4;
    case 509u: goto L_08A36C04;
    case 510u: goto L_08A36C10;
    case 511u: goto L_08A36C2C;
    case 512u: goto L_08A36C40;
    case 513u: goto L_08A36C80;
    case 514u: goto L_08A36C98;
    case 515u: goto L_08A36CAC;
    case 516u: goto L_08A36CBC;
    case 517u: goto L_08A36CE4;
    case 518u: goto L_08A36D1C;
    case 519u: goto L_08A36D30;
    case 520u: goto L_08A36D44;
    case 521u: goto L_08A36D78;
    case 522u: goto L_08A36D94;
    case 523u: goto L_08A36DB8;
    case 524u: goto L_08A36DC0;
    case 525u: goto L_08A36DCC;
    case 526u: goto L_08A36DD8;
    case 527u: goto L_08A36DEC;
    case 528u: goto L_08A36E18;
    case 529u: goto L_08A36E28;
    case 530u: goto L_08A36E40;
    case 531u: goto L_08A36E58;
    case 532u: goto L_08A36E70;
    case 533u: goto L_08A36E78;
    case 534u: goto L_08A36E88;
    case 535u: goto L_08A36E90;
    case 536u: goto L_08A36E98;
    case 537u: goto L_08A36EA8;
    case 538u: goto L_08A36EE4;
    case 539u: goto L_08A36EEC;
    case 540u: goto L_08A36EF8;
    case 541u: goto L_08A36F04;
    case 542u: goto L_08A36F18;
    case 543u: goto L_08A36F24;
    case 544u: goto L_08A36F34;
    case 545u: goto L_08A36F40;
    case 546u: goto L_08A36F5C;
    case 547u: goto L_08A36F78;
    case 548u: goto L_08A36F94;
    case 549u: goto L_08A36FA0;
    case 550u: goto L_08A36FAC;
    case 551u: goto L_08A36FB8;
    case 552u: goto L_08A36FDC;
    case 553u: goto L_08A36FF4;
    case 554u: goto L_08A37010;
    case 555u: goto L_08A3701C;
    case 556u: goto L_08A37024;
    case 557u: goto L_08A37038;
    case 558u: goto L_08A37048;
    case 559u: goto L_08A3706C;
    case 560u: goto L_08A37098;
    case 561u: goto L_08A370A0;
    case 562u: goto L_08A370AC;
    case 563u: goto L_08A370F4;
    case 564u: goto L_08A370FC;
    case 565u: goto L_08A3710C;
    case 566u: goto L_08A37124;
    case 567u: goto L_08A37140;
    case 568u: goto L_08A37160;
    case 569u: goto L_08A3716C;
    case 570u: goto L_08A37174;
    case 571u: goto L_08A37180;
    case 572u: goto L_08A37198;
    case 573u: goto L_08A371A0;
    case 574u: goto L_08A371AC;
    case 575u: goto L_08A371CC;
    case 576u: goto L_08A371D8;
    case 577u: goto L_08A371EC;
    case 578u: goto L_08A37204;
    case 579u: goto L_08A37238;
    case 580u: goto L_08A37244;
    case 581u: goto L_08A37248;
    case 582u: goto L_08A37254;
    case 583u: goto L_08A37280;
    case 584u: goto L_08A372A0;
    case 585u: goto L_08A372AC;
    case 586u: goto L_08A372B8;
    case 587u: goto L_08A372C4;
    case 588u: goto L_08A372C8;
    case 589u: goto L_08A372D4;
    case 590u: goto L_08A372D8;
    case 591u: goto L_08A372FC;
    case 592u: goto L_08A37324;
    case 593u: goto L_08A37330;
    case 594u: goto L_08A37340;
    case 595u: goto L_08A37354;
    case 596u: goto L_08A37364;
    case 597u: goto L_08A3737C;
    case 598u: goto L_08A373A4;
    case 599u: goto L_08A373B0;
    case 600u: goto L_08A373C0;
    case 601u: goto L_08A373D4;
    case 602u: goto L_08A373E4;
    case 603u: goto L_08A373F4;
    case 604u: goto L_08A37408;
    case 605u: goto L_08A3740C;
    case 606u: goto L_08A37424;
    case 607u: goto L_08A37494;
    case 608u: goto L_08A374AC;
    case 609u: goto L_08A374B8;
    case 610u: goto L_08A374D4;
    case 611u: goto L_08A374D8;
    case 612u: goto L_08A374EC;
    case 613u: goto L_08A374F8;
    case 614u: goto L_08A37508;
    case 615u: goto L_08A37544;
    case 616u: goto L_08A37554;
    case 617u: goto L_08A37568;
    case 618u: goto L_08A37570;
    case 619u: goto L_08A37580;
    case 620u: goto L_08A37590;
    case 621u: goto L_08A37598;
    case 622u: goto L_08A375AC;
    case 623u: goto L_08A375B8;
    case 624u: goto L_08A375C0;
    case 625u: goto L_08A375CC;
    case 626u: goto L_08A375DC;
    case 627u: goto L_08A375E4;
    case 628u: goto L_08A375F0;
    case 629u: goto L_08A37600;
    case 630u: goto L_08A37610;
    case 631u: goto L_08A37628;
    case 632u: goto L_08A37678;
    case 633u: goto L_08A37688;
    case 634u: goto L_08A376F4;
    case 635u: goto L_08A37700;
    case 636u: goto L_08A3772C;
    case 637u: goto L_08A37748;
    case 638u: goto L_08A37750;
    case 639u: goto L_08A3775C;
    case 640u: goto L_08A37770;
    case 641u: goto L_08A3778C;
    case 642u: goto L_08A37798;
    case 643u: goto L_08A37808;
    case 644u: goto L_08A37840;
    case 645u: goto L_08A37850;
    case 646u: goto L_08A3786C;
    case 647u: goto L_08A37878;
    case 648u: goto L_08A37880;
    case 649u: goto L_08A37898;
    case 650u: goto L_08A378B4;
    case 651u: goto L_08A378F8;
    case 652u: goto L_08A3790C;
    case 653u: goto L_08A37918;
    case 654u: goto L_08A3792C;
    case 655u: goto L_08A37934;
    case 656u: goto L_08A37948;
    case 657u: goto L_08A37950;
    case 658u: goto L_08A37968;
    case 659u: goto L_08A37984;
    case 660u: goto L_08A379C8;
    case 661u: goto L_08A379DC;
    case 662u: goto L_08A379EC;
    case 663u: goto L_08A37A00;
    case 664u: goto L_08A37A28;
    case 665u: goto L_08A37A34;
    case 666u: goto L_08A37A54;
    case 667u: goto L_08A37A60;
    case 668u: goto L_08A37A68;
    case 669u: goto L_08A37A74;
    case 670u: goto L_08A37A78;
    case 671u: goto L_08A37AA0;
    case 672u: goto L_08A37AD4;
    case 673u: goto L_08A37AF0;
    case 674u: goto L_08A37B28;
    case 675u: goto L_08A37B3C;
    case 676u: goto L_08A37B48;
    case 677u: goto L_08A37B5C;
    case 678u: goto L_08A37B64;
    case 679u: goto L_08A37B74;
    case 680u: goto L_08A37B7C;
    case 681u: goto L_08A37B88;
    case 682u: goto L_08A37B98;
    case 683u: goto L_08A37BB8;
    case 684u: goto L_08A37BC8;
    case 685u: goto L_08A37BD8;
    case 686u: goto L_08A37C20;
    case 687u: goto L_08A37C34;
    case 688u: goto L_08A37C54;
    case 689u: goto L_08A37C80;
    case 690u: goto L_08A37C9C;
    case 691u: goto L_08A37CD0;
    case 692u: goto L_08A37CE0;
    case 693u: goto L_08A37CF0;
    case 694u: goto L_08A37D00;
    case 695u: goto L_08A37D04;
    case 696u: goto L_08A37D10;
    case 697u: goto L_08A37D44;
    case 698u: goto L_08A37D74;
    case 699u: goto L_08A37DA0;
    case 700u: goto L_08A37DB4;
    case 701u: goto L_08A37DC0;
    case 702u: goto L_08A37DD4;
    case 703u: goto L_08A37DDC;
    case 704u: goto L_08A37DE8;
    case 705u: goto L_08A37DFC;
    case 706u: goto L_08A37E14;
    case 707u: goto L_08A37E1C;
    case 708u: goto L_08A37E38;
    case 709u: goto L_08A37E50;
    case 710u: goto L_08A37E6C;
    case 711u: goto L_08A37E9C;
    case 712u: goto L_08A37EAC;
    case 713u: goto L_08A37EBC;
    case 714u: goto L_08A37ED0;
    case 715u: goto L_08A37EDC;
    case 716u: goto L_08A37EE4;
    case 717u: goto L_08A37EE8;
    case 718u: goto L_08A37F08;
    case 719u: goto L_08A37F5C;
    case 720u: goto L_08A37F8C;
    case 721u: goto L_08A37F9C;
    case 722u: goto L_08A37FA4;
    case 723u: goto L_08A37FB4;
    case 724u: goto L_08A37FC8;
    case 725u: goto L_08A37FCC;
    case 726u: goto L_08A37FD8;
    case 727u: goto L_08A37FE4;
    case 728u: goto L_08A37FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A34000:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A34010u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A34010u) goto L_08A34010;
    return;
L_08A34010:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A34028:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-160));
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
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3406C;
      }
      goto L_08A34060;
    }
L_08A34060:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A34074;
      }
      goto L_08A3406C;
    }
L_08A3406C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A35930;
      }
      goto L_08A34074;
    }
L_08A34074:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A34088u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A34088u) goto L_08A34088;
    return;
L_08A34088:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A340A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A340A4u) goto L_08A340A4;
    return;
L_08A340A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A340C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A340C0u) goto L_08A340C0;
    return;
L_08A340C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A340DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A340DCu) goto L_08A340DC;
    return;
L_08A340DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A340F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A340F8u) goto L_08A340F8;
    return;
L_08A340F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A34114u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A34114u) goto L_08A34114;
    return;
L_08A34114:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A34130u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A34130u) goto L_08A34130;
    return;
L_08A34130:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A34148u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A34148u) goto L_08A34148;
    return;
L_08A34148:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A34160u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A34160u) goto L_08A34160;
    return;
L_08A34160:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22064)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24260)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A34180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 225u, 0x089450D0u>(ctx, &aot_mem) && ctx.pc == 0x08A34180u) goto L_08A34180;
    return;
L_08A34180:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A341DC;
      }
      goto L_08A34190;
    }
L_08A34190:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A341A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 212u, 0x08944FE0u>(ctx, &aot_mem) && ctx.pc == 0x08A341A0u) goto L_08A341A0;
    return;
L_08A341A0:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 2211u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(16260));
    ctx.set_gpr(31, 0x08A341D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 339u, 0x08A69EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A341D8u) goto L_08A341D8;
    return;
L_08A341D8:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A341DC;
L_08A341DC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A34190;
      }
      goto L_08A341E8;
    }
L_08A341E8:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22116), ctx.gpr[21]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A34200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 312u, 0x089495E8u>(ctx, &aot_mem) && ctx.pc == 0x08A34200u) goto L_08A34200;
    return;
L_08A34200:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A34210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 312u, 0x089495E8u>(ctx, &aot_mem) && ctx.pc == 0x08A34210u) goto L_08A34210;
    return;
L_08A34210:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A34220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A34220u) goto L_08A34220;
    return;
L_08A34220:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3425C;
      }
      goto L_08A3422C;
    }
L_08A3422C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A3423Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 212u, 0x08944FE0u>(ctx, &aot_mem) && ctx.pc == 0x08A3423Cu) goto L_08A3423C;
    return;
L_08A3423C:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08A34258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 339u, 0x08A69EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A34258u) goto L_08A34258;
    return;
L_08A34258:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A3425C;
L_08A3425C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3422C;
      }
      goto L_08A34268;
    }
L_08A34268:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A3427Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 505u, 0x08A627F8u>(ctx, &aot_mem) && ctx.pc == 0x08A3427Cu) goto L_08A3427C;
    return;
L_08A3427C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A3428Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 700u, 0x08A338B8u>(ctx, &aot_mem) && ctx.pc == 0x08A3428Cu) goto L_08A3428C;
    return;
L_08A3428C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A342A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A342A4u) goto L_08A342A4;
    return;
L_08A342A4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A34E34;
      }
      goto L_08A342B0;
    }
L_08A342B0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22128)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3431C;
      }
      goto L_08A342C0;
    }
L_08A342C0:
    ctx.set_gpr(31, 0x08A342C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A342C8u) goto L_08A342C8;
    return;
L_08A342C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A342D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A342D4u) goto L_08A342D4;
    return;
L_08A342D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A342E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 45u, 0x088B0444u>(ctx, &aot_mem) && ctx.pc == 0x08A342E0u) goto L_08A342E0;
    return;
L_08A342E0:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22128), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A34300u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A34300u) goto L_08A34300;
    return;
L_08A34300:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22128)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3431Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3431Cu) goto L_08A3431C;
    return;
L_08A3431C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A34334u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A34334u) goto L_08A34334;
    return;
L_08A34334:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3434Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3434Cu) goto L_08A3434C;
    return;
L_08A3434C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22120)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A34380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A34380u) goto L_08A34380;
    return;
L_08A34380:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A34398;
      }
      goto L_08A34390;
    }
L_08A34390:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A34398;
L_08A34398:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A343A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 611u, 0x08A2ED1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A343A8u) goto L_08A343A8;
    return;
L_08A343A8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A343BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A343BCu) goto L_08A343BC;
    return;
L_08A343BC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22124)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A343F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A343F0u) goto L_08A343F0;
    return;
L_08A343F0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A34408;
      }
      goto L_08A34400;
    }
L_08A34400:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A34408;
L_08A34408:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A34418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 611u, 0x08A2ED1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A34418u) goto L_08A34418;
    return;
L_08A34418:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3442Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A3442Cu) goto L_08A3442C;
    return;
L_08A3442C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22148)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A34460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A34460u) goto L_08A34460;
    return;
L_08A34460:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A34478;
      }
      goto L_08A34470;
    }
L_08A34470:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A34478;
L_08A34478:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A34488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 611u, 0x08A2ED1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A34488u) goto L_08A34488;
    return;
L_08A34488:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3449Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A3449Cu) goto L_08A3449C;
    return;
L_08A3449C:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A344CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A344CCu) goto L_08A344CC;
    return;
L_08A344CC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A344E4;
      }
      goto L_08A344DC;
    }
L_08A344DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A344E4;
L_08A344E4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A344F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 611u, 0x08A2ED1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A344F4u) goto L_08A344F4;
    return;
L_08A344F4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A34508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A34508u) goto L_08A34508;
    return;
L_08A34508:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22136)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3453Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3453Cu) goto L_08A3453C;
    return;
L_08A3453C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A34554;
      }
      goto L_08A3454C;
    }
L_08A3454C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A34554;
L_08A34554:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A34564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 611u, 0x08A2ED1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A34564u) goto L_08A34564;
    return;
L_08A34564:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A34578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A34578u) goto L_08A34578;
    return;
L_08A34578:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A345A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A345A8u) goto L_08A345A8;
    return;
L_08A345A8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A345C0;
      }
      goto L_08A345B8;
    }
L_08A345B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A345C0;
L_08A345C0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A345D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 611u, 0x08A2ED1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A345D0u) goto L_08A345D0;
    return;
L_08A345D0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A345E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A345E4u) goto L_08A345E4;
    return;
L_08A345E4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22128)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A34618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A34618u) goto L_08A34618;
    return;
L_08A34618:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A34630;
      }
      goto L_08A34628;
    }
L_08A34628:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A34630;
L_08A34630:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A34640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 611u, 0x08A2ED1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A34640u) goto L_08A34640;
    return;
L_08A34640:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A34654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A34654u) goto L_08A34654;
    return;
L_08A34654:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A34684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A34684u) goto L_08A34684;
    return;
L_08A34684:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A3469C;
      }
      goto L_08A34694;
    }
L_08A34694:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A3469C;
L_08A3469C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A346ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 611u, 0x08A2ED1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A346ACu) goto L_08A346AC;
    return;
L_08A346AC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A346C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A346C0u) goto L_08A346C0;
    return;
L_08A346C0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22132)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A346F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A346F4u) goto L_08A346F4;
    return;
L_08A346F4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A3470C;
      }
      goto L_08A34704;
    }
L_08A34704:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A3470C;
L_08A3470C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A3471Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 611u, 0x08A2ED1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3471Cu) goto L_08A3471C;
    return;
L_08A3471C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A34730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A34730u) goto L_08A34730;
    return;
L_08A34730:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A34760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A34760u) goto L_08A34760;
    return;
L_08A34760:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A34778;
      }
      goto L_08A34770;
    }
L_08A34770:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A34778;
L_08A34778:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A34788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 611u, 0x08A2ED1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A34788u) goto L_08A34788;
    return;
L_08A34788:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3479Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A3479Cu) goto L_08A3479C;
    return;
L_08A3479C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A347ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A347ACu) goto L_08A347AC;
    return;
L_08A347AC:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A347DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A347DCu) goto L_08A347DC;
    return;
L_08A347DC:
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
          goto L_08A34818;
      }
      goto L_08A34804;
    }
L_08A34804:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A34818;
      }
      goto L_08A3480C;
    }
L_08A3480C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A34818u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A34818u) goto L_08A34818;
    return;
L_08A34818:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A34824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 624u, 0x08A2EE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A34824u) goto L_08A34824;
    return;
L_08A34824:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A3483C;
      }
      goto L_08A34834;
    }
L_08A34834:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A3483C;
L_08A3483C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A34850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A34850u) goto L_08A34850;
    return;
L_08A34850:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22132)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A34884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A34884u) goto L_08A34884;
    return;
L_08A34884:
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
          goto L_08A348C0;
      }
      goto L_08A348AC;
    }
L_08A348AC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A348C0;
      }
      goto L_08A348B4;
    }
L_08A348B4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A348C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A348C0u) goto L_08A348C0;
    return;
L_08A348C0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A348CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 624u, 0x08A2EE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A348CCu) goto L_08A348CC;
    return;
L_08A348CC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A348E4;
      }
      goto L_08A348DC;
    }
L_08A348DC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A348E4;
L_08A348E4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A348F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A348F8u) goto L_08A348F8;
    return;
L_08A348F8:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A34928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A34928u) goto L_08A34928;
    return;
L_08A34928:
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
          goto L_08A34964;
      }
      goto L_08A34950;
    }
L_08A34950:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A34964;
      }
      goto L_08A34958;
    }
L_08A34958:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A34964u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A34964u) goto L_08A34964;
    return;
L_08A34964:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A34970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 624u, 0x08A2EE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A34970u) goto L_08A34970;
    return;
L_08A34970:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A34988;
      }
      goto L_08A34980;
    }
L_08A34980:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A34988;
L_08A34988:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A3499Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A3499Cu) goto L_08A3499C;
    return;
L_08A3499C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22128)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A349D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A349D0u) goto L_08A349D0;
    return;
L_08A349D0:
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
          goto L_08A34A0C;
      }
      goto L_08A349F8;
    }
L_08A349F8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A34A0C;
      }
      goto L_08A34A00;
    }
L_08A34A00:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A34A0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A34A0Cu) goto L_08A34A0C;
    return;
L_08A34A0C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A34A18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 624u, 0x08A2EE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A34A18u) goto L_08A34A18;
    return;
L_08A34A18:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A34A30;
      }
      goto L_08A34A28;
    }
L_08A34A28:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A34A30;
L_08A34A30:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A34A44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A34A44u) goto L_08A34A44;
    return;
L_08A34A44:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A34A74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A34A74u) goto L_08A34A74;
    return;
L_08A34A74:
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
          goto L_08A34AB0;
      }
      goto L_08A34A9C;
    }
L_08A34A9C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A34AB0;
      }
      goto L_08A34AA4;
    }
L_08A34AA4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A34AB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A34AB0u) goto L_08A34AB0;
    return;
L_08A34AB0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A34ABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 624u, 0x08A2EE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A34ABCu) goto L_08A34ABC;
    return;
L_08A34ABC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A34AD4;
      }
      goto L_08A34ACC;
    }
L_08A34ACC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A34AD4;
L_08A34AD4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A34AE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A34AE8u) goto L_08A34AE8;
    return;
L_08A34AE8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22136)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A34B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A34B1Cu) goto L_08A34B1C;
    return;
L_08A34B1C:
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
          goto L_08A34B58;
      }
      goto L_08A34B44;
    }
L_08A34B44:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A34B58;
      }
      goto L_08A34B4C;
    }
L_08A34B4C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A34B58u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A34B58u) goto L_08A34B58;
    return;
L_08A34B58:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A34B64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 624u, 0x08A2EE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A34B64u) goto L_08A34B64;
    return;
L_08A34B64:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A34B7C;
      }
      goto L_08A34B74;
    }
L_08A34B74:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A34B7C;
L_08A34B7C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A34B90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A34B90u) goto L_08A34B90;
    return;
L_08A34B90:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A34BC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A34BC0u) goto L_08A34BC0;
    return;
L_08A34BC0:
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
          goto L_08A34BFC;
      }
      goto L_08A34BE8;
    }
L_08A34BE8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A34BFC;
      }
      goto L_08A34BF0;
    }
L_08A34BF0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A34BFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A34BFCu) goto L_08A34BFC;
    return;
L_08A34BFC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A34C08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 624u, 0x08A2EE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A34C08u) goto L_08A34C08;
    return;
L_08A34C08:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A34C20;
      }
      goto L_08A34C18;
    }
L_08A34C18:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A34C20;
L_08A34C20:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A34C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A34C34u) goto L_08A34C34;
    return;
L_08A34C34:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22148)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A34C68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A34C68u) goto L_08A34C68;
    return;
L_08A34C68:
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
          goto L_08A34CA4;
      }
      goto L_08A34C90;
    }
L_08A34C90:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A34CA4;
      }
      goto L_08A34C98;
    }
L_08A34C98:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A34CA4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A34CA4u) goto L_08A34CA4;
    return;
L_08A34CA4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A34CB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 624u, 0x08A2EE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A34CB0u) goto L_08A34CB0;
    return;
L_08A34CB0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A34CC8;
      }
      goto L_08A34CC0;
    }
L_08A34CC0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A34CC8;
L_08A34CC8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A34CDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A34CDCu) goto L_08A34CDC;
    return;
L_08A34CDC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22124)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A34D10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A34D10u) goto L_08A34D10;
    return;
L_08A34D10:
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
          goto L_08A34D4C;
      }
      goto L_08A34D38;
    }
L_08A34D38:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A34D4C;
      }
      goto L_08A34D40;
    }
L_08A34D40:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A34D4Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A34D4Cu) goto L_08A34D4C;
    return;
L_08A34D4C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A34D58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 624u, 0x08A2EE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A34D58u) goto L_08A34D58;
    return;
L_08A34D58:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A34D70;
      }
      goto L_08A34D68;
    }
L_08A34D68:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A34D70;
L_08A34D70:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A34D84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A34D84u) goto L_08A34D84;
    return;
L_08A34D84:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22120)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A34DB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A34DB8u) goto L_08A34DB8;
    return;
L_08A34DB8:
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
          goto L_08A34DF4;
      }
      goto L_08A34DE0;
    }
L_08A34DE0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A34DF4;
      }
      goto L_08A34DE8;
    }
L_08A34DE8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A34DF4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A34DF4u) goto L_08A34DF4;
    return;
L_08A34DF4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A34E00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 624u, 0x08A2EE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A34E00u) goto L_08A34E00;
    return;
L_08A34E00:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A34E18;
      }
      goto L_08A34E10;
    }
L_08A34E10:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A34E18;
L_08A34E18:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A34E2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A34E2Cu) goto L_08A34E2C;
    return;
L_08A34E2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A35924;
      }
      goto L_08A34E34;
    }
L_08A34E34:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22120)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A34E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A34E68u) goto L_08A34E68;
    return;
L_08A34E68:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A34E80;
      }
      goto L_08A34E78;
    }
L_08A34E78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A34E80;
L_08A34E80:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A34E90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 611u, 0x08A2ED1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A34E90u) goto L_08A34E90;
    return;
L_08A34E90:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A34EA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A34EA4u) goto L_08A34EA4;
    return;
L_08A34EA4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22124)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A34ED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A34ED8u) goto L_08A34ED8;
    return;
L_08A34ED8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A34EF0;
      }
      goto L_08A34EE8;
    }
L_08A34EE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A34EF0;
L_08A34EF0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A34F00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 611u, 0x08A2ED1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A34F00u) goto L_08A34F00;
    return;
L_08A34F00:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A34F14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A34F14u) goto L_08A34F14;
    return;
L_08A34F14:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22148)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A34F48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A34F48u) goto L_08A34F48;
    return;
L_08A34F48:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A34F60;
      }
      goto L_08A34F58;
    }
L_08A34F58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A34F60;
L_08A34F60:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A34F70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 611u, 0x08A2ED1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A34F70u) goto L_08A34F70;
    return;
L_08A34F70:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A34F84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A34F84u) goto L_08A34F84;
    return;
L_08A34F84:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22136)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A34FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A34FB8u) goto L_08A34FB8;
    return;
L_08A34FB8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A34FD0;
      }
      goto L_08A34FC8;
    }
L_08A34FC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A34FD0;
L_08A34FD0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A34FE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 611u, 0x08A2ED1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A34FE0u) goto L_08A34FE0;
    return;
L_08A34FE0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A34FF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A34FF4u) goto L_08A34FF4;
    return;
L_08A34FF4:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A35024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A35024u) goto L_08A35024;
    return;
L_08A35024:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A3503C;
      }
      goto L_08A35034;
    }
L_08A35034:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A3503C;
L_08A3503C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A3504Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 611u, 0x08A2ED1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3504Cu) goto L_08A3504C;
    return;
L_08A3504C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A35060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A35060u) goto L_08A35060;
    return;
L_08A35060:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A35090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A35090u) goto L_08A35090;
    return;
L_08A35090:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A350A8;
      }
      goto L_08A350A0;
    }
L_08A350A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A350A8;
L_08A350A8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A350B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 611u, 0x08A2ED1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A350B8u) goto L_08A350B8;
    return;
L_08A350B8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A350CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A350CCu) goto L_08A350CC;
    return;
L_08A350CC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A350DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A350DCu) goto L_08A350DC;
    return;
L_08A350DC:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A3510Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3510Cu) goto L_08A3510C;
    return;
L_08A3510C:
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
          goto L_08A35148;
      }
      goto L_08A35134;
    }
L_08A35134:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A35148;
      }
      goto L_08A3513C;
    }
L_08A3513C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A35148u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A35148u) goto L_08A35148;
    return;
L_08A35148:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A35154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 624u, 0x08A2EE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A35154u) goto L_08A35154;
    return;
L_08A35154:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A3516C;
      }
      goto L_08A35164;
    }
L_08A35164:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A3516C;
L_08A3516C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A35180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A35180u) goto L_08A35180;
    return;
L_08A35180:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A351B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A351B0u) goto L_08A351B0;
    return;
L_08A351B0:
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
          goto L_08A351EC;
      }
      goto L_08A351D8;
    }
L_08A351D8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A351EC;
      }
      goto L_08A351E0;
    }
L_08A351E0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A351ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A351ECu) goto L_08A351EC;
    return;
L_08A351EC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A351F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 624u, 0x08A2EE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A351F8u) goto L_08A351F8;
    return;
L_08A351F8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A35210;
      }
      goto L_08A35208;
    }
L_08A35208:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A35210;
L_08A35210:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A35224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A35224u) goto L_08A35224;
    return;
L_08A35224:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A35254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A35254u) goto L_08A35254;
    return;
L_08A35254:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A3526C;
      }
      goto L_08A35264;
    }
L_08A35264:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A3526C;
L_08A3526C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A3527Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 611u, 0x08A2ED1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3527Cu) goto L_08A3527C;
    return;
L_08A3527C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A35290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A35290u) goto L_08A35290;
    return;
L_08A35290:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A352C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A352C0u) goto L_08A352C0;
    return;
L_08A352C0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A352D8;
      }
      goto L_08A352D0;
    }
L_08A352D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A352D8;
L_08A352D8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A352E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 611u, 0x08A2ED1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A352E8u) goto L_08A352E8;
    return;
L_08A352E8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A352FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A352FCu) goto L_08A352FC;
    return;
L_08A352FC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22140)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A35330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A35330u) goto L_08A35330;
    return;
L_08A35330:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A35348;
      }
      goto L_08A35340;
    }
L_08A35340:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A35348;
L_08A35348:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A35358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 611u, 0x08A2ED1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A35358u) goto L_08A35358;
    return;
L_08A35358:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3536Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A3536Cu) goto L_08A3536C;
    return;
L_08A3536C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22152)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A353A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A353A0u) goto L_08A353A0;
    return;
L_08A353A0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A353B8;
      }
      goto L_08A353B0;
    }
L_08A353B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A353B8;
L_08A353B8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A353C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 611u, 0x08A2ED1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A353C8u) goto L_08A353C8;
    return;
L_08A353C8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A353DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A353DCu) goto L_08A353DC;
    return;
L_08A353DC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A353ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A353ECu) goto L_08A353EC;
    return;
L_08A353EC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22152)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A35420u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A35420u) goto L_08A35420;
    return;
L_08A35420:
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
          goto L_08A3545C;
      }
      goto L_08A35448;
    }
L_08A35448:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A3545C;
      }
      goto L_08A35450;
    }
L_08A35450:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A3545Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3545Cu) goto L_08A3545C;
    return;
L_08A3545C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A35468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 624u, 0x08A2EE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A35468u) goto L_08A35468;
    return;
L_08A35468:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A35480;
      }
      goto L_08A35478;
    }
L_08A35478:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A35480;
L_08A35480:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A35494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A35494u) goto L_08A35494;
    return;
L_08A35494:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22140)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A354C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A354C8u) goto L_08A354C8;
    return;
L_08A354C8:
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
          goto L_08A35504;
      }
      goto L_08A354F0;
    }
L_08A354F0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A35504;
      }
      goto L_08A354F8;
    }
L_08A354F8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A35504u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A35504u) goto L_08A35504;
    return;
L_08A35504:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A35510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 624u, 0x08A2EE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A35510u) goto L_08A35510;
    return;
L_08A35510:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A35528;
      }
      goto L_08A35520;
    }
L_08A35520:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A35528;
L_08A35528:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A3553Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A3553Cu) goto L_08A3553C;
    return;
L_08A3553C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A3556Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3556Cu) goto L_08A3556C;
    return;
L_08A3556C:
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
          goto L_08A355A8;
      }
      goto L_08A35594;
    }
L_08A35594:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A355A8;
      }
      goto L_08A3559C;
    }
L_08A3559C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A355A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A355A8u) goto L_08A355A8;
    return;
L_08A355A8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A355B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 624u, 0x08A2EE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A355B4u) goto L_08A355B4;
    return;
L_08A355B4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A355CC;
      }
      goto L_08A355C4;
    }
L_08A355C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A355CC;
L_08A355CC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A355E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A355E0u) goto L_08A355E0;
    return;
L_08A355E0:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A35610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A35610u) goto L_08A35610;
    return;
L_08A35610:
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
          goto L_08A3564C;
      }
      goto L_08A35638;
    }
L_08A35638:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A3564C;
      }
      goto L_08A35640;
    }
L_08A35640:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A3564Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3564Cu) goto L_08A3564C;
    return;
L_08A3564C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A35658u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 624u, 0x08A2EE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A35658u) goto L_08A35658;
    return;
L_08A35658:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A35670;
      }
      goto L_08A35668;
    }
L_08A35668:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A35670;
L_08A35670:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A35684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A35684u) goto L_08A35684;
    return;
L_08A35684:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22136)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A356B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A356B8u) goto L_08A356B8;
    return;
L_08A356B8:
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
          goto L_08A356F4;
      }
      goto L_08A356E0;
    }
L_08A356E0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A356F4;
      }
      goto L_08A356E8;
    }
L_08A356E8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A356F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A356F4u) goto L_08A356F4;
    return;
L_08A356F4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A35700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 624u, 0x08A2EE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A35700u) goto L_08A35700;
    return;
L_08A35700:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A35718;
      }
      goto L_08A35710;
    }
L_08A35710:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A35718;
L_08A35718:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A3572Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A3572Cu) goto L_08A3572C;
    return;
L_08A3572C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22148)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A35760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A35760u) goto L_08A35760;
    return;
L_08A35760:
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
          goto L_08A3579C;
      }
      goto L_08A35788;
    }
L_08A35788:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A3579C;
      }
      goto L_08A35790;
    }
L_08A35790:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A3579Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3579Cu) goto L_08A3579C;
    return;
L_08A3579C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A357A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 624u, 0x08A2EE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A357A8u) goto L_08A357A8;
    return;
L_08A357A8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A357C0;
      }
      goto L_08A357B8;
    }
L_08A357B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A357C0;
L_08A357C0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A357D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A357D4u) goto L_08A357D4;
    return;
L_08A357D4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22124)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A35808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A35808u) goto L_08A35808;
    return;
L_08A35808:
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
          goto L_08A35844;
      }
      goto L_08A35830;
    }
L_08A35830:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A35844;
      }
      goto L_08A35838;
    }
L_08A35838:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A35844u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A35844u) goto L_08A35844;
    return;
L_08A35844:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A35850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 624u, 0x08A2EE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A35850u) goto L_08A35850;
    return;
L_08A35850:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A35868;
      }
      goto L_08A35860;
    }
L_08A35860:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A35868;
L_08A35868:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A3587Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A3587Cu) goto L_08A3587C;
    return;
L_08A3587C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22120)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A358B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A358B0u) goto L_08A358B0;
    return;
L_08A358B0:
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
          goto L_08A358EC;
      }
      goto L_08A358D8;
    }
L_08A358D8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A358EC;
      }
      goto L_08A358E0;
    }
L_08A358E0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A358ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A358ECu) goto L_08A358EC;
    return;
L_08A358EC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A358F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 624u, 0x08A2EE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A358F8u) goto L_08A358F8;
    return;
L_08A358F8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A35910;
      }
      goto L_08A35908;
    }
L_08A35908:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A35910;
L_08A35910:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A35924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A35924u) goto L_08A35924;
    return;
L_08A35924:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08A35930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 515u, 0x08A62900u>(ctx, &aot_mem) && ctx.pc == 0x08A35930u) goto L_08A35930;
    return;
L_08A35930:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
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
L_08A3595C:
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
          goto L_08A359B0;
      }
      goto L_08A3598C;
    }
L_08A3598C:
    ctx.set_gpr(4, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A359AC;
      }
      goto L_08A359A4;
    }
L_08A359A4:
    ctx.set_gpr(31, 0x08A359ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A359ACu) goto L_08A359AC;
    return;
L_08A359AC:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A359B0;
L_08A359B0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3598C;
      }
      goto L_08A359BC;
    }
L_08A359BC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A359E0;
      }
      goto L_08A359CC;
    }
L_08A359CC:
    ctx.set_gpr(4, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A359E0;
L_08A359E0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A359CC;
      }
      goto L_08A359EC;
    }
L_08A359EC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A35A28;
      }
      goto L_08A35A04;
    }
L_08A35A04:
    ctx.set_gpr(4, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A35A24;
      }
      goto L_08A35A1C;
    }
L_08A35A1C:
    ctx.set_gpr(31, 0x08A35A24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A35A24u) goto L_08A35A24;
    return;
L_08A35A24:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A35A28;
L_08A35A28:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A35A04;
      }
      goto L_08A35A34;
    }
L_08A35A34:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A35A58;
      }
      goto L_08A35A44;
    }
L_08A35A44:
    ctx.set_gpr(4, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A35A58;
L_08A35A58:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A35A44;
      }
      goto L_08A35A64;
    }
L_08A35A64:
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
L_08A35A88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A35AD0;
      }
      goto L_08A35AB8;
    }
L_08A35AB8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(128)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A35AD0;
L_08A35AD0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23820)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-28056));
    ctx.set_gpr(31, 0x08A35AF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A35AF8u) goto L_08A35AF8;
    return;
L_08A35AF8:
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A35B0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 270u, 0x08A031C4u>(ctx, &aot_mem) && ctx.pc == 0x08A35B0Cu) goto L_08A35B0C;
    return;
L_08A35B0C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_fpr_bits(2, ctx.fpr_bits(0) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 16384u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = ctx.fpr[2] / ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 16128u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A35C94;
      }
      goto L_08A35B6C;
    }
L_08A35B6C:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08A35B78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 717u, 0x089FF778u>(ctx, &aot_mem) && ctx.pc == 0x08A35B78u) goto L_08A35B78;
    return;
L_08A35B78:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
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
          goto L_08A35BD0;
      }
      goto L_08A35BB8;
    }
L_08A35BB8:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A35BFC;
      }
      goto L_08A35BD0;
    }
L_08A35BD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A35BF8;
      }
      goto L_08A35BDC;
    }
L_08A35BDC:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A35BFC;
      }
      goto L_08A35BF8;
    }
L_08A35BF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08A35BFC;
L_08A35BFC:
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A35C10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08A35C10u) goto L_08A35C10;
    return;
L_08A35C10:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[3] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpr_bits(12, ctx.fpr_bits(2) ^ 0x80000000u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(1) ^ 0x80000000u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(0) ^ 0x80000000u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08A35C7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x08A35C7Cu) goto L_08A35C7C;
    return;
L_08A35C7C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A35C94;
L_08A35C94:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A35CD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A35CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 336u, 0x08A55708u>(ctx, &aot_mem) && ctx.pc == 0x08A35CFCu) goto L_08A35CFC;
    return;
L_08A35CFC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A35D0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A35D0Cu) goto L_08A35D0C;
    return;
L_08A35D0C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A35D24;
      }
      goto L_08A35D18;
    }
L_08A35D18:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A35E00;
      }
      goto L_08A35D24;
    }
L_08A35D24:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A35D38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A35D38u) goto L_08A35D38;
    return;
L_08A35D38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A35D50u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A35D50u) goto L_08A35D50;
    return;
L_08A35D50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A35D60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 29u, 0x088D01E0u>(ctx, &aot_mem) && ctx.pc == 0x08A35D60u) goto L_08A35D60;
    return;
L_08A35D60:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A35D78;
      }
      goto L_08A35D6C;
    }
L_08A35D6C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A35E00;
      }
      goto L_08A35D78;
    }
L_08A35D78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A35D94;
      }
      goto L_08A35D88;
    }
L_08A35D88:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A35E00;
      }
      goto L_08A35D94;
    }
L_08A35D94:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A35DA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 323u, 0x089A16CCu>(ctx, &aot_mem) && ctx.pc == 0x08A35DA0u) goto L_08A35DA0;
    return;
L_08A35DA0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A35DB4;
      }
      goto L_08A35DA8;
    }
L_08A35DA8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A35E00;
      }
      goto L_08A35DB4;
    }
L_08A35DB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A35DE8;
      }
      goto L_08A35DCC;
    }
L_08A35DCC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A35DE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 415u, 0x089A1BD8u>(ctx, &aot_mem) && ctx.pc == 0x08A35DE0u) goto L_08A35DE0;
    return;
L_08A35DE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A35DF8;
      }
      goto L_08A35DE8;
    }
L_08A35DE8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A35DF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 415u, 0x089A1BD8u>(ctx, &aot_mem) && ctx.pc == 0x08A35DF8u) goto L_08A35DF8;
    return;
L_08A35DF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    goto L_08A35E00;
L_08A35E00:
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
L_08A35E1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22064)));
    ctx.set_gpr(31, 0x08A35E38u);
    // nop
    goto L_08A35E48;
L_08A35E38:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A35E48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-368));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A35E70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 270u, 0x08A6991Cu>(ctx, &aot_mem) && ctx.pc == 0x08A35E70u) goto L_08A35E70;
    return;
L_08A35E70:
    ctx.set_gpr(31, 0x08A35E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 474u, 0x08A125B4u>(ctx, &aot_mem) && ctx.pc == 0x08A35E78u) goto L_08A35E78;
    return;
L_08A35E78:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A35E88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A35E88u) goto L_08A35E88;
    return;
L_08A35E88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36114;
      }
      goto L_08A35E90;
    }
L_08A35E90:
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(21776));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(41));
    goto L_08A35EA0;
L_08A35EA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A35EA0;
      }
      goto L_08A35EC4;
    }
L_08A35EC4:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-22500)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-25400)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-25672)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-24016)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-25504)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-24180)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-24504)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-24536)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-24524)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-25044)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-24872)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23488)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23360)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-24564)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-24720)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-24740)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-24612)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-24580)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-24572)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-24240)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-24260)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-25204)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-25752)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-25768)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23196)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-25116)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26156)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-25832)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23024)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26328)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26324)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26320)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26360)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23156)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26180)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26436)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26424)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26280)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23836)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-24624)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26264)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[3]);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36108;
      }
      goto L_08A360BC;
    }
L_08A360BC:
    ctx.set_gpr(3, ctx.gpr[19] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(18, ctx.gpr[3] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36104;
      }
      goto L_08A360D4;
    }
L_08A360D4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A360E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A360E0u) goto L_08A360E0;
    return;
L_08A360E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36104;
      }
      goto L_08A360E8;
    }
L_08A360E8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08A360FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 339u, 0x08A69EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A360FCu) goto L_08A360FC;
    return;
L_08A360FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36114;
      }
      goto L_08A36104;
    }
L_08A36104:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A36108;
L_08A36108:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < 41 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A360BC;
      }
      goto L_08A36114;
    }
L_08A36114:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(368));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A36134:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A36154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 280u, 0x08A699C4u>(ctx, &aot_mem) && ctx.pc == 0x08A36154u) goto L_08A36154;
    return;
L_08A36154:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A36180;
      }
      goto L_08A3615C;
    }
L_08A3615C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A36174u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A36174u) goto L_08A36174;
    return;
L_08A36174:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(236)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08A36180;
L_08A36180:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22064)));
    ctx.set_gpr(31, 0x08A36194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A36194u) goto L_08A36194;
    return;
L_08A36194:
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
L_08A361AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A361BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A361BCu) goto L_08A361BC;
    return;
L_08A361BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A361C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A361C8u) goto L_08A361C8;
    return;
L_08A361C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A361D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 362u, 0x08A0DE90u>(ctx, &aot_mem) && ctx.pc == 0x08A361D4u) goto L_08A361D4;
    return;
L_08A361D4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22064), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A361E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 515u, 0x088C2D9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A361E4u) goto L_08A361E4;
    return;
L_08A361E4:
    ctx.set_gpr(31, 0x08A361ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 373u, 0x088B22ACu>(ctx, &aot_mem) && ctx.pc == 0x08A361ECu) goto L_08A361EC;
    return;
L_08A361EC:
    ctx.set_gpr(31, 0x08A361F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 372u, 0x088BA194u>(ctx, &aot_mem) && ctx.pc == 0x08A361F4u) goto L_08A361F4;
    return;
L_08A361F4:
    ctx.set_gpr(31, 0x08A361FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 887u, 0x088AF750u>(ctx, &aot_mem) && ctx.pc == 0x08A361FCu) goto L_08A361FC;
    return;
L_08A361FC:
    ctx.set_gpr(31, 0x08A36204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 113u, 0x088B0A38u>(ctx, &aot_mem) && ctx.pc == 0x08A36204u) goto L_08A36204;
    return;
L_08A36204:
    ctx.set_gpr(31, 0x08A3620Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 834u, 0x088AF264u>(ctx, &aot_mem) && ctx.pc == 0x08A3620Cu) goto L_08A3620C;
    return;
L_08A3620C:
    ctx.set_gpr(31, 0x08A36214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 861u, 0x088AF4D4u>(ctx, &aot_mem) && ctx.pc == 0x08A36214u) goto L_08A36214;
    return;
L_08A36214:
    ctx.set_gpr(31, 0x08A3621Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 814u, 0x088AF05Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3621Cu) goto L_08A3621C;
    return;
L_08A3621C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3622C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-22064)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36268;
      }
      goto L_08A36244;
    }
L_08A36244:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A36268;
      }
      goto L_08A36260;
    }
L_08A36260:
    ctx.set_gpr(31, 0x08A36268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A36268u) goto L_08A36268;
    return;
L_08A36268:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A36278:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A36288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 429u, 0x08945EBCu>(ctx, &aot_mem) && ctx.pc == 0x08A36288u) goto L_08A36288;
    return;
L_08A36288:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A36298:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A362B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 192u, 0x08958D34u>(ctx, &aot_mem) && ctx.pc == 0x08A362B4u) goto L_08A362B4;
    return;
L_08A362B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A362CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A362CCu) goto L_08A362CC;
    return;
L_08A362CC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A362DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 192u, 0x08958D34u>(ctx, &aot_mem) && ctx.pc == 0x08A362DCu) goto L_08A362DC;
    return;
L_08A362DC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[6] - ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22112)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22108)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22112), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22108), ctx.gpr[3]);
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
L_08A36344:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(31, 0x08A36358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A36358u) goto L_08A36358;
    return;
L_08A36358:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A36368:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(31, 0x08A3637Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 70u, 0x08A00D74u>(ctx, &aot_mem) && ctx.pc == 0x08A3637Cu) goto L_08A3637C;
    return;
L_08A3637C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3638C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_fpr_bits(24, ctx.fpr_bits(14));
    ctx.set_fpr_bits(21, ctx.fpr_bits(15));
    ctx.set_fpr_bits(20, ctx.fpr_bits(16));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32268)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(23, 0x7FC00000u); else ctx.fpr[23] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(22, 0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A36418;
      }
      goto L_08A363DC;
    }
L_08A363DC:
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(31, 0x08A363F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 431u, 0x0880E21Cu>(ctx, &aot_mem) && ctx.pc == 0x08A363F0u) goto L_08A363F0;
    return;
L_08A363F0:
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[0] / ctx.fpr[21];
    ctx.set_gpr(31, 0x08A36404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 321u, 0x0880DA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A36404u) goto L_08A36404;
    return;
L_08A36404:
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(23, 0x7FC00000u); else ctx.fpr[23] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3644C;
      }
      goto L_08A36418;
    }
L_08A36418:
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(31, 0x08A3642Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 431u, 0x0880E21Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3642Cu) goto L_08A3642C;
    return;
L_08A3642C:
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[24];
    ctx.fpr[12] = ctx.fpr[0] / ctx.fpr[21];
    ctx.set_gpr(31, 0x08A36440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 321u, 0x0880DA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A36440u) goto L_08A36440;
    return;
L_08A36440:
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(22, 0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    goto L_08A3644C;
L_08A3644C:
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(31, 0x08A36460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 431u, 0x0880E21Cu>(ctx, &aot_mem) && ctx.pc == 0x08A36460u) goto L_08A36460;
    return;
L_08A36460:
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(23, 0x7FC00000u); else ctx.fpr[23] = fs * ft; }
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(31, 0x08A3647Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 431u, 0x0880E21Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3647Cu) goto L_08A3647C;
    return;
L_08A3647C:
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpr_bits(13, ctx.fpr_bits(23) ^ 0x80000000u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(14) ^ 0x80000000u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(23));
    ctx.set_fpr_bits(16, ctx.fpr_bits(21));
    ctx.set_fpr_bits(17, ctx.fpr_bits(20));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A364ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A364ACu) goto L_08A364AC;
    return;
L_08A364AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A364D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A36514;
      }
      goto L_08A36508;
    }
L_08A36508:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08A36514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 62u, 0x08A604F0u>(ctx, &aot_mem) && ctx.pc == 0x08A36514u) goto L_08A36514;
    return;
L_08A36514:
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3652Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3652Cu) goto L_08A3652C;
    return;
L_08A3652C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A36540u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A36540u) goto L_08A36540;
    return;
L_08A36540:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x08A3654Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 472u, 0x0895DF24u>(ctx, &aot_mem) && ctx.pc == 0x08A3654Cu) goto L_08A3654C;
    return;
L_08A3654C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08A36558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 472u, 0x0895DF24u>(ctx, &aot_mem) && ctx.pc == 0x08A36558u) goto L_08A36558;
    return;
L_08A36558:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(31, 0x08A36564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 472u, 0x0895DF24u>(ctx, &aot_mem) && ctx.pc == 0x08A36564u) goto L_08A36564;
    return;
L_08A36564:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x08A36570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 472u, 0x0895DF24u>(ctx, &aot_mem) && ctx.pc == 0x08A36570u) goto L_08A36570;
    return;
L_08A36570:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(268)));
    ctx.set_gpr(31, 0x08A3657Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 472u, 0x0895DF24u>(ctx, &aot_mem) && ctx.pc == 0x08A3657Cu) goto L_08A3657C;
    return;
L_08A3657C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(31, 0x08A36588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 472u, 0x0895DF24u>(ctx, &aot_mem) && ctx.pc == 0x08A36588u) goto L_08A36588;
    return;
L_08A36588:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(31, 0x08A36594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 472u, 0x0895DF24u>(ctx, &aot_mem) && ctx.pc == 0x08A36594u) goto L_08A36594;
    return;
L_08A36594:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x08A365A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 472u, 0x0895DF24u>(ctx, &aot_mem) && ctx.pc == 0x08A365A0u) goto L_08A365A0;
    return;
L_08A365A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(472)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36644;
      }
      goto L_08A365B4;
    }
L_08A365B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(472)));
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36600;
      }
      goto L_08A365DC;
    }
L_08A365DC:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A365FC;
      }
      goto L_08A365F4;
    }
L_08A365F4:
    ctx.set_gpr(31, 0x08A365FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A365FCu) goto L_08A365FC;
    return;
L_08A365FC:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A36600;
L_08A36600:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A365DC;
      }
      goto L_08A3660C;
    }
L_08A3660C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36630;
      }
      goto L_08A3661C;
    }
L_08A3661C:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08A36630;
L_08A36630:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3661C;
      }
      goto L_08A3663C;
    }
L_08A3663C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A36644;
L_08A36644:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A365B4;
      }
      goto L_08A36650;
    }
L_08A36650:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(472)));
    ctx.set_gpr(31, 0x08A3665Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 472u, 0x0895DF24u>(ctx, &aot_mem) && ctx.pc == 0x08A3665Cu) goto L_08A3665C;
    return;
L_08A3665C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(248)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(252)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), 0u);
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
L_08A36694:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x08A366B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A366B8u) goto L_08A366B8;
    return;
L_08A366B8:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(164));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A366C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 124u, 0x08A019A0u>(ctx, &aot_mem) && ctx.pc == 0x08A366C8u) goto L_08A366C8;
    return;
L_08A366C8:
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
L_08A366E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08A36708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A36708u) goto L_08A36708;
    return;
L_08A36708:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A36718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A36718u) goto L_08A36718;
    return;
L_08A36718:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25616)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08A36734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 424u, 0x08A2DBF4u>(ctx, &aot_mem) && ctx.pc == 0x08A36734u) goto L_08A36734;
    return;
L_08A36734:
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
L_08A3674C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08A36774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A36774u) goto L_08A36774;
    return;
L_08A36774:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A367DC;
      }
      goto L_08A36780;
    }
L_08A36780:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A3678Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3678Cu) goto L_08A3678C;
    return;
L_08A3678C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A36798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 302u, 0x088BDAF8u>(ctx, &aot_mem) && ctx.pc == 0x08A36798u) goto L_08A36798;
    return;
L_08A36798:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A367A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A367A8u) goto L_08A367A8;
    return;
L_08A367A8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A367B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A367B4u) goto L_08A367B4;
    return;
L_08A367B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A367C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 22u, 0x08998204u>(ctx, &aot_mem) && ctx.pc == 0x08A367C0u) goto L_08A367C0;
    return;
L_08A367C0:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A367D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A367D0u) goto L_08A367D0;
    return;
L_08A367D0:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3689C;
      }
      goto L_08A367DC;
    }
L_08A367DC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3683C;
      }
      goto L_08A367E8;
    }
L_08A367E8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A367F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A367F4u) goto L_08A367F4;
    return;
L_08A367F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A36800u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 584u, 0x088ADCE8u>(ctx, &aot_mem) && ctx.pc == 0x08A36800u) goto L_08A36800;
    return;
L_08A36800:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A36814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A36814u) goto L_08A36814;
    return;
L_08A36814:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08A36824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A36824u) goto L_08A36824;
    return;
L_08A36824:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3683C;
      }
      goto L_08A36834;
    }
L_08A36834:
    ctx.set_gpr(31, 0x08A3683Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A3683Cu) goto L_08A3683C;
    return;
L_08A3683C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3689C;
      }
      goto L_08A36848;
    }
L_08A36848:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A36854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A36854u) goto L_08A36854;
    return;
L_08A36854:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A36860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 4u, 0x0898C028u>(ctx, &aot_mem) && ctx.pc == 0x08A36860u) goto L_08A36860;
    return;
L_08A36860:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A36874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A36874u) goto L_08A36874;
    return;
L_08A36874:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x08A36884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A36884u) goto L_08A36884;
    return;
L_08A36884:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3689C;
      }
      goto L_08A36894;
    }
L_08A36894:
    ctx.set_gpr(31, 0x08A3689Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A3689Cu) goto L_08A3689C;
    return;
L_08A3689C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A368B8;
      }
      goto L_08A368A4;
    }
L_08A368A4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08A368B8u);
    // nop
    goto L_08A366E0;
L_08A368B8:
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
L_08A368D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A36924;
      }
      goto L_08A36908;
    }
L_08A36908:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(31, 0x08A36924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 478u, 0x0895DF98u>(ctx, &aot_mem) && ctx.pc == 0x08A36924u) goto L_08A36924;
    return;
L_08A36924:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A36958u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A36958u) goto L_08A36958;
    return;
L_08A36958:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A36968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 585u, 0x08A2E9A8u>(ctx, &aot_mem) && ctx.pc == 0x08A36968u) goto L_08A36968;
    return;
L_08A36968:
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
L_08A36988:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A369D8;
      }
      goto L_08A369BC;
    }
L_08A369BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24444)));
    ctx.set_gpr(31, 0x08A369D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 478u, 0x0895DF98u>(ctx, &aot_mem) && ctx.pc == 0x08A369D8u) goto L_08A369D8;
    return;
L_08A369D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A36A0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A36A0Cu) goto L_08A36A0C;
    return;
L_08A36A0C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A36A1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 585u, 0x08A2E9A8u>(ctx, &aot_mem) && ctx.pc == 0x08A36A1Cu) goto L_08A36A1C;
    return;
L_08A36A1C:
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
L_08A36A3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24444)));
    ctx.set_gpr(31, 0x08A36A58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 595u, 0x08A2EB18u>(ctx, &aot_mem) && ctx.pc == 0x08A36A58u) goto L_08A36A58;
    return;
L_08A36A58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A36A68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(31, 0x08A36A84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 595u, 0x08A2EB18u>(ctx, &aot_mem) && ctx.pc == 0x08A36A84u) goto L_08A36A84;
    return;
L_08A36A84:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A36A94:
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
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36BD8;
      }
      goto L_08A36AC8;
    }
L_08A36AC8:
    ctx.set_gpr(31, 0x08A36AD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 130u, 0x088C0B98u>(ctx, &aot_mem) && ctx.pc == 0x08A36AD0u) goto L_08A36AD0;
    return;
L_08A36AD0:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A36AE4u);
    // nop
    goto L_08A36D78;
L_08A36AE4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A36AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 116u, 0x08A28AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A36AF4u) goto L_08A36AF4;
    return;
L_08A36AF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A36B04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 115u, 0x08A28AA8u>(ctx, &aot_mem) && ctx.pc == 0x08A36B04u) goto L_08A36B04;
    return;
L_08A36B04:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x08A36B10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 501u, 0x088B6F70u>(ctx, &aot_mem) && ctx.pc == 0x08A36B10u) goto L_08A36B10;
    return;
L_08A36B10:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A36B24u);
    // nop
    goto L_08A36D78;
L_08A36B24:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A36B34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 116u, 0x08A28AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A36B34u) goto L_08A36B34;
    return;
L_08A36B34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A36B44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 115u, 0x08A28AA8u>(ctx, &aot_mem) && ctx.pc == 0x08A36B44u) goto L_08A36B44;
    return;
L_08A36B44:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(476)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36BA8;
      }
      goto L_08A36B54;
    }
L_08A36B54:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(480)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(484)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(488)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(492)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(480));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A36B84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x08A36B84u) goto L_08A36B84;
    return;
L_08A36B84:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A36BA0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A36BA0u) goto L_08A36BA0;
    return;
L_08A36BA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36BD8;
      }
      goto L_08A36BA8;
    }
L_08A36BA8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A36BC0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A36BC0u) goto L_08A36BC0;
    return;
L_08A36BC0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A36BD8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A36BD8u) goto L_08A36BD8;
    return;
L_08A36BD8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(477)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36BF4;
      }
      goto L_08A36BE4;
    }
L_08A36BE4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(31, 0x08A36BF4u);
    // nop
    goto L_08A36988;
L_08A36BF4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x08A36C04u);
    // nop
    goto L_08A368D4;
L_08A36C04:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36C2C;
      }
      goto L_08A36C10;
    }
L_08A36C10:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A36C2Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A36C2Cu) goto L_08A36C2C;
    return;
L_08A36C2C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A36C40u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A36C40u) goto L_08A36C40;
    return;
L_08A36C40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(336)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(336)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(20, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A36C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A36C80u) goto L_08A36C80;
    return;
L_08A36C80:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08A36C98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 538u, 0x08A2E4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A36C98u) goto L_08A36C98;
    return;
L_08A36C98:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A36CACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A36CACu) goto L_08A36CAC;
    return;
L_08A36CAC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A36CBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 331u, 0x08A69DB4u>(ctx, &aot_mem) && ctx.pc == 0x08A36CBCu) goto L_08A36CBC;
    return;
L_08A36CBC:
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
L_08A36CE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(240)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36D30;
      }
      goto L_08A36D1C;
    }
L_08A36D1C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36D44;
      }
      goto L_08A36D30;
    }
L_08A36D30:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08A36D44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A36D44u) goto L_08A36D44;
    return;
L_08A36D44:
    ctx.set_gpr(4, ctx.gpr[16] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
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
L_08A36D78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A36D94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(477)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36DC0;
      }
      goto L_08A36DB8;
    }
L_08A36DB8:
    ctx.set_gpr(31, 0x08A36DC0u);
    // nop
    goto L_08A36A3C;
L_08A36DC0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A36DCCu);
    // nop
    goto L_08A36A68;
L_08A36DCC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36DEC;
      }
      goto L_08A36DD8;
    }
L_08A36DD8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A36DECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A36DECu) goto L_08A36DEC;
    return;
L_08A36DEC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A36E18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 591u, 0x08A2EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A36E18u) goto L_08A36E18;
    return;
L_08A36E18:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A36E28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 333u, 0x08A69E08u>(ctx, &aot_mem) && ctx.pc == 0x08A36E28u) goto L_08A36E28;
    return;
L_08A36E28:
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
L_08A36E40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(240)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A36E58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A36E78;
      }
      goto L_08A36E70;
    }
L_08A36E70:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08A36E78;
L_08A36E78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A36E90;
      }
      goto L_08A36E88;
    }
L_08A36E88:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08A36E90;
L_08A36E90:
    ctx.set_gpr(31, 0x08A36E98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 449u, 0x08816370u>(ctx, &aot_mem) && ctx.pc == 0x08A36E98u) goto L_08A36E98;
    return;
L_08A36E98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A36EA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(260)));
    ctx.set_gpr(6, 2177u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25456));
    ctx.set_gpr(31, 0x08A36EE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 766u, 0x0895B318u>(ctx, &aot_mem) && ctx.pc == 0x08A36EE4u) goto L_08A36EE4;
    return;
L_08A36EE4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A37024;
      }
      goto L_08A36EEC;
    }
L_08A36EEC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A36EF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A36EF8u) goto L_08A36EF8;
    return;
L_08A36EF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A36F04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x08A36F04u) goto L_08A36F04;
    return;
L_08A36F04:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A36F18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x08A36F18u) goto L_08A36F18;
    return;
L_08A36F18:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A36F24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 593u, 0x0895A828u>(ctx, &aot_mem) && ctx.pc == 0x08A36F24u) goto L_08A36F24;
    return;
L_08A36F24:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(260)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36F40;
      }
      goto L_08A36F34;
    }
L_08A36F34:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A36F40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883D588u>(ctx, &aot_mem) && ctx.pc == 0x08A36F40u) goto L_08A36F40;
    return;
L_08A36F40:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(6, 2211u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(28248));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A36F5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 28u, 0x08910268u>(ctx, &aot_mem) && ctx.pc == 0x08A36F5Cu) goto L_08A36F5C;
    return;
L_08A36F5C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08A36F78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 837u, 0x0890FF10u>(ctx, &aot_mem) && ctx.pc == 0x08A36F78u) goto L_08A36F78;
    return;
L_08A36F78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A36FA0;
      }
      goto L_08A36F94;
    }
L_08A36F94:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A36FA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A36FA0u) goto L_08A36FA0;
    return;
L_08A36FA0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A36FACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A36FACu) goto L_08A36FAC;
    return;
L_08A36FAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A36FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 503u, 0x08A1287Cu>(ctx, &aot_mem) && ctx.pc == 0x08A36FB8u) goto L_08A36FB8;
    return;
L_08A36FB8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(264)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08A36FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 244u, 0x088C54E4u>(ctx, &aot_mem) && ctx.pc == 0x08A36FDCu) goto L_08A36FDC;
    return;
L_08A36FDC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08A36FF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 837u, 0x0890FF10u>(ctx, &aot_mem) && ctx.pc == 0x08A36FF4u) goto L_08A36FF4;
    return;
L_08A36FF4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A37038;
      }
      goto L_08A37010;
    }
L_08A37010:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3701Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A3701Cu) goto L_08A3701C;
    return;
L_08A3701C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37038;
      }
      goto L_08A37024;
    }
L_08A37024:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(264)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08A37038;
L_08A37038:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A37048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A37048u) goto L_08A37048;
    return;
L_08A37048:
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
L_08A3706C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(260)));
    ctx.set_gpr(6, 2177u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25456));
    ctx.set_gpr(31, 0x08A37098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 766u, 0x0895B318u>(ctx, &aot_mem) && ctx.pc == 0x08A37098u) goto L_08A37098;
    return;
L_08A37098:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A370AC;
      }
      goto L_08A370A0;
    }
L_08A370A0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37124;
      }
      goto L_08A370AC;
    }
L_08A370AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(264)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A370FC;
      }
      goto L_08A370F4;
    }
L_08A370F4:
    ctx.set_gpr(31, 0x08A370FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A370FCu) goto L_08A370FC;
    return;
L_08A370FC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A3710Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x08A3710Cu) goto L_08A3710C;
    return;
L_08A3710C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08A37124;
L_08A37124:
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
L_08A37140:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37174;
      }
      goto L_08A37160;
    }
L_08A37160:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A3716Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08A3716Cu) goto L_08A3716C;
    return;
L_08A3716C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A37180;
      }
      goto L_08A37174;
    }
L_08A37174:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A371EC;
      }
      goto L_08A37180;
    }
L_08A37180:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(260)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 2177u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25456));
    ctx.set_gpr(31, 0x08A37198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 766u, 0x0895B318u>(ctx, &aot_mem) && ctx.pc == 0x08A37198u) goto L_08A37198;
    return;
L_08A37198:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A371AC;
      }
      goto L_08A371A0;
    }
L_08A371A0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A371EC;
      }
      goto L_08A371AC;
    }
L_08A371AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(264)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A371D8;
      }
      goto L_08A371CC;
    }
L_08A371CC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A371EC;
      }
      goto L_08A371D8;
    }
L_08A371D8:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08A371EC;
L_08A371EC:
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
L_08A37204:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37244;
      }
      goto L_08A37238;
    }
L_08A37238:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37248;
      }
      goto L_08A37244;
    }
L_08A37244:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08A37248;
L_08A37248:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A372C8;
      }
      goto L_08A37254;
    }
L_08A37254:
    ctx.set_gpr(2, ctx.gpr[18] >> 5u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[18] & 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A372C4;
      }
      goto L_08A37280;
    }
L_08A37280:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A372A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 317u, 0x08A69C98u>(ctx, &aot_mem) && ctx.pc == 0x08A372A0u) goto L_08A372A0;
    return;
L_08A372A0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A372D4;
      }
      goto L_08A372AC;
    }
L_08A372AC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A372C4;
      }
      goto L_08A372B8;
    }
L_08A372B8:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A372D8;
      }
      goto L_08A372C4;
    }
L_08A372C4:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A372C8;
L_08A372C8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A37254;
      }
      goto L_08A372D4;
    }
L_08A372D4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A372D8;
L_08A372D8:
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
L_08A372FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37330;
      }
      goto L_08A37324;
    }
L_08A37324:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37364;
      }
      goto L_08A37330;
    }
L_08A37330:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A37340u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A37340u) goto L_08A37340;
    return;
L_08A37340:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A37354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 559u, 0x08A56918u>(ctx, &aot_mem) && ctx.pc == 0x08A37354u) goto L_08A37354;
    return;
L_08A37354:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A37364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 53u, 0x08A383C0u>(ctx, &aot_mem) && ctx.pc == 0x08A37364u) goto L_08A37364;
    return;
L_08A37364:
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
L_08A3737C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A373B0;
      }
      goto L_08A373A4;
    }
L_08A373A4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3740C;
      }
      goto L_08A373B0;
    }
L_08A373B0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A373C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A373C0u) goto L_08A373C0;
    return;
L_08A373C0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A373D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 740u, 0x08A575F0u>(ctx, &aot_mem) && ctx.pc == 0x08A373D4u) goto L_08A373D4;
    return;
L_08A373D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(236)));
    ctx.set_gpr(31, 0x08A373E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 585u, 0x08A2E9A8u>(ctx, &aot_mem) && ctx.pc == 0x08A373E4u) goto L_08A373E4;
    return;
L_08A373E4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A373F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 53u, 0x08A383C0u>(ctx, &aot_mem) && ctx.pc == 0x08A373F4u) goto L_08A373F4;
    return;
L_08A373F4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(236)));
    ctx.set_gpr(31, 0x08A37408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 589u, 0x08A2EA40u>(ctx, &aot_mem) && ctx.pc == 0x08A37408u) goto L_08A37408;
    return;
L_08A37408:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08A3740C;
L_08A3740C:
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
L_08A37424:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
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
          goto L_08A374AC;
      }
      goto L_08A37494;
    }
L_08A37494:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A374D8;
      }
      goto L_08A374AC;
    }
L_08A374AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A374D4;
      }
      goto L_08A374B8;
    }
L_08A374B8:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A374D8;
      }
      goto L_08A374D4;
    }
L_08A374D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08A374D8;
L_08A374D8:
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A374F8;
      }
      goto L_08A374EC;
    }
L_08A374EC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37610;
      }
      goto L_08A374F8;
    }
L_08A374F8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A37508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08A37508u) goto L_08A37508;
    return;
L_08A37508:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::sqrt(ctx.fpr[0]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[2]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A37554;
      }
      goto L_08A37544;
    }
L_08A37544:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A37570;
      }
      goto L_08A37554;
    }
L_08A37554:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A37568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 831u, 0x08A57D10u>(ctx, &aot_mem) && ctx.pc == 0x08A37568u) goto L_08A37568;
    return;
L_08A37568:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37600;
      }
      goto L_08A37570;
    }
L_08A37570:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A37598;
      }
      goto L_08A37580;
    }
L_08A37580:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A37590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 831u, 0x08A57D10u>(ctx, &aot_mem) && ctx.pc == 0x08A37590u) goto L_08A37590;
    return;
L_08A37590:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37600;
      }
      goto L_08A37598;
    }
L_08A37598:
    ctx.fpr[1] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    ctx.fpr[12] = ctx.fpr[1] / ctx.fpr[0];
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A375C0;
      }
      goto L_08A375AC;
    }
L_08A375AC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A375B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 831u, 0x08A57D10u>(ctx, &aot_mem) && ctx.pc == 0x08A375B8u) goto L_08A375B8;
    return;
L_08A375B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37600;
      }
      goto L_08A375C0;
    }
L_08A375C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A375E4;
      }
      goto L_08A375CC;
    }
L_08A375CC:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A375DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 831u, 0x08A57D10u>(ctx, &aot_mem) && ctx.pc == 0x08A375DCu) goto L_08A375DC;
    return;
L_08A375DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37600;
      }
      goto L_08A375E4;
    }
L_08A375E4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A37600;
      }
      goto L_08A375F0;
    }
L_08A375F0:
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A37600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 831u, 0x08A57D10u>(ctx, &aot_mem) && ctx.pc == 0x08A37600u) goto L_08A37600;
    return;
L_08A37600:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A37610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 53u, 0x08A383C0u>(ctx, &aot_mem) && ctx.pc == 0x08A37610u) goto L_08A37610;
    return;
L_08A37610:
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
L_08A37628:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22096)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22092)));
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22096), ctx.gpr[5]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22092), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[7] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A37678u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A37678u) goto L_08A37678;
    return;
L_08A37678:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A37688:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
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
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A376F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 192u, 0x08958D34u>(ctx, &aot_mem) && ctx.pc == 0x08A376F4u) goto L_08A376F4;
    return;
L_08A376F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37750;
      }
      goto L_08A37700;
    }
L_08A37700:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3772Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3772Cu) goto L_08A3772C;
    return;
L_08A3772C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A37748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 282u, 0x08A55228u>(ctx, &aot_mem) && ctx.pc == 0x08A37748u) goto L_08A37748;
    return;
L_08A37748:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3778C;
      }
      goto L_08A37750;
    }
L_08A37750:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08A3775Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A3775Cu) goto L_08A3775C;
    return;
L_08A3775C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A37770u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A37770u) goto L_08A37770;
    return;
L_08A37770:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A3778Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 282u, 0x08A55228u>(ctx, &aot_mem) && ctx.pc == 0x08A3778Cu) goto L_08A3778C;
    return;
L_08A3778C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A37798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 192u, 0x08958D34u>(ctx, &aot_mem) && ctx.pc == 0x08A37798u) goto L_08A37798;
    return;
L_08A37798:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[6] - ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22072)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22068)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22072), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22068), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A37808:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3786C;
      }
      goto L_08A37840;
    }
L_08A37840:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A37850u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A37850u) goto L_08A37850;
    return;
L_08A37850:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3786Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3786Cu) goto L_08A3786C;
    return;
L_08A3786C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37880;
      }
      goto L_08A37878;
    }
L_08A37878:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37A74;
      }
      goto L_08A37880;
    }
L_08A37880:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A378B4;
      }
      goto L_08A37898;
    }
L_08A37898:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(31, 0x08A378B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 478u, 0x0895DF98u>(ctx, &aot_mem) && ctx.pc == 0x08A378B4u) goto L_08A378B4;
    return;
L_08A378B4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A378F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A378F8u) goto L_08A378F8;
    return;
L_08A378F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[4] ^ 0u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37918;
      }
      goto L_08A3790C;
    }
L_08A3790C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3792C;
      }
      goto L_08A37918;
    }
L_08A37918:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08A3792C;
L_08A3792C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37950;
      }
      goto L_08A37934;
    }
L_08A37934:
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A37948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A37948u) goto L_08A37948;
    return;
L_08A37948:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37968;
      }
      goto L_08A37950;
    }
L_08A37950:
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A37968u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A37968u) goto L_08A37968;
    return;
L_08A37968:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24488)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A37984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A37984u) goto L_08A37984;
    return;
L_08A37984:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08A379C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 538u, 0x08A2E4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A379C8u) goto L_08A379C8;
    return;
L_08A379C8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A379DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A379DCu) goto L_08A379DC;
    return;
L_08A379DC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A379ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A379ECu) goto L_08A379EC;
    return;
L_08A379EC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A37A00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A37A00u) goto L_08A37A00;
    return;
L_08A37A00:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
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
          goto L_08A37A34;
      }
      goto L_08A37A28;
    }
L_08A37A28:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A37A34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A37A34u) goto L_08A37A34;
    return;
L_08A37A34:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A37A54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A37A54u) goto L_08A37A54;
    return;
L_08A37A54:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A37A68;
      }
      goto L_08A37A60;
    }
L_08A37A60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37A78;
      }
      goto L_08A37A68;
    }
L_08A37A68:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37A78;
      }
      goto L_08A37A74;
    }
L_08A37A74:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A37A78;
L_08A37A78:
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
L_08A37AA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A37AD4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A37AD4u) goto L_08A37AD4;
    return;
L_08A37AD4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A37AF0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A37AF0u) goto L_08A37AF0;
    return;
L_08A37AF0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24512)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A37B28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A37B28u) goto L_08A37B28;
    return;
L_08A37B28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[4] ^ 0u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37B48;
      }
      goto L_08A37B3C;
    }
L_08A37B3C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37B5C;
      }
      goto L_08A37B48;
    }
L_08A37B48:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08A37B5C;
L_08A37B5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37B7C;
      }
      goto L_08A37B64;
    }
L_08A37B64:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A37B74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A37B74u) goto L_08A37B74;
    return;
L_08A37B74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37B88;
      }
      goto L_08A37B7C;
    }
L_08A37B7C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A37B88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A37B88u) goto L_08A37B88;
    return;
L_08A37B88:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A37B98u);
    // nop
    goto L_08A37688;
L_08A37B98:
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
L_08A37BB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A37BC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 622u, 0x08A52658u>(ctx, &aot_mem) && ctx.pc == 0x08A37BC8u) goto L_08A37BC8;
    return;
L_08A37BC8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A37BD8:
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
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A37C20u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A37C20u) goto L_08A37C20;
    return;
L_08A37C20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37D04;
      }
      goto L_08A37C34;
    }
L_08A37C34:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A37C54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 618u, 0x08A525F0u>(ctx, &aot_mem) && ctx.pc == 0x08A37C54u) goto L_08A37C54;
    return;
L_08A37C54:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24512)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(22, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A37C9C;
      }
      goto L_08A37C80;
    }
L_08A37C80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(31, 0x08A37C9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 478u, 0x0895DF98u>(ctx, &aot_mem) && ctx.pc == 0x08A37C9Cu) goto L_08A37C9C;
    return;
L_08A37C9C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A37CD0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A37CD0u) goto L_08A37CD0;
    return;
L_08A37CD0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A37CE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 585u, 0x08A2E9A8u>(ctx, &aot_mem) && ctx.pc == 0x08A37CE0u) goto L_08A37CE0;
    return;
L_08A37CE0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A37CF0u);
    // nop
    goto L_08A37AA0;
L_08A37CF0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A37D00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 589u, 0x08A2EA40u>(ctx, &aot_mem) && ctx.pc == 0x08A37D00u) goto L_08A37D00;
    return;
L_08A37D00:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A37D04;
L_08A37D04:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A37C34;
      }
      goto L_08A37D10;
    }
L_08A37D10:
    ctx.set_gpr(2, 0u + 0u);
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
L_08A37D44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[18] + static_cast<std::uint32_t>(164));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x08A37D74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A37D74u) goto L_08A37D74;
    return;
L_08A37D74:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A37DA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A37DA0u) goto L_08A37DA0;
    return;
L_08A37DA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[4] ^ 0u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37DC0;
      }
      goto L_08A37DB4;
    }
L_08A37DB4:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37DD4;
      }
      goto L_08A37DC0;
    }
L_08A37DC0:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08A37DD4;
L_08A37DD4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37E1C;
      }
      goto L_08A37DDC;
    }
L_08A37DDC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08A37DE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A37DE8u) goto L_08A37DE8;
    return;
L_08A37DE8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A37DFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A37DFCu) goto L_08A37DFC;
    return;
L_08A37DFC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A37E14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 652u, 0x08A2F444u>(ctx, &aot_mem) && ctx.pc == 0x08A37E14u) goto L_08A37E14;
    return;
L_08A37E14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37E38;
      }
      goto L_08A37E1C;
    }
L_08A37E1C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-28120));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A37E38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 652u, 0x08A2F444u>(ctx, &aot_mem) && ctx.pc == 0x08A37E38u) goto L_08A37E38;
    return;
L_08A37E38:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A37E6C;
      }
      goto L_08A37E50;
    }
L_08A37E50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(31, 0x08A37E6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 478u, 0x0895DF98u>(ctx, &aot_mem) && ctx.pc == 0x08A37E6Cu) goto L_08A37E6C;
    return;
L_08A37E6C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x08A37E9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A37E9Cu) goto L_08A37E9C;
    return;
L_08A37E9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A37EACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 585u, 0x08A2E9A8u>(ctx, &aot_mem) && ctx.pc == 0x08A37EACu) goto L_08A37EAC;
    return;
L_08A37EAC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A37EBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A37EBCu) goto L_08A37EBC;
    return;
L_08A37EBC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A37ED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 589u, 0x08A2EA40u>(ctx, &aot_mem) && ctx.pc == 0x08A37ED0u) goto L_08A37ED0;
    return;
L_08A37ED0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A37EE4;
      }
      goto L_08A37EDC;
    }
L_08A37EDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37EE8;
      }
      goto L_08A37EE4;
    }
L_08A37EE4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A37EE8;
L_08A37EE8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A37F08:
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
    ctx.set_gpr(22, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(30, ctx.gpr[19] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37FCC;
      }
      goto L_08A37F5C;
    }
L_08A37F5C:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(23, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08A37F8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A37F8Cu) goto L_08A37F8C;
    return;
L_08A37F8C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A37FA4;
      }
      goto L_08A37F9C;
    }
L_08A37F9C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A37FA4;
L_08A37FA4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A37FB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 611u, 0x08A2ED1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A37FB4u) goto L_08A37FB4;
    return;
L_08A37FB4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08A37FC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A37FC8u) goto L_08A37FC8;
    return;
L_08A37FC8:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    goto L_08A37FCC;
L_08A37FCC:
    ctx.set_gpr(2, ctx.gpr[19] < ctx.gpr[30] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A37F5C;
      }
      goto L_08A37FD8;
    }
L_08A37FD8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 3u, 0x08A38020u>(ctx, &aot_mem); return;
      }
      goto L_08A37FE4;
    }
L_08A37FE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x08A37FF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 477u, 0x08A2DFE0u>(ctx, &aot_mem) && ctx.pc == 0x08A37FF4u) goto L_08A37FF4;
    return;
L_08A37FF4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08A38000u; return;
}

void recomp_unit_0140(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0140_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_140(Runtime &runtime) {
    runtime.register_generated_unit(140u, 0x08A34000u, 16384u, &recomp_unit_0140, &recomp_unit_0140_entry);
    runtime.register_function(0x08A34000u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34010u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34028u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34060u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3406Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34074u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34088u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A340A4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A340C0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A340DCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A340F8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34114u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34130u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34148u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34160u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34180u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34190u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A341A0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A341D8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A341DCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A341E8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34200u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34210u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34220u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3422Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3423Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34258u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3425Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34268u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3427Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3428Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A342A4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A342B0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A342C0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A342C8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A342D4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A342E0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34300u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3431Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34334u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3434Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34380u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34390u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34398u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A343A8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A343BCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A343F0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34400u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34408u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34418u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3442Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34460u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34470u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34478u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34488u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3449Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A344CCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A344DCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A344E4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A344F4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34508u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3453Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3454Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34554u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34564u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34578u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A345A8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A345B8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A345C0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A345D0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A345E4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34618u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34628u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34630u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34640u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34654u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34684u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34694u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3469Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A346ACu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A346C0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A346F4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34704u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3470Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3471Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34730u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34760u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34770u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34778u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34788u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3479Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A347ACu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A347DCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34804u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3480Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34818u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34824u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34834u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3483Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34850u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34884u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A348ACu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A348B4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A348C0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A348CCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A348DCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A348E4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A348F8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34928u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34950u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34958u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34964u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34970u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34980u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34988u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3499Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A349D0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A349F8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34A00u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34A0Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34A18u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34A28u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34A30u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34A44u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34A74u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34A9Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34AA4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34AB0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34ABCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34ACCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34AD4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34AE8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34B1Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34B44u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34B4Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34B58u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34B64u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34B74u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34B7Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34B90u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34BC0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34BE8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34BF0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34BFCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34C08u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34C18u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34C20u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34C34u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34C68u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34C90u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34C98u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34CA4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34CB0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34CC0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34CC8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34CDCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34D10u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34D38u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34D40u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34D4Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34D58u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34D68u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34D70u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34D84u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34DB8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34DE0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34DE8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34DF4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34E00u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34E10u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34E18u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34E2Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34E34u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34E68u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34E78u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34E80u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34E90u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34EA4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34ED8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34EE8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34EF0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34F00u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34F14u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34F48u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34F58u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34F60u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34F70u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34F84u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34FB8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34FC8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34FD0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34FE0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34FF4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35024u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35034u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3503Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3504Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35060u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35090u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A350A0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A350A8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A350B8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A350CCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A350DCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3510Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35134u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3513Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35148u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35154u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35164u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3516Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35180u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A351B0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A351D8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A351E0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A351ECu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A351F8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35208u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35210u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35224u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35254u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35264u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3526Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3527Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35290u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A352C0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A352D0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A352D8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A352E8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A352FCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35330u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35340u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35348u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35358u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3536Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A353A0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A353B0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A353B8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A353C8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A353DCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A353ECu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35420u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35448u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35450u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3545Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35468u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35478u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35480u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35494u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A354C8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A354F0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A354F8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35504u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35510u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35520u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35528u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3553Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3556Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35594u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3559Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A355A8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A355B4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A355C4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A355CCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A355E0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35610u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35638u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35640u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3564Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35658u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35668u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35670u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35684u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A356B8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A356E0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A356E8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A356F4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35700u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35710u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35718u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3572Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35760u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35788u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35790u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3579Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A357A8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A357B8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A357C0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A357D4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35808u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35830u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35838u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35844u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35850u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35860u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35868u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3587Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A358B0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A358D8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A358E0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A358ECu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A358F8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35908u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35910u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35924u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35930u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3595Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3598Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A359A4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A359ACu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A359B0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A359BCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A359CCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A359E0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A359ECu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35A04u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35A1Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35A24u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35A28u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35A34u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35A44u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35A58u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35A64u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35A88u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35AB8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35AD0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35AF8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35B0Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35B6Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35B78u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35BB8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35BD0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35BDCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35BF8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35BFCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35C10u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35C7Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35C94u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35CD4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35CFCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35D0Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35D18u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35D24u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35D38u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35D50u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35D60u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35D6Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35D78u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35D88u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35D94u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35DA0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35DA8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35DB4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35DCCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35DE0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35DE8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35DF8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35E00u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35E1Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35E38u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35E48u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35E70u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35E78u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35E88u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35E90u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35EA0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35EC4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A360BCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A360D4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A360E0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A360E8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A360FCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36104u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36108u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36114u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36134u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36154u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3615Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36174u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36180u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36194u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A361ACu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A361BCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A361C8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A361D4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A361E4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A361ECu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A361F4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A361FCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36204u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3620Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36214u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3621Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3622Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36244u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36260u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36268u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36278u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36288u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36298u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A362B4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A362CCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A362DCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36344u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36358u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36368u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3637Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3638Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A363DCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A363F0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36404u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36418u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3642Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36440u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3644Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36460u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3647Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A364ACu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A364D4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36508u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36514u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3652Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36540u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3654Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36558u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36564u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36570u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3657Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36588u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36594u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A365A0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A365B4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A365DCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A365F4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A365FCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36600u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3660Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3661Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36630u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3663Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36644u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36650u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3665Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36694u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A366B8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A366C8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A366E0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36708u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36718u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36734u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3674Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36774u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36780u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3678Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36798u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A367A8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A367B4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A367C0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A367D0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A367DCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A367E8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A367F4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36800u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36814u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36824u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36834u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3683Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36848u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36854u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36860u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36874u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36884u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36894u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3689Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A368A4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A368B8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A368D4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36908u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36924u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36958u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36968u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36988u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A369BCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A369D8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36A0Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36A1Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36A3Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36A58u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36A68u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36A84u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36A94u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36AC8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36AD0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36AE4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36AF4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36B04u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36B10u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36B24u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36B34u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36B44u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36B54u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36B84u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36BA0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36BA8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36BC0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36BD8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36BE4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36BF4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36C04u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36C10u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36C2Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36C40u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36C80u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36C98u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36CACu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36CBCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36CE4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36D1Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36D30u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36D44u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36D78u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36D94u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36DB8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36DC0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36DCCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36DD8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36DECu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36E18u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36E28u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36E40u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36E58u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36E70u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36E78u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36E88u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36E90u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36E98u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36EA8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36EE4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36EECu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36EF8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36F04u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36F18u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36F24u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36F34u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36F40u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36F5Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36F78u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36F94u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36FA0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36FACu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36FB8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36FDCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36FF4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37010u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3701Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37024u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37038u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37048u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3706Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37098u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A370A0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A370ACu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A370F4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A370FCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3710Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37124u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37140u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37160u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3716Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37174u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37180u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37198u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A371A0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A371ACu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A371CCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A371D8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A371ECu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37204u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37238u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37244u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37248u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37254u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37280u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A372A0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A372ACu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A372B8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A372C4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A372C8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A372D4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A372D8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A372FCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37324u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37330u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37340u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37354u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37364u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3737Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A373A4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A373B0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A373C0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A373D4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A373E4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A373F4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37408u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3740Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37424u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37494u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A374ACu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A374B8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A374D4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A374D8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A374ECu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A374F8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37508u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37544u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37554u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37568u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37570u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37580u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37590u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37598u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A375ACu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A375B8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A375C0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A375CCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A375DCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A375E4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A375F0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37600u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37610u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37628u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37678u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37688u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A376F4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37700u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3772Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37748u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37750u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3775Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37770u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3778Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37798u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37808u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37840u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37850u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3786Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37878u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37880u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37898u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A378B4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A378F8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3790Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37918u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3792Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37934u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37948u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37950u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37968u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37984u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A379C8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A379DCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A379ECu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37A00u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37A28u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37A34u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37A54u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37A60u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37A68u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37A74u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37A78u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37AA0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37AD4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37AF0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37B28u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37B3Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37B48u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37B5Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37B64u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37B74u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37B7Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37B88u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37B98u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37BB8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37BC8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37BD8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37C20u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37C34u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37C54u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37C80u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37C9Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37CD0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37CE0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37CF0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37D00u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37D04u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37D10u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37D44u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37D74u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37DA0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37DB4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37DC0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37DD4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37DDCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37DE8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37DFCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37E14u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37E1Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37E38u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37E50u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37E6Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37E9Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37EACu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37EBCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37ED0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37EDCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37EE4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37EE8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37F08u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37F5Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37F8Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37F9Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37FA4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37FB4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37FC8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37FCCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37FD8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37FE4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37FF4u, &recomp_unit_0140, "recomp_unit_0140");
}
} // namespace psprecomp
