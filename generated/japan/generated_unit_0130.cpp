#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0130[4083] = {
    1, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0,
    0, 18, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0,
    0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 34,
    0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 43, 0, 44, 0, 0, 45, 0, 46, 0, 0, 47, 0, 48, 0, 0, 0,
    0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 54, 0, 0, 55,
    0, 0, 56, 0, 57, 0, 0, 58, 0, 0, 59, 0, 60, 0, 0, 61, 0, 0, 62, 0, 63, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0,
    0, 66, 0, 0, 67, 0, 0, 0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73,
    0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0,
    0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82,
    0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0,
    89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0,
    0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 97, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101,
    0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0,
    0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0,
    0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0,
    0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0,
    124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137,
    0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 143, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148,
    0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0,
    0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0,
    0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0,
    0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0,
    180, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 183, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    0, 188, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0,
    193, 0, 194, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0,
    0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0,
    204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0,
    0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 0, 219, 0,
    0, 0, 0, 0, 220, 0, 221, 0, 0, 222, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227,
    0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0,
    0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237,
    0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 242, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0,
    0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 251,
    0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 254, 0, 255, 0, 0, 256, 0, 257, 0, 0, 258, 0, 259, 0, 0, 0, 0, 0, 260,
    0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0,
    0, 269, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0, 0,
    0, 276, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0,
    0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0,
    0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0,
    0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 304, 0, 305, 0, 0, 306, 0, 307, 0, 0, 308, 0, 309, 0, 0,
    0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0,
    316, 0, 0, 317, 0, 0, 318, 0, 319, 0, 0, 320, 0, 0, 321, 0, 322, 0, 0, 323, 0, 0, 324, 0, 325, 0, 326, 0, 0, 0, 0, 0,
    327, 0, 0, 328, 0, 329, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 333, 0, 0, 334, 0, 335, 0, 0, 0, 0, 0, 0, 336,
    0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351,
    0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    357, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0,
    0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 367, 0, 0, 368,
    0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0,
    0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0,
    0, 386, 0, 0, 0, 0, 387, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392,
    0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    396, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 401, 0, 0, 402, 0, 0, 403, 0, 404, 0, 0, 0,
    0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411,
    0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 421, 0, 0,
    422, 0, 0, 423, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 428, 0, 0, 0, 0, 0, 429, 0,
    0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 439, 0,
    0, 0, 0, 0, 440, 0, 441, 0, 0, 442, 0, 0, 443, 0, 444, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 447,
    0, 448, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0,
    0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 457,
    0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 461, 0, 0, 462, 0, 0, 463, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0,
    0, 0, 0, 466, 0, 0, 0, 0, 467, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0,
    0, 472, 0, 0, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 481, 0, 0, 482, 0, 0, 483, 0,
    484, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 487, 0, 488, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 490, 0,
    0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 493, 0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 499, 0, 0, 0, 0, 0, 500,
    0, 501, 0, 0, 502, 0, 0, 503, 0, 504, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 507, 0, 508, 0, 0, 0,
    0, 0, 509, 0, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 513, 0, 0, 0, 514, 0, 0,
    0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 518, 0,
    0, 0, 519, 0, 0, 0, 0, 0, 520, 0, 521, 0, 0, 522, 0, 0, 523, 0, 524, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 526, 0,
    0, 0, 0, 527, 0, 528, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 530, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0,
    0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536,
    0, 0, 0, 537, 0, 0, 0, 538, 0, 0, 0, 539, 0, 0, 0, 0, 0, 540, 0, 541, 0, 0, 542, 0, 0, 543, 0, 544, 0, 0, 0, 0,
    0, 545, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 547, 0, 548, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 550, 0, 0, 0, 0, 551, 0,
    0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 553, 0, 0, 0, 554, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 557, 0, 0, 0, 558, 0, 0, 0, 559, 0, 0, 0, 0, 0, 560, 0, 561, 0, 0, 562,
    0, 0, 563, 0, 564, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 567, 0, 568, 0, 0, 0, 0, 0, 569, 0, 0,
    0, 0, 570, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0, 575, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 577, 0, 0, 0, 578, 0, 0, 0, 579, 0, 0,
    0, 0, 0, 580, 0, 581, 0, 0, 582, 0, 0, 583, 0, 584, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 587, 0,
    588, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 590, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 593, 0, 0,
    0, 594, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 597, 0,
    0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 601, 0, 602, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 604,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0,
    0, 0, 0, 0, 0, 0, 0, 606, 0, 607, 0, 0, 608, 0, 609, 0, 0, 610, 0, 611, 0, 0, 612, 0, 613, 0, 0, 614, 0, 615, 0, 0,
    616, 0, 617, 0, 0, 618, 0, 619, 0, 0, 620, 0, 621, 0, 0, 622, 0, 623, 0, 0, 624, 0, 625, 0, 0, 626, 0, 627, 0, 0, 628, 0,
    629, 0, 0, 630, 0, 631, 0, 0, 632, 0, 633, 0, 0, 634, 0, 635, 0, 0, 636, 0, 637, 0, 0, 638, 0, 639, 0, 0, 640, 0, 641, 0,
    0, 642, 0, 643, 0, 0, 644, 0, 645, 0, 0, 646, 0, 647, 0, 0, 648, 0, 649, 0, 0, 650, 0, 651, 0, 0, 0, 0, 0, 652, 0, 0,
    0, 653, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 655, 0, 0, 0, 656, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 659, 0, 0, 0, 660, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 662, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 664, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 667, 0,
    0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 669, 0, 0, 0, 0, 670, 0, 0, 0, 671, 0, 0, 0, 672, 0, 0, 0, 673, 0, 0, 0, 0,
    674, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 677, 0, 0, 678, 0, 0, 0, 0, 0, 0, 679, 0, 0, 680, 0, 0,
    0, 0, 681, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 685, 0, 0, 686, 0, 0, 0, 0,
    0, 0, 0, 687, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 690, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    692, 0, 0, 0, 693, 0, 0, 0, 694, 0, 0, 0, 695, 0, 0, 0, 696, 0, 0, 0, 697, 0, 0, 0, 698, 0, 0, 0, 699, 0, 0, 0,
    700, 0, 0, 0, 701, 0, 0, 702, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 705, 0, 0, 706, 0, 0,
    0, 0, 0, 0, 0, 707, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 712, 0,
    0, 0, 0, 0, 0, 0, 713, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0, 717, 0, 0, 718,
    0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 720, 0, 0, 0, 0, 0, 721, 0, 0, 722, 0, 0, 0, 0, 0, 0, 0, 723, 0, 0, 724, 0,
    0, 0, 0, 0, 725, 0, 0, 726, 0, 0, 0, 0, 727, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 730, 0, 0, 0, 0, 0,
    0, 0, 731, 0, 0, 732, 0, 0, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 734, 0, 0, 0, 735, 0, 0, 0, 0, 736, 0, 0, 0, 737,
    0, 0, 0, 0, 738, 0, 0, 0, 739, 0, 0, 0, 0, 740, 0, 0, 0, 741, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 743, 0, 0, 0, 0, 0, 0, 744, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 746, 0, 747, 0, 0, 0, 0, 0, 748, 0, 0, 0,
    0, 0, 749, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 0, 752, 0, 0, 0, 0, 0, 753, 0, 0,
    0, 0, 0, 754, 0, 0, 0, 755, 0, 0, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 757, 0,
    0, 0, 758, 0, 0, 0, 759, 0, 0, 0, 760, 0, 0, 0, 0, 0, 761, 0, 0, 0, 0, 762, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0,
    764, 0, 0, 0, 0, 765, 0, 766, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 0, 0, 769, 0, 0,
    0, 0, 0, 0, 0, 0, 770, 0, 771, 0, 0, 772, 0, 773, 0, 0, 774, 0, 775, 0, 0, 776, 0, 777, 0, 0, 0, 0, 0, 0, 778, 0,
    0, 0, 0, 0, 779, 0, 0, 0, 0, 0, 780, 0, 0, 0, 781, 0, 0, 0, 782,
};
void recomp_unit_0130_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A0C000u;
        entry_id = (entry_delta < 16332u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0130[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A0C000;
    case 2u: goto L_08A0C008;
    case 3u: goto L_08A0C020;
    case 4u: goto L_08A0C038;
    case 5u: goto L_08A0C04C;
    case 6u: goto L_08A0C054;
    case 7u: goto L_08A0C06C;
    case 8u: goto L_08A0C080;
    case 9u: goto L_08A0C094;
    case 10u: goto L_08A0C0B0;
    case 11u: goto L_08A0C0C8;
    case 12u: goto L_08A0C0D8;
    case 13u: goto L_08A0C0E8;
    case 14u: goto L_08A0C13C;
    case 15u: goto L_08A0C14C;
    case 16u: goto L_08A0C15C;
    case 17u: goto L_08A0C16C;
    case 18u: goto L_08A0C184;
    case 19u: goto L_08A0C198;
    case 20u: goto L_08A0C1A0;
    case 21u: goto L_08A0C1B8;
    case 22u: goto L_08A0C1D0;
    case 23u: goto L_08A0C1EC;
    case 24u: goto L_08A0C210;
    case 25u: goto L_08A0C220;
    case 26u: goto L_08A0C238;
    case 27u: goto L_08A0C250;
    case 28u: goto L_08A0C260;
    case 29u: goto L_08A0C270;
    case 30u: goto L_08A0C2BC;
    case 31u: goto L_08A0C2CC;
    case 32u: goto L_08A0C2DC;
    case 33u: goto L_08A0C2EC;
    case 34u: goto L_08A0C2FC;
    case 35u: goto L_08A0C314;
    case 36u: goto L_08A0C328;
    case 37u: goto L_08A0C330;
    case 38u: goto L_08A0C348;
    case 39u: goto L_08A0C360;
    case 40u: goto L_08A0C388;
    case 41u: goto L_08A0C3AC;
    case 42u: goto L_08A0C3B4;
    case 43u: goto L_08A0C3C0;
    case 44u: goto L_08A0C3C8;
    case 45u: goto L_08A0C3D4;
    case 46u: goto L_08A0C3DC;
    case 47u: goto L_08A0C3E8;
    case 48u: goto L_08A0C3F0;
    case 49u: goto L_08A0C40C;
    case 50u: goto L_08A0C424;
    case 51u: goto L_08A0C444;
    case 52u: goto L_08A0C45C;
    case 53u: goto L_08A0C468;
    case 54u: goto L_08A0C470;
    case 55u: goto L_08A0C47C;
    case 56u: goto L_08A0C488;
    case 57u: goto L_08A0C490;
    case 58u: goto L_08A0C49C;
    case 59u: goto L_08A0C4A8;
    case 60u: goto L_08A0C4B0;
    case 61u: goto L_08A0C4BC;
    case 62u: goto L_08A0C4C8;
    case 63u: goto L_08A0C4D0;
    case 64u: goto L_08A0C4D8;
    case 65u: goto L_08A0C4EC;
    case 66u: goto L_08A0C504;
    case 67u: goto L_08A0C510;
    case 68u: goto L_08A0C520;
    case 69u: goto L_08A0C52C;
    case 70u: goto L_08A0C538;
    case 71u: goto L_08A0C554;
    case 72u: goto L_08A0C56C;
    case 73u: goto L_08A0C57C;
    case 74u: goto L_08A0C58C;
    case 75u: goto L_08A0C5E8;
    case 76u: goto L_08A0C5F8;
    case 77u: goto L_08A0C608;
    case 78u: goto L_08A0C618;
    case 79u: goto L_08A0C628;
    case 80u: goto L_08A0C650;
    case 81u: goto L_08A0C66C;
    case 82u: goto L_08A0C67C;
    case 83u: goto L_08A0C688;
    case 84u: goto L_08A0C6A4;
    case 85u: goto L_08A0C6B0;
    case 86u: goto L_08A0C6CC;
    case 87u: goto L_08A0C6D8;
    case 88u: goto L_08A0C6F4;
    case 89u: goto L_08A0C700;
    case 90u: goto L_08A0C730;
    case 91u: goto L_08A0C74C;
    case 92u: goto L_08A0C764;
    case 93u: goto L_08A0C778;
    case 94u: goto L_08A0C78C;
    case 95u: goto L_08A0C7A4;
    case 96u: goto L_08A0C7AC;
    case 97u: goto L_08A0C7B8;
    case 98u: goto L_08A0C7C4;
    case 99u: goto L_08A0C7CC;
    case 100u: goto L_08A0C7E4;
    case 101u: goto L_08A0C7FC;
    case 102u: goto L_08A0C810;
    case 103u: goto L_08A0C818;
    case 104u: goto L_08A0C830;
    case 105u: goto L_08A0C844;
    case 106u: goto L_08A0C858;
    case 107u: goto L_08A0C874;
    case 108u: goto L_08A0C88C;
    case 109u: goto L_08A0C89C;
    case 110u: goto L_08A0C8AC;
    case 111u: goto L_08A0C8F8;
    case 112u: goto L_08A0C908;
    case 113u: goto L_08A0C918;
    case 114u: goto L_08A0C928;
    case 115u: goto L_08A0C940;
    case 116u: goto L_08A0C954;
    case 117u: goto L_08A0C95C;
    case 118u: goto L_08A0C974;
    case 119u: goto L_08A0C98C;
    case 120u: goto L_08A0C9AC;
    case 121u: goto L_08A0C9D0;
    case 122u: goto L_08A0C9D8;
    case 123u: goto L_08A0C9F0;
    case 124u: goto L_08A0CA00;
    case 125u: goto L_08A0CA18;
    case 126u: goto L_08A0CA30;
    case 127u: goto L_08A0CA40;
    case 128u: goto L_08A0CA50;
    case 129u: goto L_08A0CAAC;
    case 130u: goto L_08A0CABC;
    case 131u: goto L_08A0CACC;
    case 132u: goto L_08A0CADC;
    case 133u: goto L_08A0CB04;
    case 134u: goto L_08A0CB20;
    case 135u: goto L_08A0CB30;
    case 136u: goto L_08A0CB3C;
    case 137u: goto L_08A0CB7C;
    case 138u: goto L_08A0CB98;
    case 139u: goto L_08A0CBB0;
    case 140u: goto L_08A0CBC4;
    case 141u: goto L_08A0CBD8;
    case 142u: goto L_08A0CBF0;
    case 143u: goto L_08A0CC04;
    case 144u: goto L_08A0CC0C;
    case 145u: goto L_08A0CC24;
    case 146u: goto L_08A0CC3C;
    case 147u: goto L_08A0CC58;
    case 148u: goto L_08A0CC7C;
    case 149u: goto L_08A0CC84;
    case 150u: goto L_08A0CCA0;
    case 151u: goto L_08A0CCB8;
    case 152u: goto L_08A0CCD0;
    case 153u: goto L_08A0CCE0;
    case 154u: goto L_08A0CCF0;
    case 155u: goto L_08A0CD54;
    case 156u: goto L_08A0CD64;
    case 157u: goto L_08A0CD74;
    case 158u: goto L_08A0CD84;
    case 159u: goto L_08A0CDAC;
    case 160u: goto L_08A0CDC8;
    case 161u: goto L_08A0CDD8;
    case 162u: goto L_08A0CDE4;
    case 163u: goto L_08A0CE18;
    case 164u: goto L_08A0CE28;
    case 165u: goto L_08A0CE44;
    case 166u: goto L_08A0CE54;
    case 167u: goto L_08A0CE64;
    case 168u: goto L_08A0CE74;
    case 169u: goto L_08A0CE84;
    case 170u: goto L_08A0CE9C;
    case 171u: goto L_08A0CEB0;
    case 172u: goto L_08A0CEB8;
    case 173u: goto L_08A0CED0;
    case 174u: goto L_08A0CEE8;
    case 175u: goto L_08A0CEF8;
    case 176u: goto L_08A0CF08;
    case 177u: goto L_08A0CF50;
    case 178u: goto L_08A0CF60;
    case 179u: goto L_08A0CF70;
    case 180u: goto L_08A0CF80;
    case 181u: goto L_08A0CF98;
    case 182u: goto L_08A0CFA0;
    case 183u: goto L_08A0CFAC;
    case 184u: goto L_08A0CFB8;
    case 185u: goto L_08A0CFC0;
    case 186u: goto L_08A0CFD8;
    case 187u: goto L_08A0CFF0;
    case 188u: goto L_08A0D004;
    case 189u: goto L_08A0D00C;
    case 190u: goto L_08A0D024;
    case 191u: goto L_08A0D03C;
    case 192u: goto L_08A0D05C;
    case 193u: goto L_08A0D080;
    case 194u: goto L_08A0D088;
    case 195u: goto L_08A0D094;
    case 196u: goto L_08A0D09C;
    case 197u: goto L_08A0D0B4;
    case 198u: goto L_08A0D0CC;
    case 199u: goto L_08A0D0E4;
    case 200u: goto L_08A0D0F4;
    case 201u: goto L_08A0D104;
    case 202u: goto L_08A0D160;
    case 203u: goto L_08A0D170;
    case 204u: goto L_08A0D180;
    case 205u: goto L_08A0D190;
    case 206u: goto L_08A0D1B8;
    case 207u: goto L_08A0D1D4;
    case 208u: goto L_08A0D1E4;
    case 209u: goto L_08A0D1F0;
    case 210u: goto L_08A0D20C;
    case 211u: goto L_08A0D218;
    case 212u: goto L_08A0D234;
    case 213u: goto L_08A0D24C;
    case 214u: goto L_08A0D280;
    case 215u: goto L_08A0D29C;
    case 216u: goto L_08A0D2B4;
    case 217u: goto L_08A0D2D8;
    case 218u: goto L_08A0D2E0;
    case 219u: goto L_08A0D2F8;
    case 220u: goto L_08A0D310;
    case 221u: goto L_08A0D318;
    case 222u: goto L_08A0D324;
    case 223u: goto L_08A0D330;
    case 224u: goto L_08A0D338;
    case 225u: goto L_08A0D350;
    case 226u: goto L_08A0D368;
    case 227u: goto L_08A0D37C;
    case 228u: goto L_08A0D384;
    case 229u: goto L_08A0D39C;
    case 230u: goto L_08A0D3B0;
    case 231u: goto L_08A0D3C4;
    case 232u: goto L_08A0D3E0;
    case 233u: goto L_08A0D3F8;
    case 234u: goto L_08A0D408;
    case 235u: goto L_08A0D418;
    case 236u: goto L_08A0D46C;
    case 237u: goto L_08A0D47C;
    case 238u: goto L_08A0D48C;
    case 239u: goto L_08A0D49C;
    case 240u: goto L_08A0D4B4;
    case 241u: goto L_08A0D4BC;
    case 242u: goto L_08A0D4C8;
    case 243u: goto L_08A0D4D4;
    case 244u: goto L_08A0D4DC;
    case 245u: goto L_08A0D4F4;
    case 246u: goto L_08A0D50C;
    case 247u: goto L_08A0D520;
    case 248u: goto L_08A0D528;
    case 249u: goto L_08A0D540;
    case 250u: goto L_08A0D558;
    case 251u: goto L_08A0D57C;
    case 252u: goto L_08A0D5A0;
    case 253u: goto L_08A0D5A8;
    case 254u: goto L_08A0D5B4;
    case 255u: goto L_08A0D5BC;
    case 256u: goto L_08A0D5C8;
    case 257u: goto L_08A0D5D0;
    case 258u: goto L_08A0D5DC;
    case 259u: goto L_08A0D5E4;
    case 260u: goto L_08A0D5FC;
    case 261u: goto L_08A0D614;
    case 262u: goto L_08A0D624;
    case 263u: goto L_08A0D634;
    case 264u: goto L_08A0D690;
    case 265u: goto L_08A0D6A0;
    case 266u: goto L_08A0D6B0;
    case 267u: goto L_08A0D6C0;
    case 268u: goto L_08A0D6E8;
    case 269u: goto L_08A0D704;
    case 270u: goto L_08A0D714;
    case 271u: goto L_08A0D720;
    case 272u: goto L_08A0D73C;
    case 273u: goto L_08A0D748;
    case 274u: goto L_08A0D764;
    case 275u: goto L_08A0D770;
    case 276u: goto L_08A0D784;
    case 277u: goto L_08A0D790;
    case 278u: goto L_08A0D7C4;
    case 279u: goto L_08A0D7E0;
    case 280u: goto L_08A0D7F8;
    case 281u: goto L_08A0D80C;
    case 282u: goto L_08A0D814;
    case 283u: goto L_08A0D82C;
    case 284u: goto L_08A0D844;
    case 285u: goto L_08A0D854;
    case 286u: goto L_08A0D864;
    case 287u: goto L_08A0D8B4;
    case 288u: goto L_08A0D8C4;
    case 289u: goto L_08A0D8D4;
    case 290u: goto L_08A0D8E4;
    case 291u: goto L_08A0D908;
    case 292u: goto L_08A0D924;
    case 293u: goto L_08A0D934;
    case 294u: goto L_08A0D960;
    case 295u: goto L_08A0D978;
    case 296u: goto L_08A0D990;
    case 297u: goto L_08A0D9A4;
    case 298u: goto L_08A0D9AC;
    case 299u: goto L_08A0D9C4;
    case 300u: goto L_08A0D9DC;
    case 301u: goto L_08A0DA0C;
    case 302u: goto L_08A0DA30;
    case 303u: goto L_08A0DA38;
    case 304u: goto L_08A0DA44;
    case 305u: goto L_08A0DA4C;
    case 306u: goto L_08A0DA58;
    case 307u: goto L_08A0DA60;
    case 308u: goto L_08A0DA6C;
    case 309u: goto L_08A0DA74;
    case 310u: goto L_08A0DA8C;
    case 311u: goto L_08A0DA9C;
    case 312u: goto L_08A0DAB4;
    case 313u: goto L_08A0DAD4;
    case 314u: goto L_08A0DAEC;
    case 315u: goto L_08A0DAF8;
    case 316u: goto L_08A0DB00;
    case 317u: goto L_08A0DB0C;
    case 318u: goto L_08A0DB18;
    case 319u: goto L_08A0DB20;
    case 320u: goto L_08A0DB2C;
    case 321u: goto L_08A0DB38;
    case 322u: goto L_08A0DB40;
    case 323u: goto L_08A0DB4C;
    case 324u: goto L_08A0DB58;
    case 325u: goto L_08A0DB60;
    case 326u: goto L_08A0DB68;
    case 327u: goto L_08A0DB80;
    case 328u: goto L_08A0DB8C;
    case 329u: goto L_08A0DB94;
    case 330u: goto L_08A0DB9C;
    case 331u: goto L_08A0DBB4;
    case 332u: goto L_08A0DBC0;
    case 333u: goto L_08A0DBCC;
    case 334u: goto L_08A0DBD8;
    case 335u: goto L_08A0DBE0;
    case 336u: goto L_08A0DBFC;
    case 337u: goto L_08A0DC08;
    case 338u: goto L_08A0DC14;
    case 339u: goto L_08A0DC30;
    case 340u: goto L_08A0DC48;
    case 341u: goto L_08A0DC58;
    case 342u: goto L_08A0DC68;
    case 343u: goto L_08A0DCC4;
    case 344u: goto L_08A0DCD4;
    case 345u: goto L_08A0DCE4;
    case 346u: goto L_08A0DCF4;
    case 347u: goto L_08A0DD1C;
    case 348u: goto L_08A0DD38;
    case 349u: goto L_08A0DD48;
    case 350u: goto L_08A0DD54;
    case 351u: goto L_08A0DD7C;
    case 352u: goto L_08A0DD8C;
    case 353u: goto L_08A0DD9C;
    case 354u: goto L_08A0DDA8;
    case 355u: goto L_08A0DDCC;
    case 356u: goto L_08A0DDD8;
    case 357u: goto L_08A0DE00;
    case 358u: goto L_08A0DE0C;
    case 359u: goto L_08A0DE28;
    case 360u: goto L_08A0DE40;
    case 361u: goto L_08A0DE74;
    case 362u: goto L_08A0DE90;
    case 363u: goto L_08A0DEA8;
    case 364u: goto L_08A0DEBC;
    case 365u: goto L_08A0DED0;
    case 366u: goto L_08A0DEE8;
    case 367u: goto L_08A0DEF0;
    case 368u: goto L_08A0DEFC;
    case 369u: goto L_08A0DF08;
    case 370u: goto L_08A0DF10;
    case 371u: goto L_08A0DF28;
    case 372u: goto L_08A0DF40;
    case 373u: goto L_08A0DF54;
    case 374u: goto L_08A0DF5C;
    case 375u: goto L_08A0DF74;
    case 376u: goto L_08A0DF88;
    case 377u: goto L_08A0DF9C;
    case 378u: goto L_08A0DFB8;
    case 379u: goto L_08A0DFD0;
    case 380u: goto L_08A0DFE0;
    case 381u: goto L_08A0DFF0;
    case 382u: goto L_08A0E03C;
    case 383u: goto L_08A0E04C;
    case 384u: goto L_08A0E05C;
    case 385u: goto L_08A0E06C;
    case 386u: goto L_08A0E084;
    case 387u: goto L_08A0E098;
    case 388u: goto L_08A0E0A0;
    case 389u: goto L_08A0E0B8;
    case 390u: goto L_08A0E0CC;
    case 391u: goto L_08A0E0E0;
    case 392u: goto L_08A0E0FC;
    case 393u: goto L_08A0E114;
    case 394u: goto L_08A0E124;
    case 395u: goto L_08A0E134;
    case 396u: goto L_08A0E180;
    case 397u: goto L_08A0E190;
    case 398u: goto L_08A0E1A0;
    case 399u: goto L_08A0E1B0;
    case 400u: goto L_08A0E1C8;
    case 401u: goto L_08A0E1D0;
    case 402u: goto L_08A0E1DC;
    case 403u: goto L_08A0E1E8;
    case 404u: goto L_08A0E1F0;
    case 405u: goto L_08A0E208;
    case 406u: goto L_08A0E220;
    case 407u: goto L_08A0E234;
    case 408u: goto L_08A0E23C;
    case 409u: goto L_08A0E254;
    case 410u: goto L_08A0E268;
    case 411u: goto L_08A0E27C;
    case 412u: goto L_08A0E298;
    case 413u: goto L_08A0E2B0;
    case 414u: goto L_08A0E2C0;
    case 415u: goto L_08A0E2D0;
    case 416u: goto L_08A0E324;
    case 417u: goto L_08A0E334;
    case 418u: goto L_08A0E344;
    case 419u: goto L_08A0E354;
    case 420u: goto L_08A0E36C;
    case 421u: goto L_08A0E374;
    case 422u: goto L_08A0E380;
    case 423u: goto L_08A0E38C;
    case 424u: goto L_08A0E394;
    case 425u: goto L_08A0E3AC;
    case 426u: goto L_08A0E3C4;
    case 427u: goto L_08A0E3D8;
    case 428u: goto L_08A0E3E0;
    case 429u: goto L_08A0E3F8;
    case 430u: goto L_08A0E40C;
    case 431u: goto L_08A0E420;
    case 432u: goto L_08A0E43C;
    case 433u: goto L_08A0E454;
    case 434u: goto L_08A0E464;
    case 435u: goto L_08A0E474;
    case 436u: goto L_08A0E4C8;
    case 437u: goto L_08A0E4D8;
    case 438u: goto L_08A0E4E8;
    case 439u: goto L_08A0E4F8;
    case 440u: goto L_08A0E510;
    case 441u: goto L_08A0E518;
    case 442u: goto L_08A0E524;
    case 443u: goto L_08A0E530;
    case 444u: goto L_08A0E538;
    case 445u: goto L_08A0E550;
    case 446u: goto L_08A0E568;
    case 447u: goto L_08A0E57C;
    case 448u: goto L_08A0E584;
    case 449u: goto L_08A0E59C;
    case 450u: goto L_08A0E5B0;
    case 451u: goto L_08A0E5C4;
    case 452u: goto L_08A0E5E0;
    case 453u: goto L_08A0E5F8;
    case 454u: goto L_08A0E608;
    case 455u: goto L_08A0E618;
    case 456u: goto L_08A0E66C;
    case 457u: goto L_08A0E67C;
    case 458u: goto L_08A0E68C;
    case 459u: goto L_08A0E69C;
    case 460u: goto L_08A0E6B4;
    case 461u: goto L_08A0E6BC;
    case 462u: goto L_08A0E6C8;
    case 463u: goto L_08A0E6D4;
    case 464u: goto L_08A0E6DC;
    case 465u: goto L_08A0E6F4;
    case 466u: goto L_08A0E70C;
    case 467u: goto L_08A0E720;
    case 468u: goto L_08A0E728;
    case 469u: goto L_08A0E740;
    case 470u: goto L_08A0E754;
    case 471u: goto L_08A0E768;
    case 472u: goto L_08A0E784;
    case 473u: goto L_08A0E79C;
    case 474u: goto L_08A0E7AC;
    case 475u: goto L_08A0E7BC;
    case 476u: goto L_08A0E810;
    case 477u: goto L_08A0E820;
    case 478u: goto L_08A0E830;
    case 479u: goto L_08A0E840;
    case 480u: goto L_08A0E858;
    case 481u: goto L_08A0E860;
    case 482u: goto L_08A0E86C;
    case 483u: goto L_08A0E878;
    case 484u: goto L_08A0E880;
    case 485u: goto L_08A0E898;
    case 486u: goto L_08A0E8B0;
    case 487u: goto L_08A0E8C4;
    case 488u: goto L_08A0E8CC;
    case 489u: goto L_08A0E8E4;
    case 490u: goto L_08A0E8F8;
    case 491u: goto L_08A0E90C;
    case 492u: goto L_08A0E928;
    case 493u: goto L_08A0E940;
    case 494u: goto L_08A0E950;
    case 495u: goto L_08A0E960;
    case 496u: goto L_08A0E9B4;
    case 497u: goto L_08A0E9C4;
    case 498u: goto L_08A0E9D4;
    case 499u: goto L_08A0E9E4;
    case 500u: goto L_08A0E9FC;
    case 501u: goto L_08A0EA04;
    case 502u: goto L_08A0EA10;
    case 503u: goto L_08A0EA1C;
    case 504u: goto L_08A0EA24;
    case 505u: goto L_08A0EA3C;
    case 506u: goto L_08A0EA54;
    case 507u: goto L_08A0EA68;
    case 508u: goto L_08A0EA70;
    case 509u: goto L_08A0EA88;
    case 510u: goto L_08A0EA9C;
    case 511u: goto L_08A0EAB0;
    case 512u: goto L_08A0EACC;
    case 513u: goto L_08A0EAE4;
    case 514u: goto L_08A0EAF4;
    case 515u: goto L_08A0EB04;
    case 516u: goto L_08A0EB58;
    case 517u: goto L_08A0EB68;
    case 518u: goto L_08A0EB78;
    case 519u: goto L_08A0EB88;
    case 520u: goto L_08A0EBA0;
    case 521u: goto L_08A0EBA8;
    case 522u: goto L_08A0EBB4;
    case 523u: goto L_08A0EBC0;
    case 524u: goto L_08A0EBC8;
    case 525u: goto L_08A0EBE0;
    case 526u: goto L_08A0EBF8;
    case 527u: goto L_08A0EC0C;
    case 528u: goto L_08A0EC14;
    case 529u: goto L_08A0EC2C;
    case 530u: goto L_08A0EC40;
    case 531u: goto L_08A0EC54;
    case 532u: goto L_08A0EC70;
    case 533u: goto L_08A0EC88;
    case 534u: goto L_08A0EC98;
    case 535u: goto L_08A0ECA8;
    case 536u: goto L_08A0ECFC;
    case 537u: goto L_08A0ED0C;
    case 538u: goto L_08A0ED1C;
    case 539u: goto L_08A0ED2C;
    case 540u: goto L_08A0ED44;
    case 541u: goto L_08A0ED4C;
    case 542u: goto L_08A0ED58;
    case 543u: goto L_08A0ED64;
    case 544u: goto L_08A0ED6C;
    case 545u: goto L_08A0ED84;
    case 546u: goto L_08A0ED9C;
    case 547u: goto L_08A0EDB0;
    case 548u: goto L_08A0EDB8;
    case 549u: goto L_08A0EDD0;
    case 550u: goto L_08A0EDE4;
    case 551u: goto L_08A0EDF8;
    case 552u: goto L_08A0EE14;
    case 553u: goto L_08A0EE2C;
    case 554u: goto L_08A0EE3C;
    case 555u: goto L_08A0EE4C;
    case 556u: goto L_08A0EEA0;
    case 557u: goto L_08A0EEB0;
    case 558u: goto L_08A0EEC0;
    case 559u: goto L_08A0EED0;
    case 560u: goto L_08A0EEE8;
    case 561u: goto L_08A0EEF0;
    case 562u: goto L_08A0EEFC;
    case 563u: goto L_08A0EF08;
    case 564u: goto L_08A0EF10;
    case 565u: goto L_08A0EF28;
    case 566u: goto L_08A0EF40;
    case 567u: goto L_08A0EF54;
    case 568u: goto L_08A0EF5C;
    case 569u: goto L_08A0EF74;
    case 570u: goto L_08A0EF88;
    case 571u: goto L_08A0EF9C;
    case 572u: goto L_08A0EFB8;
    case 573u: goto L_08A0EFD0;
    case 574u: goto L_08A0EFE0;
    case 575u: goto L_08A0EFF0;
    case 576u: goto L_08A0F044;
    case 577u: goto L_08A0F054;
    case 578u: goto L_08A0F064;
    case 579u: goto L_08A0F074;
    case 580u: goto L_08A0F08C;
    case 581u: goto L_08A0F094;
    case 582u: goto L_08A0F0A0;
    case 583u: goto L_08A0F0AC;
    case 584u: goto L_08A0F0B4;
    case 585u: goto L_08A0F0CC;
    case 586u: goto L_08A0F0E4;
    case 587u: goto L_08A0F0F8;
    case 588u: goto L_08A0F100;
    case 589u: goto L_08A0F118;
    case 590u: goto L_08A0F12C;
    case 591u: goto L_08A0F140;
    case 592u: goto L_08A0F15C;
    case 593u: goto L_08A0F174;
    case 594u: goto L_08A0F184;
    case 595u: goto L_08A0F194;
    case 596u: goto L_08A0F1E8;
    case 597u: goto L_08A0F1F8;
    case 598u: goto L_08A0F208;
    case 599u: goto L_08A0F218;
    case 600u: goto L_08A0F230;
    case 601u: goto L_08A0F244;
    case 602u: goto L_08A0F24C;
    case 603u: goto L_08A0F264;
    case 604u: goto L_08A0F27C;
    case 605u: goto L_08A0F2F8;
    case 606u: goto L_08A0F31C;
    case 607u: goto L_08A0F324;
    case 608u: goto L_08A0F330;
    case 609u: goto L_08A0F338;
    case 610u: goto L_08A0F344;
    case 611u: goto L_08A0F34C;
    case 612u: goto L_08A0F358;
    case 613u: goto L_08A0F360;
    case 614u: goto L_08A0F36C;
    case 615u: goto L_08A0F374;
    case 616u: goto L_08A0F380;
    case 617u: goto L_08A0F388;
    case 618u: goto L_08A0F394;
    case 619u: goto L_08A0F39C;
    case 620u: goto L_08A0F3A8;
    case 621u: goto L_08A0F3B0;
    case 622u: goto L_08A0F3BC;
    case 623u: goto L_08A0F3C4;
    case 624u: goto L_08A0F3D0;
    case 625u: goto L_08A0F3D8;
    case 626u: goto L_08A0F3E4;
    case 627u: goto L_08A0F3EC;
    case 628u: goto L_08A0F3F8;
    case 629u: goto L_08A0F400;
    case 630u: goto L_08A0F40C;
    case 631u: goto L_08A0F414;
    case 632u: goto L_08A0F420;
    case 633u: goto L_08A0F428;
    case 634u: goto L_08A0F434;
    case 635u: goto L_08A0F43C;
    case 636u: goto L_08A0F448;
    case 637u: goto L_08A0F450;
    case 638u: goto L_08A0F45C;
    case 639u: goto L_08A0F464;
    case 640u: goto L_08A0F470;
    case 641u: goto L_08A0F478;
    case 642u: goto L_08A0F484;
    case 643u: goto L_08A0F48C;
    case 644u: goto L_08A0F498;
    case 645u: goto L_08A0F4A0;
    case 646u: goto L_08A0F4AC;
    case 647u: goto L_08A0F4B4;
    case 648u: goto L_08A0F4C0;
    case 649u: goto L_08A0F4C8;
    case 650u: goto L_08A0F4D4;
    case 651u: goto L_08A0F4DC;
    case 652u: goto L_08A0F4F4;
    case 653u: goto L_08A0F504;
    case 654u: goto L_08A0F51C;
    case 655u: goto L_08A0F534;
    case 656u: goto L_08A0F544;
    case 657u: goto L_08A0F554;
    case 658u: goto L_08A0F5B0;
    case 659u: goto L_08A0F5C0;
    case 660u: goto L_08A0F5D0;
    case 661u: goto L_08A0F5E0;
    case 662u: goto L_08A0F608;
    case 663u: goto L_08A0F624;
    case 664u: goto L_08A0F634;
    case 665u: goto L_08A0F648;
    case 666u: goto L_08A0F668;
    case 667u: goto L_08A0F678;
    case 668u: goto L_08A0F698;
    case 669u: goto L_08A0F6A8;
    case 670u: goto L_08A0F6BC;
    case 671u: goto L_08A0F6CC;
    case 672u: goto L_08A0F6DC;
    case 673u: goto L_08A0F6EC;
    case 674u: goto L_08A0F700;
    case 675u: goto L_08A0F710;
    case 676u: goto L_08A0F730;
    case 677u: goto L_08A0F740;
    case 678u: goto L_08A0F74C;
    case 679u: goto L_08A0F768;
    case 680u: goto L_08A0F774;
    case 681u: goto L_08A0F788;
    case 682u: goto L_08A0F794;
    case 683u: goto L_08A0F7B4;
    case 684u: goto L_08A0F7C0;
    case 685u: goto L_08A0F7E0;
    case 686u: goto L_08A0F7EC;
    case 687u: goto L_08A0F80C;
    case 688u: goto L_08A0F818;
    case 689u: goto L_08A0F838;
    case 690u: goto L_08A0F848;
    case 691u: goto L_08A0F858;
    case 692u: goto L_08A0F880;
    case 693u: goto L_08A0F890;
    case 694u: goto L_08A0F8A0;
    case 695u: goto L_08A0F8B0;
    case 696u: goto L_08A0F8C0;
    case 697u: goto L_08A0F8D0;
    case 698u: goto L_08A0F8E0;
    case 699u: goto L_08A0F8F0;
    case 700u: goto L_08A0F900;
    case 701u: goto L_08A0F910;
    case 702u: goto L_08A0F91C;
    case 703u: goto L_08A0F93C;
    case 704u: goto L_08A0F948;
    case 705u: goto L_08A0F968;
    case 706u: goto L_08A0F974;
    case 707u: goto L_08A0F994;
    case 708u: goto L_08A0F9A0;
    case 709u: goto L_08A0F9C0;
    case 710u: goto L_08A0F9CC;
    case 711u: goto L_08A0F9EC;
    case 712u: goto L_08A0F9F8;
    case 713u: goto L_08A0FA18;
    case 714u: goto L_08A0FA24;
    case 715u: goto L_08A0FA44;
    case 716u: goto L_08A0FA50;
    case 717u: goto L_08A0FA70;
    case 718u: goto L_08A0FA7C;
    case 719u: goto L_08A0FA9C;
    case 720u: goto L_08A0FAA8;
    case 721u: goto L_08A0FAC0;
    case 722u: goto L_08A0FACC;
    case 723u: goto L_08A0FAEC;
    case 724u: goto L_08A0FAF8;
    case 725u: goto L_08A0FB10;
    case 726u: goto L_08A0FB1C;
    case 727u: goto L_08A0FB30;
    case 728u: goto L_08A0FB3C;
    case 729u: goto L_08A0FB5C;
    case 730u: goto L_08A0FB68;
    case 731u: goto L_08A0FB88;
    case 732u: goto L_08A0FB94;
    case 733u: goto L_08A0FBB4;
    case 734u: goto L_08A0FBC8;
    case 735u: goto L_08A0FBD8;
    case 736u: goto L_08A0FBEC;
    case 737u: goto L_08A0FBFC;
    case 738u: goto L_08A0FC10;
    case 739u: goto L_08A0FC20;
    case 740u: goto L_08A0FC34;
    case 741u: goto L_08A0FC44;
    case 742u: goto L_08A0FC50;
    case 743u: goto L_08A0FC88;
    case 744u: goto L_08A0FCA4;
    case 745u: goto L_08A0FCBC;
    case 746u: goto L_08A0FCD0;
    case 747u: goto L_08A0FCD8;
    case 748u: goto L_08A0FCF0;
    case 749u: goto L_08A0FD08;
    case 750u: goto L_08A0FD28;
    case 751u: goto L_08A0FD4C;
    case 752u: goto L_08A0FD5C;
    case 753u: goto L_08A0FD74;
    case 754u: goto L_08A0FD8C;
    case 755u: goto L_08A0FD9C;
    case 756u: goto L_08A0FDAC;
    case 757u: goto L_08A0FDF8;
    case 758u: goto L_08A0FE08;
    case 759u: goto L_08A0FE18;
    case 760u: goto L_08A0FE28;
    case 761u: goto L_08A0FE40;
    case 762u: goto L_08A0FE54;
    case 763u: goto L_08A0FE68;
    case 764u: goto L_08A0FE80;
    case 765u: goto L_08A0FE94;
    case 766u: goto L_08A0FE9C;
    case 767u: goto L_08A0FEB4;
    case 768u: goto L_08A0FECC;
    case 769u: goto L_08A0FEF4;
    case 770u: goto L_08A0FF18;
    case 771u: goto L_08A0FF20;
    case 772u: goto L_08A0FF2C;
    case 773u: goto L_08A0FF34;
    case 774u: goto L_08A0FF40;
    case 775u: goto L_08A0FF48;
    case 776u: goto L_08A0FF54;
    case 777u: goto L_08A0FF5C;
    case 778u: goto L_08A0FF78;
    case 779u: goto L_08A0FF90;
    case 780u: goto L_08A0FFA8;
    case 781u: goto L_08A0FFB8;
    case 782u: goto L_08A0FFC8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A0C000:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25864), ctx.gpr[2]);
    goto L_08A0C008;
L_08A0C008:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25864)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C020:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25864)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0C04C;
      }
      goto L_08A0C038;
    }
L_08A0C038:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0C054;
      }
      goto L_08A0C04C;
    }
L_08A0C04C:
    ctx.set_gpr(31, 0x08A0C054u);
    // nop
    goto L_08A0C0B0;
L_08A0C054:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25864)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C06C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A0C080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A0C080u) goto L_08A0C080;
    return;
L_08A0C080:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2380));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A0C094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0C094u) goto L_08A0C094;
    return;
L_08A0C094:
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
L_08A0C0B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-16168));
    ctx.set_gpr(31, 0x08A0C0C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0C0C8u) goto L_08A0C0C8;
    return;
L_08A0C0C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C0D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0C0E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0C0E8u) goto L_08A0C0E8;
    return;
L_08A0C0E8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4956));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25864));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-16052));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-4948));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-16276));
    ctx.set_gpr(31, 0x08A0C13Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0C13Cu) goto L_08A0C13C;
    return;
L_08A0C13C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C14C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0C15Cu);
    // nop
    goto L_08A0C020;
L_08A0C15C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C16C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25860)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0C198;
      }
      goto L_08A0C184;
    }
L_08A0C184:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0C1A0;
      }
      goto L_08A0C198;
    }
L_08A0C198:
    ctx.set_gpr(31, 0x08A0C1A0u);
    // nop
    goto L_08A0C238;
L_08A0C1A0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25860)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C1B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A0C1D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 646u, 0x08A06A18u>(ctx, &aot_mem) && ctx.pc == 0x08A0C1D0u) goto L_08A0C1D0;
    return;
L_08A0C1D0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-20580));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A0C1ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0C1ECu) goto L_08A0C1EC;
    return;
L_08A0C1EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2540));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x08A0C210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0C210u) goto L_08A0C210;
    return;
L_08A0C210:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A0C220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 278u, 0x089F24C0u>(ctx, &aot_mem) && ctx.pc == 0x08A0C220u) goto L_08A0C220;
    return;
L_08A0C220:
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
L_08A0C238:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15776));
    ctx.set_gpr(31, 0x08A0C250u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0C250u) goto L_08A0C250;
    return;
L_08A0C250:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C260:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0C270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0C270u) goto L_08A0C270;
    return;
L_08A0C270:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25860));
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20632));
    ctx.set_gpr(7, 2209u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-15636));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-15668));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-4932));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(36));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-15944));
    ctx.set_gpr(31, 0x08A0C2BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0C2BCu) goto L_08A0C2BC;
    return;
L_08A0C2BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C2CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0C2DCu);
    // nop
    goto L_08A0C16C;
L_08A0C2DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C2EC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26580)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C2FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25856)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0C328;
      }
      goto L_08A0C314;
    }
L_08A0C314:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0C330;
      }
      goto L_08A0C328;
    }
L_08A0C328:
    ctx.set_gpr(31, 0x08A0C330u);
    // nop
    goto L_08A0C554;
L_08A0C330:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25856)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C348:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A0C360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 646u, 0x08A06A18u>(ctx, &aot_mem) && ctx.pc == 0x08A0C360u) goto L_08A0C360;
    return;
L_08A0C360:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-20420));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(31, 0x08A0C388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0C388u) goto L_08A0C388;
    return;
L_08A0C388:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-20420));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0C3B4;
      }
      goto L_08A0C3AC;
    }
L_08A0C3AC:
    ctx.set_gpr(31, 0x08A0C3B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0C3B4u) goto L_08A0C3B4;
    return;
L_08A0C3B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0C3C8;
      }
      goto L_08A0C3C0;
    }
L_08A0C3C0:
    ctx.set_gpr(31, 0x08A0C3C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0C3C8u) goto L_08A0C3C8;
    return;
L_08A0C3C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0C3DC;
      }
      goto L_08A0C3D4;
    }
L_08A0C3D4:
    ctx.set_gpr(31, 0x08A0C3DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0C3DCu) goto L_08A0C3DC;
    return;
L_08A0C3DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0C3F0;
      }
      goto L_08A0C3E8;
    }
L_08A0C3E8:
    ctx.set_gpr(31, 0x08A0C3F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0C3F0u) goto L_08A0C3F0;
    return;
L_08A0C3F0:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19808));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A0C40Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 278u, 0x089F24C0u>(ctx, &aot_mem) && ctx.pc == 0x08A0C40Cu) goto L_08A0C40C;
    return;
L_08A0C40C:
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
L_08A0C424:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0C538;
      }
      goto L_08A0C444;
    }
L_08A0C444:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-20420));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0C470;
      }
      goto L_08A0C45C;
    }
L_08A0C45C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0C470;
      }
      goto L_08A0C468;
    }
L_08A0C468:
    ctx.set_gpr(31, 0x08A0C470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0C470u) goto L_08A0C470;
    return;
L_08A0C470:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(44));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0C490;
      }
      goto L_08A0C47C;
    }
L_08A0C47C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0C490;
      }
      goto L_08A0C488;
    }
L_08A0C488:
    ctx.set_gpr(31, 0x08A0C490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0C490u) goto L_08A0C490;
    return;
L_08A0C490:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(40));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0C4B0;
      }
      goto L_08A0C49C;
    }
L_08A0C49C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0C4B0;
      }
      goto L_08A0C4A8;
    }
L_08A0C4A8:
    ctx.set_gpr(31, 0x08A0C4B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0C4B0u) goto L_08A0C4B0;
    return;
L_08A0C4B0:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(36));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0C4D0;
      }
      goto L_08A0C4BC;
    }
L_08A0C4BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0C4D0;
      }
      goto L_08A0C4C8;
    }
L_08A0C4C8:
    ctx.set_gpr(31, 0x08A0C4D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0C4D0u) goto L_08A0C4D0;
    return;
L_08A0C4D0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0C520;
      }
      goto L_08A0C4D8;
    }
L_08A0C4D8:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19808));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0C520;
      }
      goto L_08A0C4EC;
    }
L_08A0C4EC:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16128));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(28));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0C510;
      }
      goto L_08A0C504;
    }
L_08A0C504:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08A0C510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0C510u) goto L_08A0C510;
    return;
L_08A0C510:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A0C520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 295u, 0x089F25BCu>(ctx, &aot_mem) && ctx.pc == 0x08A0C520u) goto L_08A0C520;
    return;
L_08A0C520:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A0C538;
      }
      goto L_08A0C52C;
    }
L_08A0C52C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A0C538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 554u, 0x089467A8u>(ctx, &aot_mem) && ctx.pc == 0x08A0C538u) goto L_08A0C538;
    return;
L_08A0C538:
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
L_08A0C554:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-14980));
    ctx.set_gpr(31, 0x08A0C56Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0C56Cu) goto L_08A0C56C;
    return;
L_08A0C56C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C57C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0C58Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0C58Cu) goto L_08A0C58C;
    return;
L_08A0C58C:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14808));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4912));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25856));
    ctx.set_gpr(6, 2209u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-10156));
    ctx.set_gpr(7, 2209u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-14824));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-14856));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-4892));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-15544));
    ctx.set_gpr(31, 0x08A0C5E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0C5E8u) goto L_08A0C5E8;
    return;
L_08A0C5E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C5F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0C608u);
    // nop
    goto L_08A0C2FC;
L_08A0C608:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C618:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25768)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C628:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25856)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0C650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A0C650u) goto L_08A0C650;
    return;
L_08A0C650:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-4876));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A0C66Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A0C66Cu) goto L_08A0C66C;
    return;
L_08A0C66C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A0C67Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0C67Cu) goto L_08A0C67C;
    return;
L_08A0C67C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0C688u);
    // nop
    goto L_08A0D49C;
L_08A0C688:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0C6A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0C6A4u) goto L_08A0C6A4;
    return;
L_08A0C6A4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0C6B0u);
    // nop
    goto L_08A0C78C;
L_08A0C6B0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0C6CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0C6CCu) goto L_08A0C6CC;
    return;
L_08A0C6CC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0C6D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 543u, 0x088FAF98u>(ctx, &aot_mem) && ctx.pc == 0x08A0C6D8u) goto L_08A0C6D8;
    return;
L_08A0C6D8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0C6F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0C6F4u) goto L_08A0C6F4;
    return;
L_08A0C6F4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0C700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 371u, 0x08A762DCu>(ctx, &aot_mem) && ctx.pc == 0x08A0C700u) goto L_08A0C700;
    return;
L_08A0C700:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-4804));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-4788));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-4772));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A0C730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0C730u) goto L_08A0C730;
    return;
L_08A0C730:
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
L_08A0C74C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A0C764u);
    // nop
    goto L_08A0C874;
L_08A0C764:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25836)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0C778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08A0C778u) goto L_08A0C778;
    return;
L_08A0C778:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C78C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25836)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0C7CC;
      }
      goto L_08A0C7A4;
    }
L_08A0C7A4:
    ctx.set_gpr(31, 0x08A0C7ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A0C7ACu) goto L_08A0C7AC;
    return;
L_08A0C7AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A0C7B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A0C7B8u) goto L_08A0C7B8;
    return;
L_08A0C7B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0C7C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0C7C4u) goto L_08A0C7C4;
    return;
L_08A0C7C4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25836), ctx.gpr[2]);
    goto L_08A0C7CC;
L_08A0C7CC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25836)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C7E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25836)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0C810;
      }
      goto L_08A0C7FC;
    }
L_08A0C7FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0C818;
      }
      goto L_08A0C810;
    }
L_08A0C810:
    ctx.set_gpr(31, 0x08A0C818u);
    // nop
    goto L_08A0C874;
L_08A0C818:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25836)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C830:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A0C844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A0C844u) goto L_08A0C844;
    return;
L_08A0C844:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-20236));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A0C858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0C858u) goto L_08A0C858;
    return;
L_08A0C858:
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
L_08A0C874:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-14180));
    ctx.set_gpr(31, 0x08A0C88Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0C88Cu) goto L_08A0C88C;
    return;
L_08A0C88C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C89C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0C8ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0C8ACu) goto L_08A0C8AC;
    return;
L_08A0C8AC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25836));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-14072));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-4756));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-14288));
    ctx.set_gpr(31, 0x08A0C8F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0C8F8u) goto L_08A0C8F8;
    return;
L_08A0C8F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C908:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0C918u);
    // nop
    goto L_08A0C7E4;
L_08A0C918:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C928:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25832)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0C954;
      }
      goto L_08A0C940;
    }
L_08A0C940:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0C95C;
      }
      goto L_08A0C954;
    }
L_08A0C954:
    ctx.set_gpr(31, 0x08A0C95Cu);
    // nop
    goto L_08A0CA18;
L_08A0C95C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25832)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0C974:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08A0C98Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 646u, 0x08A06A18u>(ctx, &aot_mem) && ctx.pc == 0x08A0C98Cu) goto L_08A0C98C;
    return;
L_08A0C98C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2712));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(31, 0x08A0C9ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0C9ACu) goto L_08A0C9AC;
    return;
L_08A0C9AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2712));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0C9D8;
      }
      goto L_08A0C9D0;
    }
L_08A0C9D0:
    ctx.set_gpr(31, 0x08A0C9D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0C9D8u) goto L_08A0C9D8;
    return;
L_08A0C9D8:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13116));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08A0C9F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0C9F0u) goto L_08A0C9F0;
    return;
L_08A0C9F0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A0CA00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 278u, 0x089F24C0u>(ctx, &aot_mem) && ctx.pc == 0x08A0CA00u) goto L_08A0CA00;
    return;
L_08A0CA00:
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
L_08A0CA18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-13760));
    ctx.set_gpr(31, 0x08A0CA30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0CA30u) goto L_08A0CA30;
    return;
L_08A0CA30:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0CA40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0CA50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0CA50u) goto L_08A0CA50;
    return;
L_08A0CA50:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13604));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4736));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25832));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(10072));
    ctx.set_gpr(7, 2209u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-24808));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-13636));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-4728));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(44));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-13964));
    ctx.set_gpr(31, 0x08A0CAACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0CAACu) goto L_08A0CAAC;
    return;
L_08A0CAAC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0CABC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0CACCu);
    // nop
    goto L_08A0C928;
L_08A0CACC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0CADC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25832)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A0CB04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A0CB04u) goto L_08A0CB04;
    return;
L_08A0CB04:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-4700));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A0CB20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A0CB20u) goto L_08A0CB20;
    return;
L_08A0CB20:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A0CB30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0CB30u) goto L_08A0CB30;
    return;
L_08A0CB30:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0CB3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 211u, 0x088B54F4u>(ctx, &aot_mem) && ctx.pc == 0x08A0CB3Cu) goto L_08A0CB3C;
    return;
L_08A0CB3C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-4672));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-4668));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-4664));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A0CB7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0CB7Cu) goto L_08A0CB7C;
    return;
L_08A0CB7C:
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
L_08A0CB98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A0CBB0u);
    // nop
    goto L_08A0CCB8;
L_08A0CBB0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25824)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0CBC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08A0CBC4u) goto L_08A0CBC4;
    return;
L_08A0CBC4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0CBD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25824)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0CC04;
      }
      goto L_08A0CBF0;
    }
L_08A0CBF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0CC0C;
      }
      goto L_08A0CC04;
    }
L_08A0CC04:
    ctx.set_gpr(31, 0x08A0CC0Cu);
    // nop
    goto L_08A0CCB8;
L_08A0CC0C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25824)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0CC24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A0CC3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A0CC3Cu) goto L_08A0CC3C;
    return;
L_08A0CC3C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-20128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(31, 0x08A0CC58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0CC58u) goto L_08A0CC58;
    return;
L_08A0CC58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-20128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0CC84;
      }
      goto L_08A0CC7C;
    }
L_08A0CC7C:
    ctx.set_gpr(31, 0x08A0CC84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0CC84u) goto L_08A0CC84;
    return;
L_08A0CC84:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A0CCA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x08A0CCA0u) goto L_08A0CCA0;
    return;
L_08A0CCA0:
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
L_08A0CCB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-13088));
    ctx.set_gpr(31, 0x08A0CCD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0CCD0u) goto L_08A0CCD0;
    return;
L_08A0CCD0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0CCE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0CCF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0CCF0u) goto L_08A0CCF0;
    return;
L_08A0CCF0:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-12924));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-12732));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4660));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25824));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4924));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-6348));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-12956));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-4652));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-13276));
    ctx.set_gpr(31, 0x08A0CD54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0CD54u) goto L_08A0CD54;
    return;
L_08A0CD54:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0CD64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0CD74u);
    // nop
    goto L_08A0CBD8;
L_08A0CD74:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0CD84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25824)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A0CDACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A0CDACu) goto L_08A0CDAC;
    return;
L_08A0CDAC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-4636));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A0CDC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A0CDC8u) goto L_08A0CDC8;
    return;
L_08A0CDC8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A0CDD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0CDD8u) goto L_08A0CDD8;
    return;
L_08A0CDD8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0CDE4u);
    // nop
    goto L_08A0D2F8;
L_08A0CDE4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-4616));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-4612));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-4608));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A0CE18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0CE18u) goto L_08A0CE18;
    return;
L_08A0CE18:
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12700));
    ctx.set_gpr(31, 0x08A0CE28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 237u, 0x089451B8u>(ctx, &aot_mem) && ctx.pc == 0x08A0CE28u) goto L_08A0CE28;
    return;
L_08A0CE28:
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
L_08A0CE44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0CE54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 719u, 0x08A5F134u>(ctx, &aot_mem) && ctx.pc == 0x08A0CE54u) goto L_08A0CE54;
    return;
L_08A0CE54:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0CE64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0CE74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 732u, 0x08A5F1E4u>(ctx, &aot_mem) && ctx.pc == 0x08A0CE74u) goto L_08A0CE74;
    return;
L_08A0CE74:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0CE84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25816)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0CEB0;
      }
      goto L_08A0CE9C;
    }
L_08A0CE9C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0CEB8;
      }
      goto L_08A0CEB0;
    }
L_08A0CEB0:
    ctx.set_gpr(31, 0x08A0CEB8u);
    // nop
    goto L_08A0CED0;
L_08A0CEB8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25816)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0CED0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12552));
    ctx.set_gpr(31, 0x08A0CEE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0CEE8u) goto L_08A0CEE8;
    return;
L_08A0CEE8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0CEF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0CF08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0CF08u) goto L_08A0CF08;
    return;
L_08A0CF08:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25816));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-12448));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-4604));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08A0CF50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0CF50u) goto L_08A0CF50;
    return;
L_08A0CF50:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0CF60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0CF70u);
    // nop
    goto L_08A0CE84;
L_08A0CF70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0CF80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25812)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0CFC0;
      }
      goto L_08A0CF98;
    }
L_08A0CF98:
    ctx.set_gpr(31, 0x08A0CFA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A0CFA0u) goto L_08A0CFA0;
    return;
L_08A0CFA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A0CFACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A0CFACu) goto L_08A0CFAC;
    return;
L_08A0CFAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0CFB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0CFB8u) goto L_08A0CFB8;
    return;
L_08A0CFB8:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25812), ctx.gpr[2]);
    goto L_08A0CFC0;
L_08A0CFC0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25812)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0CFD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25812)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0D004;
      }
      goto L_08A0CFF0;
    }
L_08A0CFF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0D00C;
      }
      goto L_08A0D004;
    }
L_08A0D004:
    ctx.set_gpr(31, 0x08A0D00Cu);
    // nop
    goto L_08A0D0CC;
L_08A0D00C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25812)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0D024:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A0D03Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A0D03Cu) goto L_08A0D03C;
    return;
L_08A0D03C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-20024));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(31, 0x08A0D05Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0D05Cu) goto L_08A0D05C;
    return;
L_08A0D05C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-20024));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0D088;
      }
      goto L_08A0D080;
    }
L_08A0D080:
    ctx.set_gpr(31, 0x08A0D088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0D088u) goto L_08A0D088;
    return;
L_08A0D088:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0D09C;
      }
      goto L_08A0D094;
    }
L_08A0D094:
    ctx.set_gpr(31, 0x08A0D09Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0D09Cu) goto L_08A0D09C;
    return;
L_08A0D09C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08A0D0B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x08A0D0B4u) goto L_08A0D0B4;
    return;
L_08A0D0B4:
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
L_08A0D0CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12044));
    ctx.set_gpr(31, 0x08A0D0E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0D0E4u) goto L_08A0D0E4;
    return;
L_08A0D0E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0D0F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0D104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0D104u) goto L_08A0D104;
    return;
L_08A0D104:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-11888));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4584));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25812));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-10116));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(16508));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-11920));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-4576));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-12252));
    ctx.set_gpr(31, 0x08A0D160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0D160u) goto L_08A0D160;
    return;
L_08A0D160:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0D170:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0D180u);
    // nop
    goto L_08A0CFD8;
L_08A0D180:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0D190:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25812)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0D1B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A0D1B8u) goto L_08A0D1B8;
    return;
L_08A0D1B8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-4560));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A0D1D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A0D1D4u) goto L_08A0D1D4;
    return;
L_08A0D1D4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A0D1E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0D1E4u) goto L_08A0D1E4;
    return;
L_08A0D1E4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0D1F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 285u, 0x088ED9B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0D1F0u) goto L_08A0D1F0;
    return;
L_08A0D1F0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0D20Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0D20Cu) goto L_08A0D20C;
    return;
L_08A0D20C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0D218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 285u, 0x088ED9B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0D218u) goto L_08A0D218;
    return;
L_08A0D218:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0D234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0D234u) goto L_08A0D234;
    return;
L_08A0D234:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-4468));
    ctx.set_gpr(31, 0x08A0D24Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x08A0D24Cu) goto L_08A0D24C;
    return;
L_08A0D24C:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-11620));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-4504));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-4492));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-4480));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A0D280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0D280u) goto L_08A0D280;
    return;
L_08A0D280:
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
L_08A0D29C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25796)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0D2E0;
      }
      goto L_08A0D2B4;
    }
L_08A0D2B4:
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4360));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-4392));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-4376));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A0D2D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x08A0D2D8u) goto L_08A0D2D8;
    return;
L_08A0D2D8:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25796), ctx.gpr[2]);
    goto L_08A0D2E0;
L_08A0D2E0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25796)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0D2F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25792)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0D338;
      }
      goto L_08A0D310;
    }
L_08A0D310:
    ctx.set_gpr(31, 0x08A0D318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A0D318u) goto L_08A0D318;
    return;
L_08A0D318:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A0D324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A0D324u) goto L_08A0D324;
    return;
L_08A0D324:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0D330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0D330u) goto L_08A0D330;
    return;
L_08A0D330:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25792), ctx.gpr[2]);
    goto L_08A0D338;
L_08A0D338:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25792)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0D350:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25792)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0D37C;
      }
      goto L_08A0D368;
    }
L_08A0D368:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0D384;
      }
      goto L_08A0D37C;
    }
L_08A0D37C:
    ctx.set_gpr(31, 0x08A0D384u);
    // nop
    goto L_08A0D3E0;
L_08A0D384:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25792)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0D39C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A0D3B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A0D3B0u) goto L_08A0D3B0;
    return;
L_08A0D3B0:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2816));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A0D3C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0D3C4u) goto L_08A0D3C4;
    return;
L_08A0D3C4:
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
L_08A0D3E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11256));
    ctx.set_gpr(31, 0x08A0D3F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0D3F8u) goto L_08A0D3F8;
    return;
L_08A0D3F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0D408:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0D418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0D418u) goto L_08A0D418;
    return;
L_08A0D418:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4340));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25792));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-11140));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-4332));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-11364));
    ctx.set_gpr(31, 0x08A0D46Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0D46Cu) goto L_08A0D46C;
    return;
L_08A0D46C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0D47C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0D48Cu);
    // nop
    goto L_08A0D350;
L_08A0D48C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0D49C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25788)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0D4DC;
      }
      goto L_08A0D4B4;
    }
L_08A0D4B4:
    ctx.set_gpr(31, 0x08A0D4BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A0D4BCu) goto L_08A0D4BC;
    return;
L_08A0D4BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A0D4C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A0D4C8u) goto L_08A0D4C8;
    return;
L_08A0D4C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0D4D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0D4D4u) goto L_08A0D4D4;
    return;
L_08A0D4D4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25788), ctx.gpr[2]);
    goto L_08A0D4DC;
L_08A0D4DC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25788)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0D4F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25788)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0D520;
      }
      goto L_08A0D50C;
    }
L_08A0D50C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0D528;
      }
      goto L_08A0D520;
    }
L_08A0D520:
    ctx.set_gpr(31, 0x08A0D528u);
    // nop
    goto L_08A0D5FC;
L_08A0D528:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25788)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0D540:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A0D558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A0D558u) goto L_08A0D558;
    return;
L_08A0D558:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19912));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(31, 0x08A0D57Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0D57Cu) goto L_08A0D57C;
    return;
L_08A0D57C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19912));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0D5A8;
      }
      goto L_08A0D5A0;
    }
L_08A0D5A0:
    ctx.set_gpr(31, 0x08A0D5A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0D5A8u) goto L_08A0D5A8;
    return;
L_08A0D5A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0D5BC;
      }
      goto L_08A0D5B4;
    }
L_08A0D5B4:
    ctx.set_gpr(31, 0x08A0D5BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0D5BCu) goto L_08A0D5BC;
    return;
L_08A0D5BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0D5D0;
      }
      goto L_08A0D5C8;
    }
L_08A0D5C8:
    ctx.set_gpr(31, 0x08A0D5D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0D5D0u) goto L_08A0D5D0;
    return;
L_08A0D5D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0D5E4;
      }
      goto L_08A0D5DC;
    }
L_08A0D5DC:
    ctx.set_gpr(31, 0x08A0D5E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0D5E4u) goto L_08A0D5E4;
    return;
L_08A0D5E4:
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
L_08A0D5FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-10716));
    ctx.set_gpr(31, 0x08A0D614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0D614u) goto L_08A0D614;
    return;
L_08A0D614:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0D624:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0D634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0D634u) goto L_08A0D634;
    return;
L_08A0D634:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-10560));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4312));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25788));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-10592));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-4296));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-10944));
    ctx.set_gpr(31, 0x08A0D690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0D690u) goto L_08A0D690;
    return;
L_08A0D690:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0D6A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0D6B0u);
    // nop
    goto L_08A0D4F4;
L_08A0D6B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0D6C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25788)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0D6E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A0D6E8u) goto L_08A0D6E8;
    return;
L_08A0D6E8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-4280));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A0D704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A0D704u) goto L_08A0D704;
    return;
L_08A0D704:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A0D714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0D714u) goto L_08A0D714;
    return;
L_08A0D714:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0D720u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 581u, 0x088C3344u>(ctx, &aot_mem) && ctx.pc == 0x08A0D720u) goto L_08A0D720;
    return;
L_08A0D720:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0D73Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0D73Cu) goto L_08A0D73C;
    return;
L_08A0D73C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0D748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 581u, 0x088C3344u>(ctx, &aot_mem) && ctx.pc == 0x08A0D748u) goto L_08A0D748;
    return;
L_08A0D748:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0D764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0D764u) goto L_08A0D764;
    return;
L_08A0D764:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0D770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 439u, 0x08A768A4u>(ctx, &aot_mem) && ctx.pc == 0x08A0D770u) goto L_08A0D770;
    return;
L_08A0D770:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0D784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0D784u) goto L_08A0D784;
    return;
L_08A0D784:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0D790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 526u, 0x08A12A60u>(ctx, &aot_mem) && ctx.pc == 0x08A0D790u) goto L_08A0D790;
    return;
L_08A0D790:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-4264));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-4248));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-4232));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A0D7C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0D7C4u) goto L_08A0D7C4;
    return;
L_08A0D7C4:
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
L_08A0D7E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25768)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0D80C;
      }
      goto L_08A0D7F8;
    }
L_08A0D7F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0D814;
      }
      goto L_08A0D80C;
    }
L_08A0D80C:
    ctx.set_gpr(31, 0x08A0D814u);
    // nop
    goto L_08A0D82C;
L_08A0D814:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25768)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0D82C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-10156));
    ctx.set_gpr(31, 0x08A0D844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0D844u) goto L_08A0D844;
    return;
L_08A0D844:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0D854:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0D864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0D864u) goto L_08A0D864;
    return;
L_08A0D864:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-10012));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25768));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24720));
    ctx.set_gpr(7, 2181u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-26096));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-10044));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-4216));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(36));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08A0D8B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0D8B4u) goto L_08A0D8B4;
    return;
L_08A0D8B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0D8C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0D8D4u);
    // nop
    goto L_08A0D7E0;
L_08A0D8D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0D8E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25768)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0D908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A0D908u) goto L_08A0D908;
    return;
L_08A0D908:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-4204));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A0D924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A0D924u) goto L_08A0D924;
    return;
L_08A0D924:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0D934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0D934u) goto L_08A0D934;
    return;
L_08A0D934:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-4156));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-4144));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-4132));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A0D960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0D960u) goto L_08A0D960;
    return;
L_08A0D960:
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
L_08A0D978:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25752)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0D9A4;
      }
      goto L_08A0D990;
    }
L_08A0D990:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0D9AC;
      }
      goto L_08A0D9A4;
    }
L_08A0D9A4:
    ctx.set_gpr(31, 0x08A0D9ACu);
    // nop
    goto L_08A0DC30;
L_08A0D9AC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25752)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0D9C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08A0D9DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 80u, 0x0899872Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0D9DCu) goto L_08A0D9DC;
    return;
L_08A0D9DC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19632));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    ctx.set_gpr(31, 0x08A0DA0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0DA0Cu) goto L_08A0DA0C;
    return;
L_08A0DA0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19632));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0DA38;
      }
      goto L_08A0DA30;
    }
L_08A0DA30:
    ctx.set_gpr(31, 0x08A0DA38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0DA38u) goto L_08A0DA38;
    return;
L_08A0DA38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0DA4C;
      }
      goto L_08A0DA44;
    }
L_08A0DA44:
    ctx.set_gpr(31, 0x08A0DA4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0DA4Cu) goto L_08A0DA4C;
    return;
L_08A0DA4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0DA60;
      }
      goto L_08A0DA58;
    }
L_08A0DA58:
    ctx.set_gpr(31, 0x08A0DA60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0DA60u) goto L_08A0DA60;
    return;
L_08A0DA60:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0DA74;
      }
      goto L_08A0DA6C;
    }
L_08A0DA6C:
    ctx.set_gpr(31, 0x08A0DA74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0DA74u) goto L_08A0DA74;
    return;
L_08A0DA74:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x08A0DA8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0DA8Cu) goto L_08A0DA8C;
    return;
L_08A0DA8C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A0DA9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 295u, 0x089F25BCu>(ctx, &aot_mem) && ctx.pc == 0x08A0DA9Cu) goto L_08A0DA9C;
    return;
L_08A0DA9C:
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
L_08A0DAB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0DC14;
      }
      goto L_08A0DAD4;
    }
L_08A0DAD4:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19632));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(52));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0DB00;
      }
      goto L_08A0DAEC;
    }
L_08A0DAEC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0DB00;
      }
      goto L_08A0DAF8;
    }
L_08A0DAF8:
    ctx.set_gpr(31, 0x08A0DB00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0DB00u) goto L_08A0DB00;
    return;
L_08A0DB00:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0DB20;
      }
      goto L_08A0DB0C;
    }
L_08A0DB0C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0DB20;
      }
      goto L_08A0DB18;
    }
L_08A0DB18:
    ctx.set_gpr(31, 0x08A0DB20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0DB20u) goto L_08A0DB20;
    return;
L_08A0DB20:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(44));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0DB40;
      }
      goto L_08A0DB2C;
    }
L_08A0DB2C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0DB40;
      }
      goto L_08A0DB38;
    }
L_08A0DB38:
    ctx.set_gpr(31, 0x08A0DB40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0DB40u) goto L_08A0DB40;
    return;
L_08A0DB40:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0DB60;
      }
      goto L_08A0DB4C;
    }
L_08A0DB4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0DB60;
      }
      goto L_08A0DB58;
    }
L_08A0DB58:
    ctx.set_gpr(31, 0x08A0DB60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0DB60u) goto L_08A0DB60;
    return;
L_08A0DB60:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0DBFC;
      }
      goto L_08A0DB68;
    }
L_08A0DB68:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16128));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(28));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0DB94;
      }
      goto L_08A0DB80;
    }
L_08A0DB80:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0DB94;
      }
      goto L_08A0DB8C;
    }
L_08A0DB8C:
    ctx.set_gpr(31, 0x08A0DB94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0DB94u) goto L_08A0DB94;
    return;
L_08A0DB94:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0DBFC;
      }
      goto L_08A0DB9C;
    }
L_08A0DB9C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18596));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0DBC0;
      }
      goto L_08A0DBB4;
    }
L_08A0DBB4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A0DBC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0DBC0u) goto L_08A0DBC0;
    return;
L_08A0DBC0:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0DBD8;
      }
      goto L_08A0DBCC;
    }
L_08A0DBCC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08A0DBD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0DBD8u) goto L_08A0DBD8;
    return;
L_08A0DBD8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0DBFC;
      }
      goto L_08A0DBE0;
    }
L_08A0DBE0:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A0DBFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x08A0DBFCu) goto L_08A0DBFC;
    return;
L_08A0DBFC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A0DC14;
      }
      goto L_08A0DC08;
    }
L_08A0DC08:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A0DC14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 554u, 0x089467A8u>(ctx, &aot_mem) && ctx.pc == 0x08A0DC14u) goto L_08A0DC14;
    return;
L_08A0DC14:
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
L_08A0DC30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-9128));
    ctx.set_gpr(31, 0x08A0DC48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0DC48u) goto L_08A0DC48;
    return;
L_08A0DC48:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0DC58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0DC68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0DC68u) goto L_08A0DC68;
    return;
L_08A0DC68:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8972));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4120));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25752));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24720));
    ctx.set_gpr(7, 2181u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-26096));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-9004));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-4100));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(60));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-9788));
    ctx.set_gpr(31, 0x08A0DCC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0DCC4u) goto L_08A0DCC4;
    return;
L_08A0DCC4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0DCD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0DCE4u);
    // nop
    goto L_08A0D978;
L_08A0DCE4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0DCF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25752)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0DD1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A0DD1Cu) goto L_08A0DD1C;
    return;
L_08A0DD1C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-4088));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x08A0DD38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A0DD38u) goto L_08A0DD38;
    return;
L_08A0DD38:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A0DD48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0DD48u) goto L_08A0DD48;
    return;
L_08A0DD48:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0DD54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 581u, 0x088C3344u>(ctx, &aot_mem) && ctx.pc == 0x08A0DD54u) goto L_08A0DD54;
    return;
L_08A0DD54:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0DD7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0DD7Cu) goto L_08A0DD7C;
    return;
L_08A0DD7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A0DD8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08A0DD8Cu) goto L_08A0DD8C;
    return;
L_08A0DD8C:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0DD9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0DD9Cu) goto L_08A0DD9C;
    return;
L_08A0DD9C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0DDA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 355u, 0x089F5EB4u>(ctx, &aot_mem) && ctx.pc == 0x08A0DDA8u) goto L_08A0DDA8;
    return;
L_08A0DDA8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0DDCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0DDCCu) goto L_08A0DDCC;
    return;
L_08A0DDCC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0DDD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 394u, 0x088BA3D8u>(ctx, &aot_mem) && ctx.pc == 0x08A0DDD8u) goto L_08A0DDD8;
    return;
L_08A0DDD8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0DE00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0DE00u) goto L_08A0DE00;
    return;
L_08A0DE00:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0DE0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 543u, 0x088FAF98u>(ctx, &aot_mem) && ctx.pc == 0x08A0DE0Cu) goto L_08A0DE0C;
    return;
L_08A0DE0C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0DE28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0DE28u) goto L_08A0DE28;
    return;
L_08A0DE28:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-3892));
    ctx.set_gpr(31, 0x08A0DE40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x08A0DE40u) goto L_08A0DE40;
    return;
L_08A0DE40:
    ctx.set_gpr(2, 2192u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24480));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-3976));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-3948));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-3920));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A0DE74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0DE74u) goto L_08A0DE74;
    return;
L_08A0DE74:
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
L_08A0DE90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A0DEA8u);
    // nop
    goto L_08A0DFB8;
L_08A0DEA8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25720)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0DEBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08A0DEBCu) goto L_08A0DEBC;
    return;
L_08A0DEBC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0DED0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25720)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0DF10;
      }
      goto L_08A0DEE8;
    }
L_08A0DEE8:
    ctx.set_gpr(31, 0x08A0DEF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A0DEF0u) goto L_08A0DEF0;
    return;
L_08A0DEF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A0DEFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A0DEFCu) goto L_08A0DEFC;
    return;
L_08A0DEFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0DF08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0DF08u) goto L_08A0DF08;
    return;
L_08A0DF08:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25720), ctx.gpr[2]);
    goto L_08A0DF10;
L_08A0DF10:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25720)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0DF28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25720)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0DF54;
      }
      goto L_08A0DF40;
    }
L_08A0DF40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0DF5C;
      }
      goto L_08A0DF54;
    }
L_08A0DF54:
    ctx.set_gpr(31, 0x08A0DF5Cu);
    // nop
    goto L_08A0DFB8;
L_08A0DF5C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25720)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0DF74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A0DF88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A0DF88u) goto L_08A0DF88;
    return;
L_08A0DF88:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2916));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A0DF9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0DF9Cu) goto L_08A0DF9C;
    return;
L_08A0DF9C:
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
L_08A0DFB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-8224));
    ctx.set_gpr(31, 0x08A0DFD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0DFD0u) goto L_08A0DFD0;
    return;
L_08A0DFD0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0DFE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0DFF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0DFF0u) goto L_08A0DFF0;
    return;
L_08A0DFF0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25720));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24296));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(23152));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-8116));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-3888));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-8332));
    ctx.set_gpr(31, 0x08A0E03Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0E03Cu) goto L_08A0E03C;
    return;
L_08A0E03C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E04C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0E05Cu);
    // nop
    goto L_08A0DF28;
L_08A0E05C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E06C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25716)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0E098;
      }
      goto L_08A0E084;
    }
L_08A0E084:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0E0A0;
      }
      goto L_08A0E098;
    }
L_08A0E098:
    ctx.set_gpr(31, 0x08A0E0A0u);
    // nop
    goto L_08A0E0FC;
L_08A0E0A0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25716)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E0B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A0E0CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A0E0CCu) goto L_08A0E0CC;
    return;
L_08A0E0CC:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3016));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A0E0E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0E0E0u) goto L_08A0E0E0;
    return;
L_08A0E0E0:
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
L_08A0E0FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-7900));
    ctx.set_gpr(31, 0x08A0E114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0E114u) goto L_08A0E114;
    return;
L_08A0E114:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E124:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0E134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0E134u) goto L_08A0E134;
    return;
L_08A0E134:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25716));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24296));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(23152));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-7792));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-3864));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-8008));
    ctx.set_gpr(31, 0x08A0E180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0E180u) goto L_08A0E180;
    return;
L_08A0E180:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E190:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0E1A0u);
    // nop
    goto L_08A0E06C;
L_08A0E1A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E1B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25712)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0E1F0;
      }
      goto L_08A0E1C8;
    }
L_08A0E1C8:
    ctx.set_gpr(31, 0x08A0E1D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A0E1D0u) goto L_08A0E1D0;
    return;
L_08A0E1D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A0E1DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A0E1DCu) goto L_08A0E1DC;
    return;
L_08A0E1DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0E1E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0E1E8u) goto L_08A0E1E8;
    return;
L_08A0E1E8:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25712), ctx.gpr[2]);
    goto L_08A0E1F0;
L_08A0E1F0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25712)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E208:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25712)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0E234;
      }
      goto L_08A0E220;
    }
L_08A0E220:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0E23C;
      }
      goto L_08A0E234;
    }
L_08A0E234:
    ctx.set_gpr(31, 0x08A0E23Cu);
    // nop
    goto L_08A0E298;
L_08A0E23C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25712)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E254:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A0E268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 608u, 0x088C3578u>(ctx, &aot_mem) && ctx.pc == 0x08A0E268u) goto L_08A0E268;
    return;
L_08A0E268:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3120));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A0E27Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0E27Cu) goto L_08A0E27C;
    return;
L_08A0E27C:
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
L_08A0E298:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-7488));
    ctx.set_gpr(31, 0x08A0E2B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0E2B0u) goto L_08A0E2B0;
    return;
L_08A0E2B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E2C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0E2D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0E2D0u) goto L_08A0E2D0;
    return;
L_08A0E2D0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3828));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25712));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(29800));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(13948));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-7372));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-3820));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-7596));
    ctx.set_gpr(31, 0x08A0E324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0E324u) goto L_08A0E324;
    return;
L_08A0E324:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E334:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0E344u);
    // nop
    goto L_08A0E208;
L_08A0E344:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E354:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25708)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0E394;
      }
      goto L_08A0E36C;
    }
L_08A0E36C:
    ctx.set_gpr(31, 0x08A0E374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A0E374u) goto L_08A0E374;
    return;
L_08A0E374:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A0E380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A0E380u) goto L_08A0E380;
    return;
L_08A0E380:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0E38Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0E38Cu) goto L_08A0E38C;
    return;
L_08A0E38C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25708), ctx.gpr[2]);
    goto L_08A0E394;
L_08A0E394:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25708)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E3AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25708)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0E3D8;
      }
      goto L_08A0E3C4;
    }
L_08A0E3C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0E3E0;
      }
      goto L_08A0E3D8;
    }
L_08A0E3D8:
    ctx.set_gpr(31, 0x08A0E3E0u);
    // nop
    goto L_08A0E43C;
L_08A0E3E0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25708)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E3F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A0E40Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 608u, 0x088C3578u>(ctx, &aot_mem) && ctx.pc == 0x08A0E40Cu) goto L_08A0E40C;
    return;
L_08A0E40C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3224));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A0E420u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0E420u) goto L_08A0E420;
    return;
L_08A0E420:
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
L_08A0E43C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-7068));
    ctx.set_gpr(31, 0x08A0E454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0E454u) goto L_08A0E454;
    return;
L_08A0E454:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E464:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0E474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0E474u) goto L_08A0E474;
    return;
L_08A0E474:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3796));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25708));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(29800));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(13948));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-6952));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-3788));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-7176));
    ctx.set_gpr(31, 0x08A0E4C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0E4C8u) goto L_08A0E4C8;
    return;
L_08A0E4C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E4D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0E4E8u);
    // nop
    goto L_08A0E3AC;
L_08A0E4E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E4F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25704)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0E538;
      }
      goto L_08A0E510;
    }
L_08A0E510:
    ctx.set_gpr(31, 0x08A0E518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A0E518u) goto L_08A0E518;
    return;
L_08A0E518:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A0E524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A0E524u) goto L_08A0E524;
    return;
L_08A0E524:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0E530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0E530u) goto L_08A0E530;
    return;
L_08A0E530:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25704), ctx.gpr[2]);
    goto L_08A0E538;
L_08A0E538:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25704)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E550:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25704)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0E57C;
      }
      goto L_08A0E568;
    }
L_08A0E568:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0E584;
      }
      goto L_08A0E57C;
    }
L_08A0E57C:
    ctx.set_gpr(31, 0x08A0E584u);
    // nop
    goto L_08A0E5E0;
L_08A0E584:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25704)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E59C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A0E5B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 608u, 0x088C3578u>(ctx, &aot_mem) && ctx.pc == 0x08A0E5B0u) goto L_08A0E5B0;
    return;
L_08A0E5B0:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3328));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A0E5C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0E5C4u) goto L_08A0E5C4;
    return;
L_08A0E5C4:
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
L_08A0E5E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-6648));
    ctx.set_gpr(31, 0x08A0E5F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0E5F8u) goto L_08A0E5F8;
    return;
L_08A0E5F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E608:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0E618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0E618u) goto L_08A0E618;
    return;
L_08A0E618:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3760));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25704));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(29800));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(13948));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-6532));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-3752));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-6756));
    ctx.set_gpr(31, 0x08A0E66Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0E66Cu) goto L_08A0E66C;
    return;
L_08A0E66C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E67C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0E68Cu);
    // nop
    goto L_08A0E550;
L_08A0E68C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E69C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25700)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0E6DC;
      }
      goto L_08A0E6B4;
    }
L_08A0E6B4:
    ctx.set_gpr(31, 0x08A0E6BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A0E6BCu) goto L_08A0E6BC;
    return;
L_08A0E6BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A0E6C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A0E6C8u) goto L_08A0E6C8;
    return;
L_08A0E6C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0E6D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0E6D4u) goto L_08A0E6D4;
    return;
L_08A0E6D4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25700), ctx.gpr[2]);
    goto L_08A0E6DC;
L_08A0E6DC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25700)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E6F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25700)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0E720;
      }
      goto L_08A0E70C;
    }
L_08A0E70C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0E728;
      }
      goto L_08A0E720;
    }
L_08A0E720:
    ctx.set_gpr(31, 0x08A0E728u);
    // nop
    goto L_08A0E784;
L_08A0E728:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25700)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E740:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A0E754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 608u, 0x088C3578u>(ctx, &aot_mem) && ctx.pc == 0x08A0E754u) goto L_08A0E754;
    return;
L_08A0E754:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3432));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A0E768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0E768u) goto L_08A0E768;
    return;
L_08A0E768:
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
L_08A0E784:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-6228));
    ctx.set_gpr(31, 0x08A0E79Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0E79Cu) goto L_08A0E79C;
    return;
L_08A0E79C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E7AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0E7BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0E7BCu) goto L_08A0E7BC;
    return;
L_08A0E7BC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3736));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25700));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(29800));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(13948));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-6112));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-3728));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-6336));
    ctx.set_gpr(31, 0x08A0E810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0E810u) goto L_08A0E810;
    return;
L_08A0E810:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E820:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0E830u);
    // nop
    goto L_08A0E6F4;
L_08A0E830:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E840:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25696)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0E880;
      }
      goto L_08A0E858;
    }
L_08A0E858:
    ctx.set_gpr(31, 0x08A0E860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A0E860u) goto L_08A0E860;
    return;
L_08A0E860:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A0E86Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A0E86Cu) goto L_08A0E86C;
    return;
L_08A0E86C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0E878u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0E878u) goto L_08A0E878;
    return;
L_08A0E878:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25696), ctx.gpr[2]);
    goto L_08A0E880;
L_08A0E880:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25696)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E898:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25696)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0E8C4;
      }
      goto L_08A0E8B0;
    }
L_08A0E8B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0E8CC;
      }
      goto L_08A0E8C4;
    }
L_08A0E8C4:
    ctx.set_gpr(31, 0x08A0E8CCu);
    // nop
    goto L_08A0E928;
L_08A0E8CC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25696)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E8E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A0E8F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 608u, 0x088C3578u>(ctx, &aot_mem) && ctx.pc == 0x08A0E8F8u) goto L_08A0E8F8;
    return;
L_08A0E8F8:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3536));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A0E90Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0E90Cu) goto L_08A0E90C;
    return;
L_08A0E90C:
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
L_08A0E928:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-5808));
    ctx.set_gpr(31, 0x08A0E940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0E940u) goto L_08A0E940;
    return;
L_08A0E940:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E950:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0E960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0E960u) goto L_08A0E960;
    return;
L_08A0E960:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3700));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25696));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(29800));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(13948));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-5692));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-3692));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-5916));
    ctx.set_gpr(31, 0x08A0E9B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0E9B4u) goto L_08A0E9B4;
    return;
L_08A0E9B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E9C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0E9D4u);
    // nop
    goto L_08A0E898;
L_08A0E9D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0E9E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25692)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0EA24;
      }
      goto L_08A0E9FC;
    }
L_08A0E9FC:
    ctx.set_gpr(31, 0x08A0EA04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A0EA04u) goto L_08A0EA04;
    return;
L_08A0EA04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A0EA10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A0EA10u) goto L_08A0EA10;
    return;
L_08A0EA10:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0EA1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0EA1Cu) goto L_08A0EA1C;
    return;
L_08A0EA1C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25692), ctx.gpr[2]);
    goto L_08A0EA24;
L_08A0EA24:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25692)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0EA3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25692)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0EA68;
      }
      goto L_08A0EA54;
    }
L_08A0EA54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0EA70;
      }
      goto L_08A0EA68;
    }
L_08A0EA68:
    ctx.set_gpr(31, 0x08A0EA70u);
    // nop
    goto L_08A0EACC;
L_08A0EA70:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25692)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0EA88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A0EA9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 608u, 0x088C3578u>(ctx, &aot_mem) && ctx.pc == 0x08A0EA9Cu) goto L_08A0EA9C;
    return;
L_08A0EA9C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3640));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A0EAB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0EAB0u) goto L_08A0EAB0;
    return;
L_08A0EAB0:
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
L_08A0EACC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-5388));
    ctx.set_gpr(31, 0x08A0EAE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0EAE4u) goto L_08A0EAE4;
    return;
L_08A0EAE4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0EAF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0EB04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0EB04u) goto L_08A0EB04;
    return;
L_08A0EB04:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3664));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25692));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(29800));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(13948));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-5272));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-3656));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-5496));
    ctx.set_gpr(31, 0x08A0EB58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0EB58u) goto L_08A0EB58;
    return;
L_08A0EB58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0EB68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0EB78u);
    // nop
    goto L_08A0EA3C;
L_08A0EB78:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0EB88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25688)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0EBC8;
      }
      goto L_08A0EBA0;
    }
L_08A0EBA0:
    ctx.set_gpr(31, 0x08A0EBA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A0EBA8u) goto L_08A0EBA8;
    return;
L_08A0EBA8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A0EBB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A0EBB4u) goto L_08A0EBB4;
    return;
L_08A0EBB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0EBC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0EBC0u) goto L_08A0EBC0;
    return;
L_08A0EBC0:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25688), ctx.gpr[2]);
    goto L_08A0EBC8;
L_08A0EBC8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25688)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0EBE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25688)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0EC0C;
      }
      goto L_08A0EBF8;
    }
L_08A0EBF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0EC14;
      }
      goto L_08A0EC0C;
    }
L_08A0EC0C:
    ctx.set_gpr(31, 0x08A0EC14u);
    // nop
    goto L_08A0EC70;
L_08A0EC14:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25688)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0EC2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A0EC40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 608u, 0x088C3578u>(ctx, &aot_mem) && ctx.pc == 0x08A0EC40u) goto L_08A0EC40;
    return;
L_08A0EC40:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3744));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A0EC54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0EC54u) goto L_08A0EC54;
    return;
L_08A0EC54:
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
L_08A0EC70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4968));
    ctx.set_gpr(31, 0x08A0EC88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0EC88u) goto L_08A0EC88;
    return;
L_08A0EC88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0EC98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0ECA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0ECA8u) goto L_08A0ECA8;
    return;
L_08A0ECA8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3624));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25688));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(29800));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(13948));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-4852));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-3616));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-5076));
    ctx.set_gpr(31, 0x08A0ECFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0ECFCu) goto L_08A0ECFC;
    return;
L_08A0ECFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0ED0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0ED1Cu);
    // nop
    goto L_08A0EBE0;
L_08A0ED1C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0ED2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25684)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0ED6C;
      }
      goto L_08A0ED44;
    }
L_08A0ED44:
    ctx.set_gpr(31, 0x08A0ED4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A0ED4Cu) goto L_08A0ED4C;
    return;
L_08A0ED4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A0ED58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A0ED58u) goto L_08A0ED58;
    return;
L_08A0ED58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0ED64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0ED64u) goto L_08A0ED64;
    return;
L_08A0ED64:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25684), ctx.gpr[2]);
    goto L_08A0ED6C;
L_08A0ED6C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25684)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0ED84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25684)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0EDB0;
      }
      goto L_08A0ED9C;
    }
L_08A0ED9C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0EDB8;
      }
      goto L_08A0EDB0;
    }
L_08A0EDB0:
    ctx.set_gpr(31, 0x08A0EDB8u);
    // nop
    goto L_08A0EE14;
L_08A0EDB8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25684)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0EDD0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A0EDE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 608u, 0x088C3578u>(ctx, &aot_mem) && ctx.pc == 0x08A0EDE4u) goto L_08A0EDE4;
    return;
L_08A0EDE4:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3848));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A0EDF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0EDF8u) goto L_08A0EDF8;
    return;
L_08A0EDF8:
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
L_08A0EE14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4548));
    ctx.set_gpr(31, 0x08A0EE2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0EE2Cu) goto L_08A0EE2C;
    return;
L_08A0EE2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0EE3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0EE4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0EE4Cu) goto L_08A0EE4C;
    return;
L_08A0EE4C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3596));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25684));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(29800));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(13948));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-4432));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-3588));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-4656));
    ctx.set_gpr(31, 0x08A0EEA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0EEA0u) goto L_08A0EEA0;
    return;
L_08A0EEA0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0EEB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0EEC0u);
    // nop
    goto L_08A0ED84;
L_08A0EEC0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0EED0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25680)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0EF10;
      }
      goto L_08A0EEE8;
    }
L_08A0EEE8:
    ctx.set_gpr(31, 0x08A0EEF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A0EEF0u) goto L_08A0EEF0;
    return;
L_08A0EEF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A0EEFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A0EEFCu) goto L_08A0EEFC;
    return;
L_08A0EEFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0EF08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0EF08u) goto L_08A0EF08;
    return;
L_08A0EF08:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25680), ctx.gpr[2]);
    goto L_08A0EF10;
L_08A0EF10:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25680)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0EF28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25680)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0EF54;
      }
      goto L_08A0EF40;
    }
L_08A0EF40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0EF5C;
      }
      goto L_08A0EF54;
    }
L_08A0EF54:
    ctx.set_gpr(31, 0x08A0EF5Cu);
    // nop
    goto L_08A0EFB8;
L_08A0EF5C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25680)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0EF74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A0EF88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 608u, 0x088C3578u>(ctx, &aot_mem) && ctx.pc == 0x08A0EF88u) goto L_08A0EF88;
    return;
L_08A0EF88:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3952));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A0EF9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0EF9Cu) goto L_08A0EF9C;
    return;
L_08A0EF9C:
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
L_08A0EFB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4128));
    ctx.set_gpr(31, 0x08A0EFD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0EFD0u) goto L_08A0EFD0;
    return;
L_08A0EFD0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0EFE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0EFF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0EFF0u) goto L_08A0EFF0;
    return;
L_08A0EFF0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3564));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25680));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(29800));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(13948));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-4012));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-3556));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-4236));
    ctx.set_gpr(31, 0x08A0F044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0F044u) goto L_08A0F044;
    return;
L_08A0F044:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0F054:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0F064u);
    // nop
    goto L_08A0EF28;
L_08A0F064:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0F074:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25676)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F0B4;
      }
      goto L_08A0F08C;
    }
L_08A0F08C:
    ctx.set_gpr(31, 0x08A0F094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A0F094u) goto L_08A0F094;
    return;
L_08A0F094:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A0F0A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A0F0A0u) goto L_08A0F0A0;
    return;
L_08A0F0A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0F0ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0F0ACu) goto L_08A0F0AC;
    return;
L_08A0F0AC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25676), ctx.gpr[2]);
    goto L_08A0F0B4;
L_08A0F0B4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25676)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0F0CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25676)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F0F8;
      }
      goto L_08A0F0E4;
    }
L_08A0F0E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F100;
      }
      goto L_08A0F0F8;
    }
L_08A0F0F8:
    ctx.set_gpr(31, 0x08A0F100u);
    // nop
    goto L_08A0F15C;
L_08A0F100:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25676)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0F118:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A0F12Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 608u, 0x088C3578u>(ctx, &aot_mem) && ctx.pc == 0x08A0F12Cu) goto L_08A0F12C;
    return;
L_08A0F12C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4056));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A0F140u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0F140u) goto L_08A0F140;
    return;
L_08A0F140:
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
L_08A0F15C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3708));
    ctx.set_gpr(31, 0x08A0F174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0F174u) goto L_08A0F174;
    return;
L_08A0F174:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0F184:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0F194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0F194u) goto L_08A0F194;
    return;
L_08A0F194:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3532));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25676));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(29800));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(13948));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-3592));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-3524));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-3816));
    ctx.set_gpr(31, 0x08A0F1E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0F1E8u) goto L_08A0F1E8;
    return;
L_08A0F1E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0F1F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0F208u);
    // nop
    goto L_08A0F0CC;
L_08A0F208:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0F218:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25672)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F244;
      }
      goto L_08A0F230;
    }
L_08A0F230:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F24C;
      }
      goto L_08A0F244;
    }
L_08A0F244:
    ctx.set_gpr(31, 0x08A0F24Cu);
    // nop
    goto L_08A0F51C;
L_08A0F24C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25672)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0F264:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A0F27Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 80u, 0x0899872Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F27Cu) goto L_08A0F27C;
    return;
L_08A0F27C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19484));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), 0u);
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), 0u);
    ctx.set_gpr(31, 0x08A0F2F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0F2F8u) goto L_08A0F2F8;
    return;
L_08A0F2F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19484));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F324;
      }
      goto L_08A0F31C;
    }
L_08A0F31C:
    ctx.set_gpr(31, 0x08A0F324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0F324u) goto L_08A0F324;
    return;
L_08A0F324:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F338;
      }
      goto L_08A0F330;
    }
L_08A0F330:
    ctx.set_gpr(31, 0x08A0F338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0F338u) goto L_08A0F338;
    return;
L_08A0F338:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F34C;
      }
      goto L_08A0F344;
    }
L_08A0F344:
    ctx.set_gpr(31, 0x08A0F34Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0F34Cu) goto L_08A0F34C;
    return;
L_08A0F34C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F360;
      }
      goto L_08A0F358;
    }
L_08A0F358:
    ctx.set_gpr(31, 0x08A0F360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0F360u) goto L_08A0F360;
    return;
L_08A0F360:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F374;
      }
      goto L_08A0F36C;
    }
L_08A0F36C:
    ctx.set_gpr(31, 0x08A0F374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0F374u) goto L_08A0F374;
    return;
L_08A0F374:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F388;
      }
      goto L_08A0F380;
    }
L_08A0F380:
    ctx.set_gpr(31, 0x08A0F388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0F388u) goto L_08A0F388;
    return;
L_08A0F388:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F39C;
      }
      goto L_08A0F394;
    }
L_08A0F394:
    ctx.set_gpr(31, 0x08A0F39Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0F39Cu) goto L_08A0F39C;
    return;
L_08A0F39C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F3B0;
      }
      goto L_08A0F3A8;
    }
L_08A0F3A8:
    ctx.set_gpr(31, 0x08A0F3B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0F3B0u) goto L_08A0F3B0;
    return;
L_08A0F3B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F3C4;
      }
      goto L_08A0F3BC;
    }
L_08A0F3BC:
    ctx.set_gpr(31, 0x08A0F3C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0F3C4u) goto L_08A0F3C4;
    return;
L_08A0F3C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F3D8;
      }
      goto L_08A0F3D0;
    }
L_08A0F3D0:
    ctx.set_gpr(31, 0x08A0F3D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0F3D8u) goto L_08A0F3D8;
    return;
L_08A0F3D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F3EC;
      }
      goto L_08A0F3E4;
    }
L_08A0F3E4:
    ctx.set_gpr(31, 0x08A0F3ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0F3ECu) goto L_08A0F3EC;
    return;
L_08A0F3EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F400;
      }
      goto L_08A0F3F8;
    }
L_08A0F3F8:
    ctx.set_gpr(31, 0x08A0F400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0F400u) goto L_08A0F400;
    return;
L_08A0F400:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F414;
      }
      goto L_08A0F40C;
    }
L_08A0F40C:
    ctx.set_gpr(31, 0x08A0F414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0F414u) goto L_08A0F414;
    return;
L_08A0F414:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F428;
      }
      goto L_08A0F420;
    }
L_08A0F420:
    ctx.set_gpr(31, 0x08A0F428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0F428u) goto L_08A0F428;
    return;
L_08A0F428:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F43C;
      }
      goto L_08A0F434;
    }
L_08A0F434:
    ctx.set_gpr(31, 0x08A0F43Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0F43Cu) goto L_08A0F43C;
    return;
L_08A0F43C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F450;
      }
      goto L_08A0F448;
    }
L_08A0F448:
    ctx.set_gpr(31, 0x08A0F450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0F450u) goto L_08A0F450;
    return;
L_08A0F450:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F464;
      }
      goto L_08A0F45C;
    }
L_08A0F45C:
    ctx.set_gpr(31, 0x08A0F464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0F464u) goto L_08A0F464;
    return;
L_08A0F464:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F478;
      }
      goto L_08A0F470;
    }
L_08A0F470:
    ctx.set_gpr(31, 0x08A0F478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0F478u) goto L_08A0F478;
    return;
L_08A0F478:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F48C;
      }
      goto L_08A0F484;
    }
L_08A0F484:
    ctx.set_gpr(31, 0x08A0F48Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0F48Cu) goto L_08A0F48C;
    return;
L_08A0F48C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F4A0;
      }
      goto L_08A0F498;
    }
L_08A0F498:
    ctx.set_gpr(31, 0x08A0F4A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0F4A0u) goto L_08A0F4A0;
    return;
L_08A0F4A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F4B4;
      }
      goto L_08A0F4AC;
    }
L_08A0F4AC:
    ctx.set_gpr(31, 0x08A0F4B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0F4B4u) goto L_08A0F4B4;
    return;
L_08A0F4B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F4C8;
      }
      goto L_08A0F4C0;
    }
L_08A0F4C0:
    ctx.set_gpr(31, 0x08A0F4C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0F4C8u) goto L_08A0F4C8;
    return;
L_08A0F4C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0F4DC;
      }
      goto L_08A0F4D4;
    }
L_08A0F4D4:
    ctx.set_gpr(31, 0x08A0F4DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0F4DCu) goto L_08A0F4DC;
    return;
L_08A0F4DC:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08A0F4F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F4F4u) goto L_08A0F4F4;
    return;
L_08A0F4F4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A0F504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 295u, 0x089F25BCu>(ctx, &aot_mem) && ctx.pc == 0x08A0F504u) goto L_08A0F504;
    return;
L_08A0F504:
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
L_08A0F51C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-2748));
    ctx.set_gpr(31, 0x08A0F534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0F534u) goto L_08A0F534;
    return;
L_08A0F534:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0F544:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0F554u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0F554u) goto L_08A0F554;
    return;
L_08A0F554:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2592));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3496));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25672));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24720));
    ctx.set_gpr(7, 2181u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-26096));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-2624));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-3428));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(232));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-3484));
    ctx.set_gpr(31, 0x08A0F5B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0F5B0u) goto L_08A0F5B0;
    return;
L_08A0F5B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0F5C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0F5D0u);
    // nop
    goto L_08A0F218;
L_08A0F5D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0F5E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25672)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0F608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A0F608u) goto L_08A0F608;
    return;
L_08A0F608:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-3408));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(41));
    ctx.set_gpr(31, 0x08A0F624u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A0F624u) goto L_08A0F624;
    return;
L_08A0F624:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A0F634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F634u) goto L_08A0F634;
    return;
L_08A0F634:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0F648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F648u) goto L_08A0F648;
    return;
L_08A0F648:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    ctx.set_gpr(3, 16512u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x08A0F668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 223u, 0x089FD39Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F668u) goto L_08A0F668;
    return;
L_08A0F668:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0F678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F678u) goto L_08A0F678;
    return;
L_08A0F678:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(3, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08A0F698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 223u, 0x089FD39Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F698u) goto L_08A0F698;
    return;
L_08A0F698:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0F6A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F6A8u) goto L_08A0F6A8;
    return;
L_08A0F6A8:
    ctx.set_gpr(3, 16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0F6BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A0F6BCu) goto L_08A0F6BC;
    return;
L_08A0F6BC:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0F6CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F6CCu) goto L_08A0F6CC;
    return;
L_08A0F6CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32240)));
    ctx.set_gpr(31, 0x08A0F6DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A0F6DCu) goto L_08A0F6DC;
    return;
L_08A0F6DC:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0F6ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F6ECu) goto L_08A0F6EC;
    return;
L_08A0F6EC:
    ctx.set_gpr(3, 17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0F700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A0F700u) goto L_08A0F700;
    return;
L_08A0F700:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0F710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F710u) goto L_08A0F710;
    return;
L_08A0F710:
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08A0F730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 223u, 0x089FD39Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F730u) goto L_08A0F730;
    return;
L_08A0F730:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0F740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F740u) goto L_08A0F740;
    return;
L_08A0F740:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0F74Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 506u, 0x08A128BCu>(ctx, &aot_mem) && ctx.pc == 0x08A0F74Cu) goto L_08A0F74C;
    return;
L_08A0F74C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0F768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F768u) goto L_08A0F768;
    return;
L_08A0F768:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0F774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 506u, 0x08A128BCu>(ctx, &aot_mem) && ctx.pc == 0x08A0F774u) goto L_08A0F774;
    return;
L_08A0F774:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0F788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F788u) goto L_08A0F788;
    return;
L_08A0F788:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0F794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 358u, 0x088BA0A0u>(ctx, &aot_mem) && ctx.pc == 0x08A0F794u) goto L_08A0F794;
    return;
L_08A0F794:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0F7B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F7B4u) goto L_08A0F7B4;
    return;
L_08A0F7B4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0F7C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 495u, 0x088B6F18u>(ctx, &aot_mem) && ctx.pc == 0x08A0F7C0u) goto L_08A0F7C0;
    return;
L_08A0F7C0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0F7E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F7E0u) goto L_08A0F7E0;
    return;
L_08A0F7E0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0F7ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 99u, 0x088B0944u>(ctx, &aot_mem) && ctx.pc == 0x08A0F7ECu) goto L_08A0F7EC;
    return;
L_08A0F7EC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0F80Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F80Cu) goto L_08A0F80C;
    return;
L_08A0F80C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0F818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 99u, 0x088B0944u>(ctx, &aot_mem) && ctx.pc == 0x08A0F818u) goto L_08A0F818;
    return;
L_08A0F818:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(13));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0F838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F838u) goto L_08A0F838;
    return;
L_08A0F838:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32236)));
    ctx.set_gpr(31, 0x08A0F848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A0F848u) goto L_08A0F848;
    return;
L_08A0F848:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(14));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0F858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F858u) goto L_08A0F858;
    return;
L_08A0F858:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32232)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A0F880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 265u, 0x089FD724u>(ctx, &aot_mem) && ctx.pc == 0x08A0F880u) goto L_08A0F880;
    return;
L_08A0F880:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(15));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0F890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F890u) goto L_08A0F890;
    return;
L_08A0F890:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(512));
    ctx.set_gpr(31, 0x08A0F8A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08A0F8A0u) goto L_08A0F8A0;
    return;
L_08A0F8A0:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0F8B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F8B0u) goto L_08A0F8B0;
    return;
L_08A0F8B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(512));
    ctx.set_gpr(31, 0x08A0F8C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08A0F8C0u) goto L_08A0F8C0;
    return;
L_08A0F8C0:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(17));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0F8D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F8D0u) goto L_08A0F8D0;
    return;
L_08A0F8D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A0F8E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08A0F8E0u) goto L_08A0F8E0;
    return;
L_08A0F8E0:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(18));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0F8F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F8F0u) goto L_08A0F8F0;
    return;
L_08A0F8F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A0F900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A0F900u) goto L_08A0F900;
    return;
L_08A0F900:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(19));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0F910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F910u) goto L_08A0F910;
    return;
L_08A0F910:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0F91Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 406u, 0x088B66F4u>(ctx, &aot_mem) && ctx.pc == 0x08A0F91Cu) goto L_08A0F91C;
    return;
L_08A0F91C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0F93Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F93Cu) goto L_08A0F93C;
    return;
L_08A0F93C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0F948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 270u, 0x088B5A64u>(ctx, &aot_mem) && ctx.pc == 0x08A0F948u) goto L_08A0F948;
    return;
L_08A0F948:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(21));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0F968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F968u) goto L_08A0F968;
    return;
L_08A0F968:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0F974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 412u, 0x088B2640u>(ctx, &aot_mem) && ctx.pc == 0x08A0F974u) goto L_08A0F974;
    return;
L_08A0F974:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(22));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0F994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F994u) goto L_08A0F994;
    return;
L_08A0F994:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0F9A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 358u, 0x088B2194u>(ctx, &aot_mem) && ctx.pc == 0x08A0F9A0u) goto L_08A0F9A0;
    return;
L_08A0F9A0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(23));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0F9C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F9C0u) goto L_08A0F9C0;
    return;
L_08A0F9C0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0F9CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 358u, 0x088B2194u>(ctx, &aot_mem) && ctx.pc == 0x08A0F9CCu) goto L_08A0F9CC;
    return;
L_08A0F9CC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0F9ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0F9ECu) goto L_08A0F9EC;
    return;
L_08A0F9EC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0F9F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 358u, 0x088B2194u>(ctx, &aot_mem) && ctx.pc == 0x08A0F9F8u) goto L_08A0F9F8;
    return;
L_08A0F9F8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(25));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0FA18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0FA18u) goto L_08A0FA18;
    return;
L_08A0FA18:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0FA24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 677u, 0x088BFE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0FA24u) goto L_08A0FA24;
    return;
L_08A0FA24:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(26));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0FA44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0FA44u) goto L_08A0FA44;
    return;
L_08A0FA44:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0FA50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 260u, 0x089957D0u>(ctx, &aot_mem) && ctx.pc == 0x08A0FA50u) goto L_08A0FA50;
    return;
L_08A0FA50:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(27));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0FA70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0FA70u) goto L_08A0FA70;
    return;
L_08A0FA70:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0FA7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 636u, 0x088AE1CCu>(ctx, &aot_mem) && ctx.pc == 0x08A0FA7Cu) goto L_08A0FA7C;
    return;
L_08A0FA7C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0FA9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0FA9Cu) goto L_08A0FA9C;
    return;
L_08A0FA9C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0FAA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 919u, 0x088AFAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A0FAA8u) goto L_08A0FAA8;
    return;
L_08A0FAA8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(29));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0FAC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0FAC0u) goto L_08A0FAC0;
    return;
L_08A0FAC0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0FACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 358u, 0x088B2194u>(ctx, &aot_mem) && ctx.pc == 0x08A0FACCu) goto L_08A0FACC;
    return;
L_08A0FACC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(30));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0FAECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0FAECu) goto L_08A0FAEC;
    return;
L_08A0FAEC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0FAF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 505u, 0x088C2CF8u>(ctx, &aot_mem) && ctx.pc == 0x08A0FAF8u) goto L_08A0FAF8;
    return;
L_08A0FAF8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(31));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0FB10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0FB10u) goto L_08A0FB10;
    return;
L_08A0FB10:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0FB1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 10u, 0x088BC0E0u>(ctx, &aot_mem) && ctx.pc == 0x08A0FB1Cu) goto L_08A0FB1C;
    return;
L_08A0FB1C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0FB30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0FB30u) goto L_08A0FB30;
    return;
L_08A0FB30:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0FB3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 491u, 0x088B2D5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0FB3Cu) goto L_08A0FB3C;
    return;
L_08A0FB3C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(33));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0FB5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0FB5Cu) goto L_08A0FB5C;
    return;
L_08A0FB5C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0FB68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 491u, 0x088B2D5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0FB68u) goto L_08A0FB68;
    return;
L_08A0FB68:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(34));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0FB88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0FB88u) goto L_08A0FB88;
    return;
L_08A0FB88:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0FB94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 68u, 0x088C0624u>(ctx, &aot_mem) && ctx.pc == 0x08A0FB94u) goto L_08A0FB94;
    return;
L_08A0FB94:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0FBB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0FBB4u) goto L_08A0FBB4;
    return;
L_08A0FBB4:
    ctx.set_gpr(3, 16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0FBC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A0FBC8u) goto L_08A0FBC8;
    return;
L_08A0FBC8:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(37));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0FBD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0FBD8u) goto L_08A0FBD8;
    return;
L_08A0FBD8:
    ctx.set_gpr(3, 49312u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0FBECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A0FBECu) goto L_08A0FBEC;
    return;
L_08A0FBEC:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(38));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0FBFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0FBFCu) goto L_08A0FBFC;
    return;
L_08A0FBFC:
    ctx.set_gpr(3, 16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0FC10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A0FC10u) goto L_08A0FC10;
    return;
L_08A0FC10:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(39));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0FC20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0FC20u) goto L_08A0FC20;
    return;
L_08A0FC20:
    ctx.set_gpr(3, 49312u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0FC34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A0FC34u) goto L_08A0FC34;
    return;
L_08A0FC34:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0FC44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0FC44u) goto L_08A0FC44;
    return;
L_08A0FC44:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A0FC50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 636u, 0x088AE1CCu>(ctx, &aot_mem) && ctx.pc == 0x08A0FC50u) goto L_08A0FC50;
    return;
L_08A0FC50:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2576));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-2412));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-2248));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A0FC88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0FC88u) goto L_08A0FC88;
    return;
L_08A0FC88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0FCA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25504)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0FCD0;
      }
      goto L_08A0FCBC;
    }
L_08A0FCBC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0FCD8;
      }
      goto L_08A0FCD0;
    }
L_08A0FCD0:
    ctx.set_gpr(31, 0x08A0FCD8u);
    // nop
    goto L_08A0FD74;
L_08A0FCD8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25504)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0FCF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A0FD08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 80u, 0x0899872Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0FD08u) goto L_08A0FD08;
    return;
L_08A0FD08:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4204));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A0FD28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0FD28u) goto L_08A0FD28;
    return;
L_08A0FD28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08A0FD4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0FD4Cu) goto L_08A0FD4C;
    return;
L_08A0FD4C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A0FD5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 295u, 0x089F25BCu>(ctx, &aot_mem) && ctx.pc == 0x08A0FD5Cu) goto L_08A0FD5C;
    return;
L_08A0FD5C:
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
L_08A0FD74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-612));
    ctx.set_gpr(31, 0x08A0FD8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0FD8Cu) goto L_08A0FD8C;
    return;
L_08A0FD8C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0FD9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0FDACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0FDACu) goto L_08A0FDAC;
    return;
L_08A0FDAC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25504));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24720));
    ctx.set_gpr(7, 2181u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-26096));
    ctx.set_gpr(8, 2209u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-504));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-2084));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2209u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-784));
    ctx.set_gpr(31, 0x08A0FDF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A0FDF8u) goto L_08A0FDF8;
    return;
L_08A0FDF8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0FE08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0FE18u);
    // nop
    goto L_08A0FCA4;
L_08A0FE18:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0FE28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A0FE40u);
    // nop
    goto L_08A0FF90;
L_08A0FE40:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25500)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A0FE54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08A0FE54u) goto L_08A0FE54;
    return;
L_08A0FE54:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0FE68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25500)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0FE94;
      }
      goto L_08A0FE80;
    }
L_08A0FE80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0FE9C;
      }
      goto L_08A0FE94;
    }
L_08A0FE94:
    ctx.set_gpr(31, 0x08A0FE9Cu);
    // nop
    goto L_08A0FF90;
L_08A0FE9C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25500)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0FEB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A0FECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A0FECCu) goto L_08A0FECC;
    return;
L_08A0FECC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19336));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(31, 0x08A0FEF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A0FEF4u) goto L_08A0FEF4;
    return;
L_08A0FEF4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19336));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0FF20;
      }
      goto L_08A0FF18;
    }
L_08A0FF18:
    ctx.set_gpr(31, 0x08A0FF20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0FF20u) goto L_08A0FF20;
    return;
L_08A0FF20:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0FF34;
      }
      goto L_08A0FF2C;
    }
L_08A0FF2C:
    ctx.set_gpr(31, 0x08A0FF34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0FF34u) goto L_08A0FF34;
    return;
L_08A0FF34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0FF48;
      }
      goto L_08A0FF40;
    }
L_08A0FF40:
    ctx.set_gpr(31, 0x08A0FF48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0FF48u) goto L_08A0FF48;
    return;
L_08A0FF48:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0FF5C;
      }
      goto L_08A0FF54;
    }
L_08A0FF54:
    ctx.set_gpr(31, 0x08A0FF5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A0FF5Cu) goto L_08A0FF5C;
    return;
L_08A0FF5C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A0FF78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x08A0FF78u) goto L_08A0FF78;
    return;
L_08A0FF78:
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
L_08A0FF90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2209u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-72));
    ctx.set_gpr(31, 0x08A0FFA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A0FFA8u) goto L_08A0FFA8;
    return;
L_08A0FFA8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0FFB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A0FFC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A0FFC8u) goto L_08A0FFC8;
    return;
L_08A0FFC8:
    ctx.set_gpr(2, 2209u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(84));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2072));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-25500));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4924));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-6348));
    ctx.pc = 0x08A10000u; return;
}

void recomp_unit_0130(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0130_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_130(Runtime &runtime) {
    runtime.register_generated_unit(130u, 0x08A0C000u, 16384u, &recomp_unit_0130, &recomp_unit_0130_entry);
    runtime.register_function(0x08A0C000u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C008u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C020u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C038u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C04Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C054u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C06Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C080u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C094u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C0B0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C0C8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C0D8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C0E8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C13Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C14Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C15Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C16Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C184u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C198u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C1A0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C1B8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C1D0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C1ECu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C210u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C220u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C238u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C250u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C260u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C270u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C2BCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C2CCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C2DCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C2ECu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C2FCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C314u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C328u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C330u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C348u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C360u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C388u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C3ACu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C3B4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C3C0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C3C8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C3D4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C3DCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C3E8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C3F0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C40Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C424u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C444u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C45Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C468u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C470u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C47Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C488u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C490u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C49Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C4A8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C4B0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C4BCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C4C8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C4D0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C4D8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C4ECu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C504u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C510u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C520u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C52Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C538u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C554u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C56Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C57Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C58Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C5E8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C5F8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C608u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C618u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C628u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C650u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C66Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C67Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C688u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C6A4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C6B0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C6CCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C6D8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C6F4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C700u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C730u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C74Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C764u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C778u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C78Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C7A4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C7ACu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C7B8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C7C4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C7CCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C7E4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C7FCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C810u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C818u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C830u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C844u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C858u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C874u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C88Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C89Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C8ACu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C8F8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C908u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C918u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C928u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C940u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C954u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C95Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C974u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C98Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C9ACu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C9D0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C9D8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0C9F0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CA00u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CA18u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CA30u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CA40u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CA50u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CAACu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CABCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CACCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CADCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CB04u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CB20u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CB30u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CB3Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CB7Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CB98u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CBB0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CBC4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CBD8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CBF0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CC04u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CC0Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CC24u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CC3Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CC58u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CC7Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CC84u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CCA0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CCB8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CCD0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CCE0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CCF0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CD54u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CD64u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CD74u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CD84u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CDACu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CDC8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CDD8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CDE4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CE18u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CE28u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CE44u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CE54u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CE64u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CE74u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CE84u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CE9Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CEB0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CEB8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CED0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CEE8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CEF8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CF08u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CF50u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CF60u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CF70u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CF80u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CF98u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CFA0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CFACu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CFB8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CFC0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CFD8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0CFF0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D004u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D00Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D024u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D03Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D05Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D080u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D088u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D094u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D09Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D0B4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D0CCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D0E4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D0F4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D104u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D160u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D170u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D180u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D190u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D1B8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D1D4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D1E4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D1F0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D20Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D218u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D234u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D24Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D280u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D29Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D2B4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D2D8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D2E0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D2F8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D310u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D318u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D324u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D330u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D338u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D350u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D368u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D37Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D384u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D39Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D3B0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D3C4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D3E0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D3F8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D408u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D418u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D46Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D47Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D48Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D49Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D4B4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D4BCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D4C8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D4D4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D4DCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D4F4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D50Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D520u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D528u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D540u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D558u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D57Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D5A0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D5A8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D5B4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D5BCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D5C8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D5D0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D5DCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D5E4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D5FCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D614u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D624u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D634u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D690u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D6A0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D6B0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D6C0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D6E8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D704u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D714u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D720u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D73Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D748u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D764u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D770u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D784u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D790u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D7C4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D7E0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D7F8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D80Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D814u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D82Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D844u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D854u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D864u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D8B4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D8C4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D8D4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D8E4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D908u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D924u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D934u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D960u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D978u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D990u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D9A4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D9ACu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D9C4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0D9DCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DA0Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DA30u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DA38u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DA44u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DA4Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DA58u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DA60u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DA6Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DA74u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DA8Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DA9Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DAB4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DAD4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DAECu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DAF8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DB00u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DB0Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DB18u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DB20u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DB2Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DB38u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DB40u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DB4Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DB58u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DB60u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DB68u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DB80u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DB8Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DB94u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DB9Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DBB4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DBC0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DBCCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DBD8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DBE0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DBFCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DC08u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DC14u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DC30u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DC48u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DC58u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DC68u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DCC4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DCD4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DCE4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DCF4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DD1Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DD38u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DD48u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DD54u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DD7Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DD8Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DD9Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DDA8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DDCCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DDD8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DE00u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DE0Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DE28u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DE40u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DE74u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DE90u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DEA8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DEBCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DED0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DEE8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DEF0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DEFCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DF08u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DF10u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DF28u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DF40u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DF54u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DF5Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DF74u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DF88u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DF9Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DFB8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DFD0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DFE0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0DFF0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E03Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E04Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E05Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E06Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E084u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E098u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E0A0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E0B8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E0CCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E0E0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E0FCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E114u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E124u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E134u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E180u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E190u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E1A0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E1B0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E1C8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E1D0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E1DCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E1E8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E1F0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E208u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E220u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E234u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E23Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E254u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E268u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E27Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E298u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E2B0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E2C0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E2D0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E324u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E334u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E344u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E354u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E36Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E374u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E380u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E38Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E394u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E3ACu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E3C4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E3D8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E3E0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E3F8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E40Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E420u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E43Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E454u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E464u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E474u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E4C8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E4D8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E4E8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E4F8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E510u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E518u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E524u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E530u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E538u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E550u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E568u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E57Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E584u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E59Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E5B0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E5C4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E5E0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E5F8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E608u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E618u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E66Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E67Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E68Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E69Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E6B4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E6BCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E6C8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E6D4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E6DCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E6F4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E70Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E720u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E728u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E740u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E754u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E768u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E784u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E79Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E7ACu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E7BCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E810u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E820u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E830u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E840u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E858u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E860u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E86Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E878u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E880u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E898u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E8B0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E8C4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E8CCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E8E4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E8F8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E90Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E928u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E940u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E950u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E960u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E9B4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E9C4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E9D4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E9E4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0E9FCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EA04u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EA10u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EA1Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EA24u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EA3Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EA54u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EA68u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EA70u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EA88u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EA9Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EAB0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EACCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EAE4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EAF4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EB04u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EB58u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EB68u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EB78u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EB88u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EBA0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EBA8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EBB4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EBC0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EBC8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EBE0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EBF8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EC0Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EC14u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EC2Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EC40u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EC54u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EC70u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EC88u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EC98u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0ECA8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0ECFCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0ED0Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0ED1Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0ED2Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0ED44u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0ED4Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0ED58u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0ED64u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0ED6Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0ED84u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0ED9Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EDB0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EDB8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EDD0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EDE4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EDF8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EE14u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EE2Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EE3Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EE4Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EEA0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EEB0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EEC0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EED0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EEE8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EEF0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EEFCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EF08u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EF10u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EF28u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EF40u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EF54u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EF5Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EF74u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EF88u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EF9Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EFB8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EFD0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EFE0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0EFF0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F044u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F054u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F064u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F074u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F08Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F094u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F0A0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F0ACu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F0B4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F0CCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F0E4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F0F8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F100u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F118u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F12Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F140u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F15Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F174u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F184u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F194u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F1E8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F1F8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F208u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F218u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F230u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F244u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F24Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F264u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F27Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F2F8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F31Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F324u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F330u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F338u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F344u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F34Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F358u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F360u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F36Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F374u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F380u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F388u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F394u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F39Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F3A8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F3B0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F3BCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F3C4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F3D0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F3D8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F3E4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F3ECu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F3F8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F400u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F40Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F414u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F420u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F428u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F434u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F43Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F448u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F450u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F45Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F464u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F470u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F478u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F484u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F48Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F498u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F4A0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F4ACu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F4B4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F4C0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F4C8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F4D4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F4DCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F4F4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F504u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F51Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F534u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F544u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F554u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F5B0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F5C0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F5D0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F5E0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F608u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F624u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F634u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F648u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F668u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F678u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F698u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F6A8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F6BCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F6CCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F6DCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F6ECu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F700u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F710u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F730u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F740u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F74Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F768u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F774u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F788u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F794u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F7B4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F7C0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F7E0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F7ECu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F80Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F818u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F838u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F848u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F858u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F880u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F890u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F8A0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F8B0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F8C0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F8D0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F8E0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F8F0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F900u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F910u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F91Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F93Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F948u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F968u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F974u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F994u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F9A0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F9C0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F9CCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F9ECu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0F9F8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FA18u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FA24u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FA44u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FA50u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FA70u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FA7Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FA9Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FAA8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FAC0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FACCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FAECu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FAF8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FB10u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FB1Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FB30u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FB3Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FB5Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FB68u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FB88u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FB94u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FBB4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FBC8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FBD8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FBECu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FBFCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FC10u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FC20u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FC34u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FC44u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FC50u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FC88u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FCA4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FCBCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FCD0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FCD8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FCF0u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FD08u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FD28u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FD4Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FD5Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FD74u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FD8Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FD9Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FDACu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FDF8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FE08u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FE18u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FE28u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FE40u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FE54u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FE68u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FE80u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FE94u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FE9Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FEB4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FECCu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FEF4u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FF18u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FF20u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FF2Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FF34u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FF40u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FF48u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FF54u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FF5Cu, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FF78u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FF90u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FFA8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FFB8u, &recomp_unit_0130, "recomp_unit_0130");
    runtime.register_function(0x08A0FFC8u, &recomp_unit_0130, "recomp_unit_0130");
}
} // namespace psprecomp
