#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0189[4092] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0,
    7, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0,
    0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19,
    0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0,
    0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0,
    32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44,
    0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50,
    0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0,
    57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0,
    0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 69,
    0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0,
    0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 77, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0,
    0, 0, 81, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 87, 0, 0, 0, 0,
    0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0,
    0, 93, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 99, 0, 0, 0, 0, 0,
    0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0,
    105, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0,
    0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117,
    0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0,
    0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0,
    130, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0,
    136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142,
    0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148,
    0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0,
    155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0,
    0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 167,
    0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 171, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 177, 0, 0,
    0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 182, 0, 183, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0,
    0, 0, 186, 0, 0, 187, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 192, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 196, 0, 0,
    0, 197, 0, 198, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 201, 0, 202, 0, 0, 0, 0, 203, 0,
    0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 210,
    0, 0, 211, 0, 212, 0, 0, 0, 213, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 220, 0,
    0, 0, 0, 0, 221, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226,
    0, 0, 227, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 232, 0, 0, 0, 0, 233, 0, 234,
    0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240,
    0, 0, 0, 0, 0, 0, 0, 241, 0, 242, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 246, 0, 0,
    0, 0, 247, 0, 0, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 252, 0, 0, 253, 0, 254, 0, 0, 255, 0, 256, 0,
    257, 0, 0, 0, 258, 0, 0, 259, 0, 260, 0, 0, 0, 261, 262, 0, 263, 0, 0, 0, 264, 0, 0, 265, 0, 266, 0, 0, 0, 0, 0, 267,
    0, 268, 0, 0, 0, 269, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 272, 273, 0, 0, 274, 0, 275, 0, 276, 0, 0, 277, 0, 278, 0, 279,
    0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 282, 0, 0, 0, 0, 283, 0, 284, 0, 285, 0, 0, 0, 0, 0,
    0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0,
    291, 0, 292, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296,
    297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 0, 301,
    0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 304, 0, 305, 0, 306, 307, 0, 308, 0, 0, 0, 309, 0, 0, 310, 0, 311, 0, 0, 0, 0, 0,
    0, 312, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 317, 0, 0, 318, 0,
    0, 0, 0, 319, 0, 0, 320, 0, 321, 0, 322, 323, 0, 324, 0, 0, 0, 325, 0, 0, 326, 0, 327, 0, 0, 0, 0, 0, 0, 328, 329, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 0, 335,
    0, 0, 336, 0, 337, 0, 338, 339, 0, 340, 0, 0, 0, 341, 0, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 344, 345, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0,
    348, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 352, 0, 353, 0, 354, 0, 355, 0, 0, 356, 357, 0, 0, 0, 358, 0, 0, 359,
    0, 0, 360, 0, 0, 361, 0, 362, 0, 363, 0, 0, 364, 0, 365, 0, 0, 366, 0, 367, 0, 0, 368, 0, 369, 0, 0, 370, 0, 371, 0, 0,
    372, 373, 374, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 376, 377, 0, 0, 0, 0, 0, 378, 0, 0, 379, 0, 380, 0, 381, 382, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 386, 0, 387, 0, 388, 0, 0, 0, 0, 0,
    0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 390, 0, 391, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0,
    394, 0, 395, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 398, 0, 399, 0, 400, 0, 0, 0, 0, 0, 0,
    0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 402, 0, 403, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 406,
    0, 407, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 410, 0, 411, 0, 412, 0, 0, 0, 0, 0, 0, 0,
    0, 413, 0, 0, 0, 0, 0, 0, 0, 414, 0, 415, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418, 0,
    419, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 422, 0, 423, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0,
    425, 0, 0, 0, 0, 0, 0, 0, 426, 0, 427, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 430, 0, 431,
    0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 434, 0, 435, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 437,
    0, 0, 0, 0, 0, 0, 0, 438, 0, 439, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 442, 0, 443, 0,
    444, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 446, 0, 447, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0,
    0, 0, 0, 0, 0, 0, 450, 0, 451, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 454, 0, 455, 0, 456,
    0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 458, 0, 459, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0,
    0, 0, 0, 0, 0, 462, 0, 463, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 466, 0, 467, 0, 468, 0,
    0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 470, 0, 471, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0,
    0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 476, 0, 477, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0,
    0, 480, 0, 481, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 484, 0, 485, 0, 486, 0, 0, 0, 0, 0,
    0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 488, 0, 489, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0,
    492, 0, 493, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 496, 0, 497, 0, 498, 0, 0, 0, 0, 0, 0,
    0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 500, 0, 501, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 504,
    0, 505, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 508, 0, 509, 0, 510, 0, 0, 0, 0, 0, 0, 0,
    0, 511, 0, 0, 0, 0, 0, 0, 0, 512, 0, 513, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 516, 0,
    517, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 520, 0, 521, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0,
    523, 0, 0, 0, 0, 0, 0, 0, 524, 0, 525, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 528, 0, 529,
    0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 532, 0, 533, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 535,
    0, 0, 0, 0, 0, 0, 0, 536, 0, 537, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 540, 0, 541, 0,
    542, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 544, 0, 545, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0,
    0, 0, 0, 0, 0, 0, 548, 0, 549, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 552, 0, 553, 0, 554,
    0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 556, 0, 557, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0,
    0, 0, 0, 0, 0, 560, 0, 561, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 564, 0, 565, 0, 566, 0,
    0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 569, 570, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0,
    0, 0, 0, 0, 573, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 576, 0, 0,
    0, 0, 0, 0, 577, 0, 578, 0, 0, 0, 0, 0, 579, 0, 0, 580, 0, 581, 0, 582, 583, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0,
    0, 0, 585, 0, 0, 586, 0, 587, 0, 0, 588, 0, 0, 589, 0, 0, 590, 0, 591, 0, 592, 0, 0, 0, 593, 0, 0, 594, 0, 595, 0, 0,
    0, 596, 0, 597, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 600, 0, 601, 0, 0, 0, 0, 602,
    0, 0, 0, 603, 0, 0, 0, 0, 604, 0, 0, 0, 0, 605, 0, 0, 0, 0, 606, 0, 0, 0, 0, 607, 0, 0, 0, 608, 0, 0, 0, 0,
    609, 0, 0, 610, 0, 611, 0, 0, 0, 612, 0, 0, 613, 0, 614, 0, 0, 0, 0, 0, 615, 0, 616, 0, 0, 0, 617, 0, 0, 618, 0, 619,
    0, 0, 0, 0, 0, 620, 621, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 624, 0, 625, 0, 626, 0,
    0, 627, 0, 628, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 631, 632, 0, 0, 0, 0, 633, 0, 634, 0,
    635, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 637, 0, 638, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0,
    0, 0, 0, 0, 0, 0, 641, 0, 642, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 646, 0, 647, 0, 648, 0, 649, 0, 650, 0, 651, 652, 0, 0, 0, 0, 653, 0, 0, 0, 654, 0, 655, 0, 0, 0, 0,
    0, 0, 656, 0, 0, 657, 0, 658, 0, 0, 659, 0, 0, 660, 0, 0, 661, 0, 662, 0, 663, 0, 0, 0, 664, 0, 0, 665, 0, 666, 0, 0,
    0, 667, 0, 668, 669, 0, 0, 0, 0, 670, 0, 0, 0, 671, 0, 0, 672, 0, 673, 0, 0, 0, 0, 0, 674, 0, 675, 0, 0, 0, 676, 0,
    0, 677, 0, 678, 0, 0, 0, 0, 0, 679, 680, 0, 0, 681, 0, 682, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 685,
    0, 686, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 689, 0, 690, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0,
    0, 0, 0, 693, 0, 694, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 0, 0, 698,
    699, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0, 702, 0, 0, 0, 0, 703,
    0, 0, 704, 0, 0, 0, 0, 705, 0, 0, 706, 0, 707, 0, 708, 709, 0, 710, 0, 0, 0, 711, 0, 0, 712, 0, 713, 0, 0, 0, 0, 0,
    0, 714, 715, 0, 0, 0, 0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 717, 0, 718, 0, 0, 0, 0, 719, 0, 0, 720, 0,
    0, 0, 0, 721, 0, 0, 722, 0, 723, 0, 724, 725, 0, 726, 0, 0, 0, 727, 0, 0, 728, 0, 729, 0, 0, 0, 0, 0, 0, 730, 731, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 733, 0, 734, 0, 0, 0, 0, 735, 0, 0, 736, 0, 0, 0, 0, 737,
    0, 0, 738, 0, 739, 0, 740, 741, 0, 742, 0, 0, 0, 743, 0, 0, 744, 0, 745, 0, 0, 0, 0, 0, 0, 746, 747, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 748, 0, 749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 750,
    0, 0, 751, 0, 0, 0, 752, 0, 0, 753, 0, 0, 754, 0, 755, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 757, 0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 760, 0, 761, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 763, 764, 765, 766, 0, 0, 0, 0,
    0, 0, 0, 0, 767, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 769,
    0, 0, 0, 0, 0, 0, 0, 770, 0, 0, 771, 0, 0, 772, 0, 773, 774, 0, 0, 0, 0, 0, 0, 0, 775, 0, 0, 0, 776, 0, 0, 777,
    0, 0, 0, 0, 0, 0, 778, 0, 0, 779, 780, 0, 0, 0, 0, 0, 781, 0, 0, 0, 0, 0, 0, 782, 0, 0, 783, 0, 0, 784, 0, 0,
    785, 0, 0, 0, 0, 0, 0, 0, 786, 0, 787, 0, 0, 788, 0, 0, 789, 0, 790, 791, 0, 0, 0, 0, 792, 0, 0, 0, 0, 0, 793, 0,
    794, 0, 795, 0, 796, 0, 797, 0, 0, 0, 0, 798, 799, 0, 0, 0, 0, 0, 800, 0, 0, 0, 0, 0, 801, 0, 802, 0, 0, 803, 0, 0,
    804, 0, 0, 0, 0, 0, 0, 0, 805, 0, 806, 0, 0, 807, 0, 808, 0, 0, 0, 809, 0, 0, 0, 0, 810, 0, 811, 0, 812, 0, 0, 0,
    0, 813, 814, 0, 0, 0, 0, 815, 0, 0, 0, 0, 816, 0, 0, 817, 0, 0, 818, 0, 819, 820, 0, 0, 0, 0, 0, 0, 0, 821, 0, 0,
    0, 822, 0, 0, 823, 0, 824, 825, 0, 0, 0, 826, 0, 827, 828, 0, 0, 0, 829, 830, 0, 0, 831, 0, 0, 0, 0, 832,
};
void recomp_unit_0189_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AF8000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0189[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AF8000;
    case 2u: goto L_08AF800C;
    case 3u: goto L_08AF802C;
    case 4u: goto L_08AF8034;
    case 5u: goto L_08AF803C;
    case 6u: goto L_08AF8060;
    case 7u: goto L_08AF8080;
    case 8u: goto L_08AF8088;
    case 9u: goto L_08AF8090;
    case 10u: goto L_08AF80B4;
    case 11u: goto L_08AF80D4;
    case 12u: goto L_08AF80DC;
    case 13u: goto L_08AF80E4;
    case 14u: goto L_08AF8108;
    case 15u: goto L_08AF8128;
    case 16u: goto L_08AF8130;
    case 17u: goto L_08AF8138;
    case 18u: goto L_08AF815C;
    case 19u: goto L_08AF817C;
    case 20u: goto L_08AF8184;
    case 21u: goto L_08AF818C;
    case 22u: goto L_08AF81B0;
    case 23u: goto L_08AF81D0;
    case 24u: goto L_08AF81D8;
    case 25u: goto L_08AF81E0;
    case 26u: goto L_08AF8204;
    case 27u: goto L_08AF8224;
    case 28u: goto L_08AF822C;
    case 29u: goto L_08AF8234;
    case 30u: goto L_08AF8258;
    case 31u: goto L_08AF8278;
    case 32u: goto L_08AF8280;
    case 33u: goto L_08AF8288;
    case 34u: goto L_08AF82AC;
    case 35u: goto L_08AF82CC;
    case 36u: goto L_08AF82D4;
    case 37u: goto L_08AF82DC;
    case 38u: goto L_08AF8300;
    case 39u: goto L_08AF8320;
    case 40u: goto L_08AF8328;
    case 41u: goto L_08AF8330;
    case 42u: goto L_08AF8354;
    case 43u: goto L_08AF8374;
    case 44u: goto L_08AF837C;
    case 45u: goto L_08AF8384;
    case 46u: goto L_08AF83A8;
    case 47u: goto L_08AF83C8;
    case 48u: goto L_08AF83D0;
    case 49u: goto L_08AF83D8;
    case 50u: goto L_08AF83FC;
    case 51u: goto L_08AF841C;
    case 52u: goto L_08AF8424;
    case 53u: goto L_08AF842C;
    case 54u: goto L_08AF8450;
    case 55u: goto L_08AF8470;
    case 56u: goto L_08AF8478;
    case 57u: goto L_08AF8480;
    case 58u: goto L_08AF84A4;
    case 59u: goto L_08AF84C4;
    case 60u: goto L_08AF84CC;
    case 61u: goto L_08AF84D4;
    case 62u: goto L_08AF84F8;
    case 63u: goto L_08AF8518;
    case 64u: goto L_08AF8520;
    case 65u: goto L_08AF8528;
    case 66u: goto L_08AF854C;
    case 67u: goto L_08AF856C;
    case 68u: goto L_08AF8574;
    case 69u: goto L_08AF857C;
    case 70u: goto L_08AF85A0;
    case 71u: goto L_08AF85C0;
    case 72u: goto L_08AF85C8;
    case 73u: goto L_08AF85D0;
    case 74u: goto L_08AF85F4;
    case 75u: goto L_08AF8614;
    case 76u: goto L_08AF8628;
    case 77u: goto L_08AF8634;
    case 78u: goto L_08AF863C;
    case 79u: goto L_08AF8644;
    case 80u: goto L_08AF8668;
    case 81u: goto L_08AF8688;
    case 82u: goto L_08AF8690;
    case 83u: goto L_08AF8698;
    case 84u: goto L_08AF86BC;
    case 85u: goto L_08AF86DC;
    case 86u: goto L_08AF86E4;
    case 87u: goto L_08AF86EC;
    case 88u: goto L_08AF8710;
    case 89u: goto L_08AF8730;
    case 90u: goto L_08AF8738;
    case 91u: goto L_08AF8740;
    case 92u: goto L_08AF8764;
    case 93u: goto L_08AF8784;
    case 94u: goto L_08AF878C;
    case 95u: goto L_08AF8794;
    case 96u: goto L_08AF87B8;
    case 97u: goto L_08AF87D8;
    case 98u: goto L_08AF87E0;
    case 99u: goto L_08AF87E8;
    case 100u: goto L_08AF880C;
    case 101u: goto L_08AF882C;
    case 102u: goto L_08AF8834;
    case 103u: goto L_08AF883C;
    case 104u: goto L_08AF8860;
    case 105u: goto L_08AF8880;
    case 106u: goto L_08AF8888;
    case 107u: goto L_08AF8890;
    case 108u: goto L_08AF88B4;
    case 109u: goto L_08AF88D4;
    case 110u: goto L_08AF88DC;
    case 111u: goto L_08AF88E4;
    case 112u: goto L_08AF8908;
    case 113u: goto L_08AF8928;
    case 114u: goto L_08AF8930;
    case 115u: goto L_08AF8938;
    case 116u: goto L_08AF895C;
    case 117u: goto L_08AF897C;
    case 118u: goto L_08AF8984;
    case 119u: goto L_08AF898C;
    case 120u: goto L_08AF89B0;
    case 121u: goto L_08AF89D0;
    case 122u: goto L_08AF89D8;
    case 123u: goto L_08AF89E0;
    case 124u: goto L_08AF8A04;
    case 125u: goto L_08AF8A24;
    case 126u: goto L_08AF8A2C;
    case 127u: goto L_08AF8A34;
    case 128u: goto L_08AF8A58;
    case 129u: goto L_08AF8A78;
    case 130u: goto L_08AF8A80;
    case 131u: goto L_08AF8A88;
    case 132u: goto L_08AF8AAC;
    case 133u: goto L_08AF8ACC;
    case 134u: goto L_08AF8AD4;
    case 135u: goto L_08AF8ADC;
    case 136u: goto L_08AF8B00;
    case 137u: goto L_08AF8B20;
    case 138u: goto L_08AF8B28;
    case 139u: goto L_08AF8B30;
    case 140u: goto L_08AF8B54;
    case 141u: goto L_08AF8B74;
    case 142u: goto L_08AF8B7C;
    case 143u: goto L_08AF8B84;
    case 144u: goto L_08AF8BA8;
    case 145u: goto L_08AF8BC8;
    case 146u: goto L_08AF8BD0;
    case 147u: goto L_08AF8BD8;
    case 148u: goto L_08AF8BFC;
    case 149u: goto L_08AF8C1C;
    case 150u: goto L_08AF8C24;
    case 151u: goto L_08AF8C2C;
    case 152u: goto L_08AF8C50;
    case 153u: goto L_08AF8C70;
    case 154u: goto L_08AF8C78;
    case 155u: goto L_08AF8C80;
    case 156u: goto L_08AF8CA4;
    case 157u: goto L_08AF8CC4;
    case 158u: goto L_08AF8CCC;
    case 159u: goto L_08AF8CD4;
    case 160u: goto L_08AF8CF8;
    case 161u: goto L_08AF8D18;
    case 162u: goto L_08AF8D20;
    case 163u: goto L_08AF8D28;
    case 164u: goto L_08AF8D4C;
    case 165u: goto L_08AF8D6C;
    case 166u: goto L_08AF8D74;
    case 167u: goto L_08AF8D7C;
    case 168u: goto L_08AF8DA0;
    case 169u: goto L_08AF8DC0;
    case 170u: goto L_08AF8DDC;
    case 171u: goto L_08AF8DE0;
    case 172u: goto L_08AF8E08;
    case 173u: goto L_08AF8E80;
    case 174u: goto L_08AF8E9C;
    case 175u: goto L_08AF8EA8;
    case 176u: goto L_08AF8EF0;
    case 177u: goto L_08AF8EF4;
    case 178u: goto L_08AF8F10;
    case 179u: goto L_08AF8F18;
    case 180u: goto L_08AF8F30;
    case 181u: goto L_08AF8F3C;
    case 182u: goto L_08AF8F44;
    case 183u: goto L_08AF8F4C;
    case 184u: goto L_08AF8F50;
    case 185u: goto L_08AF8F6C;
    case 186u: goto L_08AF8F88;
    case 187u: goto L_08AF8F94;
    case 188u: goto L_08AF8F9C;
    case 189u: goto L_08AF8FA8;
    case 190u: goto L_08AF8FB4;
    case 191u: goto L_08AF8FC0;
    case 192u: goto L_08AF8FC8;
    case 193u: goto L_08AF8FD0;
    case 194u: goto L_08AF8FE0;
    case 195u: goto L_08AF8FEC;
    case 196u: goto L_08AF8FF4;
    case 197u: goto L_08AF9004;
    case 198u: goto L_08AF900C;
    case 199u: goto L_08AF9010;
    case 200u: goto L_08AF9058;
    case 201u: goto L_08AF905C;
    case 202u: goto L_08AF9064;
    case 203u: goto L_08AF9078;
    case 204u: goto L_08AF9088;
    case 205u: goto L_08AF909C;
    case 206u: goto L_08AF90B0;
    case 207u: goto L_08AF90C4;
    case 208u: goto L_08AF90D8;
    case 209u: goto L_08AF90E8;
    case 210u: goto L_08AF90FC;
    case 211u: goto L_08AF9108;
    case 212u: goto L_08AF9110;
    case 213u: goto L_08AF9120;
    case 214u: goto L_08AF912C;
    case 215u: goto L_08AF9134;
    case 216u: goto L_08AF914C;
    case 217u: goto L_08AF9154;
    case 218u: goto L_08AF9164;
    case 219u: goto L_08AF9170;
    case 220u: goto L_08AF9178;
    case 221u: goto L_08AF9190;
    case 222u: goto L_08AF9194;
    case 223u: goto L_08AF91A4;
    case 224u: goto L_08AF91CC;
    case 225u: goto L_08AF91F4;
    case 226u: goto L_08AF91FC;
    case 227u: goto L_08AF9208;
    case 228u: goto L_08AF9210;
    case 229u: goto L_08AF9218;
    case 230u: goto L_08AF923C;
    case 231u: goto L_08AF925C;
    case 232u: goto L_08AF9260;
    case 233u: goto L_08AF9274;
    case 234u: goto L_08AF927C;
    case 235u: goto L_08AF9284;
    case 236u: goto L_08AF92A8;
    case 237u: goto L_08AF92C8;
    case 238u: goto L_08AF92D0;
    case 239u: goto L_08AF92D8;
    case 240u: goto L_08AF92FC;
    case 241u: goto L_08AF931C;
    case 242u: goto L_08AF9324;
    case 243u: goto L_08AF932C;
    case 244u: goto L_08AF9350;
    case 245u: goto L_08AF9370;
    case 246u: goto L_08AF9374;
    case 247u: goto L_08AF9388;
    case 248u: goto L_08AF9398;
    case 249u: goto L_08AF93A0;
    case 250u: goto L_08AF93BC;
    case 251u: goto L_08AF93C8;
    case 252u: goto L_08AF93D0;
    case 253u: goto L_08AF93DC;
    case 254u: goto L_08AF93E4;
    case 255u: goto L_08AF93F0;
    case 256u: goto L_08AF93F8;
    case 257u: goto L_08AF9400;
    case 258u: goto L_08AF9410;
    case 259u: goto L_08AF941C;
    case 260u: goto L_08AF9424;
    case 261u: goto L_08AF9434;
    case 262u: goto L_08AF9438;
    case 263u: goto L_08AF9440;
    case 264u: goto L_08AF9450;
    case 265u: goto L_08AF945C;
    case 266u: goto L_08AF9464;
    case 267u: goto L_08AF947C;
    case 268u: goto L_08AF9484;
    case 269u: goto L_08AF9494;
    case 270u: goto L_08AF94A0;
    case 271u: goto L_08AF94A8;
    case 272u: goto L_08AF94C0;
    case 273u: goto L_08AF94C4;
    case 274u: goto L_08AF94D0;
    case 275u: goto L_08AF94D8;
    case 276u: goto L_08AF94E0;
    case 277u: goto L_08AF94EC;
    case 278u: goto L_08AF94F4;
    case 279u: goto L_08AF94FC;
    case 280u: goto L_08AF9520;
    case 281u: goto L_08AF9540;
    case 282u: goto L_08AF9544;
    case 283u: goto L_08AF9558;
    case 284u: goto L_08AF9560;
    case 285u: goto L_08AF9568;
    case 286u: goto L_08AF958C;
    case 287u: goto L_08AF95AC;
    case 288u: goto L_08AF95B4;
    case 289u: goto L_08AF95BC;
    case 290u: goto L_08AF95E0;
    case 291u: goto L_08AF9600;
    case 292u: goto L_08AF9608;
    case 293u: goto L_08AF9610;
    case 294u: goto L_08AF9634;
    case 295u: goto L_08AF9654;
    case 296u: goto L_08AF967C;
    case 297u: goto L_08AF9680;
    case 298u: goto L_08AF96C0;
    case 299u: goto L_08AF9760;
    case 300u: goto L_08AF9768;
    case 301u: goto L_08AF977C;
    case 302u: goto L_08AF9788;
    case 303u: goto L_08AF979C;
    case 304u: goto L_08AF97A8;
    case 305u: goto L_08AF97B0;
    case 306u: goto L_08AF97B8;
    case 307u: goto L_08AF97BC;
    case 308u: goto L_08AF97C4;
    case 309u: goto L_08AF97D4;
    case 310u: goto L_08AF97E0;
    case 311u: goto L_08AF97E8;
    case 312u: goto L_08AF9804;
    case 313u: goto L_08AF9808;
    case 314u: goto L_08AF9830;
    case 315u: goto L_08AF98D0;
    case 316u: goto L_08AF98D8;
    case 317u: goto L_08AF98EC;
    case 318u: goto L_08AF98F8;
    case 319u: goto L_08AF990C;
    case 320u: goto L_08AF9918;
    case 321u: goto L_08AF9920;
    case 322u: goto L_08AF9928;
    case 323u: goto L_08AF992C;
    case 324u: goto L_08AF9934;
    case 325u: goto L_08AF9944;
    case 326u: goto L_08AF9950;
    case 327u: goto L_08AF9958;
    case 328u: goto L_08AF9974;
    case 329u: goto L_08AF9978;
    case 330u: goto L_08AF99A0;
    case 331u: goto L_08AF9A40;
    case 332u: goto L_08AF9A48;
    case 333u: goto L_08AF9A5C;
    case 334u: goto L_08AF9A68;
    case 335u: goto L_08AF9A7C;
    case 336u: goto L_08AF9A88;
    case 337u: goto L_08AF9A90;
    case 338u: goto L_08AF9A98;
    case 339u: goto L_08AF9A9C;
    case 340u: goto L_08AF9AA4;
    case 341u: goto L_08AF9AB4;
    case 342u: goto L_08AF9AC0;
    case 343u: goto L_08AF9AC8;
    case 344u: goto L_08AF9AE4;
    case 345u: goto L_08AF9AE8;
    case 346u: goto L_08AF9B10;
    case 347u: goto L_08AF9B78;
    case 348u: goto L_08AF9B80;
    case 349u: goto L_08AF9B88;
    case 350u: goto L_08AF9B9C;
    case 351u: goto L_08AF9BB0;
    case 352u: goto L_08AF9BB8;
    case 353u: goto L_08AF9BC0;
    case 354u: goto L_08AF9BC8;
    case 355u: goto L_08AF9BD0;
    case 356u: goto L_08AF9BDC;
    case 357u: goto L_08AF9BE0;
    case 358u: goto L_08AF9BF0;
    case 359u: goto L_08AF9BFC;
    case 360u: goto L_08AF9C08;
    case 361u: goto L_08AF9C14;
    case 362u: goto L_08AF9C1C;
    case 363u: goto L_08AF9C24;
    case 364u: goto L_08AF9C30;
    case 365u: goto L_08AF9C38;
    case 366u: goto L_08AF9C44;
    case 367u: goto L_08AF9C4C;
    case 368u: goto L_08AF9C58;
    case 369u: goto L_08AF9C60;
    case 370u: goto L_08AF9C6C;
    case 371u: goto L_08AF9C74;
    case 372u: goto L_08AF9C80;
    case 373u: goto L_08AF9C84;
    case 374u: goto L_08AF9C88;
    case 375u: goto L_08AF9CAC;
    case 376u: goto L_08AF9D20;
    case 377u: goto L_08AF9D24;
    case 378u: goto L_08AF9D3C;
    case 379u: goto L_08AF9D48;
    case 380u: goto L_08AF9D50;
    case 381u: goto L_08AF9D58;
    case 382u: goto L_08AF9D5C;
    case 383u: goto L_08AF9D8C;
    case 384u: goto L_08AF9D94;
    case 385u: goto L_08AF9DB8;
    case 386u: goto L_08AF9DD8;
    case 387u: goto L_08AF9DE0;
    case 388u: goto L_08AF9DE8;
    case 389u: goto L_08AF9E0C;
    case 390u: goto L_08AF9E2C;
    case 391u: goto L_08AF9E34;
    case 392u: goto L_08AF9E3C;
    case 393u: goto L_08AF9E60;
    case 394u: goto L_08AF9E80;
    case 395u: goto L_08AF9E88;
    case 396u: goto L_08AF9E90;
    case 397u: goto L_08AF9EB4;
    case 398u: goto L_08AF9ED4;
    case 399u: goto L_08AF9EDC;
    case 400u: goto L_08AF9EE4;
    case 401u: goto L_08AF9F08;
    case 402u: goto L_08AF9F28;
    case 403u: goto L_08AF9F30;
    case 404u: goto L_08AF9F38;
    case 405u: goto L_08AF9F5C;
    case 406u: goto L_08AF9F7C;
    case 407u: goto L_08AF9F84;
    case 408u: goto L_08AF9F8C;
    case 409u: goto L_08AF9FB0;
    case 410u: goto L_08AF9FD0;
    case 411u: goto L_08AF9FD8;
    case 412u: goto L_08AF9FE0;
    case 413u: goto L_08AFA004;
    case 414u: goto L_08AFA024;
    case 415u: goto L_08AFA02C;
    case 416u: goto L_08AFA034;
    case 417u: goto L_08AFA058;
    case 418u: goto L_08AFA078;
    case 419u: goto L_08AFA080;
    case 420u: goto L_08AFA088;
    case 421u: goto L_08AFA0AC;
    case 422u: goto L_08AFA0CC;
    case 423u: goto L_08AFA0D4;
    case 424u: goto L_08AFA0DC;
    case 425u: goto L_08AFA100;
    case 426u: goto L_08AFA120;
    case 427u: goto L_08AFA128;
    case 428u: goto L_08AFA130;
    case 429u: goto L_08AFA154;
    case 430u: goto L_08AFA174;
    case 431u: goto L_08AFA17C;
    case 432u: goto L_08AFA184;
    case 433u: goto L_08AFA1A8;
    case 434u: goto L_08AFA1C8;
    case 435u: goto L_08AFA1D0;
    case 436u: goto L_08AFA1D8;
    case 437u: goto L_08AFA1FC;
    case 438u: goto L_08AFA21C;
    case 439u: goto L_08AFA224;
    case 440u: goto L_08AFA22C;
    case 441u: goto L_08AFA250;
    case 442u: goto L_08AFA270;
    case 443u: goto L_08AFA278;
    case 444u: goto L_08AFA280;
    case 445u: goto L_08AFA2A4;
    case 446u: goto L_08AFA2C4;
    case 447u: goto L_08AFA2CC;
    case 448u: goto L_08AFA2D4;
    case 449u: goto L_08AFA2F8;
    case 450u: goto L_08AFA318;
    case 451u: goto L_08AFA320;
    case 452u: goto L_08AFA328;
    case 453u: goto L_08AFA34C;
    case 454u: goto L_08AFA36C;
    case 455u: goto L_08AFA374;
    case 456u: goto L_08AFA37C;
    case 457u: goto L_08AFA3A0;
    case 458u: goto L_08AFA3C0;
    case 459u: goto L_08AFA3C8;
    case 460u: goto L_08AFA3D0;
    case 461u: goto L_08AFA3F4;
    case 462u: goto L_08AFA414;
    case 463u: goto L_08AFA41C;
    case 464u: goto L_08AFA424;
    case 465u: goto L_08AFA448;
    case 466u: goto L_08AFA468;
    case 467u: goto L_08AFA470;
    case 468u: goto L_08AFA478;
    case 469u: goto L_08AFA49C;
    case 470u: goto L_08AFA4BC;
    case 471u: goto L_08AFA4C4;
    case 472u: goto L_08AFA4CC;
    case 473u: goto L_08AFA4F0;
    case 474u: goto L_08AFA510;
    case 475u: goto L_08AFA524;
    case 476u: goto L_08AFA530;
    case 477u: goto L_08AFA538;
    case 478u: goto L_08AFA540;
    case 479u: goto L_08AFA564;
    case 480u: goto L_08AFA584;
    case 481u: goto L_08AFA58C;
    case 482u: goto L_08AFA594;
    case 483u: goto L_08AFA5B8;
    case 484u: goto L_08AFA5D8;
    case 485u: goto L_08AFA5E0;
    case 486u: goto L_08AFA5E8;
    case 487u: goto L_08AFA60C;
    case 488u: goto L_08AFA62C;
    case 489u: goto L_08AFA634;
    case 490u: goto L_08AFA63C;
    case 491u: goto L_08AFA660;
    case 492u: goto L_08AFA680;
    case 493u: goto L_08AFA688;
    case 494u: goto L_08AFA690;
    case 495u: goto L_08AFA6B4;
    case 496u: goto L_08AFA6D4;
    case 497u: goto L_08AFA6DC;
    case 498u: goto L_08AFA6E4;
    case 499u: goto L_08AFA708;
    case 500u: goto L_08AFA728;
    case 501u: goto L_08AFA730;
    case 502u: goto L_08AFA738;
    case 503u: goto L_08AFA75C;
    case 504u: goto L_08AFA77C;
    case 505u: goto L_08AFA784;
    case 506u: goto L_08AFA78C;
    case 507u: goto L_08AFA7B0;
    case 508u: goto L_08AFA7D0;
    case 509u: goto L_08AFA7D8;
    case 510u: goto L_08AFA7E0;
    case 511u: goto L_08AFA804;
    case 512u: goto L_08AFA824;
    case 513u: goto L_08AFA82C;
    case 514u: goto L_08AFA834;
    case 515u: goto L_08AFA858;
    case 516u: goto L_08AFA878;
    case 517u: goto L_08AFA880;
    case 518u: goto L_08AFA888;
    case 519u: goto L_08AFA8AC;
    case 520u: goto L_08AFA8CC;
    case 521u: goto L_08AFA8D4;
    case 522u: goto L_08AFA8DC;
    case 523u: goto L_08AFA900;
    case 524u: goto L_08AFA920;
    case 525u: goto L_08AFA928;
    case 526u: goto L_08AFA930;
    case 527u: goto L_08AFA954;
    case 528u: goto L_08AFA974;
    case 529u: goto L_08AFA97C;
    case 530u: goto L_08AFA984;
    case 531u: goto L_08AFA9A8;
    case 532u: goto L_08AFA9C8;
    case 533u: goto L_08AFA9D0;
    case 534u: goto L_08AFA9D8;
    case 535u: goto L_08AFA9FC;
    case 536u: goto L_08AFAA1C;
    case 537u: goto L_08AFAA24;
    case 538u: goto L_08AFAA2C;
    case 539u: goto L_08AFAA50;
    case 540u: goto L_08AFAA70;
    case 541u: goto L_08AFAA78;
    case 542u: goto L_08AFAA80;
    case 543u: goto L_08AFAAA4;
    case 544u: goto L_08AFAAC4;
    case 545u: goto L_08AFAACC;
    case 546u: goto L_08AFAAD4;
    case 547u: goto L_08AFAAF8;
    case 548u: goto L_08AFAB18;
    case 549u: goto L_08AFAB20;
    case 550u: goto L_08AFAB28;
    case 551u: goto L_08AFAB4C;
    case 552u: goto L_08AFAB6C;
    case 553u: goto L_08AFAB74;
    case 554u: goto L_08AFAB7C;
    case 555u: goto L_08AFABA0;
    case 556u: goto L_08AFABC0;
    case 557u: goto L_08AFABC8;
    case 558u: goto L_08AFABD0;
    case 559u: goto L_08AFABF4;
    case 560u: goto L_08AFAC14;
    case 561u: goto L_08AFAC1C;
    case 562u: goto L_08AFAC24;
    case 563u: goto L_08AFAC48;
    case 564u: goto L_08AFAC68;
    case 565u: goto L_08AFAC70;
    case 566u: goto L_08AFAC78;
    case 567u: goto L_08AFAC9C;
    case 568u: goto L_08AFACBC;
    case 569u: goto L_08AFACD8;
    case 570u: goto L_08AFACDC;
    case 571u: goto L_08AFAD04;
    case 572u: goto L_08AFAD74;
    case 573u: goto L_08AFAD90;
    case 574u: goto L_08AFAD9C;
    case 575u: goto L_08AFADF0;
    case 576u: goto L_08AFADF4;
    case 577u: goto L_08AFAE10;
    case 578u: goto L_08AFAE18;
    case 579u: goto L_08AFAE30;
    case 580u: goto L_08AFAE3C;
    case 581u: goto L_08AFAE44;
    case 582u: goto L_08AFAE4C;
    case 583u: goto L_08AFAE50;
    case 584u: goto L_08AFAE6C;
    case 585u: goto L_08AFAE88;
    case 586u: goto L_08AFAE94;
    case 587u: goto L_08AFAE9C;
    case 588u: goto L_08AFAEA8;
    case 589u: goto L_08AFAEB4;
    case 590u: goto L_08AFAEC0;
    case 591u: goto L_08AFAEC8;
    case 592u: goto L_08AFAED0;
    case 593u: goto L_08AFAEE0;
    case 594u: goto L_08AFAEEC;
    case 595u: goto L_08AFAEF4;
    case 596u: goto L_08AFAF04;
    case 597u: goto L_08AFAF0C;
    case 598u: goto L_08AFAF10;
    case 599u: goto L_08AFAF5C;
    case 600u: goto L_08AFAF60;
    case 601u: goto L_08AFAF68;
    case 602u: goto L_08AFAF7C;
    case 603u: goto L_08AFAF8C;
    case 604u: goto L_08AFAFA0;
    case 605u: goto L_08AFAFB4;
    case 606u: goto L_08AFAFC8;
    case 607u: goto L_08AFAFDC;
    case 608u: goto L_08AFAFEC;
    case 609u: goto L_08AFB000;
    case 610u: goto L_08AFB00C;
    case 611u: goto L_08AFB014;
    case 612u: goto L_08AFB024;
    case 613u: goto L_08AFB030;
    case 614u: goto L_08AFB038;
    case 615u: goto L_08AFB050;
    case 616u: goto L_08AFB058;
    case 617u: goto L_08AFB068;
    case 618u: goto L_08AFB074;
    case 619u: goto L_08AFB07C;
    case 620u: goto L_08AFB094;
    case 621u: goto L_08AFB098;
    case 622u: goto L_08AFB0A8;
    case 623u: goto L_08AFB0E0;
    case 624u: goto L_08AFB0E8;
    case 625u: goto L_08AFB0F0;
    case 626u: goto L_08AFB0F8;
    case 627u: goto L_08AFB104;
    case 628u: goto L_08AFB10C;
    case 629u: goto L_08AFB114;
    case 630u: goto L_08AFB138;
    case 631u: goto L_08AFB158;
    case 632u: goto L_08AFB15C;
    case 633u: goto L_08AFB170;
    case 634u: goto L_08AFB178;
    case 635u: goto L_08AFB180;
    case 636u: goto L_08AFB1A4;
    case 637u: goto L_08AFB1C4;
    case 638u: goto L_08AFB1CC;
    case 639u: goto L_08AFB1D4;
    case 640u: goto L_08AFB1F8;
    case 641u: goto L_08AFB218;
    case 642u: goto L_08AFB220;
    case 643u: goto L_08AFB228;
    case 644u: goto L_08AFB24C;
    case 645u: goto L_08AFB26C;
    case 646u: goto L_08AFB294;
    case 647u: goto L_08AFB29C;
    case 648u: goto L_08AFB2A4;
    case 649u: goto L_08AFB2AC;
    case 650u: goto L_08AFB2B4;
    case 651u: goto L_08AFB2BC;
    case 652u: goto L_08AFB2C0;
    case 653u: goto L_08AFB2D4;
    case 654u: goto L_08AFB2E4;
    case 655u: goto L_08AFB2EC;
    case 656u: goto L_08AFB308;
    case 657u: goto L_08AFB314;
    case 658u: goto L_08AFB31C;
    case 659u: goto L_08AFB328;
    case 660u: goto L_08AFB334;
    case 661u: goto L_08AFB340;
    case 662u: goto L_08AFB348;
    case 663u: goto L_08AFB350;
    case 664u: goto L_08AFB360;
    case 665u: goto L_08AFB36C;
    case 666u: goto L_08AFB374;
    case 667u: goto L_08AFB384;
    case 668u: goto L_08AFB38C;
    case 669u: goto L_08AFB390;
    case 670u: goto L_08AFB3A4;
    case 671u: goto L_08AFB3B4;
    case 672u: goto L_08AFB3C0;
    case 673u: goto L_08AFB3C8;
    case 674u: goto L_08AFB3E0;
    case 675u: goto L_08AFB3E8;
    case 676u: goto L_08AFB3F8;
    case 677u: goto L_08AFB404;
    case 678u: goto L_08AFB40C;
    case 679u: goto L_08AFB424;
    case 680u: goto L_08AFB428;
    case 681u: goto L_08AFB434;
    case 682u: goto L_08AFB43C;
    case 683u: goto L_08AFB444;
    case 684u: goto L_08AFB468;
    case 685u: goto L_08AFB47C;
    case 686u: goto L_08AFB484;
    case 687u: goto L_08AFB48C;
    case 688u: goto L_08AFB4B0;
    case 689u: goto L_08AFB4C4;
    case 690u: goto L_08AFB4CC;
    case 691u: goto L_08AFB4D4;
    case 692u: goto L_08AFB4F8;
    case 693u: goto L_08AFB50C;
    case 694u: goto L_08AFB514;
    case 695u: goto L_08AFB51C;
    case 696u: goto L_08AFB540;
    case 697u: goto L_08AFB554;
    case 698u: goto L_08AFB57C;
    case 699u: goto L_08AFB580;
    case 700u: goto L_08AFB5C0;
    case 701u: goto L_08AFB660;
    case 702u: goto L_08AFB668;
    case 703u: goto L_08AFB67C;
    case 704u: goto L_08AFB688;
    case 705u: goto L_08AFB69C;
    case 706u: goto L_08AFB6A8;
    case 707u: goto L_08AFB6B0;
    case 708u: goto L_08AFB6B8;
    case 709u: goto L_08AFB6BC;
    case 710u: goto L_08AFB6C4;
    case 711u: goto L_08AFB6D4;
    case 712u: goto L_08AFB6E0;
    case 713u: goto L_08AFB6E8;
    case 714u: goto L_08AFB704;
    case 715u: goto L_08AFB708;
    case 716u: goto L_08AFB730;
    case 717u: goto L_08AFB7D0;
    case 718u: goto L_08AFB7D8;
    case 719u: goto L_08AFB7EC;
    case 720u: goto L_08AFB7F8;
    case 721u: goto L_08AFB80C;
    case 722u: goto L_08AFB818;
    case 723u: goto L_08AFB820;
    case 724u: goto L_08AFB828;
    case 725u: goto L_08AFB82C;
    case 726u: goto L_08AFB834;
    case 727u: goto L_08AFB844;
    case 728u: goto L_08AFB850;
    case 729u: goto L_08AFB858;
    case 730u: goto L_08AFB874;
    case 731u: goto L_08AFB878;
    case 732u: goto L_08AFB8A0;
    case 733u: goto L_08AFB940;
    case 734u: goto L_08AFB948;
    case 735u: goto L_08AFB95C;
    case 736u: goto L_08AFB968;
    case 737u: goto L_08AFB97C;
    case 738u: goto L_08AFB988;
    case 739u: goto L_08AFB990;
    case 740u: goto L_08AFB998;
    case 741u: goto L_08AFB99C;
    case 742u: goto L_08AFB9A4;
    case 743u: goto L_08AFB9B4;
    case 744u: goto L_08AFB9C0;
    case 745u: goto L_08AFB9C8;
    case 746u: goto L_08AFB9E4;
    case 747u: goto L_08AFB9E8;
    case 748u: goto L_08AFBA10;
    case 749u: goto L_08AFBA18;
    case 750u: goto L_08AFBA7C;
    case 751u: goto L_08AFBA88;
    case 752u: goto L_08AFBA98;
    case 753u: goto L_08AFBAA4;
    case 754u: goto L_08AFBAB0;
    case 755u: goto L_08AFBAB8;
    case 756u: goto L_08AFBAC0;
    case 757u: goto L_08AFBB04;
    case 758u: goto L_08AFBB0C;
    case 759u: goto L_08AFBB34;
    case 760u: goto L_08AFBB70;
    case 761u: goto L_08AFBB78;
    case 762u: goto L_08AFBBA0;
    case 763u: goto L_08AFBBE0;
    case 764u: goto L_08AFBBE4;
    case 765u: goto L_08AFBBE8;
    case 766u: goto L_08AFBBEC;
    case 767u: goto L_08AFBC10;
    case 768u: goto L_08AFBC4C;
    case 769u: goto L_08AFBC7C;
    case 770u: goto L_08AFBC9C;
    case 771u: goto L_08AFBCA8;
    case 772u: goto L_08AFBCB4;
    case 773u: goto L_08AFBCBC;
    case 774u: goto L_08AFBCC0;
    case 775u: goto L_08AFBCE0;
    case 776u: goto L_08AFBCF0;
    case 777u: goto L_08AFBCFC;
    case 778u: goto L_08AFBD18;
    case 779u: goto L_08AFBD24;
    case 780u: goto L_08AFBD28;
    case 781u: goto L_08AFBD40;
    case 782u: goto L_08AFBD5C;
    case 783u: goto L_08AFBD68;
    case 784u: goto L_08AFBD74;
    case 785u: goto L_08AFBD80;
    case 786u: goto L_08AFBDA0;
    case 787u: goto L_08AFBDA8;
    case 788u: goto L_08AFBDB4;
    case 789u: goto L_08AFBDC0;
    case 790u: goto L_08AFBDC8;
    case 791u: goto L_08AFBDCC;
    case 792u: goto L_08AFBDE0;
    case 793u: goto L_08AFBDF8;
    case 794u: goto L_08AFBE00;
    case 795u: goto L_08AFBE08;
    case 796u: goto L_08AFBE10;
    case 797u: goto L_08AFBE18;
    case 798u: goto L_08AFBE2C;
    case 799u: goto L_08AFBE30;
    case 800u: goto L_08AFBE48;
    case 801u: goto L_08AFBE60;
    case 802u: goto L_08AFBE68;
    case 803u: goto L_08AFBE74;
    case 804u: goto L_08AFBE80;
    case 805u: goto L_08AFBEA0;
    case 806u: goto L_08AFBEA8;
    case 807u: goto L_08AFBEB4;
    case 808u: goto L_08AFBEBC;
    case 809u: goto L_08AFBECC;
    case 810u: goto L_08AFBEE0;
    case 811u: goto L_08AFBEE8;
    case 812u: goto L_08AFBEF0;
    case 813u: goto L_08AFBF04;
    case 814u: goto L_08AFBF08;
    case 815u: goto L_08AFBF1C;
    case 816u: goto L_08AFBF30;
    case 817u: goto L_08AFBF3C;
    case 818u: goto L_08AFBF48;
    case 819u: goto L_08AFBF50;
    case 820u: goto L_08AFBF54;
    case 821u: goto L_08AFBF74;
    case 822u: goto L_08AFBF84;
    case 823u: goto L_08AFBF90;
    case 824u: goto L_08AFBF98;
    case 825u: goto L_08AFBF9C;
    case 826u: goto L_08AFBFAC;
    case 827u: goto L_08AFBFB4;
    case 828u: goto L_08AFBFB8;
    case 829u: goto L_08AFBFC8;
    case 830u: goto L_08AFBFCC;
    case 831u: goto L_08AFBFD8;
    case 832u: goto L_08AFBFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AF8000:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF800Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF800Cu) goto L_08AF800C;
    return;
L_08AF800C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF802Cu);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF802Cu) goto L_08AF802C;
    return;
L_08AF802C:
    ctx.set_gpr(31, 0x08AF8034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF8034u) goto L_08AF8034;
    return;
L_08AF8034:
    ctx.set_gpr(31, 0x08AF803Cu);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF803Cu) goto L_08AF803C;
    return;
L_08AF803C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-696)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF8060u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF8060u) goto L_08AF8060;
    return;
L_08AF8060:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF8080u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF8080u) goto L_08AF8080;
    return;
L_08AF8080:
    ctx.set_gpr(31, 0x08AF8088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF8088u) goto L_08AF8088;
    return;
L_08AF8088:
    ctx.set_gpr(31, 0x08AF8090u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF8090u) goto L_08AF8090;
    return;
L_08AF8090:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-672)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF80B4u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF80B4u) goto L_08AF80B4;
    return;
L_08AF80B4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF80D4u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF80D4u) goto L_08AF80D4;
    return;
L_08AF80D4:
    ctx.set_gpr(31, 0x08AF80DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF80DCu) goto L_08AF80DC;
    return;
L_08AF80DC:
    ctx.set_gpr(31, 0x08AF80E4u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF80E4u) goto L_08AF80E4;
    return;
L_08AF80E4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-648)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF8108u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF8108u) goto L_08AF8108;
    return;
L_08AF8108:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF8128u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF8128u) goto L_08AF8128;
    return;
L_08AF8128:
    ctx.set_gpr(31, 0x08AF8130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF8130u) goto L_08AF8130;
    return;
L_08AF8130:
    ctx.set_gpr(31, 0x08AF8138u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF8138u) goto L_08AF8138;
    return;
L_08AF8138:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-624)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF815Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF815Cu) goto L_08AF815C;
    return;
L_08AF815C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF817Cu);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF817Cu) goto L_08AF817C;
    return;
L_08AF817C:
    ctx.set_gpr(31, 0x08AF8184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF8184u) goto L_08AF8184;
    return;
L_08AF8184:
    ctx.set_gpr(31, 0x08AF818Cu);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF818Cu) goto L_08AF818C;
    return;
L_08AF818C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1464)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF81B0u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF81B0u) goto L_08AF81B0;
    return;
L_08AF81B0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF81D0u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF81D0u) goto L_08AF81D0;
    return;
L_08AF81D0:
    ctx.set_gpr(31, 0x08AF81D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF81D8u) goto L_08AF81D8;
    return;
L_08AF81D8:
    ctx.set_gpr(31, 0x08AF81E0u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF81E0u) goto L_08AF81E0;
    return;
L_08AF81E0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1440)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF8204u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF8204u) goto L_08AF8204;
    return;
L_08AF8204:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF8224u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF8224u) goto L_08AF8224;
    return;
L_08AF8224:
    ctx.set_gpr(31, 0x08AF822Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF822Cu) goto L_08AF822C;
    return;
L_08AF822C:
    ctx.set_gpr(31, 0x08AF8234u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF8234u) goto L_08AF8234;
    return;
L_08AF8234:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1416)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF8258u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF8258u) goto L_08AF8258;
    return;
L_08AF8258:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF8278u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF8278u) goto L_08AF8278;
    return;
L_08AF8278:
    ctx.set_gpr(31, 0x08AF8280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF8280u) goto L_08AF8280;
    return;
L_08AF8280:
    ctx.set_gpr(31, 0x08AF8288u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF8288u) goto L_08AF8288;
    return;
L_08AF8288:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-888)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF82ACu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF82ACu) goto L_08AF82AC;
    return;
L_08AF82AC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF82CCu);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF82CCu) goto L_08AF82CC;
    return;
L_08AF82CC:
    ctx.set_gpr(31, 0x08AF82D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF82D4u) goto L_08AF82D4;
    return;
L_08AF82D4:
    ctx.set_gpr(31, 0x08AF82DCu);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF82DCu) goto L_08AF82DC;
    return;
L_08AF82DC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-864)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF8300u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF8300u) goto L_08AF8300;
    return;
L_08AF8300:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF8320u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF8320u) goto L_08AF8320;
    return;
L_08AF8320:
    ctx.set_gpr(31, 0x08AF8328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF8328u) goto L_08AF8328;
    return;
L_08AF8328:
    ctx.set_gpr(31, 0x08AF8330u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF8330u) goto L_08AF8330;
    return;
L_08AF8330:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-840)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF8354u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF8354u) goto L_08AF8354;
    return;
L_08AF8354:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF8374u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF8374u) goto L_08AF8374;
    return;
L_08AF8374:
    ctx.set_gpr(31, 0x08AF837Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF837Cu) goto L_08AF837C;
    return;
L_08AF837C:
    ctx.set_gpr(31, 0x08AF8384u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF8384u) goto L_08AF8384;
    return;
L_08AF8384:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1728)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF83A8u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF83A8u) goto L_08AF83A8;
    return;
L_08AF83A8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF83C8u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF83C8u) goto L_08AF83C8;
    return;
L_08AF83C8:
    ctx.set_gpr(31, 0x08AF83D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF83D0u) goto L_08AF83D0;
    return;
L_08AF83D0:
    ctx.set_gpr(31, 0x08AF83D8u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF83D8u) goto L_08AF83D8;
    return;
L_08AF83D8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1704)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF83FCu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF83FCu) goto L_08AF83FC;
    return;
L_08AF83FC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF841Cu);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF841Cu) goto L_08AF841C;
    return;
L_08AF841C:
    ctx.set_gpr(31, 0x08AF8424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF8424u) goto L_08AF8424;
    return;
L_08AF8424:
    ctx.set_gpr(31, 0x08AF842Cu);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF842Cu) goto L_08AF842C;
    return;
L_08AF842C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1680)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF8450u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF8450u) goto L_08AF8450;
    return;
L_08AF8450:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF8470u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF8470u) goto L_08AF8470;
    return;
L_08AF8470:
    ctx.set_gpr(31, 0x08AF8478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF8478u) goto L_08AF8478;
    return;
L_08AF8478:
    ctx.set_gpr(31, 0x08AF8480u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF8480u) goto L_08AF8480;
    return;
L_08AF8480:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1656)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF84A4u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF84A4u) goto L_08AF84A4;
    return;
L_08AF84A4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF84C4u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF84C4u) goto L_08AF84C4;
    return;
L_08AF84C4:
    ctx.set_gpr(31, 0x08AF84CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF84CCu) goto L_08AF84CC;
    return;
L_08AF84CC:
    ctx.set_gpr(31, 0x08AF84D4u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF84D4u) goto L_08AF84D4;
    return;
L_08AF84D4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1632)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF84F8u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF84F8u) goto L_08AF84F8;
    return;
L_08AF84F8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF8518u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF8518u) goto L_08AF8518;
    return;
L_08AF8518:
    ctx.set_gpr(31, 0x08AF8520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF8520u) goto L_08AF8520;
    return;
L_08AF8520:
    ctx.set_gpr(31, 0x08AF8528u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF8528u) goto L_08AF8528;
    return;
L_08AF8528:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1608)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF854Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF854Cu) goto L_08AF854C;
    return;
L_08AF854C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF856Cu);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF856Cu) goto L_08AF856C;
    return;
L_08AF856C:
    ctx.set_gpr(31, 0x08AF8574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF8574u) goto L_08AF8574;
    return;
L_08AF8574:
    ctx.set_gpr(31, 0x08AF857Cu);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF857Cu) goto L_08AF857C;
    return;
L_08AF857C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1584)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF85A0u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF85A0u) goto L_08AF85A0;
    return;
L_08AF85A0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF85C0u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF85C0u) goto L_08AF85C0;
    return;
L_08AF85C0:
    ctx.set_gpr(31, 0x08AF85C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF85C8u) goto L_08AF85C8;
    return;
L_08AF85C8:
    ctx.set_gpr(31, 0x08AF85D0u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF85D0u) goto L_08AF85D0;
    return;
L_08AF85D0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1560)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF85F4u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF85F4u) goto L_08AF85F4;
    return;
L_08AF85F4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF8614u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF8614u) goto L_08AF8614;
    return;
L_08AF8614:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[20])) || ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF8DDC;
      }
      goto L_08AF8628;
    }
L_08AF8628:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF8DDC;
      }
      goto L_08AF8634;
    }
L_08AF8634:
    ctx.set_gpr(31, 0x08AF863Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF863Cu) goto L_08AF863C;
    return;
L_08AF863C:
    ctx.set_gpr(31, 0x08AF8644u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF8644u) goto L_08AF8644;
    return;
L_08AF8644:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-816)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF8668u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF8668u) goto L_08AF8668;
    return;
L_08AF8668:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF8688u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF8688u) goto L_08AF8688;
    return;
L_08AF8688:
    ctx.set_gpr(31, 0x08AF8690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF8690u) goto L_08AF8690;
    return;
L_08AF8690:
    ctx.set_gpr(31, 0x08AF8698u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF8698u) goto L_08AF8698;
    return;
L_08AF8698:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-792)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF86BCu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF86BCu) goto L_08AF86BC;
    return;
L_08AF86BC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF86DCu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF86DCu) goto L_08AF86DC;
    return;
L_08AF86DC:
    ctx.set_gpr(31, 0x08AF86E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF86E4u) goto L_08AF86E4;
    return;
L_08AF86E4:
    ctx.set_gpr(31, 0x08AF86ECu);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF86ECu) goto L_08AF86EC;
    return;
L_08AF86EC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-768)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF8710u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF8710u) goto L_08AF8710;
    return;
L_08AF8710:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF8730u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF8730u) goto L_08AF8730;
    return;
L_08AF8730:
    ctx.set_gpr(31, 0x08AF8738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF8738u) goto L_08AF8738;
    return;
L_08AF8738:
    ctx.set_gpr(31, 0x08AF8740u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF8740u) goto L_08AF8740;
    return;
L_08AF8740:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-744)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF8764u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF8764u) goto L_08AF8764;
    return;
L_08AF8764:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF8784u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF8784u) goto L_08AF8784;
    return;
L_08AF8784:
    ctx.set_gpr(31, 0x08AF878Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF878Cu) goto L_08AF878C;
    return;
L_08AF878C:
    ctx.set_gpr(31, 0x08AF8794u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF8794u) goto L_08AF8794;
    return;
L_08AF8794:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-720)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF87B8u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF87B8u) goto L_08AF87B8;
    return;
L_08AF87B8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF87D8u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF87D8u) goto L_08AF87D8;
    return;
L_08AF87D8:
    ctx.set_gpr(31, 0x08AF87E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF87E0u) goto L_08AF87E0;
    return;
L_08AF87E0:
    ctx.set_gpr(31, 0x08AF87E8u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF87E8u) goto L_08AF87E8;
    return;
L_08AF87E8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-696)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF880Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF880Cu) goto L_08AF880C;
    return;
L_08AF880C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF882Cu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF882Cu) goto L_08AF882C;
    return;
L_08AF882C:
    ctx.set_gpr(31, 0x08AF8834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF8834u) goto L_08AF8834;
    return;
L_08AF8834:
    ctx.set_gpr(31, 0x08AF883Cu);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF883Cu) goto L_08AF883C;
    return;
L_08AF883C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-672)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF8860u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF8860u) goto L_08AF8860;
    return;
L_08AF8860:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF8880u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF8880u) goto L_08AF8880;
    return;
L_08AF8880:
    ctx.set_gpr(31, 0x08AF8888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF8888u) goto L_08AF8888;
    return;
L_08AF8888:
    ctx.set_gpr(31, 0x08AF8890u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF8890u) goto L_08AF8890;
    return;
L_08AF8890:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-648)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF88B4u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF88B4u) goto L_08AF88B4;
    return;
L_08AF88B4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF88D4u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF88D4u) goto L_08AF88D4;
    return;
L_08AF88D4:
    ctx.set_gpr(31, 0x08AF88DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF88DCu) goto L_08AF88DC;
    return;
L_08AF88DC:
    ctx.set_gpr(31, 0x08AF88E4u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF88E4u) goto L_08AF88E4;
    return;
L_08AF88E4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-624)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF8908u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF8908u) goto L_08AF8908;
    return;
L_08AF8908:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF8928u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF8928u) goto L_08AF8928;
    return;
L_08AF8928:
    ctx.set_gpr(31, 0x08AF8930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF8930u) goto L_08AF8930;
    return;
L_08AF8930:
    ctx.set_gpr(31, 0x08AF8938u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF8938u) goto L_08AF8938;
    return;
L_08AF8938:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1464)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF895Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF895Cu) goto L_08AF895C;
    return;
L_08AF895C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF897Cu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF897Cu) goto L_08AF897C;
    return;
L_08AF897C:
    ctx.set_gpr(31, 0x08AF8984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF8984u) goto L_08AF8984;
    return;
L_08AF8984:
    ctx.set_gpr(31, 0x08AF898Cu);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF898Cu) goto L_08AF898C;
    return;
L_08AF898C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1440)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF89B0u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF89B0u) goto L_08AF89B0;
    return;
L_08AF89B0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF89D0u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF89D0u) goto L_08AF89D0;
    return;
L_08AF89D0:
    ctx.set_gpr(31, 0x08AF89D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF89D8u) goto L_08AF89D8;
    return;
L_08AF89D8:
    ctx.set_gpr(31, 0x08AF89E0u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF89E0u) goto L_08AF89E0;
    return;
L_08AF89E0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1416)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF8A04u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF8A04u) goto L_08AF8A04;
    return;
L_08AF8A04:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF8A24u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF8A24u) goto L_08AF8A24;
    return;
L_08AF8A24:
    ctx.set_gpr(31, 0x08AF8A2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF8A2Cu) goto L_08AF8A2C;
    return;
L_08AF8A2C:
    ctx.set_gpr(31, 0x08AF8A34u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF8A34u) goto L_08AF8A34;
    return;
L_08AF8A34:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-888)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF8A58u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF8A58u) goto L_08AF8A58;
    return;
L_08AF8A58:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF8A78u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF8A78u) goto L_08AF8A78;
    return;
L_08AF8A78:
    ctx.set_gpr(31, 0x08AF8A80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF8A80u) goto L_08AF8A80;
    return;
L_08AF8A80:
    ctx.set_gpr(31, 0x08AF8A88u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF8A88u) goto L_08AF8A88;
    return;
L_08AF8A88:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-864)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF8AACu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF8AACu) goto L_08AF8AAC;
    return;
L_08AF8AAC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF8ACCu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF8ACCu) goto L_08AF8ACC;
    return;
L_08AF8ACC:
    ctx.set_gpr(31, 0x08AF8AD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF8AD4u) goto L_08AF8AD4;
    return;
L_08AF8AD4:
    ctx.set_gpr(31, 0x08AF8ADCu);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF8ADCu) goto L_08AF8ADC;
    return;
L_08AF8ADC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-840)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF8B00u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF8B00u) goto L_08AF8B00;
    return;
L_08AF8B00:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF8B20u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF8B20u) goto L_08AF8B20;
    return;
L_08AF8B20:
    ctx.set_gpr(31, 0x08AF8B28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF8B28u) goto L_08AF8B28;
    return;
L_08AF8B28:
    ctx.set_gpr(31, 0x08AF8B30u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF8B30u) goto L_08AF8B30;
    return;
L_08AF8B30:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1728)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF8B54u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF8B54u) goto L_08AF8B54;
    return;
L_08AF8B54:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF8B74u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF8B74u) goto L_08AF8B74;
    return;
L_08AF8B74:
    ctx.set_gpr(31, 0x08AF8B7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF8B7Cu) goto L_08AF8B7C;
    return;
L_08AF8B7C:
    ctx.set_gpr(31, 0x08AF8B84u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF8B84u) goto L_08AF8B84;
    return;
L_08AF8B84:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1704)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF8BA8u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF8BA8u) goto L_08AF8BA8;
    return;
L_08AF8BA8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF8BC8u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF8BC8u) goto L_08AF8BC8;
    return;
L_08AF8BC8:
    ctx.set_gpr(31, 0x08AF8BD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF8BD0u) goto L_08AF8BD0;
    return;
L_08AF8BD0:
    ctx.set_gpr(31, 0x08AF8BD8u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF8BD8u) goto L_08AF8BD8;
    return;
L_08AF8BD8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1680)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF8BFCu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF8BFCu) goto L_08AF8BFC;
    return;
L_08AF8BFC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF8C1Cu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF8C1Cu) goto L_08AF8C1C;
    return;
L_08AF8C1C:
    ctx.set_gpr(31, 0x08AF8C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF8C24u) goto L_08AF8C24;
    return;
L_08AF8C24:
    ctx.set_gpr(31, 0x08AF8C2Cu);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF8C2Cu) goto L_08AF8C2C;
    return;
L_08AF8C2C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1656)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF8C50u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF8C50u) goto L_08AF8C50;
    return;
L_08AF8C50:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF8C70u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF8C70u) goto L_08AF8C70;
    return;
L_08AF8C70:
    ctx.set_gpr(31, 0x08AF8C78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF8C78u) goto L_08AF8C78;
    return;
L_08AF8C78:
    ctx.set_gpr(31, 0x08AF8C80u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF8C80u) goto L_08AF8C80;
    return;
L_08AF8C80:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1632)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF8CA4u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF8CA4u) goto L_08AF8CA4;
    return;
L_08AF8CA4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF8CC4u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF8CC4u) goto L_08AF8CC4;
    return;
L_08AF8CC4:
    ctx.set_gpr(31, 0x08AF8CCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF8CCCu) goto L_08AF8CCC;
    return;
L_08AF8CCC:
    ctx.set_gpr(31, 0x08AF8CD4u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF8CD4u) goto L_08AF8CD4;
    return;
L_08AF8CD4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1608)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF8CF8u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF8CF8u) goto L_08AF8CF8;
    return;
L_08AF8CF8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF8D18u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF8D18u) goto L_08AF8D18;
    return;
L_08AF8D18:
    ctx.set_gpr(31, 0x08AF8D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF8D20u) goto L_08AF8D20;
    return;
L_08AF8D20:
    ctx.set_gpr(31, 0x08AF8D28u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF8D28u) goto L_08AF8D28;
    return;
L_08AF8D28:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1584)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF8D4Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF8D4Cu) goto L_08AF8D4C;
    return;
L_08AF8D4C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF8D6Cu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF8D6Cu) goto L_08AF8D6C;
    return;
L_08AF8D6C:
    ctx.set_gpr(31, 0x08AF8D74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF8D74u) goto L_08AF8D74;
    return;
L_08AF8D74:
    ctx.set_gpr(31, 0x08AF8D7Cu);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF8D7Cu) goto L_08AF8D7C;
    return;
L_08AF8D7C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1560)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF8DA0u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF8DA0u) goto L_08AF8DA0;
    return;
L_08AF8DA0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF8DC0u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF8DC0u) goto L_08AF8DC0;
    return;
L_08AF8DC0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(308), ctx.gpr[3]);
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    goto L_08AF8DDC;
L_08AF8DDC:
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
    goto L_08AF8DE0;
L_08AF8DE0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8E08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[5] << 5u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(16, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(22, ctx.gpr[4] + 0u);
    ctx.set_gpr(23, ctx.gpr[2] << 3u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, ctx.gpr[23] + ctx.gpr[22]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(292)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08AF8E80u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF8E80u) goto L_08AF8E80;
    return;
L_08AF8E80:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[23] + ctx.gpr[22]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(284)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08AF8E9Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08AF8E9Cu) goto L_08AF8E9C;
    return;
L_08AF8E9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x08AF8EA8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 888u, 0x08A7F20Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF8EA8u) goto L_08AF8EA8;
    return;
L_08AF8EA8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(2, 16040u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 62915u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16076u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2896)));
    ctx.set_gpr(3, ctx.gpr[23] + ctx.gpr[22]);
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(260));
    ctx.fpr[23] = ctx.fpr[2] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(260)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[23])) || ctx.fpr[0] <= ctx.fpr[23]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF8EF4;
      }
      goto L_08AF8EF0;
    }
L_08AF8EF0:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    goto L_08AF8EF4;
L_08AF8EF4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(3, ctx.gpr[23] + ctx.gpr[22]);
        goto L_08AF8F18;
    }
    goto L_08AF8F10;
L_08AF8F10:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    ctx.set_gpr(3, ctx.gpr[23] + ctx.gpr[22]);
    goto L_08AF8F18;
L_08AF8F18:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(256));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(256)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    if (ctx.gpr[4] == ctx.gpr[2]) {
    ctx.set_gpr(17, 2226u << 16u);
        goto L_08AF9398;
    }
    goto L_08AF8F30;
L_08AF8F30:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AF8F50;
      }
      goto L_08AF8F3C;
    }
L_08AF8F3C:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
        goto L_08AF8F4C;
    }
    goto L_08AF8F44;
L_08AF8F44:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_08AF9680;
      }
      goto L_08AF8F4C;
    }
L_08AF8F4C:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08AF8F50;
L_08AF8F50:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2896)));
    ctx.set_gpr(18, 2226u << 16u);
    ctx.set_gpr(17, 2226u << 16u);
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-2568));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-2880));
    goto L_08AF8F6C;
L_08AF8F6C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF8F88u);
    ctx.set_gpr(20, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF8F88u) goto L_08AF8F88;
    return;
L_08AF8F88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF8F94u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF8F94u) goto L_08AF8F94;
    return;
L_08AF8F94:
    ctx.set_gpr(31, 0x08AF8F9Cu);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF8F9Cu) goto L_08AF8F9C;
    return;
L_08AF8F9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF8FA8u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF8FA8u) goto L_08AF8FA8;
    return;
L_08AF8FA8:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF8FB4u);
    ctx.set_gpr(23, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF8FB4u) goto L_08AF8FB4;
    return;
L_08AF8FB4:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08AF8FC0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 170u, 0x08B00C18u>(ctx, &aot_mem) && ctx.pc == 0x08AF8FC0u) goto L_08AF8FC0;
    return;
L_08AF8FC0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 15820u << 16u);
        goto L_08AF9010;
    }
    goto L_08AF8FC8;
L_08AF8FC8:
    ctx.set_gpr(31, 0x08AF8FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF8FD0u) goto L_08AF8FD0;
    return;
L_08AF8FD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF8FE0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AF8FE0u) goto L_08AF8FE0;
    return;
L_08AF8FE0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AF900C;
      }
      goto L_08AF8FEC;
    }
L_08AF8FEC:
    ctx.set_gpr(31, 0x08AF8FF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF8FF4u) goto L_08AF8FF4;
    return;
L_08AF8FF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF9004u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 485u, 0x08AD2310u>(ctx, &aot_mem) && ctx.pc == 0x08AF9004u) goto L_08AF9004;
    return;
L_08AF9004:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(23, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AF900C;
L_08AF900C:
    ctx.set_gpr(2, 15820u << 16u);
    goto L_08AF9010;
L_08AF9010:
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 16040u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | 62915u);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.fpr[2] = ctx.fpr[20] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[2];
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AF905C;
      }
      goto L_08AF9058;
    }
L_08AF9058:
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    goto L_08AF905C;
L_08AF905C:
    ctx.set_gpr(31, 0x08AF9064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF9064u) goto L_08AF9064;
    return;
L_08AF9064:
    ctx.set_gpr(7, 16392u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08AF9078u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x08AF9078u) goto L_08AF9078;
    return;
L_08AF9078:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(30, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08AF9088u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF9088u) goto L_08AF9088;
    return;
L_08AF9088:
    ctx.set_gpr(7, 16392u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08AF909Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x08AF909Cu) goto L_08AF909C;
    return;
L_08AF909C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF90B0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF90B0u) goto L_08AF90B0;
    return;
L_08AF90B0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[23]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF90C4u);
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF90C4u) goto L_08AF90C4;
    return;
L_08AF90C4:
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF90D8u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF90D8u) goto L_08AF90D8;
    return;
L_08AF90D8:
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF90E8u);
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF90E8u) goto L_08AF90E8;
    return;
L_08AF90E8:
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF90FCu);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08AF90FCu) goto L_08AF90FC;
    return;
L_08AF90FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF9108u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08AF9108u) goto L_08AF9108;
    return;
L_08AF9108:
    ctx.set_gpr(31, 0x08AF9110u);
    ctx.set_fpr_bits(22, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF9110u) goto L_08AF9110;
    return;
L_08AF9110:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF9120u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AF9120u) goto L_08AF9120;
    return;
L_08AF9120:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AF914C;
      }
      goto L_08AF912C;
    }
L_08AF912C:
    ctx.set_gpr(31, 0x08AF9134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF9134u) goto L_08AF9134;
    return;
L_08AF9134:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(31, 0x08AF914Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AF914Cu) goto L_08AF914C;
    return;
L_08AF914C:
    ctx.set_gpr(31, 0x08AF9154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF9154u) goto L_08AF9154;
    return;
L_08AF9154:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF9164u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AF9164u) goto L_08AF9164;
    return;
L_08AF9164:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08AF9194;
    }
    goto L_08AF9170;
L_08AF9170:
    ctx.set_gpr(31, 0x08AF9178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF9178u) goto L_08AF9178;
    return;
L_08AF9178:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x08AF9190u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AF9190u) goto L_08AF9190;
    return;
L_08AF9190:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08AF9194;
L_08AF9194:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < 9 ? 1u : 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AF8F6C;
      }
      goto L_08AF91A4;
    }
L_08AF91A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[23] - ctx.fpr[1];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[2]) || std::isnan(ctx.fpr[0])) || ctx.fpr[2] < ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
        goto L_08AF9374;
    }
    goto L_08AF91CC;
L_08AF91CC:
    ctx.fpr[0] = ctx.fpr[23] - ctx.fpr[2];
    ctx.set_gpr(2, 17279u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF91F4u);
    ctx.set_gpr(17, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 88u, 0x08AF4568u>(ctx, &aot_mem) && ctx.pc == 0x08AF91F4u) goto L_08AF91F4;
    return;
L_08AF91F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF92C8;
      }
      goto L_08AF91FC;
    }
L_08AF91FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
        goto L_08AF9260;
    }
    goto L_08AF9208;
L_08AF9208:
    ctx.set_gpr(31, 0x08AF9210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF9210u) goto L_08AF9210;
    return;
L_08AF9210:
    ctx.set_gpr(31, 0x08AF9218u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF9218u) goto L_08AF9218;
    return;
L_08AF9218:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1992)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF923Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF923Cu) goto L_08AF923C;
    return;
L_08AF923C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF925Cu);
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF925Cu) goto L_08AF925C;
    return;
L_08AF925C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    goto L_08AF9260;
L_08AF9260:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF92C8;
      }
      goto L_08AF9274;
    }
L_08AF9274:
    ctx.set_gpr(31, 0x08AF927Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF927Cu) goto L_08AF927C;
    return;
L_08AF927C:
    ctx.set_gpr(31, 0x08AF9284u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF9284u) goto L_08AF9284;
    return;
L_08AF9284:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1968)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF92A8u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF92A8u) goto L_08AF92A8;
    return;
L_08AF92A8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF92C8u);
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF92C8u) goto L_08AF92C8;
    return;
L_08AF92C8:
    ctx.set_gpr(31, 0x08AF92D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF92D0u) goto L_08AF92D0;
    return;
L_08AF92D0:
    ctx.set_gpr(31, 0x08AF92D8u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF92D8u) goto L_08AF92D8;
    return;
L_08AF92D8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1944)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF92FCu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF92FCu) goto L_08AF92FC;
    return;
L_08AF92FC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF931Cu);
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF931Cu) goto L_08AF931C;
    return;
L_08AF931C:
    ctx.set_gpr(31, 0x08AF9324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF9324u) goto L_08AF9324;
    return;
L_08AF9324:
    ctx.set_gpr(31, 0x08AF932Cu);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF932Cu) goto L_08AF932C;
    return;
L_08AF932C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1920)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF9350u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF9350u) goto L_08AF9350;
    return;
L_08AF9350:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF9370u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF9370u) goto L_08AF9370;
    return;
L_08AF9370:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    goto L_08AF9374;
L_08AF9374:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[23])) || ctx.fpr[0] < ctx.fpr[23]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF967C;
      }
      goto L_08AF9388;
    }
L_08AF9388:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AF967C;
      }
      goto L_08AF9398;
    }
L_08AF9398:
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-2568));
    goto L_08AF93A0;
L_08AF93A0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF93BCu);
    ctx.set_gpr(20, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF93BCu) goto L_08AF93BC;
    return;
L_08AF93BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF93C8u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF93C8u) goto L_08AF93C8;
    return;
L_08AF93C8:
    ctx.set_gpr(31, 0x08AF93D0u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF93D0u) goto L_08AF93D0;
    return;
L_08AF93D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AF93DCu);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF93DCu) goto L_08AF93DC;
    return;
L_08AF93DC:
    ctx.set_gpr(31, 0x08AF93E4u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF93E4u) goto L_08AF93E4;
    return;
L_08AF93E4:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08AF93F0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 170u, 0x08B00C18u>(ctx, &aot_mem) && ctx.pc == 0x08AF93F0u) goto L_08AF93F0;
    return;
L_08AF93F0:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
        goto L_08AF9438;
    }
    goto L_08AF93F8;
L_08AF93F8:
    ctx.set_gpr(31, 0x08AF9400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF9400u) goto L_08AF9400;
    return;
L_08AF9400:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF9410u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AF9410u) goto L_08AF9410;
    return;
L_08AF9410:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AF9434;
      }
      goto L_08AF941C;
    }
L_08AF941C:
    ctx.set_gpr(31, 0x08AF9424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF9424u) goto L_08AF9424;
    return;
L_08AF9424:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF9434u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 485u, 0x08AD2310u>(ctx, &aot_mem) && ctx.pc == 0x08AF9434u) goto L_08AF9434;
    return;
L_08AF9434:
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    goto L_08AF9438;
L_08AF9438:
    ctx.set_gpr(31, 0x08AF9440u);
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF9440u) goto L_08AF9440;
    return;
L_08AF9440:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF9450u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AF9450u) goto L_08AF9450;
    return;
L_08AF9450:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AF947C;
      }
      goto L_08AF945C;
    }
L_08AF945C:
    ctx.set_gpr(31, 0x08AF9464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF9464u) goto L_08AF9464;
    return;
L_08AF9464:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x08AF947Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AF947Cu) goto L_08AF947C;
    return;
L_08AF947C:
    ctx.set_gpr(31, 0x08AF9484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF9484u) goto L_08AF9484;
    return;
L_08AF9484:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AF9494u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AF9494u) goto L_08AF9494;
    return;
L_08AF9494:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08AF94C4;
    }
    goto L_08AF94A0;
L_08AF94A0:
    ctx.set_gpr(31, 0x08AF94A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF94A8u) goto L_08AF94A8;
    return;
L_08AF94A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08AF94C0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AF94C0u) goto L_08AF94C0;
    return;
L_08AF94C0:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08AF94C4;
L_08AF94C4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08AF93A0;
      }
      goto L_08AF94D0;
    }
L_08AF94D0:
    ctx.set_gpr(31, 0x08AF94D8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 88u, 0x08AF4568u>(ctx, &aot_mem) && ctx.pc == 0x08AF94D8u) goto L_08AF94D8;
    return;
L_08AF94D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF95AC;
      }
      goto L_08AF94E0;
    }
L_08AF94E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
        goto L_08AF9544;
    }
    goto L_08AF94EC;
L_08AF94EC:
    ctx.set_gpr(31, 0x08AF94F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF94F4u) goto L_08AF94F4;
    return;
L_08AF94F4:
    ctx.set_gpr(31, 0x08AF94FCu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF94FCu) goto L_08AF94FC;
    return;
L_08AF94FC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1992)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF9520u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF9520u) goto L_08AF9520;
    return;
L_08AF9520:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF9540u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF9540u) goto L_08AF9540;
    return;
L_08AF9540:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    goto L_08AF9544;
L_08AF9544:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF95AC;
      }
      goto L_08AF9558;
    }
L_08AF9558:
    ctx.set_gpr(31, 0x08AF9560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF9560u) goto L_08AF9560;
    return;
L_08AF9560:
    ctx.set_gpr(31, 0x08AF9568u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF9568u) goto L_08AF9568;
    return;
L_08AF9568:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1968)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF958Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF958Cu) goto L_08AF958C;
    return;
L_08AF958C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF95ACu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF95ACu) goto L_08AF95AC;
    return;
L_08AF95AC:
    ctx.set_gpr(31, 0x08AF95B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF95B4u) goto L_08AF95B4;
    return;
L_08AF95B4:
    ctx.set_gpr(31, 0x08AF95BCu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF95BCu) goto L_08AF95BC;
    return;
L_08AF95BC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1944)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF95E0u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF95E0u) goto L_08AF95E0;
    return;
L_08AF95E0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF9600u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF9600u) goto L_08AF9600;
    return;
L_08AF9600:
    ctx.set_gpr(31, 0x08AF9608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF9608u) goto L_08AF9608;
    return;
L_08AF9608:
    ctx.set_gpr(31, 0x08AF9610u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF9610u) goto L_08AF9610;
    return;
L_08AF9610:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1920)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF9634u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF9634u) goto L_08AF9634;
    return;
L_08AF9634:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF9654u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF9654u) goto L_08AF9654;
    return;
L_08AF9654:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[23] + ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(308), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08AF967C;
L_08AF967C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    goto L_08AF9680;
L_08AF9680:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF96C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(18, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2892)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.fpr[3] = ctx.fpr[2] / ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(260)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, ctx.gpr[3] + static_cast<std::uint32_t>(260));
    ctx.set_gpr(2, 17204u << 16u);
    ctx.set_gpr(3, 17302u << 16u);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[2] / ctx.fpr[1];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[21] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[21])) || ctx.fpr[20] < ctx.fpr[21]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.set_gpr(19, 0u + 0u);
      if (branch_taken) {
          goto L_08AF9768;
      }
      goto L_08AF9760;
    }
L_08AF9760:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_fpr_bits(20, ctx.fpr_bits(21));
    goto L_08AF9768;
L_08AF9768:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[20]);
        goto L_08AF9788;
    }
    goto L_08AF977C;
L_08AF977C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_fpr_bits(20, ctx.fpr_bits(21));
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[20]);
    goto L_08AF9788;
L_08AF9788:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(256)));
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(256));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
        goto L_08AF97E0;
    }
    goto L_08AF979C;
L_08AF979C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_08AF97BC;
    }
    goto L_08AF97A8;
L_08AF97A8:
    if (ctx.gpr[3] == 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
        goto L_08AF97B8;
    }
    goto L_08AF97B0;
L_08AF97B0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
      if (branch_taken) {
          goto L_08AF9808;
      }
      goto L_08AF97B8;
    }
L_08AF97B8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08AF97BC;
L_08AF97BC:
    ctx.set_gpr(31, 0x08AF97C4u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 176u, 0x08B00C50u>(ctx, &aot_mem) && ctx.pc == 0x08AF97C4u) goto L_08AF97C4;
    return;
L_08AF97C4:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[21])) || ctx.fpr[20] < ctx.fpr[21]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF9804;
      }
      goto L_08AF97D4;
    }
L_08AF97D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF9804;
      }
      goto L_08AF97E0;
    }
L_08AF97E0:
    ctx.set_gpr(31, 0x08AF97E8u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 176u, 0x08B00C50u>(ctx, &aot_mem) && ctx.pc == 0x08AF97E8u) goto L_08AF97E8;
    return;
L_08AF97E8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(308), ctx.gpr[3]);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    goto L_08AF9804;
L_08AF9804:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    goto L_08AF9808;
L_08AF9808:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9830:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(18, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2888)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.fpr[3] = ctx.fpr[2] / ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(260)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, ctx.gpr[3] + static_cast<std::uint32_t>(260));
    ctx.set_gpr(2, 17204u << 16u);
    ctx.set_gpr(3, 17302u << 16u);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[2] / ctx.fpr[1];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[21] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[21])) || ctx.fpr[20] < ctx.fpr[21]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.set_gpr(19, 0u + 0u);
      if (branch_taken) {
          goto L_08AF98D8;
      }
      goto L_08AF98D0;
    }
L_08AF98D0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_fpr_bits(20, ctx.fpr_bits(21));
    goto L_08AF98D8;
L_08AF98D8:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[20]);
        goto L_08AF98F8;
    }
    goto L_08AF98EC;
L_08AF98EC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_fpr_bits(20, ctx.fpr_bits(21));
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[20]);
    goto L_08AF98F8;
L_08AF98F8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(256)));
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(256));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
        goto L_08AF9950;
    }
    goto L_08AF990C;
L_08AF990C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_08AF992C;
    }
    goto L_08AF9918;
L_08AF9918:
    if (ctx.gpr[3] == 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
        goto L_08AF9928;
    }
    goto L_08AF9920;
L_08AF9920:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
      if (branch_taken) {
          goto L_08AF9978;
      }
      goto L_08AF9928;
    }
L_08AF9928:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08AF992C;
L_08AF992C:
    ctx.set_gpr(31, 0x08AF9934u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 328u, 0x08B01A84u>(ctx, &aot_mem) && ctx.pc == 0x08AF9934u) goto L_08AF9934;
    return;
L_08AF9934:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[21])) || ctx.fpr[20] < ctx.fpr[21]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF9974;
      }
      goto L_08AF9944;
    }
L_08AF9944:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF9974;
      }
      goto L_08AF9950;
    }
L_08AF9950:
    ctx.set_gpr(31, 0x08AF9958u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 328u, 0x08B01A84u>(ctx, &aot_mem) && ctx.pc == 0x08AF9958u) goto L_08AF9958;
    return;
L_08AF9958:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(308), ctx.gpr[3]);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    goto L_08AF9974;
L_08AF9974:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    goto L_08AF9978;
L_08AF9978:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF99A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(18, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2884)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.fpr[3] = ctx.fpr[2] / ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(260)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, ctx.gpr[3] + static_cast<std::uint32_t>(260));
    ctx.set_gpr(2, 17204u << 16u);
    ctx.set_gpr(3, 17302u << 16u);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[2] / ctx.fpr[1];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[21] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[21])) || ctx.fpr[20] < ctx.fpr[21]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.set_gpr(19, 0u + 0u);
      if (branch_taken) {
          goto L_08AF9A48;
      }
      goto L_08AF9A40;
    }
L_08AF9A40:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_fpr_bits(20, ctx.fpr_bits(21));
    goto L_08AF9A48;
L_08AF9A48:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[20]);
        goto L_08AF9A68;
    }
    goto L_08AF9A5C;
L_08AF9A5C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_fpr_bits(20, ctx.fpr_bits(21));
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[20]);
    goto L_08AF9A68;
L_08AF9A68:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(256)));
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(256));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
        goto L_08AF9AC0;
    }
    goto L_08AF9A7C;
L_08AF9A7C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_08AF9A9C;
    }
    goto L_08AF9A88;
L_08AF9A88:
    if (ctx.gpr[3] == 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
        goto L_08AF9A98;
    }
    goto L_08AF9A90;
L_08AF9A90:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
      if (branch_taken) {
          goto L_08AF9AE8;
      }
      goto L_08AF9A98;
    }
L_08AF9A98:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08AF9A9C;
L_08AF9A9C:
    ctx.set_gpr(31, 0x08AF9AA4u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 176u, 0x08B00C50u>(ctx, &aot_mem) && ctx.pc == 0x08AF9AA4u) goto L_08AF9AA4;
    return;
L_08AF9AA4:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[21])) || ctx.fpr[20] < ctx.fpr[21]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF9AE4;
      }
      goto L_08AF9AB4;
    }
L_08AF9AB4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF9AE4;
      }
      goto L_08AF9AC0;
    }
L_08AF9AC0:
    ctx.set_gpr(31, 0x08AF9AC8u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 176u, 0x08B00C50u>(ctx, &aot_mem) && ctx.pc == 0x08AF9AC8u) goto L_08AF9AC8;
    return;
L_08AF9AC8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(308), ctx.gpr[3]);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    goto L_08AF9AE4;
L_08AF9AE4:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    goto L_08AF9AE8;
L_08AF9AE8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9B10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, ctx.gpr[18] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[19]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(260)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[2]) || std::isnan(ctx.fpr[0])) || ctx.fpr[2] <= ctx.fpr[0]));
    ctx.set_gpr(17, 0u + 0u);
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[1];
    ctx.set_gpr(20, ctx.gpr[2] + static_cast<std::uint32_t>(260));
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    { const bool branch_taken = ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AF9BDC;
      }
      goto L_08AF9B78;
    }
L_08AF9B78:
    ctx.set_gpr(31, 0x08AF9B80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 759u, 0x08AF73ECu>(ctx, &aot_mem) && ctx.pc == 0x08AF9B80u) goto L_08AF9B80;
    return;
L_08AF9B80:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[19]);
        goto L_08AF9BE0;
    }
    goto L_08AF9B88;
L_08AF9B88:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[19]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AF9B9Cu);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08AFBF1C;
L_08AF9B9C:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[19]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(312)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AF9C88;
    }
    goto L_08AF9BB0;
L_08AF9BB0:
    ctx.set_gpr(31, 0x08AF9BB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF9BB8u) goto L_08AF9BB8;
    return;
L_08AF9BB8:
    ctx.set_gpr(31, 0x08AF9BC0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 212u, 0x08AF0E34u>(ctx, &aot_mem) && ctx.pc == 0x08AF9BC0u) goto L_08AF9BC0;
    return;
L_08AF9BC0:
    ctx.set_gpr(31, 0x08AF9BC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF9BC8u) goto L_08AF9BC8;
    return;
L_08AF9BC8:
    ctx.set_gpr(31, 0x08AF9BD0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 213u, 0x08AF0E4Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF9BD0u) goto L_08AF9BD0;
    return;
L_08AF9BD0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF9C88;
      }
      goto L_08AF9BDC;
    }
L_08AF9BDC:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[19]);
    goto L_08AF9BE0;
L_08AF9BE0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(312)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08AF9C74;
    }
    goto L_08AF9BF0;
L_08AF9BF0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08AF9C60;
    }
    goto L_08AF9BFC;
L_08AF9BFC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08AF9C4C;
    }
    goto L_08AF9C08;
L_08AF9C08:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08AF9C38;
    }
    goto L_08AF9C14;
L_08AF9C14:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08AF9C24;
    }
    goto L_08AF9C1C;
L_08AF9C1C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_08AF9C88;
      }
      goto L_08AF9C24;
    }
L_08AF9C24:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AF9C30u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_08AF9CAC;
L_08AF9C30:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08AF9C84;
      }
      goto L_08AF9C38;
    }
L_08AF9C38:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AF9C44u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_08AFAD04;
L_08AF9C44:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08AF9C84;
      }
      goto L_08AF9C4C;
    }
L_08AF9C4C:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AF9C58u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_08AFB5C0;
L_08AF9C58:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08AF9C84;
      }
      goto L_08AF9C60;
    }
L_08AF9C60:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AF9C6Cu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_08AFB730;
L_08AF9C6C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08AF9C84;
      }
      goto L_08AF9C74;
    }
L_08AF9C74:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AF9C80u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_08AFB8A0;
L_08AF9C80:
    ctx.set_gpr(17, ctx.gpr[2] & 255u);
    goto L_08AF9C84;
L_08AF9C84:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08AF9C88;
L_08AF9C88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9CAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[5] << 5u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(19, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(260)));
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(260));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2904)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2904)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.set_gpr(20, 0u + 0u);
      if (branch_taken) {
          goto L_08AF9D24;
      }
      goto L_08AF9D20;
    }
L_08AF9D20:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    goto L_08AF9D24;
L_08AF9D24:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[21]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(256)));
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(256));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AFA530;
      }
      goto L_08AF9D3C;
    }
L_08AF9D3C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[21]);
        goto L_08AF9D5C;
    }
    goto L_08AF9D48;
L_08AF9D48:
    if (ctx.gpr[3] == 0u) {
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
        goto L_08AF9D58;
    }
    goto L_08AF9D50;
L_08AF9D50:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
      if (branch_taken) {
          goto L_08AFACDC;
      }
      goto L_08AF9D58;
    }
L_08AF9D58:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[21]);
    goto L_08AF9D5C;
L_08AF9D5C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(260)));
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(260));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2904)));
    ctx.fpr[1] = ctx.fpr[20] - ctx.fpr[1];
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[20];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF9D8Cu);
    ctx.set_gpr(18, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF9D8Cu) goto L_08AF9D8C;
    return;
L_08AF9D8C:
    ctx.set_gpr(31, 0x08AF9D94u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF9D94u) goto L_08AF9D94;
    return;
L_08AF9D94:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-816)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF9DB8u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF9DB8u) goto L_08AF9DB8;
    return;
L_08AF9DB8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF9DD8u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF9DD8u) goto L_08AF9DD8;
    return;
L_08AF9DD8:
    ctx.set_gpr(31, 0x08AF9DE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF9DE0u) goto L_08AF9DE0;
    return;
L_08AF9DE0:
    ctx.set_gpr(31, 0x08AF9DE8u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF9DE8u) goto L_08AF9DE8;
    return;
L_08AF9DE8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-792)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF9E0Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF9E0Cu) goto L_08AF9E0C;
    return;
L_08AF9E0C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF9E2Cu);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF9E2Cu) goto L_08AF9E2C;
    return;
L_08AF9E2C:
    ctx.set_gpr(31, 0x08AF9E34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF9E34u) goto L_08AF9E34;
    return;
L_08AF9E34:
    ctx.set_gpr(31, 0x08AF9E3Cu);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF9E3Cu) goto L_08AF9E3C;
    return;
L_08AF9E3C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-768)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF9E60u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF9E60u) goto L_08AF9E60;
    return;
L_08AF9E60:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF9E80u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF9E80u) goto L_08AF9E80;
    return;
L_08AF9E80:
    ctx.set_gpr(31, 0x08AF9E88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF9E88u) goto L_08AF9E88;
    return;
L_08AF9E88:
    ctx.set_gpr(31, 0x08AF9E90u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF9E90u) goto L_08AF9E90;
    return;
L_08AF9E90:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-744)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF9EB4u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF9EB4u) goto L_08AF9EB4;
    return;
L_08AF9EB4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF9ED4u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF9ED4u) goto L_08AF9ED4;
    return;
L_08AF9ED4:
    ctx.set_gpr(31, 0x08AF9EDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF9EDCu) goto L_08AF9EDC;
    return;
L_08AF9EDC:
    ctx.set_gpr(31, 0x08AF9EE4u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF9EE4u) goto L_08AF9EE4;
    return;
L_08AF9EE4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-720)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF9F08u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF9F08u) goto L_08AF9F08;
    return;
L_08AF9F08:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF9F28u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF9F28u) goto L_08AF9F28;
    return;
L_08AF9F28:
    ctx.set_gpr(31, 0x08AF9F30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF9F30u) goto L_08AF9F30;
    return;
L_08AF9F30:
    ctx.set_gpr(31, 0x08AF9F38u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF9F38u) goto L_08AF9F38;
    return;
L_08AF9F38:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-696)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF9F5Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF9F5Cu) goto L_08AF9F5C;
    return;
L_08AF9F5C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF9F7Cu);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF9F7Cu) goto L_08AF9F7C;
    return;
L_08AF9F7C:
    ctx.set_gpr(31, 0x08AF9F84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF9F84u) goto L_08AF9F84;
    return;
L_08AF9F84:
    ctx.set_gpr(31, 0x08AF9F8Cu);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF9F8Cu) goto L_08AF9F8C;
    return;
L_08AF9F8C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-672)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AF9FB0u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AF9FB0u) goto L_08AF9FB0;
    return;
L_08AF9FB0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AF9FD0u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF9FD0u) goto L_08AF9FD0;
    return;
L_08AF9FD0:
    ctx.set_gpr(31, 0x08AF9FD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AF9FD8u) goto L_08AF9FD8;
    return;
L_08AF9FD8:
    ctx.set_gpr(31, 0x08AF9FE0u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AF9FE0u) goto L_08AF9FE0;
    return;
L_08AF9FE0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-648)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFA004u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFA004u) goto L_08AFA004;
    return;
L_08AFA004:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFA024u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFA024u) goto L_08AFA024;
    return;
L_08AFA024:
    ctx.set_gpr(31, 0x08AFA02Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFA02Cu) goto L_08AFA02C;
    return;
L_08AFA02C:
    ctx.set_gpr(31, 0x08AFA034u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFA034u) goto L_08AFA034;
    return;
L_08AFA034:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-624)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFA058u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFA058u) goto L_08AFA058;
    return;
L_08AFA058:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFA078u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFA078u) goto L_08AFA078;
    return;
L_08AFA078:
    ctx.set_gpr(31, 0x08AFA080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFA080u) goto L_08AFA080;
    return;
L_08AFA080:
    ctx.set_gpr(31, 0x08AFA088u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFA088u) goto L_08AFA088;
    return;
L_08AFA088:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1464)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFA0ACu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFA0ACu) goto L_08AFA0AC;
    return;
L_08AFA0AC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFA0CCu);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFA0CCu) goto L_08AFA0CC;
    return;
L_08AFA0CC:
    ctx.set_gpr(31, 0x08AFA0D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFA0D4u) goto L_08AFA0D4;
    return;
L_08AFA0D4:
    ctx.set_gpr(31, 0x08AFA0DCu);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFA0DCu) goto L_08AFA0DC;
    return;
L_08AFA0DC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1440)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFA100u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFA100u) goto L_08AFA100;
    return;
L_08AFA100:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFA120u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFA120u) goto L_08AFA120;
    return;
L_08AFA120:
    ctx.set_gpr(31, 0x08AFA128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFA128u) goto L_08AFA128;
    return;
L_08AFA128:
    ctx.set_gpr(31, 0x08AFA130u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFA130u) goto L_08AFA130;
    return;
L_08AFA130:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1416)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFA154u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFA154u) goto L_08AFA154;
    return;
L_08AFA154:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFA174u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFA174u) goto L_08AFA174;
    return;
L_08AFA174:
    ctx.set_gpr(31, 0x08AFA17Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFA17Cu) goto L_08AFA17C;
    return;
L_08AFA17C:
    ctx.set_gpr(31, 0x08AFA184u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFA184u) goto L_08AFA184;
    return;
L_08AFA184:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-888)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFA1A8u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFA1A8u) goto L_08AFA1A8;
    return;
L_08AFA1A8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFA1C8u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFA1C8u) goto L_08AFA1C8;
    return;
L_08AFA1C8:
    ctx.set_gpr(31, 0x08AFA1D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFA1D0u) goto L_08AFA1D0;
    return;
L_08AFA1D0:
    ctx.set_gpr(31, 0x08AFA1D8u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFA1D8u) goto L_08AFA1D8;
    return;
L_08AFA1D8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-864)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFA1FCu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFA1FCu) goto L_08AFA1FC;
    return;
L_08AFA1FC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFA21Cu);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFA21Cu) goto L_08AFA21C;
    return;
L_08AFA21C:
    ctx.set_gpr(31, 0x08AFA224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFA224u) goto L_08AFA224;
    return;
L_08AFA224:
    ctx.set_gpr(31, 0x08AFA22Cu);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFA22Cu) goto L_08AFA22C;
    return;
L_08AFA22C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-840)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFA250u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFA250u) goto L_08AFA250;
    return;
L_08AFA250:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFA270u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFA270u) goto L_08AFA270;
    return;
L_08AFA270:
    ctx.set_gpr(31, 0x08AFA278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFA278u) goto L_08AFA278;
    return;
L_08AFA278:
    ctx.set_gpr(31, 0x08AFA280u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFA280u) goto L_08AFA280;
    return;
L_08AFA280:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1728)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFA2A4u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFA2A4u) goto L_08AFA2A4;
    return;
L_08AFA2A4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFA2C4u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFA2C4u) goto L_08AFA2C4;
    return;
L_08AFA2C4:
    ctx.set_gpr(31, 0x08AFA2CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFA2CCu) goto L_08AFA2CC;
    return;
L_08AFA2CC:
    ctx.set_gpr(31, 0x08AFA2D4u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFA2D4u) goto L_08AFA2D4;
    return;
L_08AFA2D4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1704)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFA2F8u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFA2F8u) goto L_08AFA2F8;
    return;
L_08AFA2F8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFA318u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFA318u) goto L_08AFA318;
    return;
L_08AFA318:
    ctx.set_gpr(31, 0x08AFA320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFA320u) goto L_08AFA320;
    return;
L_08AFA320:
    ctx.set_gpr(31, 0x08AFA328u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFA328u) goto L_08AFA328;
    return;
L_08AFA328:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1680)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFA34Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFA34Cu) goto L_08AFA34C;
    return;
L_08AFA34C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFA36Cu);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFA36Cu) goto L_08AFA36C;
    return;
L_08AFA36C:
    ctx.set_gpr(31, 0x08AFA374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFA374u) goto L_08AFA374;
    return;
L_08AFA374:
    ctx.set_gpr(31, 0x08AFA37Cu);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFA37Cu) goto L_08AFA37C;
    return;
L_08AFA37C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1656)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFA3A0u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFA3A0u) goto L_08AFA3A0;
    return;
L_08AFA3A0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFA3C0u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFA3C0u) goto L_08AFA3C0;
    return;
L_08AFA3C0:
    ctx.set_gpr(31, 0x08AFA3C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFA3C8u) goto L_08AFA3C8;
    return;
L_08AFA3C8:
    ctx.set_gpr(31, 0x08AFA3D0u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFA3D0u) goto L_08AFA3D0;
    return;
L_08AFA3D0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1632)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFA3F4u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFA3F4u) goto L_08AFA3F4;
    return;
L_08AFA3F4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFA414u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFA414u) goto L_08AFA414;
    return;
L_08AFA414:
    ctx.set_gpr(31, 0x08AFA41Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFA41Cu) goto L_08AFA41C;
    return;
L_08AFA41C:
    ctx.set_gpr(31, 0x08AFA424u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFA424u) goto L_08AFA424;
    return;
L_08AFA424:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1608)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFA448u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFA448u) goto L_08AFA448;
    return;
L_08AFA448:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFA468u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFA468u) goto L_08AFA468;
    return;
L_08AFA468:
    ctx.set_gpr(31, 0x08AFA470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFA470u) goto L_08AFA470;
    return;
L_08AFA470:
    ctx.set_gpr(31, 0x08AFA478u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFA478u) goto L_08AFA478;
    return;
L_08AFA478:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1584)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFA49Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFA49Cu) goto L_08AFA49C;
    return;
L_08AFA49C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFA4BCu);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFA4BCu) goto L_08AFA4BC;
    return;
L_08AFA4BC:
    ctx.set_gpr(31, 0x08AFA4C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFA4C4u) goto L_08AFA4C4;
    return;
L_08AFA4C4:
    ctx.set_gpr(31, 0x08AFA4CCu);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFA4CCu) goto L_08AFA4CC;
    return;
L_08AFA4CC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1560)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFA4F0u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFA4F0u) goto L_08AFA4F0;
    return;
L_08AFA4F0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFA510u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFA510u) goto L_08AFA510;
    return;
L_08AFA510:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[20])) || ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AFACD8;
      }
      goto L_08AFA524;
    }
L_08AFA524:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AFACD8;
      }
      goto L_08AFA530;
    }
L_08AFA530:
    ctx.set_gpr(31, 0x08AFA538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFA538u) goto L_08AFA538;
    return;
L_08AFA538:
    ctx.set_gpr(31, 0x08AFA540u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFA540u) goto L_08AFA540;
    return;
L_08AFA540:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-816)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFA564u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFA564u) goto L_08AFA564;
    return;
L_08AFA564:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFA584u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFA584u) goto L_08AFA584;
    return;
L_08AFA584:
    ctx.set_gpr(31, 0x08AFA58Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFA58Cu) goto L_08AFA58C;
    return;
L_08AFA58C:
    ctx.set_gpr(31, 0x08AFA594u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFA594u) goto L_08AFA594;
    return;
L_08AFA594:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-792)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFA5B8u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFA5B8u) goto L_08AFA5B8;
    return;
L_08AFA5B8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFA5D8u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFA5D8u) goto L_08AFA5D8;
    return;
L_08AFA5D8:
    ctx.set_gpr(31, 0x08AFA5E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFA5E0u) goto L_08AFA5E0;
    return;
L_08AFA5E0:
    ctx.set_gpr(31, 0x08AFA5E8u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFA5E8u) goto L_08AFA5E8;
    return;
L_08AFA5E8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-768)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFA60Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFA60Cu) goto L_08AFA60C;
    return;
L_08AFA60C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFA62Cu);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFA62Cu) goto L_08AFA62C;
    return;
L_08AFA62C:
    ctx.set_gpr(31, 0x08AFA634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFA634u) goto L_08AFA634;
    return;
L_08AFA634:
    ctx.set_gpr(31, 0x08AFA63Cu);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFA63Cu) goto L_08AFA63C;
    return;
L_08AFA63C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-744)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFA660u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFA660u) goto L_08AFA660;
    return;
L_08AFA660:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFA680u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFA680u) goto L_08AFA680;
    return;
L_08AFA680:
    ctx.set_gpr(31, 0x08AFA688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFA688u) goto L_08AFA688;
    return;
L_08AFA688:
    ctx.set_gpr(31, 0x08AFA690u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFA690u) goto L_08AFA690;
    return;
L_08AFA690:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-720)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFA6B4u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFA6B4u) goto L_08AFA6B4;
    return;
L_08AFA6B4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFA6D4u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFA6D4u) goto L_08AFA6D4;
    return;
L_08AFA6D4:
    ctx.set_gpr(31, 0x08AFA6DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFA6DCu) goto L_08AFA6DC;
    return;
L_08AFA6DC:
    ctx.set_gpr(31, 0x08AFA6E4u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFA6E4u) goto L_08AFA6E4;
    return;
L_08AFA6E4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-696)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFA708u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFA708u) goto L_08AFA708;
    return;
L_08AFA708:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFA728u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFA728u) goto L_08AFA728;
    return;
L_08AFA728:
    ctx.set_gpr(31, 0x08AFA730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFA730u) goto L_08AFA730;
    return;
L_08AFA730:
    ctx.set_gpr(31, 0x08AFA738u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFA738u) goto L_08AFA738;
    return;
L_08AFA738:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-672)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFA75Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFA75Cu) goto L_08AFA75C;
    return;
L_08AFA75C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFA77Cu);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFA77Cu) goto L_08AFA77C;
    return;
L_08AFA77C:
    ctx.set_gpr(31, 0x08AFA784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFA784u) goto L_08AFA784;
    return;
L_08AFA784:
    ctx.set_gpr(31, 0x08AFA78Cu);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFA78Cu) goto L_08AFA78C;
    return;
L_08AFA78C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-648)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFA7B0u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFA7B0u) goto L_08AFA7B0;
    return;
L_08AFA7B0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFA7D0u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFA7D0u) goto L_08AFA7D0;
    return;
L_08AFA7D0:
    ctx.set_gpr(31, 0x08AFA7D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFA7D8u) goto L_08AFA7D8;
    return;
L_08AFA7D8:
    ctx.set_gpr(31, 0x08AFA7E0u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFA7E0u) goto L_08AFA7E0;
    return;
L_08AFA7E0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-624)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFA804u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFA804u) goto L_08AFA804;
    return;
L_08AFA804:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFA824u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFA824u) goto L_08AFA824;
    return;
L_08AFA824:
    ctx.set_gpr(31, 0x08AFA82Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFA82Cu) goto L_08AFA82C;
    return;
L_08AFA82C:
    ctx.set_gpr(31, 0x08AFA834u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFA834u) goto L_08AFA834;
    return;
L_08AFA834:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1464)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFA858u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFA858u) goto L_08AFA858;
    return;
L_08AFA858:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFA878u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFA878u) goto L_08AFA878;
    return;
L_08AFA878:
    ctx.set_gpr(31, 0x08AFA880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFA880u) goto L_08AFA880;
    return;
L_08AFA880:
    ctx.set_gpr(31, 0x08AFA888u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFA888u) goto L_08AFA888;
    return;
L_08AFA888:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1440)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFA8ACu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFA8ACu) goto L_08AFA8AC;
    return;
L_08AFA8AC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFA8CCu);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFA8CCu) goto L_08AFA8CC;
    return;
L_08AFA8CC:
    ctx.set_gpr(31, 0x08AFA8D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFA8D4u) goto L_08AFA8D4;
    return;
L_08AFA8D4:
    ctx.set_gpr(31, 0x08AFA8DCu);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFA8DCu) goto L_08AFA8DC;
    return;
L_08AFA8DC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1416)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFA900u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFA900u) goto L_08AFA900;
    return;
L_08AFA900:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFA920u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFA920u) goto L_08AFA920;
    return;
L_08AFA920:
    ctx.set_gpr(31, 0x08AFA928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFA928u) goto L_08AFA928;
    return;
L_08AFA928:
    ctx.set_gpr(31, 0x08AFA930u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFA930u) goto L_08AFA930;
    return;
L_08AFA930:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-888)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFA954u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFA954u) goto L_08AFA954;
    return;
L_08AFA954:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFA974u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFA974u) goto L_08AFA974;
    return;
L_08AFA974:
    ctx.set_gpr(31, 0x08AFA97Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFA97Cu) goto L_08AFA97C;
    return;
L_08AFA97C:
    ctx.set_gpr(31, 0x08AFA984u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFA984u) goto L_08AFA984;
    return;
L_08AFA984:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-864)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFA9A8u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFA9A8u) goto L_08AFA9A8;
    return;
L_08AFA9A8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFA9C8u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFA9C8u) goto L_08AFA9C8;
    return;
L_08AFA9C8:
    ctx.set_gpr(31, 0x08AFA9D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFA9D0u) goto L_08AFA9D0;
    return;
L_08AFA9D0:
    ctx.set_gpr(31, 0x08AFA9D8u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFA9D8u) goto L_08AFA9D8;
    return;
L_08AFA9D8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-840)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFA9FCu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFA9FCu) goto L_08AFA9FC;
    return;
L_08AFA9FC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFAA1Cu);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFAA1Cu) goto L_08AFAA1C;
    return;
L_08AFAA1C:
    ctx.set_gpr(31, 0x08AFAA24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFAA24u) goto L_08AFAA24;
    return;
L_08AFAA24:
    ctx.set_gpr(31, 0x08AFAA2Cu);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFAA2Cu) goto L_08AFAA2C;
    return;
L_08AFAA2C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1728)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFAA50u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFAA50u) goto L_08AFAA50;
    return;
L_08AFAA50:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFAA70u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFAA70u) goto L_08AFAA70;
    return;
L_08AFAA70:
    ctx.set_gpr(31, 0x08AFAA78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFAA78u) goto L_08AFAA78;
    return;
L_08AFAA78:
    ctx.set_gpr(31, 0x08AFAA80u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFAA80u) goto L_08AFAA80;
    return;
L_08AFAA80:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1704)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFAAA4u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFAAA4u) goto L_08AFAAA4;
    return;
L_08AFAAA4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFAAC4u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFAAC4u) goto L_08AFAAC4;
    return;
L_08AFAAC4:
    ctx.set_gpr(31, 0x08AFAACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFAACCu) goto L_08AFAACC;
    return;
L_08AFAACC:
    ctx.set_gpr(31, 0x08AFAAD4u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFAAD4u) goto L_08AFAAD4;
    return;
L_08AFAAD4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1680)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFAAF8u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFAAF8u) goto L_08AFAAF8;
    return;
L_08AFAAF8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFAB18u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFAB18u) goto L_08AFAB18;
    return;
L_08AFAB18:
    ctx.set_gpr(31, 0x08AFAB20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFAB20u) goto L_08AFAB20;
    return;
L_08AFAB20:
    ctx.set_gpr(31, 0x08AFAB28u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFAB28u) goto L_08AFAB28;
    return;
L_08AFAB28:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1656)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFAB4Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFAB4Cu) goto L_08AFAB4C;
    return;
L_08AFAB4C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFAB6Cu);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFAB6Cu) goto L_08AFAB6C;
    return;
L_08AFAB6C:
    ctx.set_gpr(31, 0x08AFAB74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFAB74u) goto L_08AFAB74;
    return;
L_08AFAB74:
    ctx.set_gpr(31, 0x08AFAB7Cu);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFAB7Cu) goto L_08AFAB7C;
    return;
L_08AFAB7C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1632)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFABA0u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFABA0u) goto L_08AFABA0;
    return;
L_08AFABA0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFABC0u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFABC0u) goto L_08AFABC0;
    return;
L_08AFABC0:
    ctx.set_gpr(31, 0x08AFABC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFABC8u) goto L_08AFABC8;
    return;
L_08AFABC8:
    ctx.set_gpr(31, 0x08AFABD0u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFABD0u) goto L_08AFABD0;
    return;
L_08AFABD0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1608)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFABF4u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFABF4u) goto L_08AFABF4;
    return;
L_08AFABF4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFAC14u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFAC14u) goto L_08AFAC14;
    return;
L_08AFAC14:
    ctx.set_gpr(31, 0x08AFAC1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFAC1Cu) goto L_08AFAC1C;
    return;
L_08AFAC1C:
    ctx.set_gpr(31, 0x08AFAC24u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFAC24u) goto L_08AFAC24;
    return;
L_08AFAC24:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1584)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFAC48u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFAC48u) goto L_08AFAC48;
    return;
L_08AFAC48:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFAC68u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFAC68u) goto L_08AFAC68;
    return;
L_08AFAC68:
    ctx.set_gpr(31, 0x08AFAC70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFAC70u) goto L_08AFAC70;
    return;
L_08AFAC70:
    ctx.set_gpr(31, 0x08AFAC78u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFAC78u) goto L_08AFAC78;
    return;
L_08AFAC78:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1560)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFAC9Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFAC9Cu) goto L_08AFAC9C;
    return;
L_08AFAC9C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFACBCu);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFACBCu) goto L_08AFACBC;
    return;
L_08AFACBC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(308), ctx.gpr[3]);
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    goto L_08AFACD8;
L_08AFACD8:
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
    goto L_08AFACDC;
L_08AFACDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFAD04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, ctx.gpr[16] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(23, ctx.gpr[4] + 0u);
    ctx.set_gpr(30, ctx.gpr[2] << 3u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, ctx.gpr[30] + ctx.gpr[23]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(292)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08AFAD74u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFAD74u) goto L_08AFAD74;
    return;
L_08AFAD74:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[30] + ctx.gpr[23]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(284)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08AFAD90u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08AFAD90u) goto L_08AFAD90;
    return;
L_08AFAD90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x08AFAD9Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 888u, 0x08A7F20Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFAD9Cu) goto L_08AFAD9C;
    return;
L_08AFAD9C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] << 5u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, 16040u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 62915u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16076u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2896)));
    ctx.set_gpr(3, ctx.gpr[30] + ctx.gpr[23]);
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(260));
    ctx.fpr[23] = ctx.fpr[2] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(260)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[23])) || ctx.fpr[0] <= ctx.fpr[23]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AFADF4;
      }
      goto L_08AFADF0;
    }
L_08AFADF0:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    goto L_08AFADF4;
L_08AFADF4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(3, ctx.gpr[30] + ctx.gpr[23]);
        goto L_08AFAE18;
    }
    goto L_08AFAE10;
L_08AFAE10:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    ctx.set_gpr(3, ctx.gpr[30] + ctx.gpr[23]);
    goto L_08AFAE18;
L_08AFAE18:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(256));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(256)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    if (ctx.gpr[4] == ctx.gpr[2]) {
    ctx.set_gpr(17, 2226u << 16u);
        goto L_08AFB2E4;
    }
    goto L_08AFAE30;
L_08AFAE30:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AFAE50;
      }
      goto L_08AFAE3C;
    }
L_08AFAE3C:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
        goto L_08AFAE4C;
    }
    goto L_08AFAE44;
L_08AFAE44:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_08AFB580;
      }
      goto L_08AFAE4C;
    }
L_08AFAE4C:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08AFAE50;
L_08AFAE50:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2896)));
    ctx.set_gpr(18, 2226u << 16u);
    ctx.set_gpr(17, 2226u << 16u);
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-2568));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-2880));
    goto L_08AFAE6C;
L_08AFAE6C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFAE88u);
    ctx.set_gpr(20, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFAE88u) goto L_08AFAE88;
    return;
L_08AFAE88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFAE94u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFAE94u) goto L_08AFAE94;
    return;
L_08AFAE94:
    ctx.set_gpr(31, 0x08AFAE9Cu);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFAE9Cu) goto L_08AFAE9C;
    return;
L_08AFAE9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFAEA8u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFAEA8u) goto L_08AFAEA8;
    return;
L_08AFAEA8:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFAEB4u);
    ctx.set_gpr(23, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFAEB4u) goto L_08AFAEB4;
    return;
L_08AFAEB4:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08AFAEC0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 170u, 0x08B00C18u>(ctx, &aot_mem) && ctx.pc == 0x08AFAEC0u) goto L_08AFAEC0;
    return;
L_08AFAEC0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 15820u << 16u);
        goto L_08AFAF10;
    }
    goto L_08AFAEC8;
L_08AFAEC8:
    ctx.set_gpr(31, 0x08AFAED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFAED0u) goto L_08AFAED0;
    return;
L_08AFAED0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFAEE0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AFAEE0u) goto L_08AFAEE0;
    return;
L_08AFAEE0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AFAF0C;
      }
      goto L_08AFAEEC;
    }
L_08AFAEEC:
    ctx.set_gpr(31, 0x08AFAEF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFAEF4u) goto L_08AFAEF4;
    return;
L_08AFAEF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFAF04u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 485u, 0x08AD2310u>(ctx, &aot_mem) && ctx.pc == 0x08AFAF04u) goto L_08AFAF04;
    return;
L_08AFAF04:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(23, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AFAF0C;
L_08AFAF0C:
    ctx.set_gpr(2, 15820u << 16u);
    goto L_08AFAF10;
L_08AFAF10:
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 16040u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | 62915u);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.fpr[2] = ctx.fpr[20] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[2];
    ctx.fpr[0] = ctx.fpr[23] - ctx.fpr[0];
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AFAF60;
      }
      goto L_08AFAF5C;
    }
L_08AFAF5C:
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    goto L_08AFAF60;
L_08AFAF60:
    ctx.set_gpr(31, 0x08AFAF68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFAF68u) goto L_08AFAF68;
    return;
L_08AFAF68:
    ctx.set_gpr(7, 16392u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08AFAF7Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x08AFAF7Cu) goto L_08AFAF7C;
    return;
L_08AFAF7C:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(30, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08AFAF8Cu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFAF8Cu) goto L_08AFAF8C;
    return;
L_08AFAF8C:
    ctx.set_gpr(7, 16392u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08AFAFA0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x08AFAFA0u) goto L_08AFAFA0;
    return;
L_08AFAFA0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFAFB4u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08AFAFB4u) goto L_08AFAFB4;
    return;
L_08AFAFB4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[23]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFAFC8u);
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFAFC8u) goto L_08AFAFC8;
    return;
L_08AFAFC8:
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFAFDCu);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFAFDCu) goto L_08AFAFDC;
    return;
L_08AFAFDC:
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFAFECu);
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFAFECu) goto L_08AFAFEC;
    return;
L_08AFAFEC:
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFB000u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08AFB000u) goto L_08AFB000;
    return;
L_08AFB000:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFB00Cu);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08AFB00Cu) goto L_08AFB00C;
    return;
L_08AFB00C:
    ctx.set_gpr(31, 0x08AFB014u);
    ctx.set_fpr_bits(22, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFB014u) goto L_08AFB014;
    return;
L_08AFB014:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFB024u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AFB024u) goto L_08AFB024;
    return;
L_08AFB024:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AFB050;
      }
      goto L_08AFB030;
    }
L_08AFB030:
    ctx.set_gpr(31, 0x08AFB038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFB038u) goto L_08AFB038;
    return;
L_08AFB038:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(31, 0x08AFB050u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AFB050u) goto L_08AFB050;
    return;
L_08AFB050:
    ctx.set_gpr(31, 0x08AFB058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFB058u) goto L_08AFB058;
    return;
L_08AFB058:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFB068u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AFB068u) goto L_08AFB068;
    return;
L_08AFB068:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08AFB098;
    }
    goto L_08AFB074;
L_08AFB074:
    ctx.set_gpr(31, 0x08AFB07Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFB07Cu) goto L_08AFB07C;
    return;
L_08AFB07C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x08AFB094u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AFB094u) goto L_08AFB094;
    return;
L_08AFB094:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08AFB098;
L_08AFB098:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < 9 ? 1u : 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AFAE6C;
      }
      goto L_08AFB0A8;
    }
L_08AFB0A8:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = ctx.fpr[2] - ctx.fpr[1];
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(17, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (static_cast<std::int32_t>(ctx.gpr[17]) >= 0) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
        goto L_08AFB0E8;
    }
    goto L_08AFB0E0;
L_08AFB0E0:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    goto L_08AFB0E8;
L_08AFB0E8:
    ctx.set_gpr(31, 0x08AFB0F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 88u, 0x08AF4568u>(ctx, &aot_mem) && ctx.pc == 0x08AFB0F0u) goto L_08AFB0F0;
    return;
L_08AFB0F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFB1C4;
      }
      goto L_08AFB0F8;
    }
L_08AFB0F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
        goto L_08AFB15C;
    }
    goto L_08AFB104;
L_08AFB104:
    ctx.set_gpr(31, 0x08AFB10Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFB10Cu) goto L_08AFB10C;
    return;
L_08AFB10C:
    ctx.set_gpr(31, 0x08AFB114u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFB114u) goto L_08AFB114;
    return;
L_08AFB114:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1992)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFB138u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFB138u) goto L_08AFB138;
    return;
L_08AFB138:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFB158u);
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFB158u) goto L_08AFB158;
    return;
L_08AFB158:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    goto L_08AFB15C;
L_08AFB15C:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFB1C4;
      }
      goto L_08AFB170;
    }
L_08AFB170:
    ctx.set_gpr(31, 0x08AFB178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFB178u) goto L_08AFB178;
    return;
L_08AFB178:
    ctx.set_gpr(31, 0x08AFB180u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFB180u) goto L_08AFB180;
    return;
L_08AFB180:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1968)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFB1A4u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFB1A4u) goto L_08AFB1A4;
    return;
L_08AFB1A4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFB1C4u);
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFB1C4u) goto L_08AFB1C4;
    return;
L_08AFB1C4:
    ctx.set_gpr(31, 0x08AFB1CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFB1CCu) goto L_08AFB1CC;
    return;
L_08AFB1CC:
    ctx.set_gpr(31, 0x08AFB1D4u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFB1D4u) goto L_08AFB1D4;
    return;
L_08AFB1D4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1944)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFB1F8u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFB1F8u) goto L_08AFB1F8;
    return;
L_08AFB1F8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFB218u);
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFB218u) goto L_08AFB218;
    return;
L_08AFB218:
    ctx.set_gpr(31, 0x08AFB220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFB220u) goto L_08AFB220;
    return;
L_08AFB220:
    ctx.set_gpr(31, 0x08AFB228u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFB228u) goto L_08AFB228;
    return;
L_08AFB228:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1920)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFB24Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFB24Cu) goto L_08AFB24C;
    return;
L_08AFB24C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AFB26Cu);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFB26Cu) goto L_08AFB26C;
    return;
L_08AFB26C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 16040u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 62915u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[23] - ctx.fpr[0];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
        goto L_08AFB2C0;
    }
    goto L_08AFB294;
L_08AFB294:
    ctx.set_gpr(31, 0x08AFB29Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFB29Cu) goto L_08AFB29C;
    return;
L_08AFB29C:
    ctx.set_gpr(31, 0x08AFB2A4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 221u, 0x08AF0EA4u>(ctx, &aot_mem) && ctx.pc == 0x08AFB2A4u) goto L_08AFB2A4;
    return;
L_08AFB2A4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFB2BC;
      }
      goto L_08AFB2AC;
    }
L_08AFB2AC:
    ctx.set_gpr(31, 0x08AFB2B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFB2B4u) goto L_08AFB2B4;
    return;
L_08AFB2B4:
    ctx.set_gpr(31, 0x08AFB2BCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 212u, 0x08AF0E34u>(ctx, &aot_mem) && ctx.pc == 0x08AFB2BCu) goto L_08AFB2BC;
    return;
L_08AFB2BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    goto L_08AFB2C0;
L_08AFB2C0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[23])) || ctx.fpr[0] < ctx.fpr[23]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AFB57C;
      }
      goto L_08AFB2D4;
    }
L_08AFB2D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AFB57C;
      }
      goto L_08AFB2E4;
    }
L_08AFB2E4:
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-2568));
    goto L_08AFB2EC;
L_08AFB2EC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFB308u);
    ctx.set_gpr(20, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFB308u) goto L_08AFB308;
    return;
L_08AFB308:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFB314u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFB314u) goto L_08AFB314;
    return;
L_08AFB314:
    ctx.set_gpr(31, 0x08AFB31Cu);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFB31Cu) goto L_08AFB31C;
    return;
L_08AFB31C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFB328u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFB328u) goto L_08AFB328;
    return;
L_08AFB328:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AFB334u);
    ctx.set_gpr(22, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFB334u) goto L_08AFB334;
    return;
L_08AFB334:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08AFB340u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 170u, 0x08B00C18u>(ctx, &aot_mem) && ctx.pc == 0x08AFB340u) goto L_08AFB340;
    return;
L_08AFB340:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[22]);
        goto L_08AFB390;
    }
    goto L_08AFB348;
L_08AFB348:
    ctx.set_gpr(31, 0x08AFB350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFB350u) goto L_08AFB350;
    return;
L_08AFB350:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFB360u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AFB360u) goto L_08AFB360;
    return;
L_08AFB360:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AFB38C;
      }
      goto L_08AFB36C;
    }
L_08AFB36C:
    ctx.set_gpr(31, 0x08AFB374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFB374u) goto L_08AFB374;
    return;
L_08AFB374:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFB384u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 485u, 0x08AD2310u>(ctx, &aot_mem) && ctx.pc == 0x08AFB384u) goto L_08AFB384;
    return;
L_08AFB384:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(22, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AFB38C;
L_08AFB38C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[22]);
    goto L_08AFB390;
L_08AFB390:
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x08AFB3A4u);
    ctx.fpr[20] = ctx.fpr[1] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFB3A4u) goto L_08AFB3A4;
    return;
L_08AFB3A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFB3B4u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AFB3B4u) goto L_08AFB3B4;
    return;
L_08AFB3B4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AFB3E0;
      }
      goto L_08AFB3C0;
    }
L_08AFB3C0:
    ctx.set_gpr(31, 0x08AFB3C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFB3C8u) goto L_08AFB3C8;
    return;
L_08AFB3C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08AFB3E0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AFB3E0u) goto L_08AFB3E0;
    return;
L_08AFB3E0:
    ctx.set_gpr(31, 0x08AFB3E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFB3E8u) goto L_08AFB3E8;
    return;
L_08AFB3E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFB3F8u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AFB3F8u) goto L_08AFB3F8;
    return;
L_08AFB3F8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08AFB428;
    }
    goto L_08AFB404;
L_08AFB404:
    ctx.set_gpr(31, 0x08AFB40Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFB40Cu) goto L_08AFB40C;
    return;
L_08AFB40C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x08AFB424u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AFB424u) goto L_08AFB424;
    return;
L_08AFB424:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08AFB428;
L_08AFB428:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08AFB2EC;
      }
      goto L_08AFB434;
    }
L_08AFB434:
    ctx.set_gpr(31, 0x08AFB43Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFB43Cu) goto L_08AFB43C;
    return;
L_08AFB43C:
    ctx.set_gpr(31, 0x08AFB444u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFB444u) goto L_08AFB444;
    return;
L_08AFB444:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1992)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFB468u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFB468u) goto L_08AFB468;
    return;
L_08AFB468:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFB47Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFB47Cu) goto L_08AFB47C;
    return;
L_08AFB47C:
    ctx.set_gpr(31, 0x08AFB484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFB484u) goto L_08AFB484;
    return;
L_08AFB484:
    ctx.set_gpr(31, 0x08AFB48Cu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFB48Cu) goto L_08AFB48C;
    return;
L_08AFB48C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1968)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFB4B0u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFB4B0u) goto L_08AFB4B0;
    return;
L_08AFB4B0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFB4C4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFB4C4u) goto L_08AFB4C4;
    return;
L_08AFB4C4:
    ctx.set_gpr(31, 0x08AFB4CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFB4CCu) goto L_08AFB4CC;
    return;
L_08AFB4CC:
    ctx.set_gpr(31, 0x08AFB4D4u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFB4D4u) goto L_08AFB4D4;
    return;
L_08AFB4D4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1944)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFB4F8u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFB4F8u) goto L_08AFB4F8;
    return;
L_08AFB4F8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFB50Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFB50Cu) goto L_08AFB50C;
    return;
L_08AFB50C:
    ctx.set_gpr(31, 0x08AFB514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AFB514u) goto L_08AFB514;
    return;
L_08AFB514:
    ctx.set_gpr(31, 0x08AFB51Cu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AFB51Cu) goto L_08AFB51C;
    return;
L_08AFB51C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1920)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFB540u);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 147u, 0x08B00B08u>(ctx, &aot_mem) && ctx.pc == 0x08AFB540u) goto L_08AFB540;
    return;
L_08AFB540:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x08AFB554u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFB554u) goto L_08AFB554;
    return;
L_08AFB554:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[30] + ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(308), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08AFB57C;
L_08AFB57C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    goto L_08AFB580;
L_08AFB580:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB5C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(18, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2892)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.fpr[3] = ctx.fpr[2] / ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(260)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, ctx.gpr[3] + static_cast<std::uint32_t>(260));
    ctx.set_gpr(2, 17204u << 16u);
    ctx.set_gpr(3, 17302u << 16u);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[2] / ctx.fpr[1];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[21] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[21])) || ctx.fpr[20] < ctx.fpr[21]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.set_gpr(19, 0u + 0u);
      if (branch_taken) {
          goto L_08AFB668;
      }
      goto L_08AFB660;
    }
L_08AFB660:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_fpr_bits(20, ctx.fpr_bits(21));
    goto L_08AFB668;
L_08AFB668:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[20]);
        goto L_08AFB688;
    }
    goto L_08AFB67C;
L_08AFB67C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_fpr_bits(20, ctx.fpr_bits(21));
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[20]);
    goto L_08AFB688;
L_08AFB688:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(256)));
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(256));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.fpr[12] = ctx.fpr[21] - ctx.fpr[21];
        goto L_08AFB6E0;
    }
    goto L_08AFB69C;
L_08AFB69C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.fpr[12] = ctx.fpr[21] - ctx.fpr[20];
        goto L_08AFB6BC;
    }
    goto L_08AFB6A8;
L_08AFB6A8:
    if (ctx.gpr[3] == 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
        goto L_08AFB6B8;
    }
    goto L_08AFB6B0;
L_08AFB6B0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
      if (branch_taken) {
          goto L_08AFB708;
      }
      goto L_08AFB6B8;
    }
L_08AFB6B8:
    ctx.fpr[12] = ctx.fpr[21] - ctx.fpr[20];
    goto L_08AFB6BC;
L_08AFB6BC:
    ctx.set_gpr(31, 0x08AFB6C4u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 176u, 0x08B00C50u>(ctx, &aot_mem) && ctx.pc == 0x08AFB6C4u) goto L_08AFB6C4;
    return;
L_08AFB6C4:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[21])) || ctx.fpr[20] < ctx.fpr[21]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AFB704;
      }
      goto L_08AFB6D4;
    }
L_08AFB6D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AFB704;
      }
      goto L_08AFB6E0;
    }
L_08AFB6E0:
    ctx.set_gpr(31, 0x08AFB6E8u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 176u, 0x08B00C50u>(ctx, &aot_mem) && ctx.pc == 0x08AFB6E8u) goto L_08AFB6E8;
    return;
L_08AFB6E8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(308), ctx.gpr[3]);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    goto L_08AFB704;
L_08AFB704:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    goto L_08AFB708;
L_08AFB708:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB730:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(18, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2888)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.fpr[3] = ctx.fpr[2] / ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(260)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, ctx.gpr[3] + static_cast<std::uint32_t>(260));
    ctx.set_gpr(2, 17204u << 16u);
    ctx.set_gpr(3, 17302u << 16u);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[2] / ctx.fpr[1];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[21] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[21])) || ctx.fpr[20] < ctx.fpr[21]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.set_gpr(19, 0u + 0u);
      if (branch_taken) {
          goto L_08AFB7D8;
      }
      goto L_08AFB7D0;
    }
L_08AFB7D0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_fpr_bits(20, ctx.fpr_bits(21));
    goto L_08AFB7D8;
L_08AFB7D8:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[20]);
        goto L_08AFB7F8;
    }
    goto L_08AFB7EC;
L_08AFB7EC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_fpr_bits(20, ctx.fpr_bits(21));
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[20]);
    goto L_08AFB7F8;
L_08AFB7F8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(256)));
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(256));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.fpr[12] = ctx.fpr[21] - ctx.fpr[21];
        goto L_08AFB850;
    }
    goto L_08AFB80C;
L_08AFB80C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.fpr[12] = ctx.fpr[21] - ctx.fpr[20];
        goto L_08AFB82C;
    }
    goto L_08AFB818;
L_08AFB818:
    if (ctx.gpr[3] == 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
        goto L_08AFB828;
    }
    goto L_08AFB820;
L_08AFB820:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
      if (branch_taken) {
          goto L_08AFB878;
      }
      goto L_08AFB828;
    }
L_08AFB828:
    ctx.fpr[12] = ctx.fpr[21] - ctx.fpr[20];
    goto L_08AFB82C;
L_08AFB82C:
    ctx.set_gpr(31, 0x08AFB834u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 328u, 0x08B01A84u>(ctx, &aot_mem) && ctx.pc == 0x08AFB834u) goto L_08AFB834;
    return;
L_08AFB834:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[21])) || ctx.fpr[20] < ctx.fpr[21]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AFB874;
      }
      goto L_08AFB844;
    }
L_08AFB844:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AFB874;
      }
      goto L_08AFB850;
    }
L_08AFB850:
    ctx.set_gpr(31, 0x08AFB858u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 328u, 0x08B01A84u>(ctx, &aot_mem) && ctx.pc == 0x08AFB858u) goto L_08AFB858;
    return;
L_08AFB858:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(308), ctx.gpr[3]);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    goto L_08AFB874;
L_08AFB874:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    goto L_08AFB878;
L_08AFB878:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB8A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(18, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2884)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.fpr[3] = ctx.fpr[2] / ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(260)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, ctx.gpr[3] + static_cast<std::uint32_t>(260));
    ctx.set_gpr(2, 17204u << 16u);
    ctx.set_gpr(3, 17302u << 16u);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[2] / ctx.fpr[1];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[21] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[21])) || ctx.fpr[20] < ctx.fpr[21]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.set_gpr(19, 0u + 0u);
      if (branch_taken) {
          goto L_08AFB948;
      }
      goto L_08AFB940;
    }
L_08AFB940:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_fpr_bits(20, ctx.fpr_bits(21));
    goto L_08AFB948;
L_08AFB948:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[20]);
        goto L_08AFB968;
    }
    goto L_08AFB95C;
L_08AFB95C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_fpr_bits(20, ctx.fpr_bits(21));
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[20]);
    goto L_08AFB968;
L_08AFB968:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(256)));
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(256));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.fpr[12] = ctx.fpr[21] - ctx.fpr[21];
        goto L_08AFB9C0;
    }
    goto L_08AFB97C;
L_08AFB97C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.fpr[12] = ctx.fpr[21] - ctx.fpr[20];
        goto L_08AFB99C;
    }
    goto L_08AFB988;
L_08AFB988:
    if (ctx.gpr[3] == 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
        goto L_08AFB998;
    }
    goto L_08AFB990;
L_08AFB990:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
      if (branch_taken) {
          goto L_08AFB9E8;
      }
      goto L_08AFB998;
    }
L_08AFB998:
    ctx.fpr[12] = ctx.fpr[21] - ctx.fpr[20];
    goto L_08AFB99C;
L_08AFB99C:
    ctx.set_gpr(31, 0x08AFB9A4u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 176u, 0x08B00C50u>(ctx, &aot_mem) && ctx.pc == 0x08AFB9A4u) goto L_08AFB9A4;
    return;
L_08AFB9A4:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[21])) || ctx.fpr[20] < ctx.fpr[21]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AFB9E4;
      }
      goto L_08AFB9B4;
    }
L_08AFB9B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AFB9E4;
      }
      goto L_08AFB9C0;
    }
L_08AFB9C0:
    ctx.set_gpr(31, 0x08AFB9C8u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 176u, 0x08B00C50u>(ctx, &aot_mem) && ctx.pc == 0x08AFB9C8u) goto L_08AFB9C8;
    return;
L_08AFB9C8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(308), ctx.gpr[3]);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    goto L_08AFB9E4;
L_08AFB9E4:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    goto L_08AFB9E8;
L_08AFB9E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFBA10:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 471u, 0x08AFEA70u>(ctx, &aot_mem); return;
L_08AFBA18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_fpr_bits(22, ctx.fpr_bits(12));
    ctx.set_fpr_bits(21, ctx.fpr_bits(13));
    ctx.set_fpr_bits(24, ctx.fpr_bits(14));
    ctx.set_fpr_bits(20, ctx.fpr_bits(15));
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(31, 0x08AFBA7Cu);
    ctx.set_gpr(22, ctx.gpr[9] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 650u, 0x088526A4u>(ctx, &aot_mem) && ctx.pc == 0x08AFBA7Cu) goto L_08AFBA7C;
    return;
L_08AFBA7C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AFBA88u);
    ctx.fpr[23] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 651u, 0x088526C4u>(ctx, &aot_mem) && ctx.pc == 0x08AFBA88u) goto L_08AFBA88;
    return;
L_08AFBA88:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    ctx.set_gpr(7, 0u + 0u);
      if (branch_taken) {
          goto L_08AFBB70;
      }
      goto L_08AFBA98;
    }
L_08AFBA98:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AFBB04;
      }
      goto L_08AFBAA4;
    }
L_08AFBAA4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AFBB04;
      }
      goto L_08AFBAB0;
    }
L_08AFBAB0:
    if (ctx.gpr[18] == 0u) {
    { const float fs = ctx.fpr[23]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
        goto L_08AFBAC0;
    }
    goto L_08AFBAB8;
L_08AFBAB8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
      if (branch_taken) {
          goto L_08AFBBEC;
      }
      goto L_08AFBAC0;
    }
L_08AFBAC0:
    ctx.set_gpr(5, 16832u << 16u);
    ctx.set_gpr(4, 16800u << 16u);
    ctx.set_gpr(2, 16840u << 16u);
    ctx.set_gpr(3, 16776u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AFBBE8;
      }
      goto L_08AFBB04;
    }
L_08AFBB04:
    ctx.set_gpr(31, 0x08AFBB0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 650u, 0x088526A4u>(ctx, &aot_mem) && ctx.pc == 0x08AFBB0Cu) goto L_08AFBB0C;
    return;
L_08AFBB0C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 16768u << 16u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFBB34u);
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 651u, 0x088526C4u>(ctx, &aot_mem) && ctx.pc == 0x08AFBB34u) goto L_08AFBB34;
    return;
L_08AFBB34:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 16800u << 16u);
    ctx.set_gpr(2, 16840u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AFBBE8;
      }
      goto L_08AFBB70;
    }
L_08AFBB70:
    ctx.set_gpr(31, 0x08AFBB78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 650u, 0x088526A4u>(ctx, &aot_mem) && ctx.pc == 0x08AFBB78u) goto L_08AFBB78;
    return;
L_08AFBB78:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 16768u << 16u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AFBBA0u);
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 651u, 0x088526C4u>(ctx, &aot_mem) && ctx.pc == 0x08AFBBA0u) goto L_08AFBBA0;
    return;
L_08AFBBA0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 16800u << 16u);
    ctx.set_gpr(2, 16840u << 16u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 158 ? 1u : 0u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AFBBE4;
      }
      goto L_08AFBBE0;
    }
L_08AFBBE0:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(158));
    goto L_08AFBBE4;
L_08AFBBE4:
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    goto L_08AFBBE8;
L_08AFBBE8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08AFBBEC;
L_08AFBBEC:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(9, ctx.gpr[18] + 0u);
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AFBC10u);
    ctx.set_gpr(11, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 471u, 0x08AFEA70u>(ctx, &aot_mem) && ctx.pc == 0x08AFBC10u) goto L_08AFBC10;
    return;
L_08AFBC10:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFBC4C:
    ctx.set_gpr(2, 17168u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(11, ctx.gpr[8] + 0u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(2));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    (void)rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 471u, 0x08AFEA70u>(ctx, &aot_mem); return;
L_08AFBC7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AFBC9Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 120u, 0x08AFC84Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFBC9Cu) goto L_08AFBC9C;
    return;
L_08AFBC9C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (static_cast<std::int32_t>(ctx.gpr[16]) < 0) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08AFBD28;
    }
    goto L_08AFBCA8;
L_08AFBCA8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(3, ctx.gpr[16] << 4u);
        goto L_08AFBCC0;
    }
    goto L_08AFBCB4;
L_08AFBCB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBD24;
      }
      goto L_08AFBCBC;
    }
L_08AFBCBC:
    ctx.set_gpr(3, ctx.gpr[16] << 4u);
    goto L_08AFBCC0;
L_08AFBCC0:
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(19, ctx.gpr[3] << 3u);
    ctx.set_gpr(18, ctx.gpr[17] + ctx.gpr[19]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBD24;
      }
      goto L_08AFBCE0;
    }
L_08AFBCE0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(316)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AFBCF0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 369u, 0x08AFE4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AFBCF0u) goto L_08AFBCF0;
    return;
L_08AFBCF0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AFBCFCu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 453u, 0x08AFE944u>(ctx, &aot_mem) && ctx.pc == 0x08AFBCFCu) goto L_08AFBCFC;
    return;
L_08AFBCFC:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AFBD18u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 744u, 0x08AF3004u>(ctx, &aot_mem) && ctx.pc == 0x08AFBD18u) goto L_08AFBD18;
    return;
L_08AFBD18:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AFBD24u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 549u, 0x08AFEFA8u>(ctx, &aot_mem) && ctx.pc == 0x08AFBD24u) goto L_08AFBD24;
    return;
L_08AFBD24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08AFBD28;
L_08AFBD28:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFBD40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AFBD5Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 120u, 0x08AFC84Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFBD5Cu) goto L_08AFBD5C;
    return;
L_08AFBD5C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (static_cast<std::int32_t>(ctx.gpr[17]) < 0) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AFBE30;
    }
    goto L_08AFBD68;
L_08AFBD68:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[17] << 4u);
        goto L_08AFBD80;
    }
    goto L_08AFBD74;
L_08AFBD74:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBE30;
      }
      goto L_08AFBD80;
    }
L_08AFBD80:
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(16, ctx.gpr[2] << 3u);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(308)));
        goto L_08AFBDA8;
    }
    goto L_08AFBDA0;
L_08AFBDA0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AFBE30;
      }
      goto L_08AFBDA8;
    }
L_08AFBDA8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
        goto L_08AFBDCC;
    }
    goto L_08AFBDB4;
L_08AFBDB4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AFBDC8;
      }
      goto L_08AFBDC0;
    }
L_08AFBDC0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AFBE30;
      }
      goto L_08AFBDC8;
    }
L_08AFBDC8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_08AFBDCC;
L_08AFBDCC:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[18]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AFBDE0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 470u, 0x08AFEA44u>(ctx, &aot_mem) && ctx.pc == 0x08AFBDE0u) goto L_08AFBDE0;
    return;
L_08AFBDE0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(720), ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[18]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(312)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AFBE00;
      }
      goto L_08AFBDF8;
    }
L_08AFBDF8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AFBE30;
      }
      goto L_08AFBE00;
    }
L_08AFBE00:
    ctx.set_gpr(31, 0x08AFBE08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFBE08u) goto L_08AFBE08;
    return;
L_08AFBE08:
    ctx.set_gpr(31, 0x08AFBE10u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 211u, 0x08AF0E1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFBE10u) goto L_08AFBE10;
    return;
L_08AFBE10:
    ctx.set_gpr(31, 0x08AFBE18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFBE18u) goto L_08AFBE18;
    return;
L_08AFBE18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AFBE2Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFBE2Cu) goto L_08AFBE2C;
    return;
L_08AFBE2C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AFBE30;
L_08AFBE30:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFBE48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AFBE60u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 120u, 0x08AFC84Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFBE60u) goto L_08AFBE60;
    return;
L_08AFBE60:
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AFBF08;
    }
    goto L_08AFBE68;
L_08AFBE68:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(3, ctx.gpr[2] << 4u);
        goto L_08AFBE80;
    }
    goto L_08AFBE74;
L_08AFBE74:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBF08;
      }
      goto L_08AFBE80;
    }
L_08AFBE80:
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(16, ctx.gpr[3] << 3u);
    ctx.set_gpr(6, ctx.gpr[17] + ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(308)));
        goto L_08AFBEA8;
    }
    goto L_08AFBEA0;
L_08AFBEA0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AFBF08;
      }
      goto L_08AFBEA8;
    }
L_08AFBEA8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
        goto L_08AFBEBC;
    }
    goto L_08AFBEB4;
L_08AFBEB4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AFBF08;
      }
      goto L_08AFBEBC;
    }
L_08AFBEBC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, 0x08AFBECCu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 469u, 0x08AFEA18u>(ctx, &aot_mem) && ctx.pc == 0x08AFBECCu) goto L_08AFBECC;
    return;
L_08AFBECC:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[17]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(312)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AFBEE8;
      }
      goto L_08AFBEE0;
    }
L_08AFBEE0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AFBF08;
      }
      goto L_08AFBEE8;
    }
L_08AFBEE8:
    ctx.set_gpr(31, 0x08AFBEF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFBEF0u) goto L_08AFBEF0;
    return;
L_08AFBEF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AFBF04u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFBF04u) goto L_08AFBF04;
    return;
L_08AFBF04:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AFBF08;
L_08AFBF08:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFBF1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AFBF30u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 120u, 0x08AFC84Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFBF30u) goto L_08AFBF30;
    return;
L_08AFBF30:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AFBFCC;
    }
    goto L_08AFBF3C;
L_08AFBF3C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
        goto L_08AFBF54;
    }
    goto L_08AFBF48;
L_08AFBF48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBFC8;
      }
      goto L_08AFBF50;
    }
L_08AFBF50:
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    goto L_08AFBF54;
L_08AFBF54:
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(6, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBFC8;
      }
      goto L_08AFBF74;
    }
L_08AFBF74:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(308)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
        goto L_08AFBFB8;
    }
    goto L_08AFBF84;
L_08AFBF84:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
        goto L_08AFBF9C;
    }
    goto L_08AFBF90;
L_08AFBF90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBFC8;
      }
      goto L_08AFBF98;
    }
L_08AFBF98:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    goto L_08AFBF9C;
L_08AFBF9C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(256), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AFBFACu);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_08AF9B10;
L_08AFBFAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBFC8;
      }
      goto L_08AFBFB4;
    }
L_08AFBFB4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    goto L_08AFBFB8;
L_08AFBFB8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(256), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AFBFC8u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 910u, 0x08AF7C30u>(ctx, &aot_mem) && ctx.pc == 0x08AFBFC8u) goto L_08AFBFC8;
    return;
L_08AFBFC8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AFBFCC;
L_08AFBFCC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFBFD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AFBFECu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 120u, 0x08AFC84Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFBFECu) goto L_08AFBFEC;
    return;
L_08AFBFEC:
    ctx.set_gpr(3, ctx.gpr[2] << 4u);
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.pc = 0x08AFC000u; return;
}

void recomp_unit_0189(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0189_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_189(Runtime &runtime) {
    runtime.register_generated_unit(189u, 0x08AF8000u, 16384u, &recomp_unit_0189, &recomp_unit_0189_entry);
    runtime.register_function(0x08AF8000u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF800Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF802Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8034u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF803Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8060u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8080u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8088u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8090u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF80B4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF80D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF80DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF80E4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8108u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8128u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8130u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8138u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF815Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF817Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8184u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF818Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF81B0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF81D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF81D8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF81E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8204u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8224u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF822Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8234u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8258u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8278u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8280u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8288u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF82ACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF82CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF82D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF82DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8300u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8320u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8328u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8330u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8354u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8374u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF837Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8384u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF83A8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF83C8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF83D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF83D8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF83FCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF841Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8424u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF842Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8450u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8470u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8478u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8480u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF84A4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF84C4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF84CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF84D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF84F8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8518u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8520u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8528u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF854Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF856Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8574u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF857Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF85A0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF85C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF85C8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF85D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF85F4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8614u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8628u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8634u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF863Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8644u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8668u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8688u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8690u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8698u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF86BCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF86DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF86E4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF86ECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8710u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8730u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8738u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8740u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8764u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8784u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF878Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8794u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF87B8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF87D8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF87E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF87E8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF880Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF882Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8834u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF883Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8860u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8880u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8888u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8890u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF88B4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF88D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF88DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF88E4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8908u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8928u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8930u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8938u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF895Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF897Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8984u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF898Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF89B0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF89D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF89D8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF89E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8A04u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8A24u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8A2Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8A34u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8A58u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8A78u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8A80u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8A88u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8AACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8ACCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8AD4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8ADCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8B00u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8B20u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8B28u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8B30u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8B54u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8B74u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8B7Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8B84u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8BA8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8BC8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8BD0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8BD8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8BFCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C1Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C24u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C2Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C50u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C70u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C78u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C80u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8CA4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8CC4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8CCCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8CD4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8CF8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D18u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D20u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D28u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D4Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D6Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D74u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D7Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8DA0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8DC0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8DDCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8DE0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8E08u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8E80u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8E9Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8EA8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8EF0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8EF4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F10u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F18u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F30u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F3Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F44u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F4Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F50u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F6Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F88u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F94u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F9Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8FA8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8FB4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8FC0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8FC8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8FD0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8FE0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8FECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8FF4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9004u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF900Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9010u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9058u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF905Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9064u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9078u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9088u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF909Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF90B0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF90C4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF90D8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF90E8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF90FCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9108u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9110u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9120u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF912Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9134u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF914Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9154u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9164u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9170u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9178u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9190u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9194u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF91A4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF91CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF91F4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF91FCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9208u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9210u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9218u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF923Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF925Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9260u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9274u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF927Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9284u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF92A8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF92C8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF92D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF92D8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF92FCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF931Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9324u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF932Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9350u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9370u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9374u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9388u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9398u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF93A0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF93BCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF93C8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF93D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF93DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF93E4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF93F0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF93F8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9400u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9410u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF941Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9424u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9434u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9438u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9440u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9450u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF945Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9464u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF947Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9484u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9494u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF94A0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF94A8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF94C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF94C4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF94D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF94D8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF94E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF94ECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF94F4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF94FCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9520u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9540u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9544u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9558u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9560u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9568u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF958Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF95ACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF95B4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF95BCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF95E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9600u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9608u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9610u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9634u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9654u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF967Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9680u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF96C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9760u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9768u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF977Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9788u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF979Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF97A8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF97B0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF97B8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF97BCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF97C4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF97D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF97E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF97E8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9804u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9808u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9830u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF98D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF98D8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF98ECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF98F8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF990Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9918u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9920u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9928u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF992Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9934u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9944u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9950u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9958u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9974u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9978u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF99A0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9A40u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9A48u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9A5Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9A68u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9A7Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9A88u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9A90u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9A98u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9A9Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9AA4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9AB4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9AC0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9AC8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9AE4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9AE8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9B10u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9B78u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9B80u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9B88u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9B9Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9BB0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9BB8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9BC0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9BC8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9BD0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9BDCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9BE0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9BF0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9BFCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9C08u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9C14u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9C1Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9C24u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9C30u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9C38u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9C44u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9C4Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9C58u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9C60u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9C6Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9C74u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9C80u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9C84u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9C88u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9CACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9D20u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9D24u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9D3Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9D48u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9D50u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9D58u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9D5Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9D8Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9D94u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9DB8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9DD8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9DE0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9DE8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9E0Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9E2Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9E34u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9E3Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9E60u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9E80u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9E88u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9E90u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9EB4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9ED4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9EDCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9EE4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9F08u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9F28u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9F30u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9F38u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9F5Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9F7Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9F84u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9F8Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9FB0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9FD0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9FD8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9FE0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA004u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA024u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA02Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA034u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA058u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA078u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA080u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA088u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA0ACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA0CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA0D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA0DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA100u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA120u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA128u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA130u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA154u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA174u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA17Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA184u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA1A8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA1C8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA1D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA1D8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA1FCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA21Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA224u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA22Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA250u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA270u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA278u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA280u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA2A4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA2C4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA2CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA2D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA2F8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA318u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA320u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA328u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA34Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA36Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA374u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA37Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA3A0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA3C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA3C8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA3D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA3F4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA414u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA41Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA424u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA448u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA468u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA470u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA478u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA49Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA4BCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA4C4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA4CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA4F0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA510u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA524u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA530u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA538u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA540u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA564u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA584u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA58Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA594u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA5B8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA5D8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA5E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA5E8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA60Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA62Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA634u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA63Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA660u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA680u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA688u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA690u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA6B4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA6D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA6DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA6E4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA708u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA728u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA730u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA738u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA75Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA77Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA784u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA78Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA7B0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA7D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA7D8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA7E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA804u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA824u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA82Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA834u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA858u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA878u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA880u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA888u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA8ACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA8CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA8D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA8DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA900u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA920u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA928u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA930u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA954u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA974u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA97Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA984u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA9A8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA9C8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA9D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA9D8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA9FCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA1Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA24u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA2Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA50u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA70u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA78u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA80u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAAA4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAAC4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAACCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAAD4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAAF8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAB18u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAB20u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAB28u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAB4Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAB6Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAB74u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAB7Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFABA0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFABC0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFABC8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFABD0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFABF4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC14u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC1Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC24u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC48u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC68u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC70u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC78u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC9Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFACBCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFACD8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFACDCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAD04u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAD74u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAD90u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAD9Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFADF0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFADF4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAE10u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAE18u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAE30u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAE3Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAE44u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAE4Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAE50u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAE6Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAE88u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAE94u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAE9Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAEA8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAEB4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAEC0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAEC8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAED0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAEE0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAEECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAEF4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAF04u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAF0Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAF10u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAF5Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAF60u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAF68u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAF7Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAF8Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAFA0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAFB4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAFC8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAFDCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAFECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB000u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB00Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB014u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB024u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB030u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB038u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB050u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB058u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB068u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB074u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB07Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB094u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB098u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB0A8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB0E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB0E8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB0F0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB0F8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB104u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB10Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB114u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB138u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB158u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB15Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB170u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB178u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB180u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB1A4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB1C4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB1CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB1D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB1F8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB218u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB220u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB228u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB24Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB26Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB294u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB29Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB2A4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB2ACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB2B4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB2BCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB2C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB2D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB2E4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB2ECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB308u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB314u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB31Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB328u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB334u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB340u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB348u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB350u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB360u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB36Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB374u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB384u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB38Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB390u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB3A4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB3B4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB3C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB3C8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB3E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB3E8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB3F8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB404u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB40Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB424u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB428u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB434u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB43Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB444u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB468u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB47Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB484u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB48Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB4B0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB4C4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB4CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB4D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB4F8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB50Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB514u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB51Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB540u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB554u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB57Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB580u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB5C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB660u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB668u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB67Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB688u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB69Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB6A8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB6B0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB6B8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB6BCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB6C4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB6D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB6E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB6E8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB704u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB708u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB730u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB7D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB7D8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB7ECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB7F8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB80Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB818u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB820u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB828u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB82Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB834u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB844u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB850u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB858u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB874u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB878u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB8A0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB940u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB948u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB95Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB968u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB97Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB988u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB990u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB998u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB99Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB9A4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB9B4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB9C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB9C8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB9E4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB9E8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBA10u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBA18u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBA7Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBA88u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBA98u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBAA4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBAB0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBAB8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBAC0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB04u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB0Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB34u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB70u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB78u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBBA0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBBE0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBBE4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBBE8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBBECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBC10u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBC4Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBC7Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBC9Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBCA8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBCB4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBCBCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBCC0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBCE0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBCF0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBCFCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD18u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD24u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD28u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD40u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD5Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD68u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD74u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD80u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBDA0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBDA8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBDB4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBDC0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBDC8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBDCCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBDE0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBDF8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE00u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE08u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE10u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE18u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE2Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE30u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE48u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE60u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE68u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE74u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE80u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBEA0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBEA8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBEB4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBEBCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBECCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBEE0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBEE8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBEF0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF04u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF08u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF1Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF30u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF3Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF48u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF50u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF54u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF74u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF84u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF90u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF98u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF9Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBFACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBFB4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBFB8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBFC8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBFCCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBFD8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBFECu, &recomp_unit_0189, "recomp_unit_0189");
}
} // namespace psprecomp
