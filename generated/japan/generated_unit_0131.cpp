#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0131[4095] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
    0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12,
    0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 22, 0, 0, 23, 0, 24,
    0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0,
    0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0,
    35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 39, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0,
    43, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54,
    0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 59, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 62,
    0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68,
    0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75,
    0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0,
    0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 84, 0,
    0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0,
    90, 0, 0, 91, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0,
    0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0,
    0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0,
    0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 117, 0, 118, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0,
    0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130,
    0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136,
    0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0,
    0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0,
    0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 161, 0, 162, 0, 0, 163, 0,
    164, 0, 0, 165, 0, 166, 0, 0, 167, 0, 168, 0, 0, 169, 0, 170, 0, 0, 171, 0, 172, 0, 0, 173, 0, 174, 0, 0, 175, 0, 176, 0,
    0, 177, 0, 178, 0, 0, 179, 0, 180, 0, 0, 181, 0, 182, 0, 0, 183, 0, 184, 0, 0, 185, 0, 186, 0, 0, 187, 0, 188, 0, 0, 189,
    0, 190, 0, 0, 191, 0, 192, 0, 0, 193, 0, 194, 0, 0, 195, 0, 196, 0, 0, 197, 0, 198, 0, 0, 199, 0, 200, 0, 0, 201, 0, 202,
    0, 0, 203, 0, 204, 0, 0, 205, 0, 206, 0, 0, 207, 0, 208, 0, 0, 209, 0, 210, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0, 213, 0,
    0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0,
    0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0,
    0, 235, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0,
    0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0,
    0, 0, 0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0,
    0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 0, 0,
    0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0,
    0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274, 0,
    0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0,
    0, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 0,
    0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0,
    0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 298, 0,
    0, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0,
    0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0,
    312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0,
    0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 326, 0,
    0, 327, 0, 328, 0, 0, 329, 0, 330, 0, 0, 331, 0, 332, 0, 0, 333, 0, 334, 0, 0, 335, 0, 336, 0, 0, 337, 0, 338, 0, 0, 339,
    0, 340, 0, 0, 341, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0,
    347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350,
    0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 356,
    0, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0,
    0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0,
    367, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0,
    374, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0,
    378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0,
    0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 386, 0, 0, 387, 0, 388, 0, 0, 389, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0,
    0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 395, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0,
    0, 0, 401, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0,
    0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0,
    413, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0,
    418, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0,
    0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0,
    434, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0,
    0, 439, 0, 440, 0, 0, 0, 441, 0, 0, 442, 0, 443, 0, 444, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 447, 0, 448, 0, 449, 0, 0,
    0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 0, 455, 0,
    0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 458, 0, 0,
    0, 459, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 464, 0, 0,
    0, 0, 465, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 470,
    0, 0, 471, 0, 0, 472, 0, 473, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 476, 0, 477, 0, 0, 0, 0, 0,
    478, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 482, 0, 0, 483, 0, 484, 0,
    0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 487, 0, 0, 0, 488, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 0, 493, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 497, 0, 0, 0, 0, 498, 0, 0, 499, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 503,
    0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 505, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 507, 0, 508, 0, 0, 509, 0, 0, 510, 0, 511,
    0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 514, 0, 515, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 517, 0, 0,
    0, 0, 518, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 524, 0, 0, 0, 525, 0, 0, 0, 526, 0, 0, 0, 0, 0, 527, 0,
    528, 0, 0, 529, 0, 0, 530, 0, 531, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 534, 0, 535, 0, 0, 0, 0,
    0, 536, 0, 0, 0, 0, 537, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 540, 0, 0, 0, 541, 0, 0, 0,
    542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 544, 0, 0, 0, 545, 0, 0,
    0, 546, 0, 0, 0, 0, 0, 547, 0, 548, 0, 0, 549, 0, 0, 550, 0, 551, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 553, 0, 0,
    0, 0, 554, 0, 555, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 557, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0,
    0, 560, 0, 0, 0, 561, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0,
    0, 0, 564, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 568, 0, 569, 0, 0, 0, 0, 0, 570, 0, 0,
    0, 0, 571, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 574, 0, 0, 0, 575, 0, 0, 0, 576, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 578, 0, 0, 0, 579, 0, 0, 0, 580, 0, 0,
    0, 0, 0, 581, 0, 0, 0, 0, 582, 0, 583, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 585, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0,
    0, 587, 0, 0, 0, 0, 0, 588, 0, 0, 0, 589, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 591, 0, 0, 0, 592, 0, 0, 0, 593, 0, 0, 0, 594, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 596, 0, 597, 0, 0,
    0, 0, 0, 598, 0, 0, 0, 0, 599, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 602, 0, 0, 0, 603, 0,
    0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 606, 0, 0, 0, 607,
    0, 0, 0, 608, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 610, 0, 611, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 613, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 616, 0, 0, 0, 617, 0, 0, 0, 0, 0, 618, 0, 0, 0,
    0, 0, 619, 0, 0, 0, 620, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 622, 0, 0, 0, 623, 0, 0, 0, 624, 0, 0, 0, 625, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0,
    0, 0, 628, 0, 0, 0, 629, 0, 0, 0, 0, 630, 0, 0, 0, 0, 631, 0, 0, 0, 0, 632, 0, 0, 0, 0, 633, 0, 0, 634, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 637, 0, 638, 0, 0, 639, 0, 0,
    640, 0, 641, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 644, 0, 645, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0,
    0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 650, 0, 0, 651, 0, 652, 0, 0, 653,
    0, 654, 0, 0, 655, 0, 656, 0, 0, 657, 0, 658, 0, 0, 659, 0, 660, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 662, 0, 0, 0,
    663, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 666,
    0, 0, 0, 667, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 671, 0, 0, 672,
    0, 0, 0, 0, 0, 0, 673, 0, 0, 674, 0, 0, 0, 0, 0, 0, 675, 0, 0, 676, 0, 0, 0, 0, 0, 0, 677, 0, 0, 678, 0, 0,
    0, 0, 0, 0, 679, 0, 0, 680, 0, 0, 0, 0, 0, 0, 681, 0, 0, 682, 0, 0, 0, 0, 0, 0, 683, 0, 0, 684, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 688, 0, 689, 0, 0, 0, 0,
    0, 690, 0, 0, 0, 0, 691, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 694, 0, 0, 0, 695, 0, 0, 0,
    696, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 697, 0, 0, 0, 698, 0, 0, 0, 699, 0, 0,
    0, 700, 0, 0, 0, 0, 0, 701, 0, 702, 0, 0, 703, 0, 0, 704, 0, 705, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 707, 0, 0,
    0, 0, 708, 0, 709, 0, 0, 0, 0, 0, 710, 0, 0, 0, 0, 711, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 713, 0, 0, 0, 0,
    0, 714, 0, 0, 0, 715, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    717, 0, 0, 0, 718, 0, 0, 0, 719, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 722, 0, 0,
    0, 723, 0, 0, 724, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 726, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 728, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 729, 0, 0, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 731, 0, 732, 0, 0, 733, 0, 0, 734, 0, 735, 0, 0,
    0, 0, 0, 736, 0, 0, 0, 0, 0, 737, 0, 0, 0, 0, 738, 0, 739, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 741, 0, 0, 0, 0,
    742, 0, 0, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 744, 0, 0, 0, 745, 0, 0, 0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 747, 0, 0, 0, 748, 0, 0, 0, 749, 0, 0, 0, 750, 0, 0, 0, 0, 0, 751, 0, 0, 0,
    0, 752, 0, 753, 0, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 757, 0,
    758, 0, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 760, 0, 0, 0, 761, 0, 0, 0, 762, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 764, 0, 0, 0, 765, 0, 0, 0, 766, 0, 0, 0, 767, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 769, 0, 0, 0, 770, 0, 0, 771, 0, 0, 0, 0, 0, 0, 0, 772, 0, 0, 773,
};
void recomp_unit_0131_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A10000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0131[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A10000;
    case 2u: goto L_08A10024;
    case 3u: goto L_08A10034;
    case 4u: goto L_08A10044;
    case 5u: goto L_08A10054;
    case 6u: goto L_08A1007C;
    case 7u: goto L_08A10098;
    case 8u: goto L_08A100A8;
    case 9u: goto L_08A100B4;
    case 10u: goto L_08A100C8;
    case 11u: goto L_08A100D4;
    case 12u: goto L_08A100FC;
    case 13u: goto L_08A10108;
    case 14u: goto L_08A10130;
    case 15u: goto L_08A10150;
    case 16u: goto L_08A10160;
    case 17u: goto L_08A1016C;
    case 18u: goto L_08A101A0;
    case 19u: goto L_08A101BC;
    case 20u: goto L_08A101D4;
    case 21u: goto L_08A101DC;
    case 22u: goto L_08A101E8;
    case 23u: goto L_08A101F4;
    case 24u: goto L_08A101FC;
    case 25u: goto L_08A10214;
    case 26u: goto L_08A1022C;
    case 27u: goto L_08A10240;
    case 28u: goto L_08A10248;
    case 29u: goto L_08A10260;
    case 30u: goto L_08A10278;
    case 31u: goto L_08A10288;
    case 32u: goto L_08A10298;
    case 33u: goto L_08A102E0;
    case 34u: goto L_08A102F0;
    case 35u: goto L_08A10300;
    case 36u: goto L_08A10310;
    case 37u: goto L_08A10328;
    case 38u: goto L_08A10330;
    case 39u: goto L_08A1033C;
    case 40u: goto L_08A10348;
    case 41u: goto L_08A10350;
    case 42u: goto L_08A10368;
    case 43u: goto L_08A10380;
    case 44u: goto L_08A10394;
    case 45u: goto L_08A1039C;
    case 46u: goto L_08A103B4;
    case 47u: goto L_08A103CC;
    case 48u: goto L_08A103DC;
    case 49u: goto L_08A103EC;
    case 50u: goto L_08A10434;
    case 51u: goto L_08A10444;
    case 52u: goto L_08A10454;
    case 53u: goto L_08A10464;
    case 54u: goto L_08A1047C;
    case 55u: goto L_08A10490;
    case 56u: goto L_08A104A4;
    case 57u: goto L_08A104BC;
    case 58u: goto L_08A104C4;
    case 59u: goto L_08A104D0;
    case 60u: goto L_08A104DC;
    case 61u: goto L_08A104E4;
    case 62u: goto L_08A104FC;
    case 63u: goto L_08A10514;
    case 64u: goto L_08A10528;
    case 65u: goto L_08A10530;
    case 66u: goto L_08A10548;
    case 67u: goto L_08A10560;
    case 68u: goto L_08A1057C;
    case 69u: goto L_08A105A0;
    case 70u: goto L_08A105A8;
    case 71u: goto L_08A105B4;
    case 72u: goto L_08A105BC;
    case 73u: goto L_08A105D4;
    case 74u: goto L_08A105EC;
    case 75u: goto L_08A105FC;
    case 76u: goto L_08A1060C;
    case 77u: goto L_08A10668;
    case 78u: goto L_08A10678;
    case 79u: goto L_08A10688;
    case 80u: goto L_08A10698;
    case 81u: goto L_08A106C0;
    case 82u: goto L_08A106DC;
    case 83u: goto L_08A106EC;
    case 84u: goto L_08A106F8;
    case 85u: goto L_08A1070C;
    case 86u: goto L_08A10718;
    case 87u: goto L_08A10744;
    case 88u: goto L_08A10760;
    case 89u: goto L_08A10778;
    case 90u: goto L_08A10780;
    case 91u: goto L_08A1078C;
    case 92u: goto L_08A10798;
    case 93u: goto L_08A107A0;
    case 94u: goto L_08A107B8;
    case 95u: goto L_08A107D0;
    case 96u: goto L_08A107E4;
    case 97u: goto L_08A107EC;
    case 98u: goto L_08A10804;
    case 99u: goto L_08A10818;
    case 100u: goto L_08A1082C;
    case 101u: goto L_08A10848;
    case 102u: goto L_08A10860;
    case 103u: goto L_08A10870;
    case 104u: goto L_08A10880;
    case 105u: goto L_08A108D4;
    case 106u: goto L_08A108E4;
    case 107u: goto L_08A108F4;
    case 108u: goto L_08A10904;
    case 109u: goto L_08A1091C;
    case 110u: goto L_08A10930;
    case 111u: goto L_08A10938;
    case 112u: goto L_08A10950;
    case 113u: goto L_08A10968;
    case 114u: goto L_08A10988;
    case 115u: goto L_08A109AC;
    case 116u: goto L_08A109B4;
    case 117u: goto L_08A109C0;
    case 118u: goto L_08A109C8;
    case 119u: goto L_08A109D4;
    case 120u: goto L_08A109DC;
    case 121u: goto L_08A109F4;
    case 122u: goto L_08A10A0C;
    case 123u: goto L_08A10A1C;
    case 124u: goto L_08A10A2C;
    case 125u: goto L_08A10A88;
    case 126u: goto L_08A10A98;
    case 127u: goto L_08A10AA8;
    case 128u: goto L_08A10AB8;
    case 129u: goto L_08A10AE0;
    case 130u: goto L_08A10AFC;
    case 131u: goto L_08A10B0C;
    case 132u: goto L_08A10B18;
    case 133u: goto L_08A10B30;
    case 134u: goto L_08A10B4C;
    case 135u: goto L_08A10B5C;
    case 136u: goto L_08A10B7C;
    case 137u: goto L_08A10B8C;
    case 138u: goto L_08A10BA0;
    case 139u: goto L_08A10BB0;
    case 140u: goto L_08A10BC4;
    case 141u: goto L_08A10BD4;
    case 142u: goto L_08A10BE8;
    case 143u: goto L_08A10BF8;
    case 144u: goto L_08A10C18;
    case 145u: goto L_08A10C28;
    case 146u: goto L_08A10C38;
    case 147u: goto L_08A10C48;
    case 148u: goto L_08A10C54;
    case 149u: goto L_08A10C68;
    case 150u: goto L_08A10C74;
    case 151u: goto L_08A10CA0;
    case 152u: goto L_08A10CBC;
    case 153u: goto L_08A10CD4;
    case 154u: goto L_08A10CE8;
    case 155u: goto L_08A10CF0;
    case 156u: goto L_08A10D08;
    case 157u: goto L_08A10D20;
    case 158u: goto L_08A10DAC;
    case 159u: goto L_08A10DD0;
    case 160u: goto L_08A10DD8;
    case 161u: goto L_08A10DE4;
    case 162u: goto L_08A10DEC;
    case 163u: goto L_08A10DF8;
    case 164u: goto L_08A10E00;
    case 165u: goto L_08A10E0C;
    case 166u: goto L_08A10E14;
    case 167u: goto L_08A10E20;
    case 168u: goto L_08A10E28;
    case 169u: goto L_08A10E34;
    case 170u: goto L_08A10E3C;
    case 171u: goto L_08A10E48;
    case 172u: goto L_08A10E50;
    case 173u: goto L_08A10E5C;
    case 174u: goto L_08A10E64;
    case 175u: goto L_08A10E70;
    case 176u: goto L_08A10E78;
    case 177u: goto L_08A10E84;
    case 178u: goto L_08A10E8C;
    case 179u: goto L_08A10E98;
    case 180u: goto L_08A10EA0;
    case 181u: goto L_08A10EAC;
    case 182u: goto L_08A10EB4;
    case 183u: goto L_08A10EC0;
    case 184u: goto L_08A10EC8;
    case 185u: goto L_08A10ED4;
    case 186u: goto L_08A10EDC;
    case 187u: goto L_08A10EE8;
    case 188u: goto L_08A10EF0;
    case 189u: goto L_08A10EFC;
    case 190u: goto L_08A10F04;
    case 191u: goto L_08A10F10;
    case 192u: goto L_08A10F18;
    case 193u: goto L_08A10F24;
    case 194u: goto L_08A10F2C;
    case 195u: goto L_08A10F38;
    case 196u: goto L_08A10F40;
    case 197u: goto L_08A10F4C;
    case 198u: goto L_08A10F54;
    case 199u: goto L_08A10F60;
    case 200u: goto L_08A10F68;
    case 201u: goto L_08A10F74;
    case 202u: goto L_08A10F7C;
    case 203u: goto L_08A10F88;
    case 204u: goto L_08A10F90;
    case 205u: goto L_08A10F9C;
    case 206u: goto L_08A10FA4;
    case 207u: goto L_08A10FB0;
    case 208u: goto L_08A10FB8;
    case 209u: goto L_08A10FC4;
    case 210u: goto L_08A10FCC;
    case 211u: goto L_08A10FD8;
    case 212u: goto L_08A10FE0;
    case 213u: goto L_08A10FF8;
    case 214u: goto L_08A11008;
    case 215u: goto L_08A11020;
    case 216u: goto L_08A11038;
    case 217u: goto L_08A11048;
    case 218u: goto L_08A11058;
    case 219u: goto L_08A110B4;
    case 220u: goto L_08A110C4;
    case 221u: goto L_08A110D4;
    case 222u: goto L_08A110E4;
    case 223u: goto L_08A1110C;
    case 224u: goto L_08A11128;
    case 225u: goto L_08A11138;
    case 226u: goto L_08A11158;
    case 227u: goto L_08A11168;
    case 228u: goto L_08A11188;
    case 229u: goto L_08A11198;
    case 230u: goto L_08A111AC;
    case 231u: goto L_08A111BC;
    case 232u: goto L_08A111C8;
    case 233u: goto L_08A111E4;
    case 234u: goto L_08A111F0;
    case 235u: goto L_08A11204;
    case 236u: goto L_08A11214;
    case 237u: goto L_08A11224;
    case 238u: goto L_08A11234;
    case 239u: goto L_08A11244;
    case 240u: goto L_08A11254;
    case 241u: goto L_08A11264;
    case 242u: goto L_08A11278;
    case 243u: goto L_08A11288;
    case 244u: goto L_08A11294;
    case 245u: goto L_08A112B4;
    case 246u: goto L_08A112C0;
    case 247u: goto L_08A112E0;
    case 248u: goto L_08A112EC;
    case 249u: goto L_08A1130C;
    case 250u: goto L_08A11318;
    case 251u: goto L_08A11338;
    case 252u: goto L_08A11344;
    case 253u: goto L_08A11364;
    case 254u: goto L_08A11378;
    case 255u: goto L_08A1138C;
    case 256u: goto L_08A11398;
    case 257u: goto L_08A113B8;
    case 258u: goto L_08A113C4;
    case 259u: goto L_08A113DC;
    case 260u: goto L_08A113E8;
    case 261u: goto L_08A11408;
    case 262u: goto L_08A11418;
    case 263u: goto L_08A11428;
    case 264u: goto L_08A11438;
    case 265u: goto L_08A11448;
    case 266u: goto L_08A1145C;
    case 267u: goto L_08A1146C;
    case 268u: goto L_08A1148C;
    case 269u: goto L_08A1149C;
    case 270u: goto L_08A114A8;
    case 271u: goto L_08A114C8;
    case 272u: goto L_08A114D8;
    case 273u: goto L_08A114E8;
    case 274u: goto L_08A114F8;
    case 275u: goto L_08A11508;
    case 276u: goto L_08A11514;
    case 277u: goto L_08A11534;
    case 278u: goto L_08A11540;
    case 279u: goto L_08A11560;
    case 280u: goto L_08A1156C;
    case 281u: goto L_08A1158C;
    case 282u: goto L_08A11598;
    case 283u: goto L_08A115B8;
    case 284u: goto L_08A115C4;
    case 285u: goto L_08A115E4;
    case 286u: goto L_08A115F0;
    case 287u: goto L_08A11610;
    case 288u: goto L_08A1161C;
    case 289u: goto L_08A1163C;
    case 290u: goto L_08A11648;
    case 291u: goto L_08A11668;
    case 292u: goto L_08A11674;
    case 293u: goto L_08A11694;
    case 294u: goto L_08A116A0;
    case 295u: goto L_08A116C0;
    case 296u: goto L_08A116CC;
    case 297u: goto L_08A116EC;
    case 298u: goto L_08A116F8;
    case 299u: goto L_08A11718;
    case 300u: goto L_08A11724;
    case 301u: goto L_08A11738;
    case 302u: goto L_08A11744;
    case 303u: goto L_08A11764;
    case 304u: goto L_08A11778;
    case 305u: goto L_08A11788;
    case 306u: goto L_08A1179C;
    case 307u: goto L_08A117AC;
    case 308u: goto L_08A117C0;
    case 309u: goto L_08A117D0;
    case 310u: goto L_08A117E4;
    case 311u: goto L_08A117F4;
    case 312u: goto L_08A11800;
    case 313u: goto L_08A11820;
    case 314u: goto L_08A1182C;
    case 315u: goto L_08A1184C;
    case 316u: goto L_08A11860;
    case 317u: goto L_08A1188C;
    case 318u: goto L_08A118A8;
    case 319u: goto L_08A118C0;
    case 320u: goto L_08A118D4;
    case 321u: goto L_08A118DC;
    case 322u: goto L_08A118F4;
    case 323u: goto L_08A1190C;
    case 324u: goto L_08A1194C;
    case 325u: goto L_08A11970;
    case 326u: goto L_08A11978;
    case 327u: goto L_08A11984;
    case 328u: goto L_08A1198C;
    case 329u: goto L_08A11998;
    case 330u: goto L_08A119A0;
    case 331u: goto L_08A119AC;
    case 332u: goto L_08A119B4;
    case 333u: goto L_08A119C0;
    case 334u: goto L_08A119C8;
    case 335u: goto L_08A119D4;
    case 336u: goto L_08A119DC;
    case 337u: goto L_08A119E8;
    case 338u: goto L_08A119F0;
    case 339u: goto L_08A119FC;
    case 340u: goto L_08A11A04;
    case 341u: goto L_08A11A10;
    case 342u: goto L_08A11A18;
    case 343u: goto L_08A11A30;
    case 344u: goto L_08A11A40;
    case 345u: goto L_08A11A58;
    case 346u: goto L_08A11A70;
    case 347u: goto L_08A11A80;
    case 348u: goto L_08A11A90;
    case 349u: goto L_08A11AEC;
    case 350u: goto L_08A11AFC;
    case 351u: goto L_08A11B0C;
    case 352u: goto L_08A11B1C;
    case 353u: goto L_08A11B44;
    case 354u: goto L_08A11B60;
    case 355u: goto L_08A11B70;
    case 356u: goto L_08A11B7C;
    case 357u: goto L_08A11B98;
    case 358u: goto L_08A11BA4;
    case 359u: goto L_08A11BC0;
    case 360u: goto L_08A11BE4;
    case 361u: goto L_08A11BF4;
    case 362u: goto L_08A11C18;
    case 363u: goto L_08A11C28;
    case 364u: goto L_08A11C34;
    case 365u: goto L_08A11C54;
    case 366u: goto L_08A11C60;
    case 367u: goto L_08A11C80;
    case 368u: goto L_08A11C8C;
    case 369u: goto L_08A11CAC;
    case 370u: goto L_08A11CB8;
    case 371u: goto L_08A11CD0;
    case 372u: goto L_08A11CDC;
    case 373u: goto L_08A11CF4;
    case 374u: goto L_08A11D00;
    case 375u: goto L_08A11D20;
    case 376u: goto L_08A11D2C;
    case 377u: goto L_08A11D64;
    case 378u: goto L_08A11D80;
    case 379u: goto L_08A11D98;
    case 380u: goto L_08A11DAC;
    case 381u: goto L_08A11DB4;
    case 382u: goto L_08A11DCC;
    case 383u: goto L_08A11DE4;
    case 384u: goto L_08A11E04;
    case 385u: goto L_08A11E28;
    case 386u: goto L_08A11E30;
    case 387u: goto L_08A11E3C;
    case 388u: goto L_08A11E44;
    case 389u: goto L_08A11E50;
    case 390u: goto L_08A11E58;
    case 391u: goto L_08A11E70;
    case 392u: goto L_08A11E88;
    case 393u: goto L_08A11E98;
    case 394u: goto L_08A11EA8;
    case 395u: goto L_08A11F04;
    case 396u: goto L_08A11F14;
    case 397u: goto L_08A11F24;
    case 398u: goto L_08A11F34;
    case 399u: goto L_08A11F5C;
    case 400u: goto L_08A11F78;
    case 401u: goto L_08A11F88;
    case 402u: goto L_08A11F94;
    case 403u: goto L_08A11FAC;
    case 404u: goto L_08A11FB8;
    case 405u: goto L_08A11FD0;
    case 406u: goto L_08A11FF4;
    case 407u: goto L_08A12004;
    case 408u: goto L_08A12020;
    case 409u: goto L_08A12030;
    case 410u: goto L_08A12050;
    case 411u: goto L_08A12060;
    case 412u: goto L_08A12070;
    case 413u: goto L_08A12080;
    case 414u: goto L_08A1208C;
    case 415u: goto L_08A120B8;
    case 416u: goto L_08A120D4;
    case 417u: goto L_08A120EC;
    case 418u: goto L_08A12100;
    case 419u: goto L_08A12108;
    case 420u: goto L_08A12120;
    case 421u: goto L_08A12138;
    case 422u: goto L_08A12154;
    case 423u: goto L_08A12178;
    case 424u: goto L_08A12188;
    case 425u: goto L_08A121A0;
    case 426u: goto L_08A121B8;
    case 427u: goto L_08A121C8;
    case 428u: goto L_08A121D8;
    case 429u: goto L_08A12224;
    case 430u: goto L_08A12234;
    case 431u: goto L_08A12244;
    case 432u: goto L_08A12254;
    case 433u: goto L_08A1226C;
    case 434u: goto L_08A12280;
    case 435u: goto L_08A12288;
    case 436u: goto L_08A122A0;
    case 437u: goto L_08A122B8;
    case 438u: goto L_08A122E0;
    case 439u: goto L_08A12304;
    case 440u: goto L_08A1230C;
    case 441u: goto L_08A1231C;
    case 442u: goto L_08A12328;
    case 443u: goto L_08A12330;
    case 444u: goto L_08A12338;
    case 445u: goto L_08A12348;
    case 446u: goto L_08A12358;
    case 447u: goto L_08A12364;
    case 448u: goto L_08A1236C;
    case 449u: goto L_08A12374;
    case 450u: goto L_08A12384;
    case 451u: goto L_08A1239C;
    case 452u: goto L_08A123B8;
    case 453u: goto L_08A123D0;
    case 454u: goto L_08A123E8;
    case 455u: goto L_08A123F8;
    case 456u: goto L_08A12408;
    case 457u: goto L_08A12464;
    case 458u: goto L_08A12474;
    case 459u: goto L_08A12484;
    case 460u: goto L_08A12494;
    case 461u: goto L_08A124BC;
    case 462u: goto L_08A124D8;
    case 463u: goto L_08A124E8;
    case 464u: goto L_08A124F4;
    case 465u: goto L_08A12508;
    case 466u: goto L_08A12518;
    case 467u: goto L_08A12540;
    case 468u: goto L_08A1255C;
    case 469u: goto L_08A12574;
    case 470u: goto L_08A1257C;
    case 471u: goto L_08A12588;
    case 472u: goto L_08A12594;
    case 473u: goto L_08A1259C;
    case 474u: goto L_08A125B4;
    case 475u: goto L_08A125CC;
    case 476u: goto L_08A125E0;
    case 477u: goto L_08A125E8;
    case 478u: goto L_08A12600;
    case 479u: goto L_08A12618;
    case 480u: goto L_08A12638;
    case 481u: goto L_08A1265C;
    case 482u: goto L_08A12664;
    case 483u: goto L_08A12670;
    case 484u: goto L_08A12678;
    case 485u: goto L_08A12690;
    case 486u: goto L_08A126A8;
    case 487u: goto L_08A126C0;
    case 488u: goto L_08A126D0;
    case 489u: goto L_08A126E0;
    case 490u: goto L_08A1273C;
    case 491u: goto L_08A1274C;
    case 492u: goto L_08A1275C;
    case 493u: goto L_08A1276C;
    case 494u: goto L_08A12794;
    case 495u: goto L_08A127B0;
    case 496u: goto L_08A127C0;
    case 497u: goto L_08A127CC;
    case 498u: goto L_08A127E0;
    case 499u: goto L_08A127EC;
    case 500u: goto L_08A12820;
    case 501u: goto L_08A12834;
    case 502u: goto L_08A12860;
    case 503u: goto L_08A1287C;
    case 504u: goto L_08A12894;
    case 505u: goto L_08A128A8;
    case 506u: goto L_08A128BC;
    case 507u: goto L_08A128D4;
    case 508u: goto L_08A128DC;
    case 509u: goto L_08A128E8;
    case 510u: goto L_08A128F4;
    case 511u: goto L_08A128FC;
    case 512u: goto L_08A12914;
    case 513u: goto L_08A1292C;
    case 514u: goto L_08A12940;
    case 515u: goto L_08A12948;
    case 516u: goto L_08A12960;
    case 517u: goto L_08A12974;
    case 518u: goto L_08A12988;
    case 519u: goto L_08A129A4;
    case 520u: goto L_08A129BC;
    case 521u: goto L_08A129CC;
    case 522u: goto L_08A129DC;
    case 523u: goto L_08A12A30;
    case 524u: goto L_08A12A40;
    case 525u: goto L_08A12A50;
    case 526u: goto L_08A12A60;
    case 527u: goto L_08A12A78;
    case 528u: goto L_08A12A80;
    case 529u: goto L_08A12A8C;
    case 530u: goto L_08A12A98;
    case 531u: goto L_08A12AA0;
    case 532u: goto L_08A12AB8;
    case 533u: goto L_08A12AD0;
    case 534u: goto L_08A12AE4;
    case 535u: goto L_08A12AEC;
    case 536u: goto L_08A12B04;
    case 537u: goto L_08A12B18;
    case 538u: goto L_08A12B2C;
    case 539u: goto L_08A12B48;
    case 540u: goto L_08A12B60;
    case 541u: goto L_08A12B70;
    case 542u: goto L_08A12B80;
    case 543u: goto L_08A12BD4;
    case 544u: goto L_08A12BE4;
    case 545u: goto L_08A12BF4;
    case 546u: goto L_08A12C04;
    case 547u: goto L_08A12C1C;
    case 548u: goto L_08A12C24;
    case 549u: goto L_08A12C30;
    case 550u: goto L_08A12C3C;
    case 551u: goto L_08A12C44;
    case 552u: goto L_08A12C5C;
    case 553u: goto L_08A12C74;
    case 554u: goto L_08A12C88;
    case 555u: goto L_08A12C90;
    case 556u: goto L_08A12CA8;
    case 557u: goto L_08A12CBC;
    case 558u: goto L_08A12CD0;
    case 559u: goto L_08A12CEC;
    case 560u: goto L_08A12D04;
    case 561u: goto L_08A12D14;
    case 562u: goto L_08A12D24;
    case 563u: goto L_08A12D78;
    case 564u: goto L_08A12D88;
    case 565u: goto L_08A12D98;
    case 566u: goto L_08A12DA8;
    case 567u: goto L_08A12DC0;
    case 568u: goto L_08A12DD4;
    case 569u: goto L_08A12DDC;
    case 570u: goto L_08A12DF4;
    case 571u: goto L_08A12E08;
    case 572u: goto L_08A12E1C;
    case 573u: goto L_08A12E38;
    case 574u: goto L_08A12E50;
    case 575u: goto L_08A12E60;
    case 576u: goto L_08A12E70;
    case 577u: goto L_08A12EC4;
    case 578u: goto L_08A12ED4;
    case 579u: goto L_08A12EE4;
    case 580u: goto L_08A12EF4;
    case 581u: goto L_08A12F0C;
    case 582u: goto L_08A12F20;
    case 583u: goto L_08A12F28;
    case 584u: goto L_08A12F40;
    case 585u: goto L_08A12F54;
    case 586u: goto L_08A12F68;
    case 587u: goto L_08A12F84;
    case 588u: goto L_08A12F9C;
    case 589u: goto L_08A12FAC;
    case 590u: goto L_08A12FBC;
    case 591u: goto L_08A13010;
    case 592u: goto L_08A13020;
    case 593u: goto L_08A13030;
    case 594u: goto L_08A13040;
    case 595u: goto L_08A13058;
    case 596u: goto L_08A1306C;
    case 597u: goto L_08A13074;
    case 598u: goto L_08A1308C;
    case 599u: goto L_08A130A0;
    case 600u: goto L_08A130B4;
    case 601u: goto L_08A130D0;
    case 602u: goto L_08A130E8;
    case 603u: goto L_08A130F8;
    case 604u: goto L_08A13108;
    case 605u: goto L_08A1315C;
    case 606u: goto L_08A1316C;
    case 607u: goto L_08A1317C;
    case 608u: goto L_08A1318C;
    case 609u: goto L_08A131A4;
    case 610u: goto L_08A131B8;
    case 611u: goto L_08A131C0;
    case 612u: goto L_08A131D8;
    case 613u: goto L_08A131F0;
    case 614u: goto L_08A1321C;
    case 615u: goto L_08A13240;
    case 616u: goto L_08A13248;
    case 617u: goto L_08A13258;
    case 618u: goto L_08A13270;
    case 619u: goto L_08A13288;
    case 620u: goto L_08A13298;
    case 621u: goto L_08A132A8;
    case 622u: goto L_08A13304;
    case 623u: goto L_08A13314;
    case 624u: goto L_08A13324;
    case 625u: goto L_08A13334;
    case 626u: goto L_08A13344;
    case 627u: goto L_08A1336C;
    case 628u: goto L_08A13388;
    case 629u: goto L_08A13398;
    case 630u: goto L_08A133AC;
    case 631u: goto L_08A133C0;
    case 632u: goto L_08A133D4;
    case 633u: goto L_08A133E8;
    case 634u: goto L_08A133F4;
    case 635u: goto L_08A1342C;
    case 636u: goto L_08A13448;
    case 637u: goto L_08A13460;
    case 638u: goto L_08A13468;
    case 639u: goto L_08A13474;
    case 640u: goto L_08A13480;
    case 641u: goto L_08A13488;
    case 642u: goto L_08A134A0;
    case 643u: goto L_08A134B8;
    case 644u: goto L_08A134CC;
    case 645u: goto L_08A134D4;
    case 646u: goto L_08A134EC;
    case 647u: goto L_08A13504;
    case 648u: goto L_08A13530;
    case 649u: goto L_08A13554;
    case 650u: goto L_08A1355C;
    case 651u: goto L_08A13568;
    case 652u: goto L_08A13570;
    case 653u: goto L_08A1357C;
    case 654u: goto L_08A13584;
    case 655u: goto L_08A13590;
    case 656u: goto L_08A13598;
    case 657u: goto L_08A135A4;
    case 658u: goto L_08A135AC;
    case 659u: goto L_08A135B8;
    case 660u: goto L_08A135C0;
    case 661u: goto L_08A135D8;
    case 662u: goto L_08A135F0;
    case 663u: goto L_08A13600;
    case 664u: goto L_08A13610;
    case 665u: goto L_08A1366C;
    case 666u: goto L_08A1367C;
    case 667u: goto L_08A1368C;
    case 668u: goto L_08A1369C;
    case 669u: goto L_08A136C4;
    case 670u: goto L_08A136E0;
    case 671u: goto L_08A136F0;
    case 672u: goto L_08A136FC;
    case 673u: goto L_08A13718;
    case 674u: goto L_08A13724;
    case 675u: goto L_08A13740;
    case 676u: goto L_08A1374C;
    case 677u: goto L_08A13768;
    case 678u: goto L_08A13774;
    case 679u: goto L_08A13790;
    case 680u: goto L_08A1379C;
    case 681u: goto L_08A137B8;
    case 682u: goto L_08A137C4;
    case 683u: goto L_08A137E0;
    case 684u: goto L_08A137EC;
    case 685u: goto L_08A1381C;
    case 686u: goto L_08A13838;
    case 687u: goto L_08A13850;
    case 688u: goto L_08A13864;
    case 689u: goto L_08A1386C;
    case 690u: goto L_08A13884;
    case 691u: goto L_08A13898;
    case 692u: goto L_08A138AC;
    case 693u: goto L_08A138C8;
    case 694u: goto L_08A138E0;
    case 695u: goto L_08A138F0;
    case 696u: goto L_08A13900;
    case 697u: goto L_08A13954;
    case 698u: goto L_08A13964;
    case 699u: goto L_08A13974;
    case 700u: goto L_08A13984;
    case 701u: goto L_08A1399C;
    case 702u: goto L_08A139A4;
    case 703u: goto L_08A139B0;
    case 704u: goto L_08A139BC;
    case 705u: goto L_08A139C4;
    case 706u: goto L_08A139DC;
    case 707u: goto L_08A139F4;
    case 708u: goto L_08A13A08;
    case 709u: goto L_08A13A10;
    case 710u: goto L_08A13A28;
    case 711u: goto L_08A13A3C;
    case 712u: goto L_08A13A50;
    case 713u: goto L_08A13A6C;
    case 714u: goto L_08A13A84;
    case 715u: goto L_08A13A94;
    case 716u: goto L_08A13AA4;
    case 717u: goto L_08A13B00;
    case 718u: goto L_08A13B10;
    case 719u: goto L_08A13B20;
    case 720u: goto L_08A13B30;
    case 721u: goto L_08A13B58;
    case 722u: goto L_08A13B74;
    case 723u: goto L_08A13B84;
    case 724u: goto L_08A13B90;
    case 725u: goto L_08A13BB0;
    case 726u: goto L_08A13BBC;
    case 727u: goto L_08A13BDC;
    case 728u: goto L_08A13BE8;
    case 729u: goto L_08A13C18;
    case 730u: goto L_08A13C34;
    case 731u: goto L_08A13C4C;
    case 732u: goto L_08A13C54;
    case 733u: goto L_08A13C60;
    case 734u: goto L_08A13C6C;
    case 735u: goto L_08A13C74;
    case 736u: goto L_08A13C8C;
    case 737u: goto L_08A13CA4;
    case 738u: goto L_08A13CB8;
    case 739u: goto L_08A13CC0;
    case 740u: goto L_08A13CD8;
    case 741u: goto L_08A13CEC;
    case 742u: goto L_08A13D00;
    case 743u: goto L_08A13D1C;
    case 744u: goto L_08A13D34;
    case 745u: goto L_08A13D44;
    case 746u: goto L_08A13D54;
    case 747u: goto L_08A13DA8;
    case 748u: goto L_08A13DB8;
    case 749u: goto L_08A13DC8;
    case 750u: goto L_08A13DD8;
    case 751u: goto L_08A13DF0;
    case 752u: goto L_08A13E04;
    case 753u: goto L_08A13E0C;
    case 754u: goto L_08A13E24;
    case 755u: goto L_08A13E3C;
    case 756u: goto L_08A13E54;
    case 757u: goto L_08A13E78;
    case 758u: goto L_08A13E80;
    case 759u: goto L_08A13E98;
    case 760u: goto L_08A13EB0;
    case 761u: goto L_08A13EC0;
    case 762u: goto L_08A13ED0;
    case 763u: goto L_08A13F2C;
    case 764u: goto L_08A13F3C;
    case 765u: goto L_08A13F4C;
    case 766u: goto L_08A13F5C;
    case 767u: goto L_08A13F6C;
    case 768u: goto L_08A13F94;
    case 769u: goto L_08A13FB0;
    case 770u: goto L_08A13FC0;
    case 771u: goto L_08A13FCC;
    case 772u: goto L_08A13FEC;
    case 773u: goto L_08A13FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A10000:
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-2052));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-332));
    ctx.set_gpr(31, 0x08A10024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A10024u) goto L_08A10024;
    return;
L_08A10024:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10034:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A10044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 763u, 0x08A0FE68u>(ctx, &aot_mem) && ctx.pc == 0x08A10044u) goto L_08A10044;
    return;
L_08A10044:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10054:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25500)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1007Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A1007Cu) goto L_08A1007C;
    return;
L_08A1007C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2040));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x08A10098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A10098u) goto L_08A10098;
    return;
L_08A10098:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A100A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A100A8u) goto L_08A100A8;
    return;
L_08A100A8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A100B4u);
    // nop
    goto L_08A1255C;
L_08A100B4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A100C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A100C8u) goto L_08A100C8;
    return;
L_08A100C8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A100D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 390u, 0x088C236Cu>(ctx, &aot_mem) && ctx.pc == 0x08A100D4u) goto L_08A100D4;
    return;
L_08A100D4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A100FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A100FCu) goto L_08A100FC;
    return;
L_08A100FC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A10108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 398u, 0x08A1A35Cu>(ctx, &aot_mem) && ctx.pc == 0x08A10108u) goto L_08A10108;
    return;
L_08A10108:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A10130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A10130u) goto L_08A10130;
    return;
L_08A10130:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08A10150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 223u, 0x089FD39Cu>(ctx, &aot_mem) && ctx.pc == 0x08A10150u) goto L_08A10150;
    return;
L_08A10150:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A10160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A10160u) goto L_08A10160;
    return;
L_08A10160:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1016Cu);
    // nop
    goto L_08A128BC;
L_08A1016C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1928));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1900));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-1872));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A101A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A101A0u) goto L_08A101A0;
    return;
L_08A101A0:
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
L_08A101BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25468)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A101FC;
      }
      goto L_08A101D4;
    }
L_08A101D4:
    ctx.set_gpr(31, 0x08A101DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A101DCu) goto L_08A101DC;
    return;
L_08A101DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A101E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A101E8u) goto L_08A101E8;
    return;
L_08A101E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A101F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A101F4u) goto L_08A101F4;
    return;
L_08A101F4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25468), ctx.gpr[2]);
    goto L_08A101FC;
L_08A101FC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25468)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10214:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25468)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10240;
      }
      goto L_08A1022C;
    }
L_08A1022C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A10248;
      }
      goto L_08A10240;
    }
L_08A10240:
    ctx.set_gpr(31, 0x08A10248u);
    // nop
    goto L_08A10260;
L_08A10248:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25468)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10260:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(648));
    ctx.set_gpr(31, 0x08A10278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A10278u) goto L_08A10278;
    return;
L_08A10278:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10288:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A10298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A10298u) goto L_08A10298;
    return;
L_08A10298:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25468));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(752));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-1844));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08A102E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A102E0u) goto L_08A102E0;
    return;
L_08A102E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A102F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A10300u);
    // nop
    goto L_08A10214;
L_08A10300:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10310:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25464)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A10350;
      }
      goto L_08A10328;
    }
L_08A10328:
    ctx.set_gpr(31, 0x08A10330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A10330u) goto L_08A10330;
    return;
L_08A10330:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A1033Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A1033Cu) goto L_08A1033C;
    return;
L_08A1033C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A10348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A10348u) goto L_08A10348;
    return;
L_08A10348:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25464), ctx.gpr[2]);
    goto L_08A10350;
L_08A10350:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25464)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10368:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25464)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10394;
      }
      goto L_08A10380;
    }
L_08A10380:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1039C;
      }
      goto L_08A10394;
    }
L_08A10394:
    ctx.set_gpr(31, 0x08A1039Cu);
    // nop
    goto L_08A103B4;
L_08A1039C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25464)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A103B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(988));
    ctx.set_gpr(31, 0x08A103CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A103CCu) goto L_08A103CC;
    return;
L_08A103CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A103DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A103ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A103ECu) goto L_08A103EC;
    return;
L_08A103EC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25464));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1092));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-1828));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08A10434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A10434u) goto L_08A10434;
    return;
L_08A10434:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10444:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A10454u);
    // nop
    goto L_08A10368;
L_08A10454:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10464:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A1047Cu);
    // nop
    goto L_08A105D4;
L_08A1047C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25460)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A10490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08A10490u) goto L_08A10490;
    return;
L_08A10490:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A104A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25460)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A104E4;
      }
      goto L_08A104BC;
    }
L_08A104BC:
    ctx.set_gpr(31, 0x08A104C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A104C4u) goto L_08A104C4;
    return;
L_08A104C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A104D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A104D0u) goto L_08A104D0;
    return;
L_08A104D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A104DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A104DCu) goto L_08A104DC;
    return;
L_08A104DC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25460), ctx.gpr[2]);
    goto L_08A104E4;
L_08A104E4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25460)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A104FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25460)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10528;
      }
      goto L_08A10514;
    }
L_08A10514:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A10530;
      }
      goto L_08A10528;
    }
L_08A10528:
    ctx.set_gpr(31, 0x08A10530u);
    // nop
    goto L_08A105D4;
L_08A10530:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25460)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10548:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A10560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A10560u) goto L_08A10560;
    return;
L_08A10560:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4296));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(31, 0x08A1057Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A1057Cu) goto L_08A1057C;
    return;
L_08A1057C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4296));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A105A8;
      }
      goto L_08A105A0;
    }
L_08A105A0:
    ctx.set_gpr(31, 0x08A105A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A105A8u) goto L_08A105A8;
    return;
L_08A105A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A105BC;
      }
      goto L_08A105B4;
    }
L_08A105B4:
    ctx.set_gpr(31, 0x08A105BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A105BCu) goto L_08A105BC;
    return;
L_08A105BC:
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
L_08A105D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1532));
    ctx.set_gpr(31, 0x08A105ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A105ECu) goto L_08A105EC;
    return;
L_08A105EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A105FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1060Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A1060Cu) goto L_08A1060C;
    return;
L_08A1060C:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1688));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1812));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25460));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1656));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-1800));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1352));
    ctx.set_gpr(31, 0x08A10668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A10668u) goto L_08A10668;
    return;
L_08A10668:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10678:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A10688u);
    // nop
    goto L_08A104FC;
L_08A10688:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10698:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25460)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A106C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A106C0u) goto L_08A106C0;
    return;
L_08A106C0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1788));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A106DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A106DCu) goto L_08A106DC;
    return;
L_08A106DC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A106ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A106ECu) goto L_08A106EC;
    return;
L_08A106EC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A106F8u);
    // nop
    goto L_08A10310;
L_08A106F8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1070Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1070Cu) goto L_08A1070C;
    return;
L_08A1070C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A10718u);
    // nop
    goto L_08A101BC;
L_08A10718:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1772));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1764));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-1756));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A10744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A10744u) goto L_08A10744;
    return;
L_08A10744:
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
L_08A10760:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25448)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A107A0;
      }
      goto L_08A10778;
    }
L_08A10778:
    ctx.set_gpr(31, 0x08A10780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A10780u) goto L_08A10780;
    return;
L_08A10780:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A1078Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A1078Cu) goto L_08A1078C;
    return;
L_08A1078C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A10798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A10798u) goto L_08A10798;
    return;
L_08A10798:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25448), ctx.gpr[2]);
    goto L_08A107A0;
L_08A107A0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25448)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A107B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25448)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A107E4;
      }
      goto L_08A107D0;
    }
L_08A107D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A107EC;
      }
      goto L_08A107E4;
    }
L_08A107E4:
    ctx.set_gpr(31, 0x08A107ECu);
    // nop
    goto L_08A10848;
L_08A107EC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25448)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10804:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A10818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A10818u) goto L_08A10818;
    return;
L_08A10818:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4400));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A1082Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A1082Cu) goto L_08A1082C;
    return;
L_08A1082C:
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
L_08A10848:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2160));
    ctx.set_gpr(31, 0x08A10860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A10860u) goto L_08A10860;
    return;
L_08A10860:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10870:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A10880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A10880u) goto L_08A10880;
    return;
L_08A10880:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1748));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25448));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2276));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-1740));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(2052));
    ctx.set_gpr(31, 0x08A108D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A108D4u) goto L_08A108D4;
    return;
L_08A108D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A108E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A108F4u);
    // nop
    goto L_08A107B8;
L_08A108F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10904:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25444)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10930;
      }
      goto L_08A1091C;
    }
L_08A1091C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A10938;
      }
      goto L_08A10930;
    }
L_08A10930:
    ctx.set_gpr(31, 0x08A10938u);
    // nop
    goto L_08A109F4;
L_08A10938:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25444)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10950:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A10968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A10968u) goto L_08A10968;
    return;
L_08A10968:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19232));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    ctx.set_gpr(31, 0x08A10988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A10988u) goto L_08A10988;
    return;
L_08A10988:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19232));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A109B4;
      }
      goto L_08A109AC;
    }
L_08A109AC:
    ctx.set_gpr(31, 0x08A109B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A109B4u) goto L_08A109B4;
    return;
L_08A109B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A109C8;
      }
      goto L_08A109C0;
    }
L_08A109C0:
    ctx.set_gpr(31, 0x08A109C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A109C8u) goto L_08A109C8;
    return;
L_08A109C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A109DC;
      }
      goto L_08A109D4;
    }
L_08A109D4:
    ctx.set_gpr(31, 0x08A109DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A109DCu) goto L_08A109DC;
    return;
L_08A109DC:
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
L_08A109F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2588));
    ctx.set_gpr(31, 0x08A10A0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A10A0Cu) goto L_08A10A0C;
    return;
L_08A10A0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10A1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A10A2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A10A2Cu) goto L_08A10A2C;
    return;
L_08A10A2C:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2744));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1724));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25444));
    ctx.set_gpr(6, 2209u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14180));
    ctx.set_gpr(7, 2209u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27884));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2712));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-1708));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(72));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(2384));
    ctx.set_gpr(31, 0x08A10A88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A10A88u) goto L_08A10A88;
    return;
L_08A10A88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10A98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A10AA8u);
    // nop
    goto L_08A10904;
L_08A10AA8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10AB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25444)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A10AE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A10AE0u) goto L_08A10AE0;
    return;
L_08A10AE0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1676));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x08A10AFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A10AFCu) goto L_08A10AFC;
    return;
L_08A10AFC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A10B0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A10B0Cu) goto L_08A10B0C;
    return;
L_08A10B0C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A10B18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 99u, 0x088B0944u>(ctx, &aot_mem) && ctx.pc == 0x08A10B18u) goto L_08A10B18;
    return;
L_08A10B18:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A10B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A10B30u) goto L_08A10B30;
    return;
L_08A10B30:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A10B4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 223u, 0x089FD39Cu>(ctx, &aot_mem) && ctx.pc == 0x08A10B4Cu) goto L_08A10B4C;
    return;
L_08A10B4C:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A10B5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A10B5Cu) goto L_08A10B5C;
    return;
L_08A10B5C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08A10B7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 223u, 0x089FD39Cu>(ctx, &aot_mem) && ctx.pc == 0x08A10B7Cu) goto L_08A10B7C;
    return;
L_08A10B7C:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A10B8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A10B8Cu) goto L_08A10B8C;
    return;
L_08A10B8C:
    ctx.set_gpr(3, 16948u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A10BA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A10BA0u) goto L_08A10BA0;
    return;
L_08A10BA0:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A10BB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A10BB0u) goto L_08A10BB0;
    return;
L_08A10BB0:
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A10BC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A10BC4u) goto L_08A10BC4;
    return;
L_08A10BC4:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A10BD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A10BD4u) goto L_08A10BD4;
    return;
L_08A10BD4:
    ctx.set_gpr(3, 17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A10BE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A10BE8u) goto L_08A10BE8;
    return;
L_08A10BE8:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A10BF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A10BF8u) goto L_08A10BF8;
    return;
L_08A10BF8:
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A10C18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 223u, 0x089FD39Cu>(ctx, &aot_mem) && ctx.pc == 0x08A10C18u) goto L_08A10C18;
    return;
L_08A10C18:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A10C28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A10C28u) goto L_08A10C28;
    return;
L_08A10C28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A10C38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A10C38u) goto L_08A10C38;
    return;
L_08A10C38:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A10C48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A10C48u) goto L_08A10C48;
    return;
L_08A10C48:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A10C54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 10u, 0x088BC0E0u>(ctx, &aot_mem) && ctx.pc == 0x08A10C54u) goto L_08A10C54;
    return;
L_08A10C54:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A10C68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A10C68u) goto L_08A10C68;
    return;
L_08A10C68:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A10C74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 412u, 0x088B2640u>(ctx, &aot_mem) && ctx.pc == 0x08A10C74u) goto L_08A10C74;
    return;
L_08A10C74:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1568));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1528));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-1488));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A10CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A10CA0u) goto L_08A10CA0;
    return;
L_08A10CA0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10CBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25400)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10CE8;
      }
      goto L_08A10CD4;
    }
L_08A10CD4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A10CF0;
      }
      goto L_08A10CE8;
    }
L_08A10CE8:
    ctx.set_gpr(31, 0x08A10CF0u);
    // nop
    goto L_08A11020;
L_08A10CF0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25400)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A10D08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A10D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 80u, 0x0899872Cu>(ctx, &aot_mem) && ctx.pc == 0x08A10D20u) goto L_08A10D20;
    return;
L_08A10D20:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19124));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), 0u);
    ctx.set_gpr(31, 0x08A10DACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A10DACu) goto L_08A10DAC;
    return;
L_08A10DAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19124));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10DD8;
      }
      goto L_08A10DD0;
    }
L_08A10DD0:
    ctx.set_gpr(31, 0x08A10DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A10DD8u) goto L_08A10DD8;
    return;
L_08A10DD8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10DEC;
      }
      goto L_08A10DE4;
    }
L_08A10DE4:
    ctx.set_gpr(31, 0x08A10DECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A10DECu) goto L_08A10DEC;
    return;
L_08A10DEC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10E00;
      }
      goto L_08A10DF8;
    }
L_08A10DF8:
    ctx.set_gpr(31, 0x08A10E00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A10E00u) goto L_08A10E00;
    return;
L_08A10E00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10E14;
      }
      goto L_08A10E0C;
    }
L_08A10E0C:
    ctx.set_gpr(31, 0x08A10E14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A10E14u) goto L_08A10E14;
    return;
L_08A10E14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10E28;
      }
      goto L_08A10E20;
    }
L_08A10E20:
    ctx.set_gpr(31, 0x08A10E28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A10E28u) goto L_08A10E28;
    return;
L_08A10E28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10E3C;
      }
      goto L_08A10E34;
    }
L_08A10E34:
    ctx.set_gpr(31, 0x08A10E3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A10E3Cu) goto L_08A10E3C;
    return;
L_08A10E3C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10E50;
      }
      goto L_08A10E48;
    }
L_08A10E48:
    ctx.set_gpr(31, 0x08A10E50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A10E50u) goto L_08A10E50;
    return;
L_08A10E50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10E64;
      }
      goto L_08A10E5C;
    }
L_08A10E5C:
    ctx.set_gpr(31, 0x08A10E64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A10E64u) goto L_08A10E64;
    return;
L_08A10E64:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10E78;
      }
      goto L_08A10E70;
    }
L_08A10E70:
    ctx.set_gpr(31, 0x08A10E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A10E78u) goto L_08A10E78;
    return;
L_08A10E78:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10E8C;
      }
      goto L_08A10E84;
    }
L_08A10E84:
    ctx.set_gpr(31, 0x08A10E8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A10E8Cu) goto L_08A10E8C;
    return;
L_08A10E8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10EA0;
      }
      goto L_08A10E98;
    }
L_08A10E98:
    ctx.set_gpr(31, 0x08A10EA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A10EA0u) goto L_08A10EA0;
    return;
L_08A10EA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10EB4;
      }
      goto L_08A10EAC;
    }
L_08A10EAC:
    ctx.set_gpr(31, 0x08A10EB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A10EB4u) goto L_08A10EB4;
    return;
L_08A10EB4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10EC8;
      }
      goto L_08A10EC0;
    }
L_08A10EC0:
    ctx.set_gpr(31, 0x08A10EC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A10EC8u) goto L_08A10EC8;
    return;
L_08A10EC8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10EDC;
      }
      goto L_08A10ED4;
    }
L_08A10ED4:
    ctx.set_gpr(31, 0x08A10EDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A10EDCu) goto L_08A10EDC;
    return;
L_08A10EDC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10EF0;
      }
      goto L_08A10EE8;
    }
L_08A10EE8:
    ctx.set_gpr(31, 0x08A10EF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A10EF0u) goto L_08A10EF0;
    return;
L_08A10EF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10F04;
      }
      goto L_08A10EFC;
    }
L_08A10EFC:
    ctx.set_gpr(31, 0x08A10F04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A10F04u) goto L_08A10F04;
    return;
L_08A10F04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10F18;
      }
      goto L_08A10F10;
    }
L_08A10F10:
    ctx.set_gpr(31, 0x08A10F18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A10F18u) goto L_08A10F18;
    return;
L_08A10F18:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10F2C;
      }
      goto L_08A10F24;
    }
L_08A10F24:
    ctx.set_gpr(31, 0x08A10F2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A10F2Cu) goto L_08A10F2C;
    return;
L_08A10F2C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10F40;
      }
      goto L_08A10F38;
    }
L_08A10F38:
    ctx.set_gpr(31, 0x08A10F40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A10F40u) goto L_08A10F40;
    return;
L_08A10F40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10F54;
      }
      goto L_08A10F4C;
    }
L_08A10F4C:
    ctx.set_gpr(31, 0x08A10F54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A10F54u) goto L_08A10F54;
    return;
L_08A10F54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10F68;
      }
      goto L_08A10F60;
    }
L_08A10F60:
    ctx.set_gpr(31, 0x08A10F68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A10F68u) goto L_08A10F68;
    return;
L_08A10F68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10F7C;
      }
      goto L_08A10F74;
    }
L_08A10F74:
    ctx.set_gpr(31, 0x08A10F7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A10F7Cu) goto L_08A10F7C;
    return;
L_08A10F7C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10F90;
      }
      goto L_08A10F88;
    }
L_08A10F88:
    ctx.set_gpr(31, 0x08A10F90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A10F90u) goto L_08A10F90;
    return;
L_08A10F90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10FA4;
      }
      goto L_08A10F9C;
    }
L_08A10F9C:
    ctx.set_gpr(31, 0x08A10FA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A10FA4u) goto L_08A10FA4;
    return;
L_08A10FA4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10FB8;
      }
      goto L_08A10FB0;
    }
L_08A10FB0:
    ctx.set_gpr(31, 0x08A10FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A10FB8u) goto L_08A10FB8;
    return;
L_08A10FB8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10FCC;
      }
      goto L_08A10FC4;
    }
L_08A10FC4:
    ctx.set_gpr(31, 0x08A10FCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A10FCCu) goto L_08A10FCC;
    return;
L_08A10FCC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A10FE0;
      }
      goto L_08A10FD8;
    }
L_08A10FD8:
    ctx.set_gpr(31, 0x08A10FE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A10FE0u) goto L_08A10FE0;
    return;
L_08A10FE0:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08A10FF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A10FF8u) goto L_08A10FF8;
    return;
L_08A10FF8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A11008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 295u, 0x089F25BCu>(ctx, &aot_mem) && ctx.pc == 0x08A11008u) goto L_08A11008;
    return;
L_08A11008:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A11020:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4168));
    ctx.set_gpr(31, 0x08A11038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A11038u) goto L_08A11038;
    return;
L_08A11038:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A11048:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A11058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A11058u) goto L_08A11058;
    return;
L_08A11058:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4324));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1448));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25400));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24720));
    ctx.set_gpr(7, 2181u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-26096));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4292));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-1376));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(240));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(3336));
    ctx.set_gpr(31, 0x08A110B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A110B4u) goto L_08A110B4;
    return;
L_08A110B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A110C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A110D4u);
    // nop
    goto L_08A10CBC;
L_08A110D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A110E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25400)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1110Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A1110Cu) goto L_08A1110C;
    return;
L_08A1110C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1348));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A11128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A11128u) goto L_08A11128;
    return;
L_08A11128:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A11138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11138u) goto L_08A11138;
    return;
L_08A11138:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(3, 16512u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A11158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 223u, 0x089FD39Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11158u) goto L_08A11158;
    return;
L_08A11158:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11168u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11168u) goto L_08A11168;
    return;
L_08A11168:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(3, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08A11188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 223u, 0x089FD39Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11188u) goto L_08A11188;
    return;
L_08A11188:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11198u) goto L_08A11198;
    return;
L_08A11198:
    ctx.set_gpr(3, 16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A111ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A111ACu) goto L_08A111AC;
    return;
L_08A111AC:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A111BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A111BCu) goto L_08A111BC;
    return;
L_08A111BC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A111C8u);
    // nop
    goto L_08A128BC;
L_08A111C8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A111E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A111E4u) goto L_08A111E4;
    return;
L_08A111E4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A111F0u);
    // nop
    goto L_08A128BC;
L_08A111F0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11204u) goto L_08A11204;
    return;
L_08A11204:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32496)));
    ctx.set_gpr(31, 0x08A11214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A11214u) goto L_08A11214;
    return;
L_08A11214:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11224u) goto L_08A11224;
    return;
L_08A11224:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x08A11234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08A11234u) goto L_08A11234;
    return;
L_08A11234:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11244u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11244u) goto L_08A11244;
    return;
L_08A11244:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x08A11254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08A11254u) goto L_08A11254;
    return;
L_08A11254:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11264u) goto L_08A11264;
    return;
L_08A11264:
    ctx.set_gpr(3, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A11278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A11278u) goto L_08A11278;
    return;
L_08A11278:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11288u) goto L_08A11288;
    return;
L_08A11288:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A11294u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 560u, 0x088C3190u>(ctx, &aot_mem) && ctx.pc == 0x08A11294u) goto L_08A11294;
    return;
L_08A11294:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A112B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A112B4u) goto L_08A112B4;
    return;
L_08A112B4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A112C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 358u, 0x088BA0A0u>(ctx, &aot_mem) && ctx.pc == 0x08A112C0u) goto L_08A112C0;
    return;
L_08A112C0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A112E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A112E0u) goto L_08A112E0;
    return;
L_08A112E0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A112ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 495u, 0x088B6F18u>(ctx, &aot_mem) && ctx.pc == 0x08A112ECu) goto L_08A112EC;
    return;
L_08A112EC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1130Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1130Cu) goto L_08A1130C;
    return;
L_08A1130C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A11318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 358u, 0x088BA0A0u>(ctx, &aot_mem) && ctx.pc == 0x08A11318u) goto L_08A11318;
    return;
L_08A11318:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(13));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11338u) goto L_08A11338;
    return;
L_08A11338:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A11344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 495u, 0x088B6F18u>(ctx, &aot_mem) && ctx.pc == 0x08A11344u) goto L_08A11344;
    return;
L_08A11344:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(14));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11364u) goto L_08A11364;
    return;
L_08A11364:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A11378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08A11378u) goto L_08A11378;
    return;
L_08A11378:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(15));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1138Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1138Cu) goto L_08A1138C;
    return;
L_08A1138C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A11398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 421u, 0x08A1A540u>(ctx, &aot_mem) && ctx.pc == 0x08A11398u) goto L_08A11398;
    return;
L_08A11398:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A113B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A113B8u) goto L_08A113B8;
    return;
L_08A113B8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A113C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 269u, 0x088BD824u>(ctx, &aot_mem) && ctx.pc == 0x08A113C4u) goto L_08A113C4;
    return;
L_08A113C4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(17));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A113DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A113DCu) goto L_08A113DC;
    return;
L_08A113DC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A113E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 68u, 0x088C0624u>(ctx, &aot_mem) && ctx.pc == 0x08A113E8u) goto L_08A113E8;
    return;
L_08A113E8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(18));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11408u) goto L_08A11408;
    return;
L_08A11408:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A11418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A11418u) goto L_08A11418;
    return;
L_08A11418:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(19));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11428u) goto L_08A11428;
    return;
L_08A11428:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32240)));
    ctx.set_gpr(31, 0x08A11438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A11438u) goto L_08A11438;
    return;
L_08A11438:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11448u) goto L_08A11448;
    return;
L_08A11448:
    ctx.set_gpr(3, 17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1145Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A1145Cu) goto L_08A1145C;
    return;
L_08A1145C:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(21));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1146Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1146Cu) goto L_08A1146C;
    return;
L_08A1146C:
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A1148Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 223u, 0x089FD39Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1148Cu) goto L_08A1148C;
    return;
L_08A1148C:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(22));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1149Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1149Cu) goto L_08A1149C;
    return;
L_08A1149C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A114A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 99u, 0x088B0944u>(ctx, &aot_mem) && ctx.pc == 0x08A114A8u) goto L_08A114A8;
    return;
L_08A114A8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(23));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A114C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A114C8u) goto L_08A114C8;
    return;
L_08A114C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A114D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A114D8u) goto L_08A114D8;
    return;
L_08A114D8:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A114E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A114E8u) goto L_08A114E8;
    return;
L_08A114E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A114F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A114F8u) goto L_08A114F8;
    return;
L_08A114F8:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(25));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11508u) goto L_08A11508;
    return;
L_08A11508:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A11514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 406u, 0x088B66F4u>(ctx, &aot_mem) && ctx.pc == 0x08A11514u) goto L_08A11514;
    return;
L_08A11514:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(26));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11534u) goto L_08A11534;
    return;
L_08A11534:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A11540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 270u, 0x088B5A64u>(ctx, &aot_mem) && ctx.pc == 0x08A11540u) goto L_08A11540;
    return;
L_08A11540:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(27));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11560u) goto L_08A11560;
    return;
L_08A11560:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1156Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 412u, 0x088B2640u>(ctx, &aot_mem) && ctx.pc == 0x08A1156Cu) goto L_08A1156C;
    return;
L_08A1156C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1158Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1158Cu) goto L_08A1158C;
    return;
L_08A1158C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A11598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 358u, 0x088B2194u>(ctx, &aot_mem) && ctx.pc == 0x08A11598u) goto L_08A11598;
    return;
L_08A11598:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(29));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A115B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A115B8u) goto L_08A115B8;
    return;
L_08A115B8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A115C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 406u, 0x088B66F4u>(ctx, &aot_mem) && ctx.pc == 0x08A115C4u) goto L_08A115C4;
    return;
L_08A115C4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(30));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A115E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A115E4u) goto L_08A115E4;
    return;
L_08A115E4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A115F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 270u, 0x088B5A64u>(ctx, &aot_mem) && ctx.pc == 0x08A115F0u) goto L_08A115F0;
    return;
L_08A115F0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(31));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11610u) goto L_08A11610;
    return;
L_08A11610:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1161Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 412u, 0x088B2640u>(ctx, &aot_mem) && ctx.pc == 0x08A1161Cu) goto L_08A1161C;
    return;
L_08A1161C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1163Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1163Cu) goto L_08A1163C;
    return;
L_08A1163C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A11648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 358u, 0x088B2194u>(ctx, &aot_mem) && ctx.pc == 0x08A11648u) goto L_08A11648;
    return;
L_08A11648:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(33));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11668u) goto L_08A11668;
    return;
L_08A11668:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A11674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 677u, 0x088BFE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11674u) goto L_08A11674;
    return;
L_08A11674:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(34));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11694u) goto L_08A11694;
    return;
L_08A11694:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A116A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 260u, 0x089957D0u>(ctx, &aot_mem) && ctx.pc == 0x08A116A0u) goto L_08A116A0;
    return;
L_08A116A0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(35));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A116C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A116C0u) goto L_08A116C0;
    return;
L_08A116C0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A116CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 636u, 0x088AE1CCu>(ctx, &aot_mem) && ctx.pc == 0x08A116CCu) goto L_08A116CC;
    return;
L_08A116CC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A116ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A116ECu) goto L_08A116EC;
    return;
L_08A116EC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A116F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 636u, 0x088AE1CCu>(ctx, &aot_mem) && ctx.pc == 0x08A116F8u) goto L_08A116F8;
    return;
L_08A116F8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(37));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11718u) goto L_08A11718;
    return;
L_08A11718:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A11724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 10u, 0x088BC0E0u>(ctx, &aot_mem) && ctx.pc == 0x08A11724u) goto L_08A11724;
    return;
L_08A11724:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(38));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11738u) goto L_08A11738;
    return;
L_08A11738:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A11744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 358u, 0x088B2194u>(ctx, &aot_mem) && ctx.pc == 0x08A11744u) goto L_08A11744;
    return;
L_08A11744:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11764u) goto L_08A11764;
    return;
L_08A11764:
    ctx.set_gpr(3, 16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A11778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A11778u) goto L_08A11778;
    return;
L_08A11778:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(41));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11788u) goto L_08A11788;
    return;
L_08A11788:
    ctx.set_gpr(3, 49312u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1179Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A1179Cu) goto L_08A1179C;
    return;
L_08A1179C:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(42));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A117ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A117ACu) goto L_08A117AC;
    return;
L_08A117AC:
    ctx.set_gpr(3, 16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A117C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A117C0u) goto L_08A117C0;
    return;
L_08A117C0:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(43));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A117D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A117D0u) goto L_08A117D0;
    return;
L_08A117D0:
    ctx.set_gpr(3, 49312u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A117E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A117E4u) goto L_08A117E4;
    return;
L_08A117E4:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A117F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A117F4u) goto L_08A117F4;
    return;
L_08A117F4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A11800u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 18u, 0x088B01D0u>(ctx, &aot_mem) && ctx.pc == 0x08A11800u) goto L_08A11800;
    return;
L_08A11800:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(45));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11820u) goto L_08A11820;
    return;
L_08A11820:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1182Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 18u, 0x088B01D0u>(ctx, &aot_mem) && ctx.pc == 0x08A1182Cu) goto L_08A1182C;
    return;
L_08A1182C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(47));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1184Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1184Cu) goto L_08A1184C;
    return;
L_08A1184C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A11860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A11860u) goto L_08A11860;
    return;
L_08A11860:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-776));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-584));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-392));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1188Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1188Cu) goto L_08A1188C;
    return;
L_08A1188C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A118A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A118D4;
      }
      goto L_08A118C0;
    }
L_08A118C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A118DC;
      }
      goto L_08A118D4;
    }
L_08A118D4:
    ctx.set_gpr(31, 0x08A118DCu);
    // nop
    goto L_08A11A58;
L_08A118DC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25204)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A118F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A1190Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 646u, 0x08A06A18u>(ctx, &aot_mem) && ctx.pc == 0x08A1190Cu) goto L_08A1190C;
    return;
L_08A1190C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18976));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), 0u);
    ctx.set_gpr(31, 0x08A1194Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A1194Cu) goto L_08A1194C;
    return;
L_08A1194C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18976));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A11978;
      }
      goto L_08A11970;
    }
L_08A11970:
    ctx.set_gpr(31, 0x08A11978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A11978u) goto L_08A11978;
    return;
L_08A11978:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1198C;
      }
      goto L_08A11984;
    }
L_08A11984:
    ctx.set_gpr(31, 0x08A1198Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1198Cu) goto L_08A1198C;
    return;
L_08A1198C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A119A0;
      }
      goto L_08A11998;
    }
L_08A11998:
    ctx.set_gpr(31, 0x08A119A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A119A0u) goto L_08A119A0;
    return;
L_08A119A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A119B4;
      }
      goto L_08A119AC;
    }
L_08A119AC:
    ctx.set_gpr(31, 0x08A119B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A119B4u) goto L_08A119B4;
    return;
L_08A119B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A119C8;
      }
      goto L_08A119C0;
    }
L_08A119C0:
    ctx.set_gpr(31, 0x08A119C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A119C8u) goto L_08A119C8;
    return;
L_08A119C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A119DC;
      }
      goto L_08A119D4;
    }
L_08A119D4:
    ctx.set_gpr(31, 0x08A119DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A119DCu) goto L_08A119DC;
    return;
L_08A119DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A119F0;
      }
      goto L_08A119E8;
    }
L_08A119E8:
    ctx.set_gpr(31, 0x08A119F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A119F0u) goto L_08A119F0;
    return;
L_08A119F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A11A04;
      }
      goto L_08A119FC;
    }
L_08A119FC:
    ctx.set_gpr(31, 0x08A11A04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A11A04u) goto L_08A11A04;
    return;
L_08A11A04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A11A18;
      }
      goto L_08A11A10;
    }
L_08A11A10:
    ctx.set_gpr(31, 0x08A11A18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A11A18u) goto L_08A11A18;
    return;
L_08A11A18:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13116));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x08A11A30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11A30u) goto L_08A11A30;
    return;
L_08A11A30:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A11A40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 278u, 0x089F24C0u>(ctx, &aot_mem) && ctx.pc == 0x08A11A40u) goto L_08A11A40;
    return;
L_08A11A40:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A11A58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(6784));
    ctx.set_gpr(31, 0x08A11A70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A11A70u) goto L_08A11A70;
    return;
L_08A11A70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A11A80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A11A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A11A90u) goto L_08A11A90;
    return;
L_08A11A90:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6940));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-200));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25204));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(10072));
    ctx.set_gpr(7, 2209u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-24808));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(6908));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-168));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(112));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(6388));
    ctx.set_gpr(31, 0x08A11AECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A11AECu) goto L_08A11AEC;
    return;
L_08A11AEC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A11AFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A11B0Cu);
    // nop
    goto L_08A118A8;
L_08A11B0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A11B1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25204)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11B44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A11B44u) goto L_08A11B44;
    return;
L_08A11B44:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-144));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(31, 0x08A11B60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A11B60u) goto L_08A11B60;
    return;
L_08A11B60:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A11B70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11B70u) goto L_08A11B70;
    return;
L_08A11B70:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A11B7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 66u, 0x088BC69Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11B7Cu) goto L_08A11B7C;
    return;
L_08A11B7C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11B98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11B98u) goto L_08A11B98;
    return;
L_08A11B98:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A11BA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 394u, 0x088BA3D8u>(ctx, &aot_mem) && ctx.pc == 0x08A11BA4u) goto L_08A11BA4;
    return;
L_08A11BA4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11BC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11BC0u) goto L_08A11BC0;
    return;
L_08A11BC0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08A11BE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 265u, 0x089FD724u>(ctx, &aot_mem) && ctx.pc == 0x08A11BE4u) goto L_08A11BE4;
    return;
L_08A11BE4:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11BF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11BF4u) goto L_08A11BF4;
    return;
L_08A11BF4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A11C18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 265u, 0x089FD724u>(ctx, &aot_mem) && ctx.pc == 0x08A11C18u) goto L_08A11C18;
    return;
L_08A11C18:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11C28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11C28u) goto L_08A11C28;
    return;
L_08A11C28:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A11C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 394u, 0x088BA3D8u>(ctx, &aot_mem) && ctx.pc == 0x08A11C34u) goto L_08A11C34;
    return;
L_08A11C34:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11C54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11C54u) goto L_08A11C54;
    return;
L_08A11C54:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A11C60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 462u, 0x08A1A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08A11C60u) goto L_08A11C60;
    return;
L_08A11C60:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11C80u) goto L_08A11C80;
    return;
L_08A11C80:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A11C8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 537u, 0x088C2FACu>(ctx, &aot_mem) && ctx.pc == 0x08A11C8Cu) goto L_08A11C8C;
    return;
L_08A11C8C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11CACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11CACu) goto L_08A11CAC;
    return;
L_08A11CAC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A11CB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 364u, 0x089F2A58u>(ctx, &aot_mem) && ctx.pc == 0x08A11CB8u) goto L_08A11CB8;
    return;
L_08A11CB8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11CD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11CD0u) goto L_08A11CD0;
    return;
L_08A11CD0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A11CDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 364u, 0x089F2A58u>(ctx, &aot_mem) && ctx.pc == 0x08A11CDCu) goto L_08A11CDC;
    return;
L_08A11CDC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11CF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11CF4u) goto L_08A11CF4;
    return;
L_08A11CF4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A11D00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 68u, 0x088C0624u>(ctx, &aot_mem) && ctx.pc == 0x08A11D00u) goto L_08A11D00;
    return;
L_08A11D00:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11D20u) goto L_08A11D20;
    return;
L_08A11D20:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A11D2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 572u, 0x088B3520u>(ctx, &aot_mem) && ctx.pc == 0x08A11D2Cu) goto L_08A11D2C;
    return;
L_08A11D2C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A11D64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11D64u) goto L_08A11D64;
    return;
L_08A11D64:
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
L_08A11D80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25148)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A11DAC;
      }
      goto L_08A11D98;
    }
L_08A11D98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A11DB4;
      }
      goto L_08A11DAC;
    }
L_08A11DAC:
    ctx.set_gpr(31, 0x08A11DB4u);
    // nop
    goto L_08A11E70;
L_08A11DB4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25148)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A11DCC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A11DE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A11DE4u) goto L_08A11DE4;
    return;
L_08A11DE4:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18800));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(31, 0x08A11E04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A11E04u) goto L_08A11E04;
    return;
L_08A11E04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18800));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A11E30;
      }
      goto L_08A11E28;
    }
L_08A11E28:
    ctx.set_gpr(31, 0x08A11E30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A11E30u) goto L_08A11E30;
    return;
L_08A11E30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A11E44;
      }
      goto L_08A11E3C;
    }
L_08A11E3C:
    ctx.set_gpr(31, 0x08A11E44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A11E44u) goto L_08A11E44;
    return;
L_08A11E44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A11E58;
      }
      goto L_08A11E50;
    }
L_08A11E50:
    ctx.set_gpr(31, 0x08A11E58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A11E58u) goto L_08A11E58;
    return;
L_08A11E58:
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
L_08A11E70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7832));
    ctx.set_gpr(31, 0x08A11E88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A11E88u) goto L_08A11E88;
    return;
L_08A11E88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A11E98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A11EA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A11EA8u) goto L_08A11EA8;
    return;
L_08A11EA8:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7988));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(184));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25148));
    ctx.set_gpr(6, 2209u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14180));
    ctx.set_gpr(7, 2209u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27884));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(7956));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(200));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(7628));
    ctx.set_gpr(31, 0x08A11F04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A11F04u) goto L_08A11F04;
    return;
L_08A11F04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A11F14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A11F24u);
    // nop
    goto L_08A11D80;
L_08A11F24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A11F34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25148)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11F5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A11F5Cu) goto L_08A11F5C;
    return;
L_08A11F5C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x08A11F78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A11F78u) goto L_08A11F78;
    return;
L_08A11F78:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A11F88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11F88u) goto L_08A11F88;
    return;
L_08A11F88:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A11F94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 358u, 0x088BA0A0u>(ctx, &aot_mem) && ctx.pc == 0x08A11F94u) goto L_08A11F94;
    return;
L_08A11F94:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11FACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11FACu) goto L_08A11FAC;
    return;
L_08A11FAC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A11FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 495u, 0x088B6F18u>(ctx, &aot_mem) && ctx.pc == 0x08A11FB8u) goto L_08A11FB8;
    return;
L_08A11FB8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A11FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11FD0u) goto L_08A11FD0;
    return;
L_08A11FD0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A11FF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 265u, 0x089FD724u>(ctx, &aot_mem) && ctx.pc == 0x08A11FF4u) goto L_08A11FF4;
    return;
L_08A11FF4:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A12004u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A12004u) goto L_08A12004;
    return;
L_08A12004:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08A12020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 223u, 0x089FD39Cu>(ctx, &aot_mem) && ctx.pc == 0x08A12020u) goto L_08A12020;
    return;
L_08A12020:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A12030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A12030u) goto L_08A12030;
    return;
L_08A12030:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A12050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 223u, 0x089FD39Cu>(ctx, &aot_mem) && ctx.pc == 0x08A12050u) goto L_08A12050;
    return;
L_08A12050:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A12060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A12060u) goto L_08A12060;
    return;
L_08A12060:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A12070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A12070u) goto L_08A12070;
    return;
L_08A12070:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A12080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A12080u) goto L_08A12080;
    return;
L_08A12080:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1208Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 10u, 0x088BC0E0u>(ctx, &aot_mem) && ctx.pc == 0x08A1208Cu) goto L_08A1208C;
    return;
L_08A1208C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(292));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(320));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(348));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A120B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A120B8u) goto L_08A120B8;
    return;
L_08A120B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A120D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25116)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A12100;
      }
      goto L_08A120EC;
    }
L_08A120EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A12108;
      }
      goto L_08A12100;
    }
L_08A12100:
    ctx.set_gpr(31, 0x08A12108u);
    // nop
    goto L_08A121A0;
L_08A12108:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25116)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12120:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A12138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 646u, 0x08A06A18u>(ctx, &aot_mem) && ctx.pc == 0x08A12138u) goto L_08A12138;
    return;
L_08A12138:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4572));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A12154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A12154u) goto L_08A12154;
    return;
L_08A12154:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13116));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08A12178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A12178u) goto L_08A12178;
    return;
L_08A12178:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A12188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 278u, 0x089F24C0u>(ctx, &aot_mem) && ctx.pc == 0x08A12188u) goto L_08A12188;
    return;
L_08A12188:
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
L_08A121A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8648));
    ctx.set_gpr(31, 0x08A121B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A121B8u) goto L_08A121B8;
    return;
L_08A121B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A121C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A121D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A121D8u) goto L_08A121D8;
    return;
L_08A121D8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25116));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(10072));
    ctx.set_gpr(7, 2209u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-24808));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(8756));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(376));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(8480));
    ctx.set_gpr(31, 0x08A12224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A12224u) goto L_08A12224;
    return;
L_08A12224:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12234:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A12244u);
    // nop
    goto L_08A120D4;
L_08A12244:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12254:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25112)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A12280;
      }
      goto L_08A1226C;
    }
L_08A1226C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A12288;
      }
      goto L_08A12280;
    }
L_08A12280:
    ctx.set_gpr(31, 0x08A12288u);
    // nop
    goto L_08A123D0;
L_08A12288:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25112)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A122A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A122B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A122B8u) goto L_08A122B8;
    return;
L_08A122B8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18692));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(31, 0x08A122E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A122E0u) goto L_08A122E0;
    return;
L_08A122E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18692));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1230C;
      }
      goto L_08A12304;
    }
L_08A12304:
    ctx.set_gpr(31, 0x08A1230Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1230Cu) goto L_08A1230C;
    return;
L_08A1230C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A12330;
      }
      goto L_08A1231C;
    }
L_08A1231C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A12328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08A12328u) goto L_08A12328;
    return;
L_08A12328:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08A12330;
L_08A12330:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A12348;
      }
      goto L_08A12338;
    }
L_08A12338:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08A12348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08A12348u) goto L_08A12348;
    return;
L_08A12348:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1236C;
      }
      goto L_08A12358;
    }
L_08A12358:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08A12364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08A12364u) goto L_08A12364;
    return;
L_08A12364:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08A1236C;
L_08A1236C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A12384;
      }
      goto L_08A12374;
    }
L_08A12374:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08A12384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08A12384u) goto L_08A12384;
    return;
L_08A12384:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29804));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x08A1239Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1239Cu) goto L_08A1239C;
    return;
L_08A1239C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A123B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x08A123B8u) goto L_08A123B8;
    return;
L_08A123B8:
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
L_08A123D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(9208));
    ctx.set_gpr(31, 0x08A123E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A123E8u) goto L_08A123E8;
    return;
L_08A123E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A123F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A12408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A12408u) goto L_08A12408;
    return;
L_08A12408:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(9364));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(396));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25112));
    ctx.set_gpr(6, 2215u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(10152));
    ctx.set_gpr(7, 2201u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(10684));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(9332));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(404));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(8864));
    ctx.set_gpr(31, 0x08A12464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A12464u) goto L_08A12464;
    return;
L_08A12464:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12474:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A12484u);
    // nop
    goto L_08A12254;
L_08A12484:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12494:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25112)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A124BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A124BCu) goto L_08A124BC;
    return;
L_08A124BC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(424));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08A124D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A124D8u) goto L_08A124D8;
    return;
L_08A124D8:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A124E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A124E8u) goto L_08A124E8;
    return;
L_08A124E8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A124F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 753u, 0x088D7138u>(ctx, &aot_mem) && ctx.pc == 0x08A124F4u) goto L_08A124F4;
    return;
L_08A124F4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A12508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A12508u) goto L_08A12508;
    return;
L_08A12508:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A12518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08A12518u) goto L_08A12518;
    return;
L_08A12518:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(508));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(528));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(548));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A12540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A12540u) goto L_08A12540;
    return;
L_08A12540:
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
L_08A1255C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25088)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1259C;
      }
      goto L_08A12574;
    }
L_08A12574:
    ctx.set_gpr(31, 0x08A1257Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A1257Cu) goto L_08A1257C;
    return;
L_08A1257C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A12588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A12588u) goto L_08A12588;
    return;
L_08A12588:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A12594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A12594u) goto L_08A12594;
    return;
L_08A12594:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25088), ctx.gpr[2]);
    goto L_08A1259C;
L_08A1259C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25088)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A125B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25088)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A125E0;
      }
      goto L_08A125CC;
    }
L_08A125CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A125E8;
      }
      goto L_08A125E0;
    }
L_08A125E0:
    ctx.set_gpr(31, 0x08A125E8u);
    // nop
    goto L_08A126A8;
L_08A125E8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25088)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12600:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08A12618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A12618u) goto L_08A12618;
    return;
L_08A12618:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18596));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(31, 0x08A12638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A12638u) goto L_08A12638;
    return;
L_08A12638:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18596));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A12664;
      }
      goto L_08A1265C;
    }
L_08A1265C:
    ctx.set_gpr(31, 0x08A12664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A12664u) goto L_08A12664;
    return;
L_08A12664:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A12678;
      }
      goto L_08A12670;
    }
L_08A12670:
    ctx.set_gpr(31, 0x08A12678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A12678u) goto L_08A12678;
    return;
L_08A12678:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A12690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x08A12690u) goto L_08A12690;
    return;
L_08A12690:
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
L_08A126A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(9936));
    ctx.set_gpr(31, 0x08A126C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A126C0u) goto L_08A126C0;
    return;
L_08A126C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A126D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A126E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A126E0u) goto L_08A126E0;
    return;
L_08A126E0:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10092));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(568));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25088));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-10116));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(16508));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(10060));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(580));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(28));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(9728));
    ctx.set_gpr(31, 0x08A1273Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A1273Cu) goto L_08A1273C;
    return;
L_08A1273C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1274C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1275Cu);
    // nop
    goto L_08A125B4;
L_08A1275C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1276C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25088)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A12794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A12794u) goto L_08A12794;
    return;
L_08A12794:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(588));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A127B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A127B0u) goto L_08A127B0;
    return;
L_08A127B0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A127C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A127C0u) goto L_08A127C0;
    return;
L_08A127C0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A127CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 364u, 0x089F2A58u>(ctx, &aot_mem) && ctx.pc == 0x08A127CCu) goto L_08A127CC;
    return;
L_08A127CC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A127E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A127E0u) goto L_08A127E0;
    return;
L_08A127E0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A127ECu);
    // nop
    goto L_08A12C04;
L_08A127EC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A12820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A12820u) goto L_08A12820;
    return;
L_08A12820:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A12834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08A12834u) goto L_08A12834;
    return;
L_08A12834:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(624));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(640));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(656));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A12860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A12860u) goto L_08A12860;
    return;
L_08A12860:
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
L_08A1287C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A12894u);
    // nop
    goto L_08A129A4;
L_08A12894:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25068)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A128A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08A128A8u) goto L_08A128A8;
    return;
L_08A128A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A128BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25068)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A128FC;
      }
      goto L_08A128D4;
    }
L_08A128D4:
    ctx.set_gpr(31, 0x08A128DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A128DCu) goto L_08A128DC;
    return;
L_08A128DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A128E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A128E8u) goto L_08A128E8;
    return;
L_08A128E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A128F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A128F4u) goto L_08A128F4;
    return;
L_08A128F4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25068), ctx.gpr[2]);
    goto L_08A128FC;
L_08A128FC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25068)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12914:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25068)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A12940;
      }
      goto L_08A1292C;
    }
L_08A1292C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A12948;
      }
      goto L_08A12940;
    }
L_08A12940:
    ctx.set_gpr(31, 0x08A12948u);
    // nop
    goto L_08A129A4;
L_08A12948:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25068)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12960:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A12974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A12974u) goto L_08A12974;
    return;
L_08A12974:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4676));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A12988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A12988u) goto L_08A12988;
    return;
L_08A12988:
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
L_08A129A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10700));
    ctx.set_gpr(31, 0x08A129BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A129BCu) goto L_08A129BC;
    return;
L_08A129BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A129CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A129DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A129DCu) goto L_08A129DC;
    return;
L_08A129DC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(672));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25068));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(10816));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(680));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(10592));
    ctx.set_gpr(31, 0x08A12A30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A12A30u) goto L_08A12A30;
    return;
L_08A12A30:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12A40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A12A50u);
    // nop
    goto L_08A12914;
L_08A12A50:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12A60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25064)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A12AA0;
      }
      goto L_08A12A78;
    }
L_08A12A78:
    ctx.set_gpr(31, 0x08A12A80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A12A80u) goto L_08A12A80;
    return;
L_08A12A80:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A12A8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A12A8Cu) goto L_08A12A8C;
    return;
L_08A12A8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A12A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A12A98u) goto L_08A12A98;
    return;
L_08A12A98:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25064), ctx.gpr[2]);
    goto L_08A12AA0;
L_08A12AA0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25064)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12AB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25064)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A12AE4;
      }
      goto L_08A12AD0;
    }
L_08A12AD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A12AEC;
      }
      goto L_08A12AE4;
    }
L_08A12AE4:
    ctx.set_gpr(31, 0x08A12AECu);
    // nop
    goto L_08A12B48;
L_08A12AEC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25064)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12B04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A12B18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A12B18u) goto L_08A12B18;
    return;
L_08A12B18:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4780));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A12B2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A12B2Cu) goto L_08A12B2C;
    return;
L_08A12B2C:
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
L_08A12B48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(11120));
    ctx.set_gpr(31, 0x08A12B60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A12B60u) goto L_08A12B60;
    return;
L_08A12B60:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12B70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A12B80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A12B80u) goto L_08A12B80;
    return;
L_08A12B80:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(692));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25064));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(11236));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(700));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(11012));
    ctx.set_gpr(31, 0x08A12BD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A12BD4u) goto L_08A12BD4;
    return;
L_08A12BD4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12BE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A12BF4u);
    // nop
    goto L_08A12AB8;
L_08A12BF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12C04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25060)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A12C44;
      }
      goto L_08A12C1C;
    }
L_08A12C1C:
    ctx.set_gpr(31, 0x08A12C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A12C24u) goto L_08A12C24;
    return;
L_08A12C24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A12C30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A12C30u) goto L_08A12C30;
    return;
L_08A12C30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A12C3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A12C3Cu) goto L_08A12C3C;
    return;
L_08A12C3C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25060), ctx.gpr[2]);
    goto L_08A12C44;
L_08A12C44:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25060)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12C5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25060)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A12C88;
      }
      goto L_08A12C74;
    }
L_08A12C74:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A12C90;
      }
      goto L_08A12C88;
    }
L_08A12C88:
    ctx.set_gpr(31, 0x08A12C90u);
    // nop
    goto L_08A12CEC;
L_08A12C90:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25060)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12CA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A12CBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A12CBCu) goto L_08A12CBC;
    return;
L_08A12CBC:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4884));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A12CD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A12CD0u) goto L_08A12CD0;
    return;
L_08A12CD0:
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
L_08A12CEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(11540));
    ctx.set_gpr(31, 0x08A12D04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A12D04u) goto L_08A12D04;
    return;
L_08A12D04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12D14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A12D24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A12D24u) goto L_08A12D24;
    return;
L_08A12D24:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(716));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25060));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-11416));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(13108));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(11656));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(724));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(11432));
    ctx.set_gpr(31, 0x08A12D78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A12D78u) goto L_08A12D78;
    return;
L_08A12D78:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12D88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A12D98u);
    // nop
    goto L_08A12C5C;
L_08A12D98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12DA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25056)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A12DD4;
      }
      goto L_08A12DC0;
    }
L_08A12DC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A12DDC;
      }
      goto L_08A12DD4;
    }
L_08A12DD4:
    ctx.set_gpr(31, 0x08A12DDCu);
    // nop
    goto L_08A12E38;
L_08A12DDC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25056)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12DF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A12E08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A12E08u) goto L_08A12E08;
    return;
L_08A12E08:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4988));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A12E1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A12E1Cu) goto L_08A12E1C;
    return;
L_08A12E1C:
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
L_08A12E38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(11872));
    ctx.set_gpr(31, 0x08A12E50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A12E50u) goto L_08A12E50;
    return;
L_08A12E50:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12E60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A12E70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A12E70u) goto L_08A12E70;
    return;
L_08A12E70:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(748));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25056));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(11988));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(756));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(11764));
    ctx.set_gpr(31, 0x08A12EC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A12EC4u) goto L_08A12EC4;
    return;
L_08A12EC4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12ED4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A12EE4u);
    // nop
    goto L_08A12DA8;
L_08A12EE4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12EF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25052)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A12F20;
      }
      goto L_08A12F0C;
    }
L_08A12F0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A12F28;
      }
      goto L_08A12F20;
    }
L_08A12F20:
    ctx.set_gpr(31, 0x08A12F28u);
    // nop
    goto L_08A12F84;
L_08A12F28:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25052)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12F40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A12F54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 608u, 0x088C3578u>(ctx, &aot_mem) && ctx.pc == 0x08A12F54u) goto L_08A12F54;
    return;
L_08A12F54:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5092));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A12F68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A12F68u) goto L_08A12F68;
    return;
L_08A12F68:
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
L_08A12F84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12204));
    ctx.set_gpr(31, 0x08A12F9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A12F9Cu) goto L_08A12F9C;
    return;
L_08A12F9C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A12FAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A12FBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A12FBCu) goto L_08A12FBC;
    return;
L_08A12FBC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(776));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25052));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(29800));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(13948));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(12320));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(784));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(12096));
    ctx.set_gpr(31, 0x08A13010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A13010u) goto L_08A13010;
    return;
L_08A13010:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13020:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A13030u);
    // nop
    goto L_08A12EF4;
L_08A13030:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13040:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25048)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1306C;
      }
      goto L_08A13058;
    }
L_08A13058:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A13074;
      }
      goto L_08A1306C;
    }
L_08A1306C:
    ctx.set_gpr(31, 0x08A13074u);
    // nop
    goto L_08A130D0;
L_08A13074:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25048)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1308C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A130A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 608u, 0x088C3578u>(ctx, &aot_mem) && ctx.pc == 0x08A130A0u) goto L_08A130A0;
    return;
L_08A130A0:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5196));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A130B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A130B4u) goto L_08A130B4;
    return;
L_08A130B4:
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
L_08A130D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12536));
    ctx.set_gpr(31, 0x08A130E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A130E8u) goto L_08A130E8;
    return;
L_08A130E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A130F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A13108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A13108u) goto L_08A13108;
    return;
L_08A13108:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(804));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25048));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(29800));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(13948));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(12652));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(812));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(12428));
    ctx.set_gpr(31, 0x08A1315Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A1315Cu) goto L_08A1315C;
    return;
L_08A1315C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1316C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1317Cu);
    // nop
    goto L_08A13040;
L_08A1317C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1318C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25044)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A131B8;
      }
      goto L_08A131A4;
    }
L_08A131A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A131C0;
      }
      goto L_08A131B8;
    }
L_08A131B8:
    ctx.set_gpr(31, 0x08A131C0u);
    // nop
    goto L_08A13270;
L_08A131C0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25044)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A131D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A131F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 646u, 0x08A06A18u>(ctx, &aot_mem) && ctx.pc == 0x08A131F0u) goto L_08A131F0;
    return;
L_08A131F0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18456));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    ctx.set_gpr(31, 0x08A1321Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A1321Cu) goto L_08A1321C;
    return;
L_08A1321C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18456));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A13248;
      }
      goto L_08A13240;
    }
L_08A13240:
    ctx.set_gpr(31, 0x08A13248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A13248u) goto L_08A13248;
    return;
L_08A13248:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A13258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 312u, 0x08A0DAB4u>(ctx, &aot_mem) && ctx.pc == 0x08A13258u) goto L_08A13258;
    return;
L_08A13258:
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
L_08A13270:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12952));
    ctx.set_gpr(31, 0x08A13288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A13288u) goto L_08A13288;
    return;
L_08A13288:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13298:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A132A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A132A8u) goto L_08A132A8;
    return;
L_08A132A8:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(13124));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(828));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25044));
    ctx.set_gpr(6, 2209u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-9128));
    ctx.set_gpr(7, 2209u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(13108));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(13076));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(836));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(72));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(12760));
    ctx.set_gpr(31, 0x08A13304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A13304u) goto L_08A13304;
    return;
L_08A13304:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13314:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A13324u);
    // nop
    goto L_08A1318C;
L_08A13324:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13334:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25752)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13344:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25044)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1336Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A1336Cu) goto L_08A1336C;
    return;
L_08A1336C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(860));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A13388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A13388u) goto L_08A13388;
    return;
L_08A13388:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A13398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A13398u) goto L_08A13398;
    return;
L_08A13398:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A133ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 843u, 0x0895F91Cu>(ctx, &aot_mem) && ctx.pc == 0x08A133ACu) goto L_08A133AC;
    return;
L_08A133AC:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A133C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A133C0u) goto L_08A133C0;
    return;
L_08A133C0:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A133D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A133D4u) goto L_08A133D4;
    return;
L_08A133D4:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A133E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A133E8u) goto L_08A133E8;
    return;
L_08A133E8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A133F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 581u, 0x088C3344u>(ctx, &aot_mem) && ctx.pc == 0x08A133F4u) goto L_08A133F4;
    return;
L_08A133F4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(948));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(964));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(980));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A1342Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1342Cu) goto L_08A1342C;
    return;
L_08A1342C:
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
L_08A13448:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25024)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A13488;
      }
      goto L_08A13460;
    }
L_08A13460:
    ctx.set_gpr(31, 0x08A13468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A13468u) goto L_08A13468;
    return;
L_08A13468:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A13474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A13474u) goto L_08A13474;
    return;
L_08A13474:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A13480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A13480u) goto L_08A13480;
    return;
L_08A13480:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25024), ctx.gpr[2]);
    goto L_08A13488;
L_08A13488:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25024)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A134A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25024)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A134CC;
      }
      goto L_08A134B8;
    }
L_08A134B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A134D4;
      }
      goto L_08A134CC;
    }
L_08A134CC:
    ctx.set_gpr(31, 0x08A134D4u);
    // nop
    goto L_08A135D8;
L_08A134D4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25024)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A134EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A13504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A13504u) goto L_08A13504;
    return;
L_08A13504:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5288));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    ctx.set_gpr(31, 0x08A13530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A13530u) goto L_08A13530;
    return;
L_08A13530:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5288));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1355C;
      }
      goto L_08A13554;
    }
L_08A13554:
    ctx.set_gpr(31, 0x08A1355Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1355Cu) goto L_08A1355C;
    return;
L_08A1355C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A13570;
      }
      goto L_08A13568;
    }
L_08A13568:
    ctx.set_gpr(31, 0x08A13570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A13570u) goto L_08A13570;
    return;
L_08A13570:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A13584;
      }
      goto L_08A1357C;
    }
L_08A1357C:
    ctx.set_gpr(31, 0x08A13584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A13584u) goto L_08A13584;
    return;
L_08A13584:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A13598;
      }
      goto L_08A13590;
    }
L_08A13590:
    ctx.set_gpr(31, 0x08A13598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A13598u) goto L_08A13598;
    return;
L_08A13598:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A135AC;
      }
      goto L_08A135A4;
    }
L_08A135A4:
    ctx.set_gpr(31, 0x08A135ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A135ACu) goto L_08A135AC;
    return;
L_08A135AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A135C0;
      }
      goto L_08A135B8;
    }
L_08A135B8:
    ctx.set_gpr(31, 0x08A135C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A135C0u) goto L_08A135C0;
    return;
L_08A135C0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A135D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(13824));
    ctx.set_gpr(31, 0x08A135F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A135F0u) goto L_08A135F0;
    return;
L_08A135F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13600:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A13610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A13610u) goto L_08A13610;
    return;
L_08A13610:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(13980));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(996));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25024));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(13948));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1016));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(84));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(13548));
    ctx.set_gpr(31, 0x08A1366Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A1366Cu) goto L_08A1366C;
    return;
L_08A1366C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1367C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1368Cu);
    // nop
    goto L_08A134A0;
L_08A1368C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1369C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25024)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A136C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A136C4u) goto L_08A136C4;
    return;
L_08A136C4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1024));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(31, 0x08A136E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A136E0u) goto L_08A136E0;
    return;
L_08A136E0:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A136F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A136F0u) goto L_08A136F0;
    return;
L_08A136F0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A136FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 41u, 0x088F83C4u>(ctx, &aot_mem) && ctx.pc == 0x08A136FCu) goto L_08A136FC;
    return;
L_08A136FC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A13718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A13718u) goto L_08A13718;
    return;
L_08A13718:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A13724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 41u, 0x088F83C4u>(ctx, &aot_mem) && ctx.pc == 0x08A13724u) goto L_08A13724;
    return;
L_08A13724:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A13740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A13740u) goto L_08A13740;
    return;
L_08A13740:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1374Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 750u, 0x088F7FBCu>(ctx, &aot_mem) && ctx.pc == 0x08A1374Cu) goto L_08A1374C;
    return;
L_08A1374C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A13768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A13768u) goto L_08A13768;
    return;
L_08A13768:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A13774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 41u, 0x088F83C4u>(ctx, &aot_mem) && ctx.pc == 0x08A13774u) goto L_08A13774;
    return;
L_08A13774:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A13790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A13790u) goto L_08A13790;
    return;
L_08A13790:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1379Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 7u, 0x08A1408Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1379Cu) goto L_08A1379C;
    return;
L_08A1379C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A137B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A137B8u) goto L_08A137B8;
    return;
L_08A137B8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A137C4u);
    // nop
    goto L_08A13C34;
L_08A137C4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A137E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A137E0u) goto L_08A137E0;
    return;
L_08A137E0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A137ECu);
    // nop
    goto L_08A13448;
L_08A137EC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1236));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1288));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1340));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1381Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1381Cu) goto L_08A1381C;
    return;
L_08A1381C:
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
L_08A13838:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24968)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A13864;
      }
      goto L_08A13850;
    }
L_08A13850:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1386C;
      }
      goto L_08A13864;
    }
L_08A13864:
    ctx.set_gpr(31, 0x08A1386Cu);
    // nop
    goto L_08A138C8;
L_08A1386C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24968)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13884:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A13898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A13898u) goto L_08A13898;
    return;
L_08A13898:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5392));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A138ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A138ACu) goto L_08A138AC;
    return;
L_08A138AC:
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
L_08A138C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14576));
    ctx.set_gpr(31, 0x08A138E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A138E0u) goto L_08A138E0;
    return;
L_08A138E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A138F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A13900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A13900u) goto L_08A13900;
    return;
L_08A13900:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1392));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24968));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(14692));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1400));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(14468));
    ctx.set_gpr(31, 0x08A13954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A13954u) goto L_08A13954;
    return;
L_08A13954:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13964:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A13974u);
    // nop
    goto L_08A13838;
L_08A13974:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13984:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24964)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A139C4;
      }
      goto L_08A1399C;
    }
L_08A1399C:
    ctx.set_gpr(31, 0x08A139A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A139A4u) goto L_08A139A4;
    return;
L_08A139A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A139B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A139B0u) goto L_08A139B0;
    return;
L_08A139B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A139BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A139BCu) goto L_08A139BC;
    return;
L_08A139BC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-24964), ctx.gpr[2]);
    goto L_08A139C4;
L_08A139C4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24964)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A139DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24964)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A13A08;
      }
      goto L_08A139F4;
    }
L_08A139F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A13A10;
      }
      goto L_08A13A08;
    }
L_08A13A08:
    ctx.set_gpr(31, 0x08A13A10u);
    // nop
    goto L_08A13A6C;
L_08A13A10:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24964)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13A28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A13A3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A13A3Cu) goto L_08A13A3C;
    return;
L_08A13A3C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5484));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A13A50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A13A50u) goto L_08A13A50;
    return;
L_08A13A50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13A6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14996));
    ctx.set_gpr(31, 0x08A13A84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A13A84u) goto L_08A13A84;
    return;
L_08A13A84:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13A94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A13AA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A13AA4u) goto L_08A13AA4;
    return;
L_08A13AA4:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15152));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1412));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24964));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(15120));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1420));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(36));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(14888));
    ctx.set_gpr(31, 0x08A13B00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A13B00u) goto L_08A13B00;
    return;
L_08A13B00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13B10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A13B20u);
    // nop
    goto L_08A139DC;
L_08A13B20:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13B30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24964)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A13B58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A13B58u) goto L_08A13B58;
    return;
L_08A13B58:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1428));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A13B74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A13B74u) goto L_08A13B74;
    return;
L_08A13B74:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A13B84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A13B84u) goto L_08A13B84;
    return;
L_08A13B84:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A13B90u);
    // nop
    goto L_08A13448;
L_08A13B90:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A13BB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A13BB0u) goto L_08A13BB0;
    return;
L_08A13BB0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A13BBCu);
    // nop
    goto L_08A13448;
L_08A13BBC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A13BDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A13BDCu) goto L_08A13BDC;
    return;
L_08A13BDC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A13BE8u);
    // nop
    goto L_08A13448;
L_08A13BE8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1480));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1492));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1504));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A13C18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A13C18u) goto L_08A13C18;
    return;
L_08A13C18:
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
L_08A13C34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24948)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A13C74;
      }
      goto L_08A13C4C;
    }
L_08A13C4C:
    ctx.set_gpr(31, 0x08A13C54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A13C54u) goto L_08A13C54;
    return;
L_08A13C54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A13C60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A13C60u) goto L_08A13C60;
    return;
L_08A13C60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A13C6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A13C6Cu) goto L_08A13C6C;
    return;
L_08A13C6C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-24948), ctx.gpr[2]);
    goto L_08A13C74;
L_08A13C74:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24948)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13C8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24948)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A13CB8;
      }
      goto L_08A13CA4;
    }
L_08A13CA4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A13CC0;
      }
      goto L_08A13CB8;
    }
L_08A13CB8:
    ctx.set_gpr(31, 0x08A13CC0u);
    // nop
    goto L_08A13D1C;
L_08A13CC0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24948)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13CD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A13CECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A13CECu) goto L_08A13CEC;
    return;
L_08A13CEC:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5588));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A13D00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A13D00u) goto L_08A13D00;
    return;
L_08A13D00:
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
L_08A13D1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15684));
    ctx.set_gpr(31, 0x08A13D34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A13D34u) goto L_08A13D34;
    return;
L_08A13D34:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13D44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A13D54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A13D54u) goto L_08A13D54;
    return;
L_08A13D54:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1516));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24948));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(15800));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1524));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(15576));
    ctx.set_gpr(31, 0x08A13DA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A13DA8u) goto L_08A13DA8;
    return;
L_08A13DA8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13DB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A13DC8u);
    // nop
    goto L_08A13C8C;
L_08A13DC8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13DD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24944)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A13E04;
      }
      goto L_08A13DF0;
    }
L_08A13DF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A13E0C;
      }
      goto L_08A13E04;
    }
L_08A13E04:
    ctx.set_gpr(31, 0x08A13E0Cu);
    // nop
    goto L_08A13E98;
L_08A13E0C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24944)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13E24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08A13E3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A13E3Cu) goto L_08A13E3C;
    return;
L_08A13E3C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5772));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(31, 0x08A13E54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A13E54u) goto L_08A13E54;
    return;
L_08A13E54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5772));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A13E80;
      }
      goto L_08A13E78;
    }
L_08A13E78:
    ctx.set_gpr(31, 0x08A13E80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A13E80u) goto L_08A13E80;
    return;
L_08A13E80:
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
L_08A13E98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(16064));
    ctx.set_gpr(31, 0x08A13EB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A13EB0u) goto L_08A13EB0;
    return;
L_08A13EB0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13EC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A13ED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A13ED0u) goto L_08A13ED0;
    return;
L_08A13ED0:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(16236));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1536));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24944));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-27048));
    ctx.set_gpr(7, 2209u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(16220));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(16188));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1548));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(44));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(15908));
    ctx.set_gpr(31, 0x08A13F2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A13F2Cu) goto L_08A13F2C;
    return;
L_08A13F2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13F3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A13F4Cu);
    // nop
    goto L_08A13DD8;
L_08A13F4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13F5C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24320)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13F6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24944)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A13F94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A13F94u) goto L_08A13F94;
    return;
L_08A13F94:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1556));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08A13FB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A13FB0u) goto L_08A13FB0;
    return;
L_08A13FB0:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A13FC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A13FC0u) goto L_08A13FC0;
    return;
L_08A13FC0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A13FCCu);
    // nop
    goto L_08A13448;
L_08A13FCC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A13FECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A13FECu) goto L_08A13FEC;
    return;
L_08A13FEC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A13FF8u);
    // nop
    goto L_08A13984;
L_08A13FF8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    ctx.pc = 0x08A14000u; return;
}

void recomp_unit_0131(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0131_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_131(Runtime &runtime) {
    runtime.register_generated_unit(131u, 0x08A10000u, 16384u, &recomp_unit_0131, &recomp_unit_0131_entry);
    runtime.register_function(0x08A10000u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10024u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10034u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10044u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10054u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1007Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10098u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A100A8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A100B4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A100C8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A100D4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A100FCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10108u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10130u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10150u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10160u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1016Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A101A0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A101BCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A101D4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A101DCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A101E8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A101F4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A101FCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10214u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1022Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10240u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10248u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10260u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10278u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10288u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10298u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A102E0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A102F0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10300u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10310u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10328u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10330u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1033Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10348u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10350u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10368u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10380u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10394u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1039Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A103B4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A103CCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A103DCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A103ECu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10434u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10444u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10454u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10464u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1047Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10490u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A104A4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A104BCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A104C4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A104D0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A104DCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A104E4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A104FCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10514u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10528u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10530u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10548u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10560u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1057Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A105A0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A105A8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A105B4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A105BCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A105D4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A105ECu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A105FCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1060Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10668u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10678u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10688u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10698u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A106C0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A106DCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A106ECu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A106F8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1070Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10718u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10744u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10760u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10778u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10780u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1078Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10798u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A107A0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A107B8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A107D0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A107E4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A107ECu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10804u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10818u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1082Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10848u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10860u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10870u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10880u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A108D4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A108E4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A108F4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10904u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1091Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10930u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10938u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10950u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10968u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10988u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A109ACu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A109B4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A109C0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A109C8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A109D4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A109DCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A109F4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10A0Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10A1Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10A2Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10A88u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10A98u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10AA8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10AB8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10AE0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10AFCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10B0Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10B18u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10B30u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10B4Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10B5Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10B7Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10B8Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10BA0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10BB0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10BC4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10BD4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10BE8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10BF8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10C18u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10C28u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10C38u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10C48u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10C54u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10C68u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10C74u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10CA0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10CBCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10CD4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10CE8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10CF0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10D08u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10D20u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10DACu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10DD0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10DD8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10DE4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10DECu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10DF8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10E00u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10E0Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10E14u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10E20u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10E28u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10E34u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10E3Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10E48u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10E50u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10E5Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10E64u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10E70u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10E78u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10E84u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10E8Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10E98u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10EA0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10EACu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10EB4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10EC0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10EC8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10ED4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10EDCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10EE8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10EF0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10EFCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10F04u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10F10u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10F18u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10F24u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10F2Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10F38u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10F40u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10F4Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10F54u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10F60u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10F68u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10F74u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10F7Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10F88u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10F90u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10F9Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10FA4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10FB0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10FB8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10FC4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10FCCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10FD8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10FE0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A10FF8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11008u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11020u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11038u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11048u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11058u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A110B4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A110C4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A110D4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A110E4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1110Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11128u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11138u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11158u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11168u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11188u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11198u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A111ACu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A111BCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A111C8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A111E4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A111F0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11204u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11214u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11224u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11234u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11244u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11254u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11264u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11278u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11288u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11294u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A112B4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A112C0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A112E0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A112ECu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1130Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11318u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11338u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11344u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11364u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11378u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1138Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11398u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A113B8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A113C4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A113DCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A113E8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11408u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11418u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11428u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11438u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11448u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1145Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1146Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1148Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1149Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A114A8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A114C8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A114D8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A114E8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A114F8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11508u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11514u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11534u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11540u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11560u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1156Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1158Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11598u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A115B8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A115C4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A115E4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A115F0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11610u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1161Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1163Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11648u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11668u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11674u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11694u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A116A0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A116C0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A116CCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A116ECu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A116F8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11718u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11724u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11738u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11744u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11764u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11778u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11788u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1179Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A117ACu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A117C0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A117D0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A117E4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A117F4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11800u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11820u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1182Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1184Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11860u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1188Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A118A8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A118C0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A118D4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A118DCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A118F4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1190Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1194Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11970u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11978u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11984u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1198Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11998u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A119A0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A119ACu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A119B4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A119C0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A119C8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A119D4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A119DCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A119E8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A119F0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A119FCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11A04u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11A10u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11A18u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11A30u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11A40u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11A58u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11A70u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11A80u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11A90u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11AECu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11AFCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11B0Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11B1Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11B44u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11B60u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11B70u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11B7Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11B98u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11BA4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11BC0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11BE4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11BF4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11C18u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11C28u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11C34u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11C54u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11C60u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11C80u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11C8Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11CACu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11CB8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11CD0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11CDCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11CF4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11D00u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11D20u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11D2Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11D64u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11D80u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11D98u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11DACu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11DB4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11DCCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11DE4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11E04u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11E28u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11E30u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11E3Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11E44u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11E50u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11E58u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11E70u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11E88u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11E98u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11EA8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11F04u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11F14u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11F24u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11F34u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11F5Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11F78u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11F88u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11F94u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11FACu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11FB8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11FD0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A11FF4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12004u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12020u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12030u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12050u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12060u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12070u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12080u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1208Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A120B8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A120D4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A120ECu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12100u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12108u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12120u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12138u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12154u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12178u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12188u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A121A0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A121B8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A121C8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A121D8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12224u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12234u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12244u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12254u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1226Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12280u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12288u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A122A0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A122B8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A122E0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12304u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1230Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1231Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12328u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12330u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12338u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12348u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12358u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12364u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1236Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12374u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12384u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1239Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A123B8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A123D0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A123E8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A123F8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12408u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12464u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12474u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12484u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12494u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A124BCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A124D8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A124E8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A124F4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12508u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12518u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12540u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1255Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12574u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1257Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12588u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12594u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1259Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A125B4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A125CCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A125E0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A125E8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12600u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12618u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12638u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1265Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12664u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12670u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12678u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12690u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A126A8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A126C0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A126D0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A126E0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1273Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1274Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1275Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1276Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12794u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A127B0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A127C0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A127CCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A127E0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A127ECu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12820u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12834u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12860u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1287Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12894u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A128A8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A128BCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A128D4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A128DCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A128E8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A128F4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A128FCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12914u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1292Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12940u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12948u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12960u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12974u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12988u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A129A4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A129BCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A129CCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A129DCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12A30u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12A40u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12A50u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12A60u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12A78u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12A80u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12A8Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12A98u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12AA0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12AB8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12AD0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12AE4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12AECu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12B04u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12B18u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12B2Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12B48u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12B60u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12B70u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12B80u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12BD4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12BE4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12BF4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12C04u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12C1Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12C24u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12C30u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12C3Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12C44u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12C5Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12C74u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12C88u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12C90u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12CA8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12CBCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12CD0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12CECu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12D04u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12D14u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12D24u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12D78u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12D88u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12D98u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12DA8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12DC0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12DD4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12DDCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12DF4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12E08u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12E1Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12E38u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12E50u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12E60u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12E70u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12EC4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12ED4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12EE4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12EF4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12F0Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12F20u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12F28u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12F40u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12F54u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12F68u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12F84u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12F9Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12FACu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A12FBCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13010u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13020u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13030u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13040u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13058u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1306Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13074u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1308Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A130A0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A130B4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A130D0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A130E8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A130F8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13108u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1315Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1316Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1317Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1318Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A131A4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A131B8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A131C0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A131D8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A131F0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1321Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13240u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13248u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13258u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13270u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13288u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13298u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A132A8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13304u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13314u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13324u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13334u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13344u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1336Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13388u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13398u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A133ACu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A133C0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A133D4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A133E8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A133F4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1342Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13448u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13460u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13468u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13474u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13480u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13488u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A134A0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A134B8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A134CCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A134D4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A134ECu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13504u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13530u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13554u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1355Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13568u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13570u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1357Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13584u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13590u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13598u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A135A4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A135ACu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A135B8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A135C0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A135D8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A135F0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13600u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13610u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1366Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1367Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1368Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1369Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A136C4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A136E0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A136F0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A136FCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13718u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13724u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13740u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1374Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13768u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13774u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13790u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1379Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A137B8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A137C4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A137E0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A137ECu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1381Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13838u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13850u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13864u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1386Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13884u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13898u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A138ACu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A138C8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A138E0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A138F0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13900u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13954u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13964u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13974u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13984u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A1399Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A139A4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A139B0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A139BCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A139C4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A139DCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A139F4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13A08u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13A10u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13A28u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13A3Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13A50u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13A6Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13A84u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13A94u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13AA4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13B00u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13B10u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13B20u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13B30u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13B58u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13B74u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13B84u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13B90u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13BB0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13BBCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13BDCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13BE8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13C18u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13C34u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13C4Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13C54u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13C60u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13C6Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13C74u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13C8Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13CA4u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13CB8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13CC0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13CD8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13CECu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13D00u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13D1Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13D34u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13D44u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13D54u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13DA8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13DB8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13DC8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13DD8u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13DF0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13E04u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13E0Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13E24u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13E3Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13E54u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13E78u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13E80u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13E98u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13EB0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13EC0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13ED0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13F2Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13F3Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13F4Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13F5Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13F6Cu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13F94u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13FB0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13FC0u, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13FCCu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13FECu, &recomp_unit_0131, "recomp_unit_0131");
    runtime.register_function(0x08A13FF8u, &recomp_unit_0131, "recomp_unit_0131");
}
} // namespace psprecomp
