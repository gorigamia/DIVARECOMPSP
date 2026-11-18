#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0053[4095] = {
    1, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 8, 0,
    9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 14, 0, 0, 0, 0, 15, 0,
    0, 16, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 19, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23,
    0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 26, 0, 0, 0, 27, 0, 28, 0, 0, 0, 29, 0, 30, 0, 0, 0, 31, 0, 0, 0,
    0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0,
    0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0,
    47, 0, 48, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0,
    55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 61, 0,
    0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0,
    0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 81, 0, 0, 0, 0, 82, 0,
    0, 0, 0, 83, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89,
    0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 97,
    0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 107, 0, 108, 0, 0, 0, 0,
    0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 116,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0,
    0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 130, 0, 0, 0, 0, 131,
    0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0,
    138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0,
    144, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0,
    0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 160, 0, 0,
    0, 0, 161, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 167, 0, 0, 0, 0, 0,
    0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0,
    0, 174, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0,
    0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0,
    0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 201, 0, 0,
    0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0,
    0, 208, 0, 209, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 214, 215, 0, 0, 0, 0, 216, 0, 0,
    0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 221, 0, 0, 0, 222, 0, 223, 0, 0, 0,
    224, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 231,
    0, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0,
    237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0,
    0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0,
    251, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0,
    0, 258, 0, 0, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264,
    0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 279, 0,
    0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0,
    291, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 295, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0,
    0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 304, 0,
    0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0,
    0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 313, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 319, 0, 0, 0, 0, 320, 0,
    0, 0, 0, 321, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 325, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 327,
    0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0,
    0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0,
    340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 345, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0,
    0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 358, 0, 0, 359, 0, 0, 0, 0, 360, 0,
    0, 0, 0, 361, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 365, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 367,
    0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 371, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 375,
    0, 0, 0, 376, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0,
    382, 0, 383, 0, 0, 0, 384, 0, 385, 0, 0, 0, 386, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0,
    0, 0, 0, 391, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0,
    0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 405, 0, 0, 406, 0, 0, 0, 0,
    407, 0, 0, 0, 0, 408, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 412, 0, 413, 0, 0, 0, 0, 0, 0, 0,
    0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 420,
    0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0,
    0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0,
    435, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 440,
    0, 0, 0, 0, 0, 0, 441, 0, 442, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 446, 0, 0, 0, 447, 0, 0, 0, 0,
    0, 0, 0, 0, 448, 0, 449, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 0,
    0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0, 458, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 460,
    0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 464, 0, 0, 0, 465, 0, 0,
    0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0, 469, 0,
    0, 0, 470, 0, 0, 0, 0, 0, 0, 471, 0, 472, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 476, 0, 0, 0, 477, 0,
    0, 0, 0, 0, 0, 0, 0, 478, 0, 479, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 483,
    0, 484, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 487, 0, 488, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0,
    490, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 493, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 495, 0,
    0, 0, 0, 0, 496, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0,
    0, 0, 0, 505, 0, 0, 0, 506, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0,
    0, 0, 510, 0, 511, 0, 0, 512, 0, 0, 0, 0, 513, 0, 0, 0, 0, 514, 0, 515, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0,
    517, 0, 518, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 522, 0, 0, 523, 0, 524, 0, 0,
    0, 0, 525, 0, 0, 526, 0, 0, 0, 0, 527, 0, 0, 528, 0, 0, 0, 529, 530, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 532, 0, 0,
    0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 535, 0, 536, 0, 0, 0, 537, 0, 538, 0, 0, 0, 539, 0, 540, 0, 0, 0,
    541, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 544, 0, 545, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 547,
    0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 550, 0, 551, 0, 552, 0, 0, 0, 553, 0, 0, 554, 0, 555, 0, 0, 0, 0,
    0, 0, 556, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 558, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 561, 0, 0, 0, 562, 0, 0, 0, 563, 0, 0, 0, 564, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 567, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 569, 0,
    0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 572, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0, 0, 575, 0,
    0, 576, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 578, 0, 0, 0, 579, 0, 0, 0, 580, 0, 0, 0, 0, 581, 0, 0, 0, 0, 582,
    0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 586, 0, 0, 587, 0, 0,
    0, 588, 0, 0, 0, 589, 0, 0, 0, 590, 0, 0, 0, 591, 0, 0, 0, 592, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 594, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 596, 0, 597, 0, 0, 598, 0, 0, 0, 0, 599, 0, 0, 0, 0, 600,
    0, 601, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 604, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0,
    607, 0, 0, 0, 0, 0, 608, 0, 609, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 611, 0, 612, 0, 0, 613, 0, 0, 614, 0, 615, 0,
    0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 618, 0, 619, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 621, 0, 0,
    0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 624, 0, 0,
    0, 625, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 629, 0, 0, 0, 0, 630,
    0, 0, 0, 0, 631, 0, 0, 0, 0, 632, 0, 0, 0, 0, 633, 0, 0, 0, 0, 634, 0, 0, 0, 0, 635, 0, 0, 636, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 640, 0, 0, 0, 641, 0, 0,
    0, 642, 0, 0, 0, 643, 0, 0, 0, 644, 0, 0, 0, 645, 0, 0, 0, 646, 0, 0, 0, 647, 0, 0, 0, 648, 0, 0, 0, 649, 0, 0,
    0, 650, 0, 0, 0, 651, 0, 0, 0, 652, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 655,
    0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 657, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 660, 0, 661, 0, 0, 0,
    0, 0, 662, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 666, 0,
    0, 0, 0, 0, 667, 0, 0, 0, 668, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 670,
    0, 0, 0, 671, 0, 0, 0, 672, 0, 0, 0, 673, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 675, 0, 0, 0, 0, 676, 0, 0, 0, 0,
    0, 677, 0, 0, 0, 0, 678, 0, 679, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0,
    0, 0, 683, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 686, 0, 0, 0, 687, 0, 0, 0, 688, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 690, 0, 0, 0, 691, 0, 0, 0,
    692, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 696, 0, 0, 0, 697, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 700, 0, 701, 0, 0, 702, 0, 0, 0, 0, 703, 0, 0,
    0, 0, 704, 0, 705, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 708, 0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0,
    0, 0, 0, 711, 0, 0, 0, 0, 0, 712, 0, 0, 713, 0, 714, 0, 0, 0, 0, 715, 0, 0, 716, 0, 0, 0, 0, 717, 0, 0, 718, 0,
    0, 0, 719, 720, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0, 0, 724, 0, 0, 725,
    0, 726, 0, 0, 0, 727, 0, 728, 0, 0, 0, 729, 0, 730, 0, 0, 0, 731, 0, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 733, 0, 0,
    0, 0, 734, 0, 735, 0, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 737, 0, 738, 0, 0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 740,
    0, 741, 0, 742, 0, 0, 0, 743, 0, 0, 0, 0, 0, 0, 744, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 0, 746, 0, 0, 0, 747, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 748, 0, 0, 0, 749, 0, 0, 0, 750,
    0, 0, 0, 751, 0, 0, 0, 0, 0, 0, 0, 0, 0, 752, 0, 0, 0, 0, 0, 0, 753, 0, 0, 0, 754, 0, 0, 755, 0, 0, 0, 0,
    0, 0, 0, 0, 756, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0,
    760, 0, 761, 0, 0, 762, 0, 0, 0, 0, 763, 0, 0, 0, 0, 764, 0, 765, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0,
    768, 0, 769, 0, 0, 0, 0, 0, 0, 0, 0, 770, 0, 0, 0, 0, 771, 0, 0, 0, 0, 0, 772, 0, 773, 0, 0, 0, 0, 0, 774,
};
void recomp_unit_0053_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088D8004u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0053[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088D8004;
    case 2u: goto L_088D8010;
    case 3u: goto L_088D8024;
    case 4u: goto L_088D8038;
    case 5u: goto L_088D8040;
    case 6u: goto L_088D8050;
    case 7u: goto L_088D8074;
    case 8u: goto L_088D807C;
    case 9u: goto L_088D8084;
    case 10u: goto L_088D80A8;
    case 11u: goto L_088D80BC;
    case 12u: goto L_088D80D4;
    case 13u: goto L_088D80E0;
    case 14u: goto L_088D80E8;
    case 15u: goto L_088D80FC;
    case 16u: goto L_088D8108;
    case 17u: goto L_088D811C;
    case 18u: goto L_088D8128;
    case 19u: goto L_088D8138;
    case 20u: goto L_088D813C;
    case 21u: goto L_088D8150;
    case 22u: goto L_088D8168;
    case 23u: goto L_088D8180;
    case 24u: goto L_088D81A0;
    case 25u: goto L_088D81AC;
    case 26u: goto L_088D81B4;
    case 27u: goto L_088D81C4;
    case 28u: goto L_088D81CC;
    case 29u: goto L_088D81DC;
    case 30u: goto L_088D81E4;
    case 31u: goto L_088D81F4;
    case 32u: goto L_088D820C;
    case 33u: goto L_088D8224;
    case 34u: goto L_088D8238;
    case 35u: goto L_088D8240;
    case 36u: goto L_088D8258;
    case 37u: goto L_088D8270;
    case 38u: goto L_088D8278;
    case 39u: goto L_088D829C;
    case 40u: goto L_088D82B4;
    case 41u: goto L_088D82CC;
    case 42u: goto L_088D82DC;
    case 43u: goto L_088D8338;
    case 44u: goto L_088D8348;
    case 45u: goto L_088D8358;
    case 46u: goto L_088D8368;
    case 47u: goto L_088D8384;
    case 48u: goto L_088D838C;
    case 49u: goto L_088D8398;
    case 50u: goto L_088D83AC;
    case 51u: goto L_088D83C0;
    case 52u: goto L_088D83C8;
    case 53u: goto L_088D83D8;
    case 54u: goto L_088D83FC;
    case 55u: goto L_088D8404;
    case 56u: goto L_088D840C;
    case 57u: goto L_088D8430;
    case 58u: goto L_088D8444;
    case 59u: goto L_088D845C;
    case 60u: goto L_088D8464;
    case 61u: goto L_088D847C;
    case 62u: goto L_088D8494;
    case 63u: goto L_088D84A8;
    case 64u: goto L_088D84B0;
    case 65u: goto L_088D84C8;
    case 66u: goto L_088D84E0;
    case 67u: goto L_088D84F0;
    case 68u: goto L_088D8500;
    case 69u: goto L_088D8558;
    case 70u: goto L_088D8568;
    case 71u: goto L_088D8578;
    case 72u: goto L_088D8588;
    case 73u: goto L_088D85B0;
    case 74u: goto L_088D85CC;
    case 75u: goto L_088D85DC;
    case 76u: goto L_088D85E8;
    case 77u: goto L_088D861C;
    case 78u: goto L_088D8638;
    case 79u: goto L_088D8654;
    case 80u: goto L_088D865C;
    case 81u: goto L_088D8668;
    case 82u: goto L_088D867C;
    case 83u: goto L_088D8690;
    case 84u: goto L_088D8698;
    case 85u: goto L_088D86A8;
    case 86u: goto L_088D86CC;
    case 87u: goto L_088D86D4;
    case 88u: goto L_088D86DC;
    case 89u: goto L_088D8700;
    case 90u: goto L_088D8714;
    case 91u: goto L_088D8720;
    case 92u: goto L_088D8734;
    case 93u: goto L_088D8744;
    case 94u: goto L_088D874C;
    case 95u: goto L_088D8764;
    case 96u: goto L_088D8778;
    case 97u: goto L_088D8780;
    case 98u: goto L_088D8798;
    case 99u: goto L_088D87B0;
    case 100u: goto L_088D87C4;
    case 101u: goto L_088D87EC;
    case 102u: goto L_088D8804;
    case 103u: goto L_088D8824;
    case 104u: goto L_088D883C;
    case 105u: goto L_088D884C;
    case 106u: goto L_088D8864;
    case 107u: goto L_088D8868;
    case 108u: goto L_088D8870;
    case 109u: goto L_088D8888;
    case 110u: goto L_088D8894;
    case 111u: goto L_088D88A0;
    case 112u: goto L_088D88AC;
    case 113u: goto L_088D88C8;
    case 114u: goto L_088D88E0;
    case 115u: goto L_088D88F0;
    case 116u: goto L_088D8900;
    case 117u: goto L_088D895C;
    case 118u: goto L_088D896C;
    case 119u: goto L_088D897C;
    case 120u: goto L_088D898C;
    case 121u: goto L_088D899C;
    case 122u: goto L_088D89C0;
    case 123u: goto L_088D89DC;
    case 124u: goto L_088D89EC;
    case 125u: goto L_088D89FC;
    case 126u: goto L_088D8A24;
    case 127u: goto L_088D8A3C;
    case 128u: goto L_088D8A58;
    case 129u: goto L_088D8A60;
    case 130u: goto L_088D8A6C;
    case 131u: goto L_088D8A80;
    case 132u: goto L_088D8A94;
    case 133u: goto L_088D8A9C;
    case 134u: goto L_088D8AAC;
    case 135u: goto L_088D8AD0;
    case 136u: goto L_088D8AD8;
    case 137u: goto L_088D8AE0;
    case 138u: goto L_088D8B04;
    case 139u: goto L_088D8B18;
    case 140u: goto L_088D8B30;
    case 141u: goto L_088D8B44;
    case 142u: goto L_088D8B58;
    case 143u: goto L_088D8B70;
    case 144u: goto L_088D8B84;
    case 145u: goto L_088D8B8C;
    case 146u: goto L_088D8BA4;
    case 147u: goto L_088D8BBC;
    case 148u: goto L_088D8BD0;
    case 149u: goto L_088D8BF4;
    case 150u: goto L_088D8C0C;
    case 151u: goto L_088D8C24;
    case 152u: goto L_088D8C34;
    case 153u: goto L_088D8C44;
    case 154u: goto L_088D8C98;
    case 155u: goto L_088D8CA8;
    case 156u: goto L_088D8CB8;
    case 157u: goto L_088D8CC8;
    case 158u: goto L_088D8CE4;
    case 159u: goto L_088D8CEC;
    case 160u: goto L_088D8CF8;
    case 161u: goto L_088D8D0C;
    case 162u: goto L_088D8D20;
    case 163u: goto L_088D8D28;
    case 164u: goto L_088D8D38;
    case 165u: goto L_088D8D5C;
    case 166u: goto L_088D8D64;
    case 167u: goto L_088D8D6C;
    case 168u: goto L_088D8D90;
    case 169u: goto L_088D8DA4;
    case 170u: goto L_088D8DBC;
    case 171u: goto L_088D8DC4;
    case 172u: goto L_088D8DDC;
    case 173u: goto L_088D8DF4;
    case 174u: goto L_088D8E08;
    case 175u: goto L_088D8E10;
    case 176u: goto L_088D8E28;
    case 177u: goto L_088D8E40;
    case 178u: goto L_088D8E54;
    case 179u: goto L_088D8E7C;
    case 180u: goto L_088D8E94;
    case 181u: goto L_088D8EAC;
    case 182u: goto L_088D8EBC;
    case 183u: goto L_088D8ECC;
    case 184u: goto L_088D8F28;
    case 185u: goto L_088D8F38;
    case 186u: goto L_088D8F48;
    case 187u: goto L_088D8F58;
    case 188u: goto L_088D8F68;
    case 189u: goto L_088D8F8C;
    case 190u: goto L_088D8FA8;
    case 191u: goto L_088D8FB8;
    case 192u: goto L_088D8FC8;
    case 193u: goto L_088D8FF0;
    case 194u: goto L_088D9008;
    case 195u: goto L_088D9024;
    case 196u: goto L_088D902C;
    case 197u: goto L_088D9038;
    case 198u: goto L_088D904C;
    case 199u: goto L_088D9060;
    case 200u: goto L_088D9068;
    case 201u: goto L_088D9078;
    case 202u: goto L_088D909C;
    case 203u: goto L_088D90A4;
    case 204u: goto L_088D90AC;
    case 205u: goto L_088D90D0;
    case 206u: goto L_088D90E4;
    case 207u: goto L_088D90FC;
    case 208u: goto L_088D9108;
    case 209u: goto L_088D9110;
    case 210u: goto L_088D9124;
    case 211u: goto L_088D9130;
    case 212u: goto L_088D9144;
    case 213u: goto L_088D9150;
    case 214u: goto L_088D9160;
    case 215u: goto L_088D9164;
    case 216u: goto L_088D9178;
    case 217u: goto L_088D9190;
    case 218u: goto L_088D91A8;
    case 219u: goto L_088D91C8;
    case 220u: goto L_088D91D4;
    case 221u: goto L_088D91DC;
    case 222u: goto L_088D91EC;
    case 223u: goto L_088D91F4;
    case 224u: goto L_088D9204;
    case 225u: goto L_088D920C;
    case 226u: goto L_088D921C;
    case 227u: goto L_088D9234;
    case 228u: goto L_088D924C;
    case 229u: goto L_088D9260;
    case 230u: goto L_088D9268;
    case 231u: goto L_088D9280;
    case 232u: goto L_088D9298;
    case 233u: goto L_088D92A0;
    case 234u: goto L_088D92C4;
    case 235u: goto L_088D92DC;
    case 236u: goto L_088D92F4;
    case 237u: goto L_088D9304;
    case 238u: goto L_088D9368;
    case 239u: goto L_088D9378;
    case 240u: goto L_088D9388;
    case 241u: goto L_088D9398;
    case 242u: goto L_088D93BC;
    case 243u: goto L_088D93D8;
    case 244u: goto L_088D93E8;
    case 245u: goto L_088D9414;
    case 246u: goto L_088D942C;
    case 247u: goto L_088D9448;
    case 248u: goto L_088D9450;
    case 249u: goto L_088D945C;
    case 250u: goto L_088D9470;
    case 251u: goto L_088D9484;
    case 252u: goto L_088D948C;
    case 253u: goto L_088D949C;
    case 254u: goto L_088D94C0;
    case 255u: goto L_088D94C8;
    case 256u: goto L_088D94D0;
    case 257u: goto L_088D94F4;
    case 258u: goto L_088D9508;
    case 259u: goto L_088D9520;
    case 260u: goto L_088D9528;
    case 261u: goto L_088D9540;
    case 262u: goto L_088D9558;
    case 263u: goto L_088D956C;
    case 264u: goto L_088D9580;
    case 265u: goto L_088D9598;
    case 266u: goto L_088D95AC;
    case 267u: goto L_088D95B4;
    case 268u: goto L_088D95CC;
    case 269u: goto L_088D95E4;
    case 270u: goto L_088D95F8;
    case 271u: goto L_088D9620;
    case 272u: goto L_088D9638;
    case 273u: goto L_088D9650;
    case 274u: goto L_088D9660;
    case 275u: goto L_088D9670;
    case 276u: goto L_088D96CC;
    case 277u: goto L_088D96DC;
    case 278u: goto L_088D96EC;
    case 279u: goto L_088D96FC;
    case 280u: goto L_088D970C;
    case 281u: goto L_088D9730;
    case 282u: goto L_088D974C;
    case 283u: goto L_088D975C;
    case 284u: goto L_088D976C;
    case 285u: goto L_088D9794;
    case 286u: goto L_088D97AC;
    case 287u: goto L_088D97C8;
    case 288u: goto L_088D97D0;
    case 289u: goto L_088D97DC;
    case 290u: goto L_088D97F0;
    case 291u: goto L_088D9804;
    case 292u: goto L_088D980C;
    case 293u: goto L_088D981C;
    case 294u: goto L_088D9840;
    case 295u: goto L_088D9848;
    case 296u: goto L_088D9850;
    case 297u: goto L_088D9874;
    case 298u: goto L_088D9888;
    case 299u: goto L_088D98A0;
    case 300u: goto L_088D98B4;
    case 301u: goto L_088D98C8;
    case 302u: goto L_088D98E0;
    case 303u: goto L_088D98F4;
    case 304u: goto L_088D98FC;
    case 305u: goto L_088D9914;
    case 306u: goto L_088D992C;
    case 307u: goto L_088D9940;
    case 308u: goto L_088D9964;
    case 309u: goto L_088D997C;
    case 310u: goto L_088D9994;
    case 311u: goto L_088D99A4;
    case 312u: goto L_088D99B4;
    case 313u: goto L_088D9A08;
    case 314u: goto L_088D9A18;
    case 315u: goto L_088D9A28;
    case 316u: goto L_088D9A38;
    case 317u: goto L_088D9A54;
    case 318u: goto L_088D9A5C;
    case 319u: goto L_088D9A68;
    case 320u: goto L_088D9A7C;
    case 321u: goto L_088D9A90;
    case 322u: goto L_088D9A98;
    case 323u: goto L_088D9AA8;
    case 324u: goto L_088D9ACC;
    case 325u: goto L_088D9AD4;
    case 326u: goto L_088D9ADC;
    case 327u: goto L_088D9B00;
    case 328u: goto L_088D9B14;
    case 329u: goto L_088D9B2C;
    case 330u: goto L_088D9B34;
    case 331u: goto L_088D9B4C;
    case 332u: goto L_088D9B64;
    case 333u: goto L_088D9B78;
    case 334u: goto L_088D9B8C;
    case 335u: goto L_088D9BA4;
    case 336u: goto L_088D9BB8;
    case 337u: goto L_088D9BC0;
    case 338u: goto L_088D9BD8;
    case 339u: goto L_088D9BF0;
    case 340u: goto L_088D9C04;
    case 341u: goto L_088D9C2C;
    case 342u: goto L_088D9C44;
    case 343u: goto L_088D9C5C;
    case 344u: goto L_088D9C6C;
    case 345u: goto L_088D9C7C;
    case 346u: goto L_088D9CD8;
    case 347u: goto L_088D9CE8;
    case 348u: goto L_088D9CF8;
    case 349u: goto L_088D9D08;
    case 350u: goto L_088D9D18;
    case 351u: goto L_088D9D3C;
    case 352u: goto L_088D9D58;
    case 353u: goto L_088D9D68;
    case 354u: goto L_088D9D78;
    case 355u: goto L_088D9DA0;
    case 356u: goto L_088D9DB8;
    case 357u: goto L_088D9DD4;
    case 358u: goto L_088D9DDC;
    case 359u: goto L_088D9DE8;
    case 360u: goto L_088D9DFC;
    case 361u: goto L_088D9E10;
    case 362u: goto L_088D9E18;
    case 363u: goto L_088D9E28;
    case 364u: goto L_088D9E4C;
    case 365u: goto L_088D9E54;
    case 366u: goto L_088D9E5C;
    case 367u: goto L_088D9E80;
    case 368u: goto L_088D9E94;
    case 369u: goto L_088D9EAC;
    case 370u: goto L_088D9EB8;
    case 371u: goto L_088D9EC0;
    case 372u: goto L_088D9ED4;
    case 373u: goto L_088D9EE0;
    case 374u: goto L_088D9EF4;
    case 375u: goto L_088D9F00;
    case 376u: goto L_088D9F10;
    case 377u: goto L_088D9F14;
    case 378u: goto L_088D9F28;
    case 379u: goto L_088D9F40;
    case 380u: goto L_088D9F58;
    case 381u: goto L_088D9F78;
    case 382u: goto L_088D9F84;
    case 383u: goto L_088D9F8C;
    case 384u: goto L_088D9F9C;
    case 385u: goto L_088D9FA4;
    case 386u: goto L_088D9FB4;
    case 387u: goto L_088D9FBC;
    case 388u: goto L_088D9FCC;
    case 389u: goto L_088D9FE4;
    case 390u: goto L_088D9FFC;
    case 391u: goto L_088DA010;
    case 392u: goto L_088DA018;
    case 393u: goto L_088DA030;
    case 394u: goto L_088DA048;
    case 395u: goto L_088DA050;
    case 396u: goto L_088DA074;
    case 397u: goto L_088DA08C;
    case 398u: goto L_088DA0A4;
    case 399u: goto L_088DA0B4;
    case 400u: goto L_088DA110;
    case 401u: goto L_088DA120;
    case 402u: goto L_088DA130;
    case 403u: goto L_088DA140;
    case 404u: goto L_088DA15C;
    case 405u: goto L_088DA164;
    case 406u: goto L_088DA170;
    case 407u: goto L_088DA184;
    case 408u: goto L_088DA198;
    case 409u: goto L_088DA1A0;
    case 410u: goto L_088DA1B0;
    case 411u: goto L_088DA1D4;
    case 412u: goto L_088DA1DC;
    case 413u: goto L_088DA1E4;
    case 414u: goto L_088DA208;
    case 415u: goto L_088DA21C;
    case 416u: goto L_088DA234;
    case 417u: goto L_088DA23C;
    case 418u: goto L_088DA254;
    case 419u: goto L_088DA26C;
    case 420u: goto L_088DA280;
    case 421u: goto L_088DA288;
    case 422u: goto L_088DA2A0;
    case 423u: goto L_088DA2B8;
    case 424u: goto L_088DA2CC;
    case 425u: goto L_088DA2F4;
    case 426u: goto L_088DA30C;
    case 427u: goto L_088DA324;
    case 428u: goto L_088DA334;
    case 429u: goto L_088DA344;
    case 430u: goto L_088DA3A0;
    case 431u: goto L_088DA3B0;
    case 432u: goto L_088DA3C0;
    case 433u: goto L_088DA3D0;
    case 434u: goto L_088DA3E0;
    case 435u: goto L_088DA404;
    case 436u: goto L_088DA420;
    case 437u: goto L_088DA430;
    case 438u: goto L_088DA440;
    case 439u: goto L_088DA468;
    case 440u: goto L_088DA480;
    case 441u: goto L_088DA49C;
    case 442u: goto L_088DA4A4;
    case 443u: goto L_088DA4B0;
    case 444u: goto L_088DA4C4;
    case 445u: goto L_088DA4D8;
    case 446u: goto L_088DA4E0;
    case 447u: goto L_088DA4F0;
    case 448u: goto L_088DA514;
    case 449u: goto L_088DA51C;
    case 450u: goto L_088DA524;
    case 451u: goto L_088DA548;
    case 452u: goto L_088DA55C;
    case 453u: goto L_088DA574;
    case 454u: goto L_088DA588;
    case 455u: goto L_088DA59C;
    case 456u: goto L_088DA5B4;
    case 457u: goto L_088DA5C8;
    case 458u: goto L_088DA5D0;
    case 459u: goto L_088DA5E8;
    case 460u: goto L_088DA600;
    case 461u: goto L_088DA614;
    case 462u: goto L_088DA638;
    case 463u: goto L_088DA650;
    case 464u: goto L_088DA668;
    case 465u: goto L_088DA678;
    case 466u: goto L_088DA688;
    case 467u: goto L_088DA6DC;
    case 468u: goto L_088DA6EC;
    case 469u: goto L_088DA6FC;
    case 470u: goto L_088DA70C;
    case 471u: goto L_088DA728;
    case 472u: goto L_088DA730;
    case 473u: goto L_088DA73C;
    case 474u: goto L_088DA750;
    case 475u: goto L_088DA764;
    case 476u: goto L_088DA76C;
    case 477u: goto L_088DA77C;
    case 478u: goto L_088DA7A0;
    case 479u: goto L_088DA7A8;
    case 480u: goto L_088DA7B0;
    case 481u: goto L_088DA7D4;
    case 482u: goto L_088DA7E8;
    case 483u: goto L_088DA800;
    case 484u: goto L_088DA808;
    case 485u: goto L_088DA820;
    case 486u: goto L_088DA838;
    case 487u: goto L_088DA84C;
    case 488u: goto L_088DA854;
    case 489u: goto L_088DA86C;
    case 490u: goto L_088DA884;
    case 491u: goto L_088DA898;
    case 492u: goto L_088DA8BC;
    case 493u: goto L_088DA8C8;
    case 494u: goto L_088DA8E4;
    case 495u: goto L_088DA8FC;
    case 496u: goto L_088DA914;
    case 497u: goto L_088DA924;
    case 498u: goto L_088DA934;
    case 499u: goto L_088DA990;
    case 500u: goto L_088DA9A0;
    case 501u: goto L_088DA9B0;
    case 502u: goto L_088DA9C0;
    case 503u: goto L_088DA9D0;
    case 504u: goto L_088DA9F4;
    case 505u: goto L_088DAA10;
    case 506u: goto L_088DAA20;
    case 507u: goto L_088DAA30;
    case 508u: goto L_088DAA58;
    case 509u: goto L_088DAA70;
    case 510u: goto L_088DAA8C;
    case 511u: goto L_088DAA94;
    case 512u: goto L_088DAAA0;
    case 513u: goto L_088DAAB4;
    case 514u: goto L_088DAAC8;
    case 515u: goto L_088DAAD0;
    case 516u: goto L_088DAAE0;
    case 517u: goto L_088DAB04;
    case 518u: goto L_088DAB0C;
    case 519u: goto L_088DAB14;
    case 520u: goto L_088DAB38;
    case 521u: goto L_088DAB4C;
    case 522u: goto L_088DAB64;
    case 523u: goto L_088DAB70;
    case 524u: goto L_088DAB78;
    case 525u: goto L_088DAB8C;
    case 526u: goto L_088DAB98;
    case 527u: goto L_088DABAC;
    case 528u: goto L_088DABB8;
    case 529u: goto L_088DABC8;
    case 530u: goto L_088DABCC;
    case 531u: goto L_088DABE0;
    case 532u: goto L_088DABF8;
    case 533u: goto L_088DAC10;
    case 534u: goto L_088DAC30;
    case 535u: goto L_088DAC3C;
    case 536u: goto L_088DAC44;
    case 537u: goto L_088DAC54;
    case 538u: goto L_088DAC5C;
    case 539u: goto L_088DAC6C;
    case 540u: goto L_088DAC74;
    case 541u: goto L_088DAC84;
    case 542u: goto L_088DAC9C;
    case 543u: goto L_088DACB4;
    case 544u: goto L_088DACC8;
    case 545u: goto L_088DACD0;
    case 546u: goto L_088DACE8;
    case 547u: goto L_088DAD00;
    case 548u: goto L_088DAD08;
    case 549u: goto L_088DAD30;
    case 550u: goto L_088DAD3C;
    case 551u: goto L_088DAD44;
    case 552u: goto L_088DAD4C;
    case 553u: goto L_088DAD5C;
    case 554u: goto L_088DAD68;
    case 555u: goto L_088DAD70;
    case 556u: goto L_088DAD8C;
    case 557u: goto L_088DADA4;
    case 558u: goto L_088DADBC;
    case 559u: goto L_088DADCC;
    case 560u: goto L_088DAE30;
    case 561u: goto L_088DAE40;
    case 562u: goto L_088DAE50;
    case 563u: goto L_088DAE60;
    case 564u: goto L_088DAE70;
    case 565u: goto L_088DAE9C;
    case 566u: goto L_088DAEB8;
    case 567u: goto L_088DAECC;
    case 568u: goto L_088DAEE0;
    case 569u: goto L_088DAEFC;
    case 570u: goto L_088DAF10;
    case 571u: goto L_088DAF30;
    case 572u: goto L_088DAF4C;
    case 573u: goto L_088DAF58;
    case 574u: goto L_088DAF68;
    case 575u: goto L_088DAF7C;
    case 576u: goto L_088DAF88;
    case 577u: goto L_088DAFA8;
    case 578u: goto L_088DAFB8;
    case 579u: goto L_088DAFC8;
    case 580u: goto L_088DAFD8;
    case 581u: goto L_088DAFEC;
    case 582u: goto L_088DB000;
    case 583u: goto L_088DB01C;
    case 584u: goto L_088DB030;
    case 585u: goto L_088DB050;
    case 586u: goto L_088DB06C;
    case 587u: goto L_088DB078;
    case 588u: goto L_088DB088;
    case 589u: goto L_088DB098;
    case 590u: goto L_088DB0A8;
    case 591u: goto L_088DB0B8;
    case 592u: goto L_088DB0C8;
    case 593u: goto L_088DB0D4;
    case 594u: goto L_088DB108;
    case 595u: goto L_088DB128;
    case 596u: goto L_088DB144;
    case 597u: goto L_088DB14C;
    case 598u: goto L_088DB158;
    case 599u: goto L_088DB16C;
    case 600u: goto L_088DB180;
    case 601u: goto L_088DB188;
    case 602u: goto L_088DB198;
    case 603u: goto L_088DB1BC;
    case 604u: goto L_088DB1C4;
    case 605u: goto L_088DB1CC;
    case 606u: goto L_088DB1F0;
    case 607u: goto L_088DB204;
    case 608u: goto L_088DB21C;
    case 609u: goto L_088DB224;
    case 610u: goto L_088DB23C;
    case 611u: goto L_088DB254;
    case 612u: goto L_088DB25C;
    case 613u: goto L_088DB268;
    case 614u: goto L_088DB274;
    case 615u: goto L_088DB27C;
    case 616u: goto L_088DB294;
    case 617u: goto L_088DB2AC;
    case 618u: goto L_088DB2C0;
    case 619u: goto L_088DB2C8;
    case 620u: goto L_088DB2E0;
    case 621u: goto L_088DB2F8;
    case 622u: goto L_088DB308;
    case 623u: goto L_088DB368;
    case 624u: goto L_088DB378;
    case 625u: goto L_088DB388;
    case 626u: goto L_088DB398;
    case 627u: goto L_088DB3C0;
    case 628u: goto L_088DB3DC;
    case 629u: goto L_088DB3EC;
    case 630u: goto L_088DB400;
    case 631u: goto L_088DB414;
    case 632u: goto L_088DB428;
    case 633u: goto L_088DB43C;
    case 634u: goto L_088DB450;
    case 635u: goto L_088DB464;
    case 636u: goto L_088DB470;
    case 637u: goto L_088DB498;
    case 638u: goto L_088DB4B4;
    case 639u: goto L_088DB4D8;
    case 640u: goto L_088DB4E8;
    case 641u: goto L_088DB4F8;
    case 642u: goto L_088DB508;
    case 643u: goto L_088DB518;
    case 644u: goto L_088DB528;
    case 645u: goto L_088DB538;
    case 646u: goto L_088DB548;
    case 647u: goto L_088DB558;
    case 648u: goto L_088DB568;
    case 649u: goto L_088DB578;
    case 650u: goto L_088DB588;
    case 651u: goto L_088DB598;
    case 652u: goto L_088DB5A8;
    case 653u: goto L_088DB5B8;
    case 654u: goto L_088DB5E4;
    case 655u: goto L_088DB600;
    case 656u: goto L_088DB618;
    case 657u: goto L_088DB62C;
    case 658u: goto L_088DB640;
    case 659u: goto L_088DB658;
    case 660u: goto L_088DB66C;
    case 661u: goto L_088DB674;
    case 662u: goto L_088DB68C;
    case 663u: goto L_088DB6A4;
    case 664u: goto L_088DB6BC;
    case 665u: goto L_088DB6E4;
    case 666u: goto L_088DB6FC;
    case 667u: goto L_088DB714;
    case 668u: goto L_088DB724;
    case 669u: goto L_088DB734;
    case 670u: goto L_088DB780;
    case 671u: goto L_088DB790;
    case 672u: goto L_088DB7A0;
    case 673u: goto L_088DB7B0;
    case 674u: goto L_088DB7C8;
    case 675u: goto L_088DB7DC;
    case 676u: goto L_088DB7F0;
    case 677u: goto L_088DB808;
    case 678u: goto L_088DB81C;
    case 679u: goto L_088DB824;
    case 680u: goto L_088DB83C;
    case 681u: goto L_088DB854;
    case 682u: goto L_088DB868;
    case 683u: goto L_088DB88C;
    case 684u: goto L_088DB8A8;
    case 685u: goto L_088DB8C0;
    case 686u: goto L_088DB8D8;
    case 687u: goto L_088DB8E8;
    case 688u: goto L_088DB8F8;
    case 689u: goto L_088DB954;
    case 690u: goto L_088DB964;
    case 691u: goto L_088DB974;
    case 692u: goto L_088DB984;
    case 693u: goto L_088DB994;
    case 694u: goto L_088DB9B8;
    case 695u: goto L_088DB9D4;
    case 696u: goto L_088DB9E4;
    case 697u: goto L_088DB9F4;
    case 698u: goto L_088DBA1C;
    case 699u: goto L_088DBA34;
    case 700u: goto L_088DBA50;
    case 701u: goto L_088DBA58;
    case 702u: goto L_088DBA64;
    case 703u: goto L_088DBA78;
    case 704u: goto L_088DBA8C;
    case 705u: goto L_088DBA94;
    case 706u: goto L_088DBAA4;
    case 707u: goto L_088DBAC8;
    case 708u: goto L_088DBAD0;
    case 709u: goto L_088DBAD8;
    case 710u: goto L_088DBAFC;
    case 711u: goto L_088DBB10;
    case 712u: goto L_088DBB28;
    case 713u: goto L_088DBB34;
    case 714u: goto L_088DBB3C;
    case 715u: goto L_088DBB50;
    case 716u: goto L_088DBB5C;
    case 717u: goto L_088DBB70;
    case 718u: goto L_088DBB7C;
    case 719u: goto L_088DBB8C;
    case 720u: goto L_088DBB90;
    case 721u: goto L_088DBBA4;
    case 722u: goto L_088DBBBC;
    case 723u: goto L_088DBBD4;
    case 724u: goto L_088DBBF4;
    case 725u: goto L_088DBC00;
    case 726u: goto L_088DBC08;
    case 727u: goto L_088DBC18;
    case 728u: goto L_088DBC20;
    case 729u: goto L_088DBC30;
    case 730u: goto L_088DBC38;
    case 731u: goto L_088DBC48;
    case 732u: goto L_088DBC60;
    case 733u: goto L_088DBC78;
    case 734u: goto L_088DBC8C;
    case 735u: goto L_088DBC94;
    case 736u: goto L_088DBCAC;
    case 737u: goto L_088DBCC4;
    case 738u: goto L_088DBCCC;
    case 739u: goto L_088DBCF4;
    case 740u: goto L_088DBD00;
    case 741u: goto L_088DBD08;
    case 742u: goto L_088DBD10;
    case 743u: goto L_088DBD20;
    case 744u: goto L_088DBD3C;
    case 745u: goto L_088DBD54;
    case 746u: goto L_088DBD6C;
    case 747u: goto L_088DBD7C;
    case 748u: goto L_088DBDE0;
    case 749u: goto L_088DBDF0;
    case 750u: goto L_088DBE00;
    case 751u: goto L_088DBE10;
    case 752u: goto L_088DBE38;
    case 753u: goto L_088DBE54;
    case 754u: goto L_088DBE64;
    case 755u: goto L_088DBE70;
    case 756u: goto L_088DBE94;
    case 757u: goto L_088DBEA4;
    case 758u: goto L_088DBECC;
    case 759u: goto L_088DBEE8;
    case 760u: goto L_088DBF04;
    case 761u: goto L_088DBF0C;
    case 762u: goto L_088DBF18;
    case 763u: goto L_088DBF2C;
    case 764u: goto L_088DBF40;
    case 765u: goto L_088DBF48;
    case 766u: goto L_088DBF58;
    case 767u: goto L_088DBF7C;
    case 768u: goto L_088DBF84;
    case 769u: goto L_088DBF8C;
    case 770u: goto L_088DBFB0;
    case 771u: goto L_088DBFC4;
    case 772u: goto L_088DBFDC;
    case 773u: goto L_088DBFE4;
    case 774u: goto L_088DBFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088D8004:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088D8010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088D8010u) goto L_088D8010;
    return;
L_088D8010:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26700)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D8024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088D8024u) goto L_088D8024;
    return;
L_088D8024:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(26704), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D80A8;
      }
      goto L_088D8038;
    }
L_088D8038:
    ctx.set_gpr(31, 0x088D8040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088D8040u) goto L_088D8040;
    return;
L_088D8040:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D8050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088D8050u) goto L_088D8050;
    return;
L_088D8050:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26704)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D807C;
      }
      goto L_088D8074;
    }
L_088D8074:
    ctx.set_gpr(31, 0x088D807Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088D807Cu) goto L_088D807C;
    return;
L_088D807C:
    ctx.set_gpr(31, 0x088D8084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088D8084u) goto L_088D8084;
    return;
L_088D8084:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26704)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26704)));
    ctx.set_gpr(31, 0x088D80A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088D80A8u) goto L_088D80A8;
    return;
L_088D80A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D80BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088D80D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D80D4u) goto L_088D80D4;
    return;
L_088D80D4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8108;
      }
      goto L_088D80E0;
    }
L_088D80E0:
    ctx.set_gpr(31, 0x088D80E8u);
    // nop
    goto L_088D82B4;
L_088D80E8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26712)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D80FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088D80FCu) goto L_088D80FC;
    return;
L_088D80FC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8168;
      }
      goto L_088D8108;
    }
L_088D8108:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D811Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 542u, 0x089466FCu>(ctx, &aot_mem) && ctx.pc == 0x088D811Cu) goto L_088D811C;
    return;
L_088D811C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D813C;
      }
      goto L_088D8128;
    }
L_088D8128:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088D8138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 157u, 0x0890C928u>(ctx, &aot_mem) && ctx.pc == 0x088D8138u) goto L_088D8138;
    return;
L_088D8138:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_088D813C;
L_088D813C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D8150u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D8150u) goto L_088D8150;
    return;
L_088D8150:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D8168u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D8168u) goto L_088D8168;
    return;
L_088D8168:
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
L_088D8180:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088D81A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D81A0u) goto L_088D81A0;
    return;
L_088D81A0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D81CC;
      }
      goto L_088D81AC;
    }
L_088D81AC:
    ctx.set_gpr(31, 0x088D81B4u);
    // nop
    goto L_088D82B4;
L_088D81B4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D81C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 848u, 0x08947E90u>(ctx, &aot_mem) && ctx.pc == 0x088D81C4u) goto L_088D81C4;
    return;
L_088D81C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D81F4;
      }
      goto L_088D81CC;
    }
L_088D81CC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088D81DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 552u, 0x08946784u>(ctx, &aot_mem) && ctx.pc == 0x088D81DCu) goto L_088D81DC;
    return;
L_088D81DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D81F4;
      }
      goto L_088D81E4;
    }
L_088D81E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D81F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 163u, 0x0890C9B4u>(ctx, &aot_mem) && ctx.pc == 0x088D81F4u) goto L_088D81F4;
    return;
L_088D81F4:
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
L_088D820C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26712)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8238;
      }
      goto L_088D8224;
    }
L_088D8224:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D8240;
      }
      goto L_088D8238;
    }
L_088D8238:
    ctx.set_gpr(31, 0x088D8240u);
    // nop
    goto L_088D82B4;
L_088D8240:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26712)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D8258:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088D8270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 161u, 0x0890C978u>(ctx, &aot_mem) && ctx.pc == 0x088D8270u) goto L_088D8270;
    return;
L_088D8270:
    ctx.set_gpr(31, 0x088D8278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D8278u) goto L_088D8278;
    return;
L_088D8278:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088D829Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x088D829Cu) goto L_088D829C;
    return;
L_088D829C:
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
L_088D82B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-32036));
    ctx.set_gpr(31, 0x088D82CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088D82CCu) goto L_088D82CC;
    return;
L_088D82CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D82DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(22496));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26712));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-19704));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(31824));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-31928));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(22504));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-32168));
    ctx.set_gpr(31, 0x088D8338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088D8338u) goto L_088D8338;
    return;
L_088D8338:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D8348:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D8358u);
    // nop
    goto L_088D820C;
L_088D8358:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D8368:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26716)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D8430;
      }
      goto L_088D8384;
    }
L_088D8384:
    ctx.set_gpr(31, 0x088D838Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088D838Cu) goto L_088D838C;
    return;
L_088D838C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088D8398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088D8398u) goto L_088D8398;
    return;
L_088D8398:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26712)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D83ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088D83ACu) goto L_088D83AC;
    return;
L_088D83AC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(26716), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8430;
      }
      goto L_088D83C0;
    }
L_088D83C0:
    ctx.set_gpr(31, 0x088D83C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088D83C8u) goto L_088D83C8;
    return;
L_088D83C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D83D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088D83D8u) goto L_088D83D8;
    return;
L_088D83D8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26716)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D8404;
      }
      goto L_088D83FC;
    }
L_088D83FC:
    ctx.set_gpr(31, 0x088D8404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088D8404u) goto L_088D8404;
    return;
L_088D8404:
    ctx.set_gpr(31, 0x088D840Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088D840Cu) goto L_088D840C;
    return;
L_088D840C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26716)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26716)));
    ctx.set_gpr(31, 0x088D8430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088D8430u) goto L_088D8430;
    return;
L_088D8430:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D8444:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26716)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D8464;
      }
      goto L_088D845C;
    }
L_088D845C:
    ctx.set_gpr(31, 0x088D8464u);
    // nop
    goto L_088D82B4;
L_088D8464:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26716)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D847C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26720)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D84A8;
      }
      goto L_088D8494;
    }
L_088D8494:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D84B0;
      }
      goto L_088D84A8;
    }
L_088D84A8:
    ctx.set_gpr(31, 0x088D84B0u);
    // nop
    goto L_088D84C8;
L_088D84B0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26720)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D84C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-31504));
    ctx.set_gpr(31, 0x088D84E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088D84E0u) goto L_088D84E0;
    return;
L_088D84E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D84F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D8500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088D8500u) goto L_088D8500;
    return;
L_088D8500:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31352));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(22520));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26720));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-19704));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(31824));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-31384));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(22532));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x088D8558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088D8558u) goto L_088D8558;
    return;
L_088D8558:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D8568:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D8578u);
    // nop
    goto L_088D847C;
L_088D8578:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D8588:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26720)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D85B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088D85B0u) goto L_088D85B0;
    return;
L_088D85B0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22552));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088D85CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088D85CCu) goto L_088D85CC;
    return;
L_088D85CC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088D85DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D85DCu) goto L_088D85DC;
    return;
L_088D85DC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D85E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 202u, 0x088F91D8u>(ctx, &aot_mem) && ctx.pc == 0x088D85E8u) goto L_088D85E8;
    return;
L_088D85E8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22568));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22572));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(22576));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088D861Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088D861Cu) goto L_088D861C;
    return;
L_088D861C:
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
L_088D8638:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26724)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D8700;
      }
      goto L_088D8654;
    }
L_088D8654:
    ctx.set_gpr(31, 0x088D865Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088D865Cu) goto L_088D865C;
    return;
L_088D865C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088D8668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088D8668u) goto L_088D8668;
    return;
L_088D8668:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26720)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D867Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088D867Cu) goto L_088D867C;
    return;
L_088D867C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(26724), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8700;
      }
      goto L_088D8690;
    }
L_088D8690:
    ctx.set_gpr(31, 0x088D8698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088D8698u) goto L_088D8698;
    return;
L_088D8698:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D86A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088D86A8u) goto L_088D86A8;
    return;
L_088D86A8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26724)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D86D4;
      }
      goto L_088D86CC;
    }
L_088D86CC:
    ctx.set_gpr(31, 0x088D86D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088D86D4u) goto L_088D86D4;
    return;
L_088D86D4:
    ctx.set_gpr(31, 0x088D86DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088D86DCu) goto L_088D86DC;
    return;
L_088D86DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26724)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26724)));
    ctx.set_gpr(31, 0x088D8700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088D8700u) goto L_088D8700;
    return;
L_088D8700:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D8714:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D8720:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x088D8734u);
    // nop
    goto L_088D8744;
L_088D8734:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D8744:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D874C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26732)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8778;
      }
      goto L_088D8764;
    }
L_088D8764:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D8780;
      }
      goto L_088D8778;
    }
L_088D8778:
    ctx.set_gpr(31, 0x088D8780u);
    // nop
    goto L_088D88C8;
L_088D8780:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26732)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D8798:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088D87B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 505u, 0x089422D0u>(ctx, &aot_mem) && ctx.pc == 0x088D87B0u) goto L_088D87B0;
    return;
L_088D87B0:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(536));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088D87C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D87C4u) goto L_088D87C4;
    return;
L_088D87C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088D87ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088D87ECu) goto L_088D87EC;
    return;
L_088D87EC:
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
L_088D8804:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D88AC;
      }
      goto L_088D8824;
    }
L_088D8824:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8894;
      }
      goto L_088D883C;
    }
L_088D883C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8868;
      }
      goto L_088D884C;
    }
L_088D884C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8868;
      }
      goto L_088D8864;
    }
L_088D8864:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_088D8868;
L_088D8868:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8894;
      }
      goto L_088D8870;
    }
L_088D8870:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D8894;
      }
      goto L_088D8888;
    }
L_088D8888:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088D8894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x088D8894u) goto L_088D8894;
    return;
L_088D8894:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088D88AC;
      }
      goto L_088D88A0;
    }
L_088D88A0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D88ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 554u, 0x089467A8u>(ctx, &aot_mem) && ctx.pc == 0x088D88ACu) goto L_088D88AC;
    return;
L_088D88AC:
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
L_088D88C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-30480));
    ctx.set_gpr(31, 0x088D88E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088D88E0u) goto L_088D88E0;
    return;
L_088D88E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D88F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D8900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088D8900u) goto L_088D8900;
    return;
L_088D8900:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-30308));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(22580));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26732));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-29644));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-30324));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-30356));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(22588));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-30824));
    ctx.set_gpr(31, 0x088D895Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088D895Cu) goto L_088D895C;
    return;
L_088D895C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D896C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D897Cu);
    // nop
    goto L_088D874C;
L_088D897C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D898C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26744)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D899C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26732)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D89C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088D89C0u) goto L_088D89C0;
    return;
L_088D89C0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22612));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088D89DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088D89DCu) goto L_088D89DC;
    return;
L_088D89DC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D89ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D89ECu) goto L_088D89EC;
    return;
L_088D89EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088D89FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088D89FCu) goto L_088D89FC;
    return;
L_088D89FC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22616));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22620));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(22624));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D8A24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088D8A24u) goto L_088D8A24;
    return;
L_088D8A24:
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
L_088D8A3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26736)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D8B04;
      }
      goto L_088D8A58;
    }
L_088D8A58:
    ctx.set_gpr(31, 0x088D8A60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088D8A60u) goto L_088D8A60;
    return;
L_088D8A60:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088D8A6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088D8A6Cu) goto L_088D8A6C;
    return;
L_088D8A6C:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26732)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D8A80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088D8A80u) goto L_088D8A80;
    return;
L_088D8A80:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(26736), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8B04;
      }
      goto L_088D8A94;
    }
L_088D8A94:
    ctx.set_gpr(31, 0x088D8A9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088D8A9Cu) goto L_088D8A9C;
    return;
L_088D8A9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D8AACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088D8AACu) goto L_088D8AAC;
    return;
L_088D8AAC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26736)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D8AD8;
      }
      goto L_088D8AD0;
    }
L_088D8AD0:
    ctx.set_gpr(31, 0x088D8AD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088D8AD8u) goto L_088D8AD8;
    return;
L_088D8AD8:
    ctx.set_gpr(31, 0x088D8AE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088D8AE0u) goto L_088D8AE0;
    return;
L_088D8AE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26736)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26736)));
    ctx.set_gpr(31, 0x088D8B04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088D8B04u) goto L_088D8B04;
    return;
L_088D8B04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D8B18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088D8B30u);
    // nop
    goto L_088D8C0C;
L_088D8B30:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26744)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D8B44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088D8B44u) goto L_088D8B44;
    return;
L_088D8B44:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D8B58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26744)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8B84;
      }
      goto L_088D8B70;
    }
L_088D8B70:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D8B8C;
      }
      goto L_088D8B84;
    }
L_088D8B84:
    ctx.set_gpr(31, 0x088D8B8Cu);
    // nop
    goto L_088D8C0C;
L_088D8B8C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26744)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D8BA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088D8BBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 505u, 0x089422D0u>(ctx, &aot_mem) && ctx.pc == 0x088D8BBCu) goto L_088D8BBC;
    return;
L_088D8BBC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(280));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088D8BD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D8BD0u) goto L_088D8BD0;
    return;
L_088D8BD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088D8BF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x088D8BF4u) goto L_088D8BF4;
    return;
L_088D8BF4:
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
L_088D8C0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-29644));
    ctx.set_gpr(31, 0x088D8C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088D8C24u) goto L_088D8C24;
    return;
L_088D8C24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D8C34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D8C44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088D8C44u) goto L_088D8C44;
    return;
L_088D8C44:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(22628));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26744));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-19704));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(31824));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-29528));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(22636));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-29788));
    ctx.set_gpr(31, 0x088D8C98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088D8C98u) goto L_088D8C98;
    return;
L_088D8C98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D8CA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D8CB8u);
    // nop
    goto L_088D8B58;
L_088D8CB8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D8CC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26748)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D8D90;
      }
      goto L_088D8CE4;
    }
L_088D8CE4:
    ctx.set_gpr(31, 0x088D8CECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088D8CECu) goto L_088D8CEC;
    return;
L_088D8CEC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088D8CF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088D8CF8u) goto L_088D8CF8;
    return;
L_088D8CF8:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26744)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D8D0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088D8D0Cu) goto L_088D8D0C;
    return;
L_088D8D0C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(26748), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8D90;
      }
      goto L_088D8D20;
    }
L_088D8D20:
    ctx.set_gpr(31, 0x088D8D28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088D8D28u) goto L_088D8D28;
    return;
L_088D8D28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D8D38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088D8D38u) goto L_088D8D38;
    return;
L_088D8D38:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26748)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D8D64;
      }
      goto L_088D8D5C;
    }
L_088D8D5C:
    ctx.set_gpr(31, 0x088D8D64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088D8D64u) goto L_088D8D64;
    return;
L_088D8D64:
    ctx.set_gpr(31, 0x088D8D6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088D8D6Cu) goto L_088D8D6C;
    return;
L_088D8D6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26748)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26748)));
    ctx.set_gpr(31, 0x088D8D90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088D8D90u) goto L_088D8D90;
    return;
L_088D8D90:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D8DA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26748)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D8DC4;
      }
      goto L_088D8DBC;
    }
L_088D8DBC:
    ctx.set_gpr(31, 0x088D8DC4u);
    // nop
    goto L_088D8C0C;
L_088D8DC4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26748)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D8DDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26752)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8E08;
      }
      goto L_088D8DF4;
    }
L_088D8DF4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D8E10;
      }
      goto L_088D8E08;
    }
L_088D8E08:
    ctx.set_gpr(31, 0x088D8E10u);
    // nop
    goto L_088D8E94;
L_088D8E10:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26752)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D8E28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088D8E40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 478u, 0x08915AC0u>(ctx, &aot_mem) && ctx.pc == 0x088D8E40u) goto L_088D8E40;
    return;
L_088D8E40:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-68));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088D8E54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D8E54u) goto L_088D8E54;
    return;
L_088D8E54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088D8E7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088D8E7Cu) goto L_088D8E7C;
    return;
L_088D8E7C:
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
L_088D8E94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-28996));
    ctx.set_gpr(31, 0x088D8EACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088D8EACu) goto L_088D8EAC;
    return;
L_088D8EAC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D8EBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D8ECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088D8ECCu) goto L_088D8ECC;
    return;
L_088D8ECC:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-28824));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(22656));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26752));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-27900));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-28840));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-28872));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(22664));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(56));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-29144));
    ctx.set_gpr(31, 0x088D8F28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088D8F28u) goto L_088D8F28;
    return;
L_088D8F28:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D8F38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D8F48u);
    // nop
    goto L_088D8DDC;
L_088D8F48:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D8F58:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26764)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D8F68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26752)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D8F8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088D8F8Cu) goto L_088D8F8C;
    return;
L_088D8F8C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22688));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088D8FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088D8FA8u) goto L_088D8FA8;
    return;
L_088D8FA8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D8FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D8FB8u) goto L_088D8FB8;
    return;
L_088D8FB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088D8FC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088D8FC8u) goto L_088D8FC8;
    return;
L_088D8FC8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22692));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22696));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(22700));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D8FF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088D8FF0u) goto L_088D8FF0;
    return;
L_088D8FF0:
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
L_088D9008:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26756)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D90D0;
      }
      goto L_088D9024;
    }
L_088D9024:
    ctx.set_gpr(31, 0x088D902Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088D902Cu) goto L_088D902C;
    return;
L_088D902C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088D9038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088D9038u) goto L_088D9038;
    return;
L_088D9038:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26752)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D904Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088D904Cu) goto L_088D904C;
    return;
L_088D904C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(26756), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D90D0;
      }
      goto L_088D9060;
    }
L_088D9060:
    ctx.set_gpr(31, 0x088D9068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088D9068u) goto L_088D9068;
    return;
L_088D9068:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D9078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088D9078u) goto L_088D9078;
    return;
L_088D9078:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26756)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D90A4;
      }
      goto L_088D909C;
    }
L_088D909C:
    ctx.set_gpr(31, 0x088D90A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088D90A4u) goto L_088D90A4;
    return;
L_088D90A4:
    ctx.set_gpr(31, 0x088D90ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088D90ACu) goto L_088D90AC;
    return;
L_088D90AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26756)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26756)));
    ctx.set_gpr(31, 0x088D90D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088D90D0u) goto L_088D90D0;
    return;
L_088D90D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D90E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088D90FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D90FCu) goto L_088D90FC;
    return;
L_088D90FC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9130;
      }
      goto L_088D9108;
    }
L_088D9108:
    ctx.set_gpr(31, 0x088D9110u);
    // nop
    goto L_088D92DC;
L_088D9110:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26764)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D9124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088D9124u) goto L_088D9124;
    return;
L_088D9124:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9190;
      }
      goto L_088D9130;
    }
L_088D9130:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D9144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 542u, 0x089466FCu>(ctx, &aot_mem) && ctx.pc == 0x088D9144u) goto L_088D9144;
    return;
L_088D9144:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9164;
      }
      goto L_088D9150;
    }
L_088D9150:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088D9160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 474u, 0x08915A70u>(ctx, &aot_mem) && ctx.pc == 0x088D9160u) goto L_088D9160;
    return;
L_088D9160:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_088D9164;
L_088D9164:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D9178u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D9178u) goto L_088D9178;
    return;
L_088D9178:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D9190u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D9190u) goto L_088D9190;
    return;
L_088D9190:
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
L_088D91A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088D91C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D91C8u) goto L_088D91C8;
    return;
L_088D91C8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D91F4;
      }
      goto L_088D91D4;
    }
L_088D91D4:
    ctx.set_gpr(31, 0x088D91DCu);
    // nop
    goto L_088D92DC;
L_088D91DC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D91ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 848u, 0x08947E90u>(ctx, &aot_mem) && ctx.pc == 0x088D91ECu) goto L_088D91EC;
    return;
L_088D91EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D921C;
      }
      goto L_088D91F4;
    }
L_088D91F4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088D9204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 552u, 0x08946784u>(ctx, &aot_mem) && ctx.pc == 0x088D9204u) goto L_088D9204;
    return;
L_088D9204:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D921C;
      }
      goto L_088D920C;
    }
L_088D920C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D921Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 480u, 0x08915AFCu>(ctx, &aot_mem) && ctx.pc == 0x088D921Cu) goto L_088D921C;
    return;
L_088D921C:
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
L_088D9234:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26764)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9260;
      }
      goto L_088D924C;
    }
L_088D924C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9268;
      }
      goto L_088D9260;
    }
L_088D9260:
    ctx.set_gpr(31, 0x088D9268u);
    // nop
    goto L_088D92DC;
L_088D9268:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26764)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9280:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088D9298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 478u, 0x08915AC0u>(ctx, &aot_mem) && ctx.pc == 0x088D9298u) goto L_088D9298;
    return;
L_088D9298:
    ctx.set_gpr(31, 0x088D92A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D92A0u) goto L_088D92A0;
    return;
L_088D92A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x088D92C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x088D92C4u) goto L_088D92C4;
    return;
L_088D92C4:
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
L_088D92DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-27900));
    ctx.set_gpr(31, 0x088D92F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088D92F4u) goto L_088D92F4;
    return;
L_088D92F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9304:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-27752));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(22704));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26764));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-19704));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(31824));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-27784));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(22712));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-28032));
    ctx.set_gpr(31, 0x088D9368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088D9368u) goto L_088D9368;
    return;
L_088D9368:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9378:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D9388u);
    // nop
    goto L_088D9234;
L_088D9388:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9398:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26764)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D93BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088D93BCu) goto L_088D93BC;
    return;
L_088D93BC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22728));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088D93D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088D93D8u) goto L_088D93D8;
    return;
L_088D93D8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D93E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D93E8u) goto L_088D93E8;
    return;
L_088D93E8:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22756));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22760));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(22764));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D9414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088D9414u) goto L_088D9414;
    return;
L_088D9414:
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
L_088D942C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26768)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D94F4;
      }
      goto L_088D9448;
    }
L_088D9448:
    ctx.set_gpr(31, 0x088D9450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088D9450u) goto L_088D9450;
    return;
L_088D9450:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088D945Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088D945Cu) goto L_088D945C;
    return;
L_088D945C:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26764)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D9470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088D9470u) goto L_088D9470;
    return;
L_088D9470:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(26768), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D94F4;
      }
      goto L_088D9484;
    }
L_088D9484:
    ctx.set_gpr(31, 0x088D948Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088D948Cu) goto L_088D948C;
    return;
L_088D948C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D949Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088D949Cu) goto L_088D949C;
    return;
L_088D949C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26768)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D94C8;
      }
      goto L_088D94C0;
    }
L_088D94C0:
    ctx.set_gpr(31, 0x088D94C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088D94C8u) goto L_088D94C8;
    return;
L_088D94C8:
    ctx.set_gpr(31, 0x088D94D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088D94D0u) goto L_088D94D0;
    return;
L_088D94D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26768)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26768)));
    ctx.set_gpr(31, 0x088D94F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088D94F4u) goto L_088D94F4;
    return;
L_088D94F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9508:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26768)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9528;
      }
      goto L_088D9520;
    }
L_088D9520:
    ctx.set_gpr(31, 0x088D9528u);
    // nop
    goto L_088D92DC;
L_088D9528:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26768)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9540:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088D9558u);
    // nop
    goto L_088D9638;
L_088D9558:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D956Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088D956Cu) goto L_088D956C;
    return;
L_088D956C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9580:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26776)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D95AC;
      }
      goto L_088D9598;
    }
L_088D9598:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D95B4;
      }
      goto L_088D95AC;
    }
L_088D95AC:
    ctx.set_gpr(31, 0x088D95B4u);
    // nop
    goto L_088D9638;
L_088D95B4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26776)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D95CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088D95E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 505u, 0x089422D0u>(ctx, &aot_mem) && ctx.pc == 0x088D95E4u) goto L_088D95E4;
    return;
L_088D95E4:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1596));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088D95F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D95F8u) goto L_088D95F8;
    return;
L_088D95F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088D9620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088D9620u) goto L_088D9620;
    return;
L_088D9620:
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
L_088D9638:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-27040));
    ctx.set_gpr(31, 0x088D9650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088D9650u) goto L_088D9650;
    return;
L_088D9650:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9660:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D9670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088D9670u) goto L_088D9670;
    return;
L_088D9670:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-26868));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(22768));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26776));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-26204));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-26884));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-26916));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(22776));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-27188));
    ctx.set_gpr(31, 0x088D96CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088D96CCu) goto L_088D96CC;
    return;
L_088D96CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D96DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D96ECu);
    // nop
    goto L_088D9580;
L_088D96EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D96FC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26788)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D970C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26776)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D9730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088D9730u) goto L_088D9730;
    return;
L_088D9730:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22800));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088D974Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088D974Cu) goto L_088D974C;
    return;
L_088D974C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D975Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D975Cu) goto L_088D975C;
    return;
L_088D975C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088D976Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088D976Cu) goto L_088D976C;
    return;
L_088D976C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22804));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22808));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(22812));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D9794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088D9794u) goto L_088D9794;
    return;
L_088D9794:
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
L_088D97AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26780)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9874;
      }
      goto L_088D97C8;
    }
L_088D97C8:
    ctx.set_gpr(31, 0x088D97D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088D97D0u) goto L_088D97D0;
    return;
L_088D97D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088D97DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088D97DCu) goto L_088D97DC;
    return;
L_088D97DC:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26776)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D97F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088D97F0u) goto L_088D97F0;
    return;
L_088D97F0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(26780), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9874;
      }
      goto L_088D9804;
    }
L_088D9804:
    ctx.set_gpr(31, 0x088D980Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088D980Cu) goto L_088D980C;
    return;
L_088D980C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D981Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088D981Cu) goto L_088D981C;
    return;
L_088D981C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26780)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9848;
      }
      goto L_088D9840;
    }
L_088D9840:
    ctx.set_gpr(31, 0x088D9848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088D9848u) goto L_088D9848;
    return;
L_088D9848:
    ctx.set_gpr(31, 0x088D9850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088D9850u) goto L_088D9850;
    return;
L_088D9850:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26780)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26780)));
    ctx.set_gpr(31, 0x088D9874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088D9874u) goto L_088D9874;
    return;
L_088D9874:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9888:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088D98A0u);
    // nop
    goto L_088D997C;
L_088D98A0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26788)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D98B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088D98B4u) goto L_088D98B4;
    return;
L_088D98B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D98C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26788)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D98F4;
      }
      goto L_088D98E0;
    }
L_088D98E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D98FC;
      }
      goto L_088D98F4;
    }
L_088D98F4:
    ctx.set_gpr(31, 0x088D98FCu);
    // nop
    goto L_088D997C;
L_088D98FC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26788)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9914:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088D992Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 505u, 0x089422D0u>(ctx, &aot_mem) && ctx.pc == 0x088D992Cu) goto L_088D992C;
    return;
L_088D992C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1852));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088D9940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D9940u) goto L_088D9940;
    return;
L_088D9940:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088D9964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x088D9964u) goto L_088D9964;
    return;
L_088D9964:
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
L_088D997C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-26204));
    ctx.set_gpr(31, 0x088D9994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088D9994u) goto L_088D9994;
    return;
L_088D9994:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D99A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D99B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088D99B4u) goto L_088D99B4;
    return;
L_088D99B4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(22816));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26788));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-19704));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(31824));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-26088));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(22824));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-26348));
    ctx.set_gpr(31, 0x088D9A08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088D9A08u) goto L_088D9A08;
    return;
L_088D9A08:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9A18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D9A28u);
    // nop
    goto L_088D98C8;
L_088D9A28:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9A38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26792)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9B00;
      }
      goto L_088D9A54;
    }
L_088D9A54:
    ctx.set_gpr(31, 0x088D9A5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088D9A5Cu) goto L_088D9A5C;
    return;
L_088D9A5C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088D9A68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088D9A68u) goto L_088D9A68;
    return;
L_088D9A68:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26788)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D9A7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088D9A7Cu) goto L_088D9A7C;
    return;
L_088D9A7C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(26792), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9B00;
      }
      goto L_088D9A90;
    }
L_088D9A90:
    ctx.set_gpr(31, 0x088D9A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088D9A98u) goto L_088D9A98;
    return;
L_088D9A98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D9AA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088D9AA8u) goto L_088D9AA8;
    return;
L_088D9AA8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26792)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9AD4;
      }
      goto L_088D9ACC;
    }
L_088D9ACC:
    ctx.set_gpr(31, 0x088D9AD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088D9AD4u) goto L_088D9AD4;
    return;
L_088D9AD4:
    ctx.set_gpr(31, 0x088D9ADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088D9ADCu) goto L_088D9ADC;
    return;
L_088D9ADC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26792)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26792)));
    ctx.set_gpr(31, 0x088D9B00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088D9B00u) goto L_088D9B00;
    return;
L_088D9B00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9B14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26792)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9B34;
      }
      goto L_088D9B2C;
    }
L_088D9B2C:
    ctx.set_gpr(31, 0x088D9B34u);
    // nop
    goto L_088D997C;
L_088D9B34:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26792)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9B4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088D9B64u);
    // nop
    goto L_088D9C44;
L_088D9B64:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26796)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D9B78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088D9B78u) goto L_088D9B78;
    return;
L_088D9B78:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9B8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26796)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9BB8;
      }
      goto L_088D9BA4;
    }
L_088D9BA4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9BC0;
      }
      goto L_088D9BB8;
    }
L_088D9BB8:
    ctx.set_gpr(31, 0x088D9BC0u);
    // nop
    goto L_088D9C44;
L_088D9BC0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26796)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9BD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088D9BF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 642u, 0x08926CCCu>(ctx, &aot_mem) && ctx.pc == 0x088D9BF0u) goto L_088D9BF0;
    return;
L_088D9BF0:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2468));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088D9C04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D9C04u) goto L_088D9C04;
    return;
L_088D9C04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088D9C2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088D9C2Cu) goto L_088D9C2C;
    return;
L_088D9C2C:
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
L_088D9C44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-25492));
    ctx.set_gpr(31, 0x088D9C5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088D9C5Cu) goto L_088D9C5C;
    return;
L_088D9C5C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9C6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D9C7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088D9C7Cu) goto L_088D9C7C;
    return;
L_088D9C7C:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-25320));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(22844));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26796));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24396));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-25336));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-25368));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(22852));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-25640));
    ctx.set_gpr(31, 0x088D9CD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088D9CD8u) goto L_088D9CD8;
    return;
L_088D9CD8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9CE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088D9CF8u);
    // nop
    goto L_088D9B8C;
L_088D9CF8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9D08:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26808)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9D18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26796)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D9D3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088D9D3Cu) goto L_088D9D3C;
    return;
L_088D9D3C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22872));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088D9D58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088D9D58u) goto L_088D9D58;
    return;
L_088D9D58:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D9D68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D9D68u) goto L_088D9D68;
    return;
L_088D9D68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088D9D78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088D9D78u) goto L_088D9D78;
    return;
L_088D9D78:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22876));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22880));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(22884));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D9DA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088D9DA0u) goto L_088D9DA0;
    return;
L_088D9DA0:
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
L_088D9DB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26800)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9E80;
      }
      goto L_088D9DD4;
    }
L_088D9DD4:
    ctx.set_gpr(31, 0x088D9DDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088D9DDCu) goto L_088D9DDC;
    return;
L_088D9DDC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088D9DE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088D9DE8u) goto L_088D9DE8;
    return;
L_088D9DE8:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26796)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088D9DFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088D9DFCu) goto L_088D9DFC;
    return;
L_088D9DFC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(26800), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9E80;
      }
      goto L_088D9E10;
    }
L_088D9E10:
    ctx.set_gpr(31, 0x088D9E18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088D9E18u) goto L_088D9E18;
    return;
L_088D9E18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D9E28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088D9E28u) goto L_088D9E28;
    return;
L_088D9E28:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26800)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9E54;
      }
      goto L_088D9E4C;
    }
L_088D9E4C:
    ctx.set_gpr(31, 0x088D9E54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088D9E54u) goto L_088D9E54;
    return;
L_088D9E54:
    ctx.set_gpr(31, 0x088D9E5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088D9E5Cu) goto L_088D9E5C;
    return;
L_088D9E5C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26800)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26800)));
    ctx.set_gpr(31, 0x088D9E80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088D9E80u) goto L_088D9E80;
    return;
L_088D9E80:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D9E94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088D9EACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D9EACu) goto L_088D9EAC;
    return;
L_088D9EAC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9EE0;
      }
      goto L_088D9EB8;
    }
L_088D9EB8:
    ctx.set_gpr(31, 0x088D9EC0u);
    // nop
    goto L_088DA08C;
L_088D9EC0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26808)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D9ED4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088D9ED4u) goto L_088D9ED4;
    return;
L_088D9ED4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9F40;
      }
      goto L_088D9EE0;
    }
L_088D9EE0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D9EF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 542u, 0x089466FCu>(ctx, &aot_mem) && ctx.pc == 0x088D9EF4u) goto L_088D9EF4;
    return;
L_088D9EF4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9F14;
      }
      goto L_088D9F00;
    }
L_088D9F00:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088D9F10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 638u, 0x08926C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088D9F10u) goto L_088D9F10;
    return;
L_088D9F10:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_088D9F14;
L_088D9F14:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D9F28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D9F28u) goto L_088D9F28;
    return;
L_088D9F28:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088D9F40u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088D9F40u) goto L_088D9F40;
    return;
L_088D9F40:
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
L_088D9F58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088D9F78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088D9F78u) goto L_088D9F78;
    return;
L_088D9F78:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9FA4;
      }
      goto L_088D9F84;
    }
L_088D9F84:
    ctx.set_gpr(31, 0x088D9F8Cu);
    // nop
    goto L_088DA08C;
L_088D9F8C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088D9F9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 848u, 0x08947E90u>(ctx, &aot_mem) && ctx.pc == 0x088D9F9Cu) goto L_088D9F9C;
    return;
L_088D9F9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9FCC;
      }
      goto L_088D9FA4;
    }
L_088D9FA4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088D9FB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 552u, 0x08946784u>(ctx, &aot_mem) && ctx.pc == 0x088D9FB4u) goto L_088D9FB4;
    return;
L_088D9FB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9FCC;
      }
      goto L_088D9FBC;
    }
L_088D9FBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088D9FCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 644u, 0x08926D08u>(ctx, &aot_mem) && ctx.pc == 0x088D9FCCu) goto L_088D9FCC;
    return;
L_088D9FCC:
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
L_088D9FE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26808)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA010;
      }
      goto L_088D9FFC;
    }
L_088D9FFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DA018;
      }
      goto L_088DA010;
    }
L_088DA010:
    ctx.set_gpr(31, 0x088DA018u);
    // nop
    goto L_088DA08C;
L_088DA018:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26808)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA030:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088DA048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 642u, 0x08926CCCu>(ctx, &aot_mem) && ctx.pc == 0x088DA048u) goto L_088DA048;
    return;
L_088DA048:
    ctx.set_gpr(31, 0x088DA050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DA050u) goto L_088DA050;
    return;
L_088DA050:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088DA074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x088DA074u) goto L_088DA074;
    return;
L_088DA074:
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
L_088DA08C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-24396));
    ctx.set_gpr(31, 0x088DA0A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088DA0A4u) goto L_088DA0A4;
    return;
L_088DA0A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA0B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(22888));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26808));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-19704));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(31824));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-24288));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(22896));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-24528));
    ctx.set_gpr(31, 0x088DA110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088DA110u) goto L_088DA110;
    return;
L_088DA110:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA120:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DA130u);
    // nop
    goto L_088D9FE4;
L_088DA130:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA140:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26812)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DA208;
      }
      goto L_088DA15C;
    }
L_088DA15C:
    ctx.set_gpr(31, 0x088DA164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088DA164u) goto L_088DA164;
    return;
L_088DA164:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088DA170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088DA170u) goto L_088DA170;
    return;
L_088DA170:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26808)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088DA184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DA184u) goto L_088DA184;
    return;
L_088DA184:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(26812), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA208;
      }
      goto L_088DA198;
    }
L_088DA198:
    ctx.set_gpr(31, 0x088DA1A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DA1A0u) goto L_088DA1A0;
    return;
L_088DA1A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DA1B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088DA1B0u) goto L_088DA1B0;
    return;
L_088DA1B0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26812)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DA1DC;
      }
      goto L_088DA1D4;
    }
L_088DA1D4:
    ctx.set_gpr(31, 0x088DA1DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088DA1DCu) goto L_088DA1DC;
    return;
L_088DA1DC:
    ctx.set_gpr(31, 0x088DA1E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DA1E4u) goto L_088DA1E4;
    return;
L_088DA1E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26812)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26812)));
    ctx.set_gpr(31, 0x088DA208u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088DA208u) goto L_088DA208;
    return;
L_088DA208:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA21C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26812)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DA23C;
      }
      goto L_088DA234;
    }
L_088DA234:
    ctx.set_gpr(31, 0x088DA23Cu);
    // nop
    goto L_088DA08C;
L_088DA23C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26812)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA254:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26816)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA280;
      }
      goto L_088DA26C;
    }
L_088DA26C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DA288;
      }
      goto L_088DA280;
    }
L_088DA280:
    ctx.set_gpr(31, 0x088DA288u);
    // nop
    goto L_088DA30C;
L_088DA288:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26816)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA2A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088DA2B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 505u, 0x089422D0u>(ctx, &aot_mem) && ctx.pc == 0x088DA2B8u) goto L_088DA2B8;
    return;
L_088DA2B8:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2856));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088DA2CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DA2CCu) goto L_088DA2CC;
    return;
L_088DA2CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088DA2F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088DA2F4u) goto L_088DA2F4;
    return;
L_088DA2F4:
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
L_088DA30C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-23756));
    ctx.set_gpr(31, 0x088DA324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088DA324u) goto L_088DA324;
    return;
L_088DA324:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA334:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DA344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088DA344u) goto L_088DA344;
    return;
L_088DA344:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-23584));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(22912));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26816));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-22920));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-23600));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-23632));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(22920));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-23904));
    ctx.set_gpr(31, 0x088DA3A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088DA3A0u) goto L_088DA3A0;
    return;
L_088DA3A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA3B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DA3C0u);
    // nop
    goto L_088DA254;
L_088DA3C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA3D0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26828)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA3E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26816)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DA404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088DA404u) goto L_088DA404;
    return;
L_088DA404:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22944));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DA420u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088DA420u) goto L_088DA420;
    return;
L_088DA420:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DA430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DA430u) goto L_088DA430;
    return;
L_088DA430:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DA440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088DA440u) goto L_088DA440;
    return;
L_088DA440:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22948));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22952));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(22956));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DA468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088DA468u) goto L_088DA468;
    return;
L_088DA468:
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
L_088DA480:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26820)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DA548;
      }
      goto L_088DA49C;
    }
L_088DA49C:
    ctx.set_gpr(31, 0x088DA4A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088DA4A4u) goto L_088DA4A4;
    return;
L_088DA4A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088DA4B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088DA4B0u) goto L_088DA4B0;
    return;
L_088DA4B0:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26816)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088DA4C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DA4C4u) goto L_088DA4C4;
    return;
L_088DA4C4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(26820), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA548;
      }
      goto L_088DA4D8;
    }
L_088DA4D8:
    ctx.set_gpr(31, 0x088DA4E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DA4E0u) goto L_088DA4E0;
    return;
L_088DA4E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DA4F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088DA4F0u) goto L_088DA4F0;
    return;
L_088DA4F0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26820)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DA51C;
      }
      goto L_088DA514;
    }
L_088DA514:
    ctx.set_gpr(31, 0x088DA51Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088DA51Cu) goto L_088DA51C;
    return;
L_088DA51C:
    ctx.set_gpr(31, 0x088DA524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DA524u) goto L_088DA524;
    return;
L_088DA524:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26820)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26820)));
    ctx.set_gpr(31, 0x088DA548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088DA548u) goto L_088DA548;
    return;
L_088DA548:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA55C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088DA574u);
    // nop
    goto L_088DA650;
L_088DA574:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26828)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DA588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DA588u) goto L_088DA588;
    return;
L_088DA588:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA59C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26828)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA5C8;
      }
      goto L_088DA5B4;
    }
L_088DA5B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DA5D0;
      }
      goto L_088DA5C8;
    }
L_088DA5C8:
    ctx.set_gpr(31, 0x088DA5D0u);
    // nop
    goto L_088DA650;
L_088DA5D0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26828)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA5E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088DA600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 505u, 0x089422D0u>(ctx, &aot_mem) && ctx.pc == 0x088DA600u) goto L_088DA600;
    return;
L_088DA600:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088DA614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DA614u) goto L_088DA614;
    return;
L_088DA614:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088DA638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x088DA638u) goto L_088DA638;
    return;
L_088DA638:
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
L_088DA650:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-22920));
    ctx.set_gpr(31, 0x088DA668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088DA668u) goto L_088DA668;
    return;
L_088DA668:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA678:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DA688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088DA688u) goto L_088DA688;
    return;
L_088DA688:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(22960));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26828));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-19704));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(31824));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-22804));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(22968));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-23064));
    ctx.set_gpr(31, 0x088DA6DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088DA6DCu) goto L_088DA6DC;
    return;
L_088DA6DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA6EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DA6FCu);
    // nop
    goto L_088DA59C;
L_088DA6FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA70C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26832)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DA7D4;
      }
      goto L_088DA728;
    }
L_088DA728:
    ctx.set_gpr(31, 0x088DA730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088DA730u) goto L_088DA730;
    return;
L_088DA730:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088DA73Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088DA73Cu) goto L_088DA73C;
    return;
L_088DA73C:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26828)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088DA750u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DA750u) goto L_088DA750;
    return;
L_088DA750:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(26832), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA7D4;
      }
      goto L_088DA764;
    }
L_088DA764:
    ctx.set_gpr(31, 0x088DA76Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DA76Cu) goto L_088DA76C;
    return;
L_088DA76C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DA77Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088DA77Cu) goto L_088DA77C;
    return;
L_088DA77C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26832)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DA7A8;
      }
      goto L_088DA7A0;
    }
L_088DA7A0:
    ctx.set_gpr(31, 0x088DA7A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088DA7A8u) goto L_088DA7A8;
    return;
L_088DA7A8:
    ctx.set_gpr(31, 0x088DA7B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DA7B0u) goto L_088DA7B0;
    return;
L_088DA7B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26832)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26832)));
    ctx.set_gpr(31, 0x088DA7D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088DA7D4u) goto L_088DA7D4;
    return;
L_088DA7D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA7E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26832)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DA808;
      }
      goto L_088DA800;
    }
L_088DA800:
    ctx.set_gpr(31, 0x088DA808u);
    // nop
    goto L_088DA650;
L_088DA808:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26832)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA820:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26836)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA84C;
      }
      goto L_088DA838;
    }
L_088DA838:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DA854;
      }
      goto L_088DA84C;
    }
L_088DA84C:
    ctx.set_gpr(31, 0x088DA854u);
    // nop
    goto L_088DA8FC;
L_088DA854:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26836)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA86C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088DA884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 376u, 0x08941A74u>(ctx, &aot_mem) && ctx.pc == 0x088DA884u) goto L_088DA884;
    return;
L_088DA884:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5236));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088DA898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DA898u) goto L_088DA898;
    return;
L_088DA898:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(17428));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x088DA8BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x088DA8BCu) goto L_088DA8BC;
    return;
L_088DA8BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(31, 0x088DA8C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088DA8C8u) goto L_088DA8C8;
    return;
L_088DA8C8:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7292));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088DA8E4u);
    // nop
    goto L_088D8804;
L_088DA8E4:
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
L_088DA8FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-22236));
    ctx.set_gpr(31, 0x088DA914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088DA914u) goto L_088DA914;
    return;
L_088DA914:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA924:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DA934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088DA934u) goto L_088DA934;
    return;
L_088DA934:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-22064));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(22984));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26836));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-21044));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-22080));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-22112));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(22992));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-22420));
    ctx.set_gpr(31, 0x088DA990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088DA990u) goto L_088DA990;
    return;
L_088DA990:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA9A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DA9B0u);
    // nop
    goto L_088DA820;
L_088DA9B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA9C0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26848)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA9D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26836)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DA9F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088DA9F4u) goto L_088DA9F4;
    return;
L_088DA9F4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23020));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DAA10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088DAA10u) goto L_088DAA10;
    return;
L_088DAA10:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DAA20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DAA20u) goto L_088DAA20;
    return;
L_088DAA20:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DAA30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088DAA30u) goto L_088DAA30;
    return;
L_088DAA30:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23024));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(23028));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(23032));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DAA58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088DAA58u) goto L_088DAA58;
    return;
L_088DAA58:
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
L_088DAA70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26840)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DAB38;
      }
      goto L_088DAA8C;
    }
L_088DAA8C:
    ctx.set_gpr(31, 0x088DAA94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088DAA94u) goto L_088DAA94;
    return;
L_088DAA94:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088DAAA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088DAAA0u) goto L_088DAAA0;
    return;
L_088DAAA0:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26836)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088DAAB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DAAB4u) goto L_088DAAB4;
    return;
L_088DAAB4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(26840), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAB38;
      }
      goto L_088DAAC8;
    }
L_088DAAC8:
    ctx.set_gpr(31, 0x088DAAD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DAAD0u) goto L_088DAAD0;
    return;
L_088DAAD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DAAE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088DAAE0u) goto L_088DAAE0;
    return;
L_088DAAE0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26840)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DAB0C;
      }
      goto L_088DAB04;
    }
L_088DAB04:
    ctx.set_gpr(31, 0x088DAB0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088DAB0Cu) goto L_088DAB0C;
    return;
L_088DAB0C:
    ctx.set_gpr(31, 0x088DAB14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DAB14u) goto L_088DAB14;
    return;
L_088DAB14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26840)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26840)));
    ctx.set_gpr(31, 0x088DAB38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088DAB38u) goto L_088DAB38;
    return;
L_088DAB38:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DAB4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088DAB64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DAB64u) goto L_088DAB64;
    return;
L_088DAB64:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAB98;
      }
      goto L_088DAB70;
    }
L_088DAB70:
    ctx.set_gpr(31, 0x088DAB78u);
    // nop
    goto L_088DADA4;
L_088DAB78:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26848)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DAB8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DAB8Cu) goto L_088DAB8C;
    return;
L_088DAB8C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DABF8;
      }
      goto L_088DAB98;
    }
L_088DAB98:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DABACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 542u, 0x089466FCu>(ctx, &aot_mem) && ctx.pc == 0x088DABACu) goto L_088DABAC;
    return;
L_088DABAC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DABCC;
      }
      goto L_088DABB8;
    }
L_088DABB8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DABC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 372u, 0x08941A1Cu>(ctx, &aot_mem) && ctx.pc == 0x088DABC8u) goto L_088DABC8;
    return;
L_088DABC8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_088DABCC;
L_088DABCC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088DABE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DABE0u) goto L_088DABE0;
    return;
L_088DABE0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088DABF8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DABF8u) goto L_088DABF8;
    return;
L_088DABF8:
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
L_088DAC10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088DAC30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DAC30u) goto L_088DAC30;
    return;
L_088DAC30:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAC5C;
      }
      goto L_088DAC3C;
    }
L_088DAC3C:
    ctx.set_gpr(31, 0x088DAC44u);
    // nop
    goto L_088DADA4;
L_088DAC44:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DAC54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 848u, 0x08947E90u>(ctx, &aot_mem) && ctx.pc == 0x088DAC54u) goto L_088DAC54;
    return;
L_088DAC54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAC84;
      }
      goto L_088DAC5C;
    }
L_088DAC5C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088DAC6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 552u, 0x08946784u>(ctx, &aot_mem) && ctx.pc == 0x088DAC6Cu) goto L_088DAC6C;
    return;
L_088DAC6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAC84;
      }
      goto L_088DAC74;
    }
L_088DAC74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DAC84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 378u, 0x08941AE8u>(ctx, &aot_mem) && ctx.pc == 0x088DAC84u) goto L_088DAC84;
    return;
L_088DAC84:
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
L_088DAC9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26848)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DACC8;
      }
      goto L_088DACB4;
    }
L_088DACB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DACD0;
      }
      goto L_088DACC8;
    }
L_088DACC8:
    ctx.set_gpr(31, 0x088DACD0u);
    // nop
    goto L_088DADA4;
L_088DACD0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26848)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DACE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088DAD00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 376u, 0x08941A74u>(ctx, &aot_mem) && ctx.pc == 0x088DAD00u) goto L_088DAD00;
    return;
L_088DAD00:
    ctx.set_gpr(31, 0x088DAD08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DAD08u) goto L_088DAD08;
    return;
L_088DAD08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(17428));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAD44;
      }
      goto L_088DAD30;
    }
L_088DAD30:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x088DAD3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088DAD3Cu) goto L_088DAD3C;
    return;
L_088DAD3C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088DAD44;
L_088DAD44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAD5C;
      }
      goto L_088DAD4C;
    }
L_088DAD4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088DAD5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088DAD5Cu) goto L_088DAD5C;
    return;
L_088DAD5C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAD70;
      }
      goto L_088DAD68;
    }
L_088DAD68:
    ctx.set_gpr(31, 0x088DAD70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088DAD70u) goto L_088DAD70;
    return;
L_088DAD70:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088DAD8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088DAD8Cu) goto L_088DAD8C;
    return;
L_088DAD8C:
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
L_088DADA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21044));
    ctx.set_gpr(31, 0x088DADBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088DADBCu) goto L_088DADBC;
    return;
L_088DADBC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DADCC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-20880));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(23036));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26848));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14380));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-20896));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-20928));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(23048));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(76));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-21272));
    ctx.set_gpr(31, 0x088DAE30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088DAE30u) goto L_088DAE30;
    return;
L_088DAE30:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DAE40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DAE50u);
    // nop
    goto L_088DAC9C;
L_088DAE50:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DAE60:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27024)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DAE70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26848)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DAE9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088DAE9Cu) goto L_088DAE9C;
    return;
L_088DAE9C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23072));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x088DAEB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088DAEB8u) goto L_088DAEB8;
    return;
L_088DAEB8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23296));
    ctx.set_gpr(31, 0x088DAECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x088DAECCu) goto L_088DAECC;
    return;
L_088DAECC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DAEE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x088DAEE0u) goto L_088DAEE0;
    return;
L_088DAEE0:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088DAEFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DAEFCu) goto L_088DAEFC;
    return;
L_088DAEFC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088DAF10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 168u, 0x0890CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088DAF10u) goto L_088DAF10;
    return;
L_088DAF10:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(26856));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DAF30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x088DAF30u) goto L_088DAF30;
    return;
L_088DAF30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DAF58;
      }
      goto L_088DAF4C;
    }
L_088DAF4C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DAF58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088DAF58u) goto L_088DAF58;
    return;
L_088DAF58:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088DAF68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DAF68u) goto L_088DAF68;
    return;
L_088DAF68:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DAF7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DAF7Cu) goto L_088DAF7C;
    return;
L_088DAF7C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088DAF88u);
    // nop
    goto L_088DB23C;
L_088DAF88:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DAFA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DAFA8u) goto L_088DAFA8;
    return;
L_088DAFA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DAFB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088DAFB8u) goto L_088DAFB8;
    return;
L_088DAFB8:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DAFC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DAFC8u) goto L_088DAFC8;
    return;
L_088DAFC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DAFD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088DAFD8u) goto L_088DAFD8;
    return;
L_088DAFD8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23316));
    ctx.set_gpr(31, 0x088DAFECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x088DAFECu) goto L_088DAFEC;
    return;
L_088DAFEC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DB000u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x088DB000u) goto L_088DB000;
    return;
L_088DB000:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088DB01Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DB01Cu) goto L_088DB01C;
    return;
L_088DB01C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088DB030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 168u, 0x0890CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB030u) goto L_088DB030;
    return;
L_088DB030:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(26876));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DB050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x088DB050u) goto L_088DB050;
    return;
L_088DB050:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB078;
      }
      goto L_088DB06C;
    }
L_088DB06C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DB078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088DB078u) goto L_088DB078;
    return;
L_088DB078:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DB088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB088u) goto L_088DB088;
    return;
L_088DB088:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DB098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088DB098u) goto L_088DB098;
    return;
L_088DB098:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DB0A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB0A8u) goto L_088DB0A8;
    return;
L_088DB0A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088DB0B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088DB0B8u) goto L_088DB0B8;
    return;
L_088DB0B8:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DB0C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB0C8u) goto L_088DB0C8;
    return;
L_088DB0C8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088DB0D4u);
    // nop
    goto L_088DB23C;
L_088DB0D4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23200));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(23232));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(23264));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088DB108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB108u) goto L_088DB108;
    return;
L_088DB108:
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
L_088DB128:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26852)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB1F0;
      }
      goto L_088DB144;
    }
L_088DB144:
    ctx.set_gpr(31, 0x088DB14Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088DB14Cu) goto L_088DB14C;
    return;
L_088DB14C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088DB158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088DB158u) goto L_088DB158;
    return;
L_088DB158:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26848)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088DB16Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DB16Cu) goto L_088DB16C;
    return;
L_088DB16C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(26852), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB1F0;
      }
      goto L_088DB180;
    }
L_088DB180:
    ctx.set_gpr(31, 0x088DB188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DB188u) goto L_088DB188;
    return;
L_088DB188:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DB198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088DB198u) goto L_088DB198;
    return;
L_088DB198:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26852)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB1C4;
      }
      goto L_088DB1BC;
    }
L_088DB1BC:
    ctx.set_gpr(31, 0x088DB1C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088DB1C4u) goto L_088DB1C4;
    return;
L_088DB1C4:
    ctx.set_gpr(31, 0x088DB1CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DB1CCu) goto L_088DB1CC;
    return;
L_088DB1CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26852)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26852)));
    ctx.set_gpr(31, 0x088DB1F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088DB1F0u) goto L_088DB1F0;
    return;
L_088DB1F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DB204:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26852)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB224;
      }
      goto L_088DB21C;
    }
L_088DB21C:
    ctx.set_gpr(31, 0x088DB224u);
    // nop
    goto L_088DADA4;
L_088DB224:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26852)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DB23C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26896)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB27C;
      }
      goto L_088DB254;
    }
L_088DB254:
    ctx.set_gpr(31, 0x088DB25Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088DB25Cu) goto L_088DB25C;
    return;
L_088DB25C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088DB268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088DB268u) goto L_088DB268;
    return;
L_088DB268:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088DB274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088DB274u) goto L_088DB274;
    return;
L_088DB274:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(26896), ctx.gpr[2]);
    goto L_088DB27C;
L_088DB27C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26896)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DB294:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26896)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB2C0;
      }
      goto L_088DB2AC;
    }
L_088DB2AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB2C8;
      }
      goto L_088DB2C0;
    }
L_088DB2C0:
    ctx.set_gpr(31, 0x088DB2C8u);
    // nop
    goto L_088DB2E0;
L_088DB2C8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26896)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DB2E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-19704));
    ctx.set_gpr(31, 0x088DB2F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088DB2F8u) goto L_088DB2F8;
    return;
L_088DB2F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DB308:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19560));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(23332));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26896));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-19592));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(23340));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x088DB368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088DB368u) goto L_088DB368;
    return;
L_088DB368:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DB378:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DB388u);
    // nop
    goto L_088DB294;
L_088DB388:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DB398:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26896)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088DB3C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088DB3C0u) goto L_088DB3C0;
    return;
L_088DB3C0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23352));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(31, 0x088DB3DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088DB3DCu) goto L_088DB3DC;
    return;
L_088DB3DC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DB3ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB3ECu) goto L_088DB3EC;
    return;
L_088DB3EC:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088DB400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB400u) goto L_088DB400;
    return;
L_088DB400:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088DB414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 58u, 0x08958488u>(ctx, &aot_mem) && ctx.pc == 0x088DB414u) goto L_088DB414;
    return;
L_088DB414:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088DB428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB428u) goto L_088DB428;
    return;
L_088DB428:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088DB43Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 58u, 0x08958488u>(ctx, &aot_mem) && ctx.pc == 0x088DB43Cu) goto L_088DB43C;
    return;
L_088DB43C:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088DB450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB450u) goto L_088DB450;
    return;
L_088DB450:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088DB464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB464u) goto L_088DB464;
    return;
L_088DB464:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088DB470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 753u, 0x088D7138u>(ctx, &aot_mem) && ctx.pc == 0x088DB470u) goto L_088DB470;
    return;
L_088DB470:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088DB498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB498u) goto L_088DB498;
    return;
L_088DB498:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088DB4B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB4B4u) goto L_088DB4B4;
    return;
L_088DB4B4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088DB4D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB4D8u) goto L_088DB4D8;
    return;
L_088DB4D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088DB4E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 168u, 0x0890CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB4E8u) goto L_088DB4E8;
    return;
L_088DB4E8:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088DB4F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB4F8u) goto L_088DB4F8;
    return;
L_088DB4F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DB508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088DB508u) goto L_088DB508;
    return;
L_088DB508:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088DB518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB518u) goto L_088DB518;
    return;
L_088DB518:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DB528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 168u, 0x0890CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB528u) goto L_088DB528;
    return;
L_088DB528:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088DB538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB538u) goto L_088DB538;
    return;
L_088DB538:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088DB548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 168u, 0x0890CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB548u) goto L_088DB548;
    return;
L_088DB548:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(13));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088DB558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB558u) goto L_088DB558;
    return;
L_088DB558:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088DB568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 168u, 0x0890CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB568u) goto L_088DB568;
    return;
L_088DB568:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(14));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088DB578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB578u) goto L_088DB578;
    return;
L_088DB578:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DB588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 168u, 0x0890CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB588u) goto L_088DB588;
    return;
L_088DB588:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(15));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088DB598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB598u) goto L_088DB598;
    return;
L_088DB598:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088DB5A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 168u, 0x0890CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB5A8u) goto L_088DB5A8;
    return;
L_088DB5A8:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088DB5B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB5B8u) goto L_088DB5B8;
    return;
L_088DB5B8:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23632));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(23700));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(23768));
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DB5E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB5E4u) goto L_088DB5E4;
    return;
L_088DB5E4:
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
L_088DB600:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088DB618u);
    // nop
    goto L_088DB6FC;
L_088DB618:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26968)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DB62Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DB62Cu) goto L_088DB62C;
    return;
L_088DB62C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DB640:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26968)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB66C;
      }
      goto L_088DB658;
    }
L_088DB658:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB674;
      }
      goto L_088DB66C;
    }
L_088DB66C:
    ctx.set_gpr(31, 0x088DB674u);
    // nop
    goto L_088DB6FC;
L_088DB674:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26968)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DB68C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088DB6A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088DB6A4u) goto L_088DB6A4;
    return;
L_088DB6A4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5596));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088DB6BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DB6BCu) goto L_088DB6BC;
    return;
L_088DB6BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088DB6E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088DB6E4u) goto L_088DB6E4;
    return;
L_088DB6E4:
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
L_088DB6FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-18652));
    ctx.set_gpr(31, 0x088DB714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088DB714u) goto L_088DB714;
    return;
L_088DB714:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DB724:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DB734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088DB734u) goto L_088DB734;
    return;
L_088DB734:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26968));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4924));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-6348));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-18544));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(23836));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-18804));
    ctx.set_gpr(31, 0x088DB780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088DB780u) goto L_088DB780;
    return;
L_088DB780:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DB790:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DB7A0u);
    // nop
    goto L_088DB640;
L_088DB7A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DB7B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088DB7C8u);
    // nop
    goto L_088DB8C0;
L_088DB7C8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26972)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DB7DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DB7DCu) goto L_088DB7DC;
    return;
L_088DB7DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DB7F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26972)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB81C;
      }
      goto L_088DB808;
    }
L_088DB808:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB824;
      }
      goto L_088DB81C;
    }
L_088DB81C:
    ctx.set_gpr(31, 0x088DB824u);
    // nop
    goto L_088DB8C0;
L_088DB824:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26972)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DB83C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088DB854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 757u, 0x0894B6ACu>(ctx, &aot_mem) && ctx.pc == 0x088DB854u) goto L_088DB854;
    return;
L_088DB854:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6352));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088DB868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DB868u) goto L_088DB868;
    return;
L_088DB868:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(17164));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x088DB88Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x088DB88Cu) goto L_088DB88C;
    return;
L_088DB88C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7292));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088DB8A8u);
    // nop
    goto L_088D8804;
L_088DB8A8:
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
L_088DB8C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-18200));
    ctx.set_gpr(31, 0x088DB8D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088DB8D8u) goto L_088DB8D8;
    return;
L_088DB8D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DB8E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DB8F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088DB8F8u) goto L_088DB8F8;
    return;
L_088DB8F8:
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18028));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(23852));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26972));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-17028));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-18044));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-18076));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(23860));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(68));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-18372));
    ctx.set_gpr(31, 0x088DB954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088DB954u) goto L_088DB954;
    return;
L_088DB954:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DB964:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DB974u);
    // nop
    goto L_088DB7F0;
L_088DB974:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DB984:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26984)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DB994:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26972)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DB9B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088DB9B8u) goto L_088DB9B8;
    return;
L_088DB9B8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23888));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DB9D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088DB9D4u) goto L_088DB9D4;
    return;
L_088DB9D4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DB9E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB9E4u) goto L_088DB9E4;
    return;
L_088DB9E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DB9F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088DB9F4u) goto L_088DB9F4;
    return;
L_088DB9F4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23892));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(23896));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(23900));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DBA1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088DBA1Cu) goto L_088DBA1C;
    return;
L_088DBA1C:
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
L_088DBA34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26976)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DBAFC;
      }
      goto L_088DBA50;
    }
L_088DBA50:
    ctx.set_gpr(31, 0x088DBA58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088DBA58u) goto L_088DBA58;
    return;
L_088DBA58:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088DBA64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088DBA64u) goto L_088DBA64;
    return;
L_088DBA64:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26972)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088DBA78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DBA78u) goto L_088DBA78;
    return;
L_088DBA78:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(26976), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBAFC;
      }
      goto L_088DBA8C;
    }
L_088DBA8C:
    ctx.set_gpr(31, 0x088DBA94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DBA94u) goto L_088DBA94;
    return;
L_088DBA94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DBAA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088DBAA4u) goto L_088DBAA4;
    return;
L_088DBAA4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26976)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DBAD0;
      }
      goto L_088DBAC8;
    }
L_088DBAC8:
    ctx.set_gpr(31, 0x088DBAD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088DBAD0u) goto L_088DBAD0;
    return;
L_088DBAD0:
    ctx.set_gpr(31, 0x088DBAD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DBAD8u) goto L_088DBAD8;
    return;
L_088DBAD8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26976)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26976)));
    ctx.set_gpr(31, 0x088DBAFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088DBAFCu) goto L_088DBAFC;
    return;
L_088DBAFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DBB10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088DBB28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DBB28u) goto L_088DBB28;
    return;
L_088DBB28:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBB5C;
      }
      goto L_088DBB34;
    }
L_088DBB34:
    ctx.set_gpr(31, 0x088DBB3Cu);
    // nop
    goto L_088DBD54;
L_088DBB3C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26984)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DBB50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DBB50u) goto L_088DBB50;
    return;
L_088DBB50:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBBBC;
      }
      goto L_088DBB5C;
    }
L_088DBB5C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DBB70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 542u, 0x089466FCu>(ctx, &aot_mem) && ctx.pc == 0x088DBB70u) goto L_088DBB70;
    return;
L_088DBB70:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBB90;
      }
      goto L_088DBB7C;
    }
L_088DBB7C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DBB8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 753u, 0x0894B658u>(ctx, &aot_mem) && ctx.pc == 0x088DBB8Cu) goto L_088DBB8C;
    return;
L_088DBB8C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_088DBB90;
L_088DBB90:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088DBBA4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DBBA4u) goto L_088DBBA4;
    return;
L_088DBBA4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088DBBBCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DBBBCu) goto L_088DBBBC;
    return;
L_088DBBBC:
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
L_088DBBD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088DBBF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DBBF4u) goto L_088DBBF4;
    return;
L_088DBBF4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBC20;
      }
      goto L_088DBC00;
    }
L_088DBC00:
    ctx.set_gpr(31, 0x088DBC08u);
    // nop
    goto L_088DBD54;
L_088DBC08:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DBC18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 848u, 0x08947E90u>(ctx, &aot_mem) && ctx.pc == 0x088DBC18u) goto L_088DBC18;
    return;
L_088DBC18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBC48;
      }
      goto L_088DBC20;
    }
L_088DBC20:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088DBC30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 552u, 0x08946784u>(ctx, &aot_mem) && ctx.pc == 0x088DBC30u) goto L_088DBC30;
    return;
L_088DBC30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBC48;
      }
      goto L_088DBC38;
    }
L_088DBC38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DBC48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 759u, 0x0894B6F8u>(ctx, &aot_mem) && ctx.pc == 0x088DBC48u) goto L_088DBC48;
    return;
L_088DBC48:
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
L_088DBC60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26984)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBC8C;
      }
      goto L_088DBC78;
    }
L_088DBC78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DBC94;
      }
      goto L_088DBC8C;
    }
L_088DBC8C:
    ctx.set_gpr(31, 0x088DBC94u);
    // nop
    goto L_088DBD54;
L_088DBC94:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26984)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DBCAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088DBCC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 757u, 0x0894B6ACu>(ctx, &aot_mem) && ctx.pc == 0x088DBCC4u) goto L_088DBCC4;
    return;
L_088DBCC4:
    ctx.set_gpr(31, 0x088DBCCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088DBCCCu) goto L_088DBCCC;
    return;
L_088DBCCC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(17164));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBD08;
      }
      goto L_088DBCF4;
    }
L_088DBCF4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x088DBD00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088DBD00u) goto L_088DBD00;
    return;
L_088DBD00:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088DBD08;
L_088DBD08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBD20;
      }
      goto L_088DBD10;
    }
L_088DBD10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088DBD20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088DBD20u) goto L_088DBD20;
    return;
L_088DBD20:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088DBD3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088DBD3Cu) goto L_088DBD3C;
    return;
L_088DBD3C:
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
L_088DBD54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-17028));
    ctx.set_gpr(31, 0x088DBD6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088DBD6Cu) goto L_088DBD6C;
    return;
L_088DBD6C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DBD7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(2, 2190u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16880));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(23904));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(26984));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14380));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-20896));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-16912));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(23916));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(11, 2190u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-17236));
    ctx.set_gpr(31, 0x088DBDE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088DBDE0u) goto L_088DBDE0;
    return;
L_088DBDE0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DBDF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088DBE00u);
    // nop
    goto L_088DBC60;
L_088DBE00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DBE10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26984)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DBE38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088DBE38u) goto L_088DBE38;
    return;
L_088DBE38:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23940));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088DBE54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088DBE54u) goto L_088DBE54;
    return;
L_088DBE54:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088DBE64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DBE64u) goto L_088DBE64;
    return;
L_088DBE64:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088DBE70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 753u, 0x088D7138u>(ctx, &aot_mem) && ctx.pc == 0x088DBE70u) goto L_088DBE70;
    return;
L_088DBE70:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088DBE94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DBE94u) goto L_088DBE94;
    return;
L_088DBE94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088DBEA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088DBEA4u) goto L_088DBEA4;
    return;
L_088DBEA4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23964));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(23976));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(23988));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088DBECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088DBECCu) goto L_088DBECC;
    return;
L_088DBECC:
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
L_088DBEE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26988)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DBFB0;
      }
      goto L_088DBF04;
    }
L_088DBF04:
    ctx.set_gpr(31, 0x088DBF0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088DBF0Cu) goto L_088DBF0C;
    return;
L_088DBF0C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088DBF18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088DBF18u) goto L_088DBF18;
    return;
L_088DBF18:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26984)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088DBF2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088DBF2Cu) goto L_088DBF2C;
    return;
L_088DBF2C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(26988), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBFB0;
      }
      goto L_088DBF40;
    }
L_088DBF40:
    ctx.set_gpr(31, 0x088DBF48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DBF48u) goto L_088DBF48;
    return;
L_088DBF48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088DBF58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088DBF58u) goto L_088DBF58;
    return;
L_088DBF58:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26988)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DBF84;
      }
      goto L_088DBF7C;
    }
L_088DBF7C:
    ctx.set_gpr(31, 0x088DBF84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088DBF84u) goto L_088DBF84;
    return;
L_088DBF84:
    ctx.set_gpr(31, 0x088DBF8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088DBF8Cu) goto L_088DBF8C;
    return;
L_088DBF8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26988)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26988)));
    ctx.set_gpr(31, 0x088DBFB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088DBFB0u) goto L_088DBFB0;
    return;
L_088DBFB0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DBFC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26988)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DBFE4;
      }
      goto L_088DBFDC;
    }
L_088DBFDC:
    ctx.set_gpr(31, 0x088DBFE4u);
    // nop
    goto L_088DBD54;
L_088DBFE4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26988)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DBFFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.pc = 0x088DC000u; return;
}

void recomp_unit_0053(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0053_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_53(Runtime &runtime) {
    runtime.register_generated_unit(53u, 0x088D8000u, 16384u, &recomp_unit_0053, &recomp_unit_0053_entry);
    runtime.register_function(0x088D8004u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8010u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8024u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8038u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8040u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8050u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8074u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D807Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8084u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D80A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D80BCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D80D4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D80E0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D80E8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D80FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8108u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D811Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8128u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8138u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D813Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8150u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8168u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8180u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D81A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D81ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D81B4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D81C4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D81CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D81DCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D81E4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D81F4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D820Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8224u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8238u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8240u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8258u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8270u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8278u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D829Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D82B4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D82CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D82DCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8338u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8348u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8358u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8368u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8384u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D838Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8398u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D83ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D83C0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D83C8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D83D8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D83FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8404u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D840Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8430u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8444u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D845Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8464u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D847Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8494u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D84A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D84B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D84C8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D84E0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D84F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8500u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8558u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8568u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8578u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8588u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D85B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D85CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D85DCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D85E8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D861Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8638u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8654u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D865Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8668u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D867Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8690u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8698u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D86A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D86CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D86D4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D86DCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8700u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8714u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8720u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8734u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8744u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D874Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8764u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8778u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8780u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8798u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D87B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D87C4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D87ECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8804u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8824u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D883Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D884Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8864u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8868u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8870u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8888u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8894u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D88A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D88ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D88C8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D88E0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D88F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8900u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D895Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D896Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D897Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D898Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D899Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D89C0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D89DCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D89ECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D89FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8A24u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8A3Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8A58u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8A60u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8A6Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8A80u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8A94u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8A9Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8AACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8AD0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8AD8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8AE0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8B04u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8B18u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8B30u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8B44u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8B58u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8B70u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8B84u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8B8Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8BA4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8BBCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8BD0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8BF4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8C0Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8C24u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8C34u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8C44u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8C98u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8CA8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8CB8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8CC8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8CE4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8CECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8CF8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8D0Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8D20u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8D28u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8D38u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8D5Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8D64u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8D6Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8D90u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8DA4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8DBCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8DC4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8DDCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8DF4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8E08u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8E10u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8E28u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8E40u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8E54u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8E7Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8E94u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8EACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8EBCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8ECCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8F28u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8F38u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8F48u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8F58u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8F68u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8F8Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8FA8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8FB8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8FC8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8FF0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9008u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9024u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D902Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9038u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D904Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9060u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9068u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9078u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D909Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D90A4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D90ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D90D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D90E4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D90FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9108u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9110u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9124u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9130u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9144u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9150u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9160u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9164u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9178u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9190u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D91A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D91C8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D91D4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D91DCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D91ECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D91F4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9204u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D920Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D921Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9234u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D924Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9260u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9268u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9280u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9298u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D92A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D92C4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D92DCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D92F4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9304u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9368u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9378u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9388u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9398u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D93BCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D93D8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D93E8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9414u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D942Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9448u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9450u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D945Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9470u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9484u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D948Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D949Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D94C0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D94C8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D94D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D94F4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9508u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9520u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9528u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9540u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9558u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D956Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9580u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9598u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D95ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D95B4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D95CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D95E4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D95F8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9620u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9638u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9650u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9660u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9670u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D96CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D96DCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D96ECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D96FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D970Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9730u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D974Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D975Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D976Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9794u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D97ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D97C8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D97D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D97DCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D97F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9804u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D980Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D981Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9840u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9848u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9850u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9874u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9888u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D98A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D98B4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D98C8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D98E0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D98F4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D98FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9914u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D992Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9940u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9964u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D997Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9994u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D99A4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D99B4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A08u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A18u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A28u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A38u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A54u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A5Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A68u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A7Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A90u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A98u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9AA8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9ACCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9AD4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9ADCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B00u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B14u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B2Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B34u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B4Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B64u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B78u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B8Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9BA4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9BB8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9BC0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9BD8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9BF0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9C04u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9C2Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9C44u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9C5Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9C6Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9C7Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9CD8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9CE8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9CF8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9D08u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9D18u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9D3Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9D58u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9D68u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9D78u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9DA0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9DB8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9DD4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9DDCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9DE8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9DFCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9E10u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9E18u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9E28u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9E4Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9E54u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9E5Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9E80u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9E94u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9EACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9EB8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9EC0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9ED4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9EE0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9EF4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9F00u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9F10u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9F14u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9F28u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9F40u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9F58u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9F78u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9F84u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9F8Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9F9Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9FA4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9FB4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9FBCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9FCCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9FE4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9FFCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA010u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA018u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA030u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA048u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA050u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA074u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA08Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA0A4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA0B4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA110u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA120u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA130u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA140u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA15Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA164u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA170u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA184u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA198u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA1A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA1B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA1D4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA1DCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA1E4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA208u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA21Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA234u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA23Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA254u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA26Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA280u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA288u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA2A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA2B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA2CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA2F4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA30Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA324u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA334u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA344u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA3A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA3B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA3C0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA3D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA3E0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA404u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA420u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA430u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA440u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA468u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA480u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA49Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA4A4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA4B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA4C4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA4D8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA4E0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA4F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA514u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA51Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA524u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA548u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA55Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA574u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA588u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA59Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA5B4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA5C8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA5D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA5E8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA600u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA614u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA638u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA650u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA668u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA678u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA688u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA6DCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA6ECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA6FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA70Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA728u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA730u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA73Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA750u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA764u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA76Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA77Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA7A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA7A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA7B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA7D4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA7E8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA800u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA808u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA820u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA838u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA84Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA854u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA86Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA884u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA898u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA8BCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA8C8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA8E4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA8FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA914u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA924u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA934u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA990u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA9A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA9B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA9C0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA9D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA9F4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAA10u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAA20u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAA30u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAA58u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAA70u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAA8Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAA94u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAAA0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAAB4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAAC8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAAD0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAAE0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB04u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB0Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB14u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB38u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB4Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB64u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB70u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB78u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB8Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB98u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DABACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DABB8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DABC8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DABCCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DABE0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DABF8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC10u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC30u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC3Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC44u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC54u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC5Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC6Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC74u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC84u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC9Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DACB4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DACC8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DACD0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DACE8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD00u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD08u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD30u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD3Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD44u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD4Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD5Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD68u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD70u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD8Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DADA4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DADBCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DADCCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAE30u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAE40u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAE50u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAE60u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAE70u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAE9Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAEB8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAECCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAEE0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAEFCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAF10u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAF30u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAF4Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAF58u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAF68u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAF7Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAF88u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAFA8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAFB8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAFC8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAFD8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAFECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB000u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB01Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB030u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB050u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB06Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB078u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB088u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB098u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB0A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB0B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB0C8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB0D4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB108u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB128u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB144u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB14Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB158u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB16Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB180u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB188u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB198u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB1BCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB1C4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB1CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB1F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB204u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB21Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB224u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB23Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB254u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB25Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB268u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB274u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB27Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB294u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB2ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB2C0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB2C8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB2E0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB2F8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB308u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB368u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB378u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB388u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB398u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB3C0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB3DCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB3ECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB400u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB414u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB428u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB43Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB450u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB464u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB470u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB498u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB4B4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB4D8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB4E8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB4F8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB508u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB518u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB528u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB538u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB548u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB558u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB568u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB578u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB588u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB598u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB5A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB5B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB5E4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB600u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB618u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB62Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB640u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB658u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB66Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB674u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB68Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB6A4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB6BCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB6E4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB6FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB714u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB724u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB734u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB780u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB790u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB7A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB7B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB7C8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB7DCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB7F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB808u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB81Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB824u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB83Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB854u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB868u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB88Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB8A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB8C0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB8D8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB8E8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB8F8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB954u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB964u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB974u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB984u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB994u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB9B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB9D4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB9E4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB9F4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBA1Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBA34u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBA50u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBA58u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBA64u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBA78u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBA8Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBA94u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBAA4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBAC8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBAD0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBAD8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBAFCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBB10u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBB28u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBB34u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBB3Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBB50u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBB5Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBB70u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBB7Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBB8Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBB90u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBBA4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBBBCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBBD4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBBF4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBC00u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBC08u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBC18u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBC20u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBC30u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBC38u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBC48u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBC60u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBC78u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBC8Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBC94u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBCACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBCC4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBCCCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBCF4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBD00u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBD08u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBD10u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBD20u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBD3Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBD54u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBD6Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBD7Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBDE0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBDF0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBE00u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBE10u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBE38u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBE54u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBE64u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBE70u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBE94u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBEA4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBECCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBEE8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBF04u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBF0Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBF18u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBF2Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBF40u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBF48u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBF58u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBF7Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBF84u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBF8Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBFB0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBFC4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBFDCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBFE4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBFFCu, &recomp_unit_0053, "recomp_unit_0053");
}
} // namespace psprecomp
