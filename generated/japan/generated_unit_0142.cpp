#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0142[4074] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0,
    0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 11, 0, 0, 12, 0, 0, 0, 0, 13, 0, 14, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 19,
    0, 0, 20, 0, 21, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 30, 0, 0, 0, 31, 0, 0, 0, 0,
    0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 35, 0, 0, 36, 0, 0,
    0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0,
    0, 0, 40, 0, 41, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 44, 0, 0, 45, 0, 46, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0,
    0, 0, 49, 0, 50, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 53, 0, 0, 54, 0, 55, 0, 0, 0, 56, 57, 58, 0, 0, 59, 0, 60,
    0, 0, 61, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 66, 0, 67, 0, 68, 0, 0, 69, 0, 0, 0, 70,
    0, 0, 71, 0, 72, 0, 0, 73, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 82,
    0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0,
    89, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 94, 0, 0, 95, 0, 96, 0, 0, 97, 98, 0,
    0, 99, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 102, 103, 0, 104, 0, 0, 105, 0, 0, 106, 0, 0, 0, 107, 0, 0, 108, 0, 0,
    0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0,
    115, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 122, 0, 123, 0, 0, 0, 0, 124,
    0, 0, 125, 0, 126, 0, 0, 127, 0, 128, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0,
    132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0,
    0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0,
    142, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 154, 0, 155, 156, 0, 0, 0, 0, 0, 0,
    0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161,
    0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 0, 168, 0, 169, 0, 0, 0, 170, 0,
    0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 176, 0, 177, 178, 0,
    0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 183, 0, 0,
    184, 185, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 189, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 196, 197, 0, 0, 198, 0,
    0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 204, 205, 0, 0, 206, 0, 0, 0,
    207, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 212, 213, 0, 0, 214, 0, 0, 0, 215, 0,
    0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 220, 221, 0, 0, 222, 0, 0, 0, 223, 0,
    0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 234, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0,
    0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 240, 241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 248, 0,
    249, 250, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0,
    0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 0, 0,
    0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 266, 0, 0, 267,
    0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 269, 0, 0, 0, 270, 0, 271, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0,
    0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 278, 0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0,
    283, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0,
    0, 0, 0, 0, 0, 290, 0, 0, 291, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 0,
    298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0,
    0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 305, 0, 0, 306, 307, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0,
    0, 313, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 317, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 320, 0,
    0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 325, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0,
    0, 328, 0, 0, 329, 0, 0, 330, 0, 0, 331, 0, 0, 0, 332, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335,
    0, 0, 336, 337, 0, 0, 0, 0, 338, 0, 0, 339, 0, 340, 0, 0, 0, 0, 341, 0, 342, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 345,
    0, 0, 0, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 350, 0, 0, 351, 0, 0, 0, 0, 352,
    0, 0, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 355, 0, 356, 0, 0, 357, 0, 0, 358, 359, 0, 0, 360, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 364, 0, 0, 365, 0, 0,
    0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 370, 0, 0, 371, 0, 0, 372, 0,
    0, 373, 0, 0, 374, 0, 0, 0, 375, 0, 0, 376, 377, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381,
    0, 0, 382, 0, 0, 0, 383, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 386, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389,
    0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 0, 395, 0, 0, 0,
    396, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 0,
    0, 0, 0, 403, 404, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 408, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0,
    0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 414, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417,
    0, 0, 0, 418, 0, 0, 419, 0, 420, 0, 421, 0, 0, 0, 0, 0, 0, 422, 0, 423, 0, 0, 424, 0, 0, 425, 0, 0, 0, 0, 0, 0,
    426, 0, 0, 0, 427, 0, 0, 428, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 431, 432, 0, 0, 433, 0, 0, 0, 434, 0,
    0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 440, 0, 0, 441, 0, 0,
    0, 0, 0, 0, 442, 0, 0, 443, 444, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 446, 0, 0, 447, 0, 0, 0, 448, 0, 0, 449, 0, 450, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 452, 0, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 457, 0, 458, 0, 0, 0, 0, 0, 0, 0, 459, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 462, 0, 0, 463, 0, 0, 464, 0, 0, 465, 0, 466, 0, 0, 467, 0, 468, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 470,
    0, 0, 471, 0, 0, 472, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 477, 0, 0, 478, 0, 0, 0, 0, 0, 0, 479, 480, 481, 482, 0, 0, 483, 0, 0,
    0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 486, 0, 0, 487, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 489, 490, 0, 0, 0,
    0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 495, 0, 0, 0, 0, 496, 0, 0, 0, 0, 497, 0, 0, 0, 0, 498, 0, 0, 499, 0, 0, 0, 0, 0, 500, 0, 0, 0,
    0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0,
    0, 0, 505, 0, 506, 0, 0, 0, 0, 0, 507, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 509, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0,
    0, 514, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 519, 0, 520, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 523, 0, 524, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 529, 0, 530, 0, 0, 0, 0, 0, 531,
    0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 533, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 536, 0, 0, 537, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 538, 0, 0, 539, 0, 540, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 542, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 544, 545, 0, 0, 0, 546, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0,
    0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 551, 0, 0, 552, 0, 0, 0, 0, 553, 0, 554, 0,
    0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 557, 0, 0, 0, 558, 0, 0, 0, 559, 0, 0, 0, 560,
    0, 561, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 565, 0, 0, 0, 0, 566, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 569, 0, 570, 0, 0, 0, 0, 0,
    571, 0, 572, 0, 0, 0, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 575, 576, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 578,
    0, 0, 0, 0, 0, 0, 579, 580, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 583, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 585, 0, 0, 586, 0, 0, 0, 0, 587, 0, 588, 0, 0, 0, 0, 0, 589, 0, 0,
    0, 0, 0, 0, 590, 0, 591, 0, 0, 0, 592, 0, 0, 0, 593, 0, 0, 0, 594, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    596, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 600, 0,
    0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 602, 603, 0, 0, 604, 0, 0, 0, 0, 0, 605, 606, 0, 607, 0, 0, 608, 0, 0,
    609, 0, 0, 610, 0, 0, 0, 611, 0, 0, 0, 0, 612, 0, 0, 0, 613, 0, 0, 614, 0, 0, 615, 0, 0, 0, 0, 0, 616, 0, 0, 617,
    0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 620, 0, 621, 0, 0, 622, 0, 0, 623, 0, 0, 624, 0, 0, 0,
    625, 0, 0, 0, 626, 0, 0, 0, 627, 0, 0, 628, 0, 0, 629, 0, 0, 0, 0, 0, 630, 0, 0, 631, 0, 0, 0, 0, 632, 0, 0, 0,
    0, 0, 0, 633, 0, 0, 0, 0, 0, 634, 0, 0, 635, 0, 0, 636, 0, 0, 637, 0, 0, 0, 638, 0, 0, 639, 0, 0, 0, 640, 0, 0,
    641, 0, 0, 0, 642, 0, 0, 0, 0, 0, 643, 0, 0, 644, 0, 0, 645, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 647, 648, 0, 0,
    649, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 651, 0, 0, 652, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 655, 0,
    0, 656, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 659, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 661, 0, 0, 0, 662, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 665, 0, 0, 0, 0, 0, 666, 0,
    0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 668, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0,
    671, 0, 0, 0, 672, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 675, 0, 0, 0, 0, 0, 676, 0, 0, 0,
    0, 0, 0, 0, 677, 0, 0, 0, 678, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 681, 0, 0, 0, 0, 0,
    682, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 685, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0,
    0, 0, 687, 0, 0, 0, 688, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 691, 0, 0, 0, 0, 0, 692, 0,
    0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 696, 0,
    697, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 701, 0, 0, 702, 0, 0, 0, 703, 0, 704, 0, 0, 705,
    0, 0, 706, 0, 707, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 0, 0, 0, 711,
    0, 0, 712, 0, 0, 713, 0, 0, 714, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 716, 0, 0, 717, 0, 0, 0, 0, 0, 0, 0, 718, 0,
    0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 720, 0, 0, 721, 0, 0, 722, 0, 0, 723, 0, 0, 0, 0, 724, 0, 0, 725, 0, 0, 726, 0,
    0, 727, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 0, 730, 0, 0, 0, 0, 0, 731,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 733, 0, 0, 0, 0, 0, 734, 0, 0, 0, 735, 0, 0, 0, 0, 736, 0, 0,
    0, 0, 0, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 739, 0, 0, 740, 0, 0, 741, 0, 0, 0, 742, 0, 0, 0, 0, 743, 0, 0, 0, 744, 0, 0, 0, 745, 0, 0, 0, 0,
    0, 0, 746, 0, 0, 0, 747, 0, 748, 0, 0, 749, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0, 751, 0, 0, 0, 752, 0, 0, 0, 753, 0,
    0, 0, 0, 754, 0, 0, 0, 0, 0, 0, 755, 0, 0, 0, 756, 0, 757, 0, 0, 0, 0, 0, 758, 0, 0, 759, 0, 760, 0, 0, 0, 761,
    0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 0, 0, 763, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0, 0, 765, 0, 0, 0, 766, 0, 0,
    0, 0, 0, 0, 0, 767, 0, 0, 0, 768,
};
void recomp_unit_0142_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A3C000u;
        entry_id = (entry_delta < 16296u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0142[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A3C000;
    case 2u: goto L_08A3C010;
    case 3u: goto L_08A3C044;
    case 4u: goto L_08A3C04C;
    case 5u: goto L_08A3C06C;
    case 6u: goto L_08A3C074;
    case 7u: goto L_08A3C08C;
    case 8u: goto L_08A3C09C;
    case 9u: goto L_08A3C0AC;
    case 10u: goto L_08A3C0DC;
    case 11u: goto L_08A3C104;
    case 12u: goto L_08A3C110;
    case 13u: goto L_08A3C124;
    case 14u: goto L_08A3C12C;
    case 15u: goto L_08A3C138;
    case 16u: goto L_08A3C144;
    case 17u: goto L_08A3C15C;
    case 18u: goto L_08A3C164;
    case 19u: goto L_08A3C17C;
    case 20u: goto L_08A3C188;
    case 21u: goto L_08A3C190;
    case 22u: goto L_08A3C194;
    case 23u: goto L_08A3C1B0;
    case 24u: goto L_08A3C1E0;
    case 25u: goto L_08A3C20C;
    case 26u: goto L_08A3C220;
    case 27u: goto L_08A3C22C;
    case 28u: goto L_08A3C240;
    case 29u: goto L_08A3C258;
    case 30u: goto L_08A3C25C;
    case 31u: goto L_08A3C26C;
    case 32u: goto L_08A3C290;
    case 33u: goto L_08A3C2CC;
    case 34u: goto L_08A3C2D8;
    case 35u: goto L_08A3C2E8;
    case 36u: goto L_08A3C2F4;
    case 37u: goto L_08A3C304;
    case 38u: goto L_08A3C310;
    case 39u: goto L_08A3C364;
    case 40u: goto L_08A3C388;
    case 41u: goto L_08A3C390;
    case 42u: goto L_08A3C3A0;
    case 43u: goto L_08A3C3AC;
    case 44u: goto L_08A3C3BC;
    case 45u: goto L_08A3C3C8;
    case 46u: goto L_08A3C3D0;
    case 47u: goto L_08A3C3E0;
    case 48u: goto L_08A3C3EC;
    case 49u: goto L_08A3C408;
    case 50u: goto L_08A3C410;
    case 51u: goto L_08A3C420;
    case 52u: goto L_08A3C42C;
    case 53u: goto L_08A3C43C;
    case 54u: goto L_08A3C448;
    case 55u: goto L_08A3C450;
    case 56u: goto L_08A3C460;
    case 57u: goto L_08A3C464;
    case 58u: goto L_08A3C468;
    case 59u: goto L_08A3C474;
    case 60u: goto L_08A3C47C;
    case 61u: goto L_08A3C488;
    case 62u: goto L_08A3C494;
    case 63u: goto L_08A3C4A0;
    case 64u: goto L_08A3C4B4;
    case 65u: goto L_08A3C4C4;
    case 66u: goto L_08A3C4D0;
    case 67u: goto L_08A3C4D8;
    case 68u: goto L_08A3C4E0;
    case 69u: goto L_08A3C4EC;
    case 70u: goto L_08A3C4FC;
    case 71u: goto L_08A3C508;
    case 72u: goto L_08A3C510;
    case 73u: goto L_08A3C51C;
    case 74u: goto L_08A3C524;
    case 75u: goto L_08A3C530;
    case 76u: goto L_08A3C58C;
    case 77u: goto L_08A3C598;
    case 78u: goto L_08A3C5A4;
    case 79u: goto L_08A3C5B8;
    case 80u: goto L_08A3C5D8;
    case 81u: goto L_08A3C5EC;
    case 82u: goto L_08A3C5FC;
    case 83u: goto L_08A3C60C;
    case 84u: goto L_08A3C630;
    case 85u: goto L_08A3C644;
    case 86u: goto L_08A3C650;
    case 87u: goto L_08A3C664;
    case 88u: goto L_08A3C674;
    case 89u: goto L_08A3C680;
    case 90u: goto L_08A3C688;
    case 91u: goto L_08A3C690;
    case 92u: goto L_08A3C6C0;
    case 93u: goto L_08A3C6C8;
    case 94u: goto L_08A3C6D4;
    case 95u: goto L_08A3C6E0;
    case 96u: goto L_08A3C6E8;
    case 97u: goto L_08A3C6F4;
    case 98u: goto L_08A3C6F8;
    case 99u: goto L_08A3C704;
    case 100u: goto L_08A3C714;
    case 101u: goto L_08A3C720;
    case 102u: goto L_08A3C734;
    case 103u: goto L_08A3C738;
    case 104u: goto L_08A3C740;
    case 105u: goto L_08A3C74C;
    case 106u: goto L_08A3C758;
    case 107u: goto L_08A3C768;
    case 108u: goto L_08A3C774;
    case 109u: goto L_08A3C788;
    case 110u: goto L_08A3C7B8;
    case 111u: goto L_08A3C7C8;
    case 112u: goto L_08A3C7D8;
    case 113u: goto L_08A3C7E8;
    case 114u: goto L_08A3C7F8;
    case 115u: goto L_08A3C800;
    case 116u: goto L_08A3C80C;
    case 117u: goto L_08A3C814;
    case 118u: goto L_08A3C82C;
    case 119u: goto L_08A3C834;
    case 120u: goto L_08A3C844;
    case 121u: goto L_08A3C858;
    case 122u: goto L_08A3C860;
    case 123u: goto L_08A3C868;
    case 124u: goto L_08A3C87C;
    case 125u: goto L_08A3C888;
    case 126u: goto L_08A3C890;
    case 127u: goto L_08A3C89C;
    case 128u: goto L_08A3C8A4;
    case 129u: goto L_08A3C8A8;
    case 130u: goto L_08A3C8D8;
    case 131u: goto L_08A3C8EC;
    case 132u: goto L_08A3C900;
    case 133u: goto L_08A3C914;
    case 134u: goto L_08A3C928;
    case 135u: goto L_08A3C93C;
    case 136u: goto L_08A3C950;
    case 137u: goto L_08A3C964;
    case 138u: goto L_08A3C988;
    case 139u: goto L_08A3C9A0;
    case 140u: goto L_08A3C9BC;
    case 141u: goto L_08A3C9F4;
    case 142u: goto L_08A3CA00;
    case 143u: goto L_08A3CA10;
    case 144u: goto L_08A3CA1C;
    case 145u: goto L_08A3CA38;
    case 146u: goto L_08A3CA48;
    case 147u: goto L_08A3CA64;
    case 148u: goto L_08A3CA70;
    case 149u: goto L_08A3CA8C;
    case 150u: goto L_08A3CA98;
    case 151u: goto L_08A3CAA8;
    case 152u: goto L_08A3CAB8;
    case 153u: goto L_08A3CACC;
    case 154u: goto L_08A3CAD8;
    case 155u: goto L_08A3CAE0;
    case 156u: goto L_08A3CAE4;
    case 157u: goto L_08A3CB08;
    case 158u: goto L_08A3CB40;
    case 159u: goto L_08A3CB4C;
    case 160u: goto L_08A3CB60;
    case 161u: goto L_08A3CB7C;
    case 162u: goto L_08A3CB88;
    case 163u: goto L_08A3CBA0;
    case 164u: goto L_08A3CBAC;
    case 165u: goto L_08A3CBB8;
    case 166u: goto L_08A3CBC4;
    case 167u: goto L_08A3CBD0;
    case 168u: goto L_08A3CBE0;
    case 169u: goto L_08A3CBE8;
    case 170u: goto L_08A3CBF8;
    case 171u: goto L_08A3CC18;
    case 172u: goto L_08A3CC2C;
    case 173u: goto L_08A3CC3C;
    case 174u: goto L_08A3CC4C;
    case 175u: goto L_08A3CC60;
    case 176u: goto L_08A3CC6C;
    case 177u: goto L_08A3CC74;
    case 178u: goto L_08A3CC78;
    case 179u: goto L_08A3CC9C;
    case 180u: goto L_08A3CCC4;
    case 181u: goto L_08A3CCD8;
    case 182u: goto L_08A3CCE8;
    case 183u: goto L_08A3CCF4;
    case 184u: goto L_08A3CD00;
    case 185u: goto L_08A3CD04;
    case 186u: goto L_08A3CD1C;
    case 187u: goto L_08A3CD28;
    case 188u: goto L_08A3CD34;
    case 189u: goto L_08A3CD3C;
    case 190u: goto L_08A3CD4C;
    case 191u: goto L_08A3CD54;
    case 192u: goto L_08A3CD80;
    case 193u: goto L_08A3CD98;
    case 194u: goto L_08A3CDC8;
    case 195u: goto L_08A3CDE0;
    case 196u: goto L_08A3CDE8;
    case 197u: goto L_08A3CDEC;
    case 198u: goto L_08A3CDF8;
    case 199u: goto L_08A3CE08;
    case 200u: goto L_08A3CE1C;
    case 201u: goto L_08A3CE28;
    case 202u: goto L_08A3CE40;
    case 203u: goto L_08A3CE58;
    case 204u: goto L_08A3CE60;
    case 205u: goto L_08A3CE64;
    case 206u: goto L_08A3CE70;
    case 207u: goto L_08A3CE80;
    case 208u: goto L_08A3CE94;
    case 209u: goto L_08A3CEA0;
    case 210u: goto L_08A3CEB8;
    case 211u: goto L_08A3CED0;
    case 212u: goto L_08A3CED8;
    case 213u: goto L_08A3CEDC;
    case 214u: goto L_08A3CEE8;
    case 215u: goto L_08A3CEF8;
    case 216u: goto L_08A3CF0C;
    case 217u: goto L_08A3CF18;
    case 218u: goto L_08A3CF38;
    case 219u: goto L_08A3CF50;
    case 220u: goto L_08A3CF58;
    case 221u: goto L_08A3CF5C;
    case 222u: goto L_08A3CF68;
    case 223u: goto L_08A3CF78;
    case 224u: goto L_08A3CF8C;
    case 225u: goto L_08A3CF98;
    case 226u: goto L_08A3CFBC;
    case 227u: goto L_08A3CFD4;
    case 228u: goto L_08A3D018;
    case 229u: goto L_08A3D030;
    case 230u: goto L_08A3D03C;
    case 231u: goto L_08A3D050;
    case 232u: goto L_08A3D090;
    case 233u: goto L_08A3D0B8;
    case 234u: goto L_08A3D0C0;
    case 235u: goto L_08A3D0D0;
    case 236u: goto L_08A3D0D8;
    case 237u: goto L_08A3D0F0;
    case 238u: goto L_08A3D104;
    case 239u: goto L_08A3D118;
    case 240u: goto L_08A3D128;
    case 241u: goto L_08A3D12C;
    case 242u: goto L_08A3D138;
    case 243u: goto L_08A3D164;
    case 244u: goto L_08A3D1A8;
    case 245u: goto L_08A3D1B4;
    case 246u: goto L_08A3D1DC;
    case 247u: goto L_08A3D1E8;
    case 248u: goto L_08A3D1F8;
    case 249u: goto L_08A3D200;
    case 250u: goto L_08A3D204;
    case 251u: goto L_08A3D218;
    case 252u: goto L_08A3D220;
    case 253u: goto L_08A3D234;
    case 254u: goto L_08A3D23C;
    case 255u: goto L_08A3D26C;
    case 256u: goto L_08A3D278;
    case 257u: goto L_08A3D28C;
    case 258u: goto L_08A3D294;
    case 259u: goto L_08A3D2AC;
    case 260u: goto L_08A3D2D8;
    case 261u: goto L_08A3D2E4;
    case 262u: goto L_08A3D308;
    case 263u: goto L_08A3D31C;
    case 264u: goto L_08A3D330;
    case 265u: goto L_08A3D368;
    case 266u: goto L_08A3D370;
    case 267u: goto L_08A3D37C;
    case 268u: goto L_08A3D3A0;
    case 269u: goto L_08A3D3A8;
    case 270u: goto L_08A3D3B8;
    case 271u: goto L_08A3D3C0;
    case 272u: goto L_08A3D3CC;
    case 273u: goto L_08A3D3D8;
    case 274u: goto L_08A3D3F0;
    case 275u: goto L_08A3D404;
    case 276u: goto L_08A3D418;
    case 277u: goto L_08A3D434;
    case 278u: goto L_08A3D438;
    case 279u: goto L_08A3D444;
    case 280u: goto L_08A3D44C;
    case 281u: goto L_08A3D464;
    case 282u: goto L_08A3D478;
    case 283u: goto L_08A3D480;
    case 284u: goto L_08A3D48C;
    case 285u: goto L_08A3D498;
    case 286u: goto L_08A3D4B0;
    case 287u: goto L_08A3D4C4;
    case 288u: goto L_08A3D4D8;
    case 289u: goto L_08A3D4F8;
    case 290u: goto L_08A3D514;
    case 291u: goto L_08A3D520;
    case 292u: goto L_08A3D524;
    case 293u: goto L_08A3D534;
    case 294u: goto L_08A3D568;
    case 295u: goto L_08A3D5B0;
    case 296u: goto L_08A3D5DC;
    case 297u: goto L_08A3D5E8;
    case 298u: goto L_08A3D600;
    case 299u: goto L_08A3D614;
    case 300u: goto L_08A3D628;
    case 301u: goto L_08A3D660;
    case 302u: goto L_08A3D674;
    case 303u: goto L_08A3D688;
    case 304u: goto L_08A3D6B0;
    case 305u: goto L_08A3D6B4;
    case 306u: goto L_08A3D6C0;
    case 307u: goto L_08A3D6C4;
    case 308u: goto L_08A3D6D0;
    case 309u: goto L_08A3D704;
    case 310u: goto L_08A3D748;
    case 311u: goto L_08A3D770;
    case 312u: goto L_08A3D778;
    case 313u: goto L_08A3D784;
    case 314u: goto L_08A3D790;
    case 315u: goto L_08A3D7A4;
    case 316u: goto L_08A3D7C0;
    case 317u: goto L_08A3D7CC;
    case 318u: goto L_08A3D7D8;
    case 319u: goto L_08A3D7E4;
    case 320u: goto L_08A3D7F8;
    case 321u: goto L_08A3D814;
    case 322u: goto L_08A3D820;
    case 323u: goto L_08A3D840;
    case 324u: goto L_08A3D848;
    case 325u: goto L_08A3D854;
    case 326u: goto L_08A3D860;
    case 327u: goto L_08A3D878;
    case 328u: goto L_08A3D884;
    case 329u: goto L_08A3D890;
    case 330u: goto L_08A3D89C;
    case 331u: goto L_08A3D8A8;
    case 332u: goto L_08A3D8B8;
    case 333u: goto L_08A3D8C0;
    case 334u: goto L_08A3D8D0;
    case 335u: goto L_08A3D8FC;
    case 336u: goto L_08A3D908;
    case 337u: goto L_08A3D90C;
    case 338u: goto L_08A3D920;
    case 339u: goto L_08A3D92C;
    case 340u: goto L_08A3D934;
    case 341u: goto L_08A3D948;
    case 342u: goto L_08A3D950;
    case 343u: goto L_08A3D95C;
    case 344u: goto L_08A3D968;
    case 345u: goto L_08A3D97C;
    case 346u: goto L_08A3D998;
    case 347u: goto L_08A3D9A4;
    case 348u: goto L_08A3D9B4;
    case 349u: goto L_08A3D9D4;
    case 350u: goto L_08A3D9DC;
    case 351u: goto L_08A3D9E8;
    case 352u: goto L_08A3D9FC;
    case 353u: goto L_08A3DA18;
    case 354u: goto L_08A3DA20;
    case 355u: goto L_08A3DA34;
    case 356u: goto L_08A3DA3C;
    case 357u: goto L_08A3DA48;
    case 358u: goto L_08A3DA54;
    case 359u: goto L_08A3DA58;
    case 360u: goto L_08A3DA64;
    case 361u: goto L_08A3DA98;
    case 362u: goto L_08A3DACC;
    case 363u: goto L_08A3DADC;
    case 364u: goto L_08A3DAE8;
    case 365u: goto L_08A3DAF4;
    case 366u: goto L_08A3DB10;
    case 367u: goto L_08A3DB28;
    case 368u: goto L_08A3DB38;
    case 369u: goto L_08A3DB58;
    case 370u: goto L_08A3DB60;
    case 371u: goto L_08A3DB6C;
    case 372u: goto L_08A3DB78;
    case 373u: goto L_08A3DB84;
    case 374u: goto L_08A3DB90;
    case 375u: goto L_08A3DBA0;
    case 376u: goto L_08A3DBAC;
    case 377u: goto L_08A3DBB0;
    case 378u: goto L_08A3DBB8;
    case 379u: goto L_08A3DBD4;
    case 380u: goto L_08A3DBE0;
    case 381u: goto L_08A3DBFC;
    case 382u: goto L_08A3DC08;
    case 383u: goto L_08A3DC18;
    case 384u: goto L_08A3DC24;
    case 385u: goto L_08A3DC44;
    case 386u: goto L_08A3DC48;
    case 387u: goto L_08A3DC54;
    case 388u: goto L_08A3DC64;
    case 389u: goto L_08A3DC7C;
    case 390u: goto L_08A3DC90;
    case 391u: goto L_08A3DCB0;
    case 392u: goto L_08A3DCBC;
    case 393u: goto L_08A3DCC8;
    case 394u: goto L_08A3DCE4;
    case 395u: goto L_08A3DCF0;
    case 396u: goto L_08A3DD00;
    case 397u: goto L_08A3DD10;
    case 398u: goto L_08A3DD20;
    case 399u: goto L_08A3DD3C;
    case 400u: goto L_08A3DD48;
    case 401u: goto L_08A3DD58;
    case 402u: goto L_08A3DD6C;
    case 403u: goto L_08A3DD8C;
    case 404u: goto L_08A3DD90;
    case 405u: goto L_08A3DD9C;
    case 406u: goto L_08A3DDB0;
    case 407u: goto L_08A3DDD0;
    case 408u: goto L_08A3DDD4;
    case 409u: goto L_08A3DDE0;
    case 410u: goto L_08A3DDF8;
    case 411u: goto L_08A3DE04;
    case 412u: goto L_08A3DE10;
    case 413u: goto L_08A3DE28;
    case 414u: goto L_08A3DE30;
    case 415u: goto L_08A3DE3C;
    case 416u: goto L_08A3DE48;
    case 417u: goto L_08A3DE7C;
    case 418u: goto L_08A3DE8C;
    case 419u: goto L_08A3DE98;
    case 420u: goto L_08A3DEA0;
    case 421u: goto L_08A3DEA8;
    case 422u: goto L_08A3DEC4;
    case 423u: goto L_08A3DECC;
    case 424u: goto L_08A3DED8;
    case 425u: goto L_08A3DEE4;
    case 426u: goto L_08A3DF00;
    case 427u: goto L_08A3DF10;
    case 428u: goto L_08A3DF1C;
    case 429u: goto L_08A3DF24;
    case 430u: goto L_08A3DF38;
    case 431u: goto L_08A3DF58;
    case 432u: goto L_08A3DF5C;
    case 433u: goto L_08A3DF68;
    case 434u: goto L_08A3DF78;
    case 435u: goto L_08A3DF88;
    case 436u: goto L_08A3DF98;
    case 437u: goto L_08A3DFA8;
    case 438u: goto L_08A3DFBC;
    case 439u: goto L_08A3DFDC;
    case 440u: goto L_08A3DFE8;
    case 441u: goto L_08A3DFF4;
    case 442u: goto L_08A3E010;
    case 443u: goto L_08A3E01C;
    case 444u: goto L_08A3E020;
    case 445u: goto L_08A3E044;
    case 446u: goto L_08A3E084;
    case 447u: goto L_08A3E090;
    case 448u: goto L_08A3E0A0;
    case 449u: goto L_08A3E0AC;
    case 450u: goto L_08A3E0B4;
    case 451u: goto L_08A3E0BC;
    case 452u: goto L_08A3E104;
    case 453u: goto L_08A3E110;
    case 454u: goto L_08A3E124;
    case 455u: goto L_08A3E140;
    case 456u: goto L_08A3E164;
    case 457u: goto L_08A3E194;
    case 458u: goto L_08A3E19C;
    case 459u: goto L_08A3E1BC;
    case 460u: goto L_08A3E1C4;
    case 461u: goto L_08A3E1E8;
    case 462u: goto L_08A3E210;
    case 463u: goto L_08A3E21C;
    case 464u: goto L_08A3E228;
    case 465u: goto L_08A3E234;
    case 466u: goto L_08A3E23C;
    case 467u: goto L_08A3E248;
    case 468u: goto L_08A3E250;
    case 469u: goto L_08A3E25C;
    case 470u: goto L_08A3E27C;
    case 471u: goto L_08A3E288;
    case 472u: goto L_08A3E294;
    case 473u: goto L_08A3E298;
    case 474u: goto L_08A3E2CC;
    case 475u: goto L_08A3E2E8;
    case 476u: goto L_08A3E31C;
    case 477u: goto L_08A3E334;
    case 478u: goto L_08A3E340;
    case 479u: goto L_08A3E35C;
    case 480u: goto L_08A3E360;
    case 481u: goto L_08A3E364;
    case 482u: goto L_08A3E368;
    case 483u: goto L_08A3E374;
    case 484u: goto L_08A3E388;
    case 485u: goto L_08A3E3B0;
    case 486u: goto L_08A3E3B4;
    case 487u: goto L_08A3E3C0;
    case 488u: goto L_08A3E3D0;
    case 489u: goto L_08A3E3EC;
    case 490u: goto L_08A3E3F0;
    case 491u: goto L_08A3E414;
    case 492u: goto L_08A3E430;
    case 493u: goto L_08A3E444;
    case 494u: goto L_08A3E460;
    case 495u: goto L_08A3E490;
    case 496u: goto L_08A3E4A4;
    case 497u: goto L_08A3E4B8;
    case 498u: goto L_08A3E4CC;
    case 499u: goto L_08A3E4D8;
    case 500u: goto L_08A3E4F0;
    case 501u: goto L_08A3E50C;
    case 502u: goto L_08A3E540;
    case 503u: goto L_08A3E554;
    case 504u: goto L_08A3E568;
    case 505u: goto L_08A3E588;
    case 506u: goto L_08A3E590;
    case 507u: goto L_08A3E5A8;
    case 508u: goto L_08A3E5B8;
    case 509u: goto L_08A3E5D4;
    case 510u: goto L_08A3E5E0;
    case 511u: goto L_08A3E620;
    case 512u: goto L_08A3E63C;
    case 513u: goto L_08A3E670;
    case 514u: goto L_08A3E684;
    case 515u: goto L_08A3E698;
    case 516u: goto L_08A3E6B4;
    case 517u: goto L_08A3E6D4;
    case 518u: goto L_08A3E6E0;
    case 519u: goto L_08A3E70C;
    case 520u: goto L_08A3E714;
    case 521u: goto L_08A3E720;
    case 522u: goto L_08A3E830;
    case 523u: goto L_08A3E83C;
    case 524u: goto L_08A3E844;
    case 525u: goto L_08A3E850;
    case 526u: goto L_08A3E930;
    case 527u: goto L_08A3E93C;
    case 528u: goto L_08A3E9C8;
    case 529u: goto L_08A3E9DC;
    case 530u: goto L_08A3E9E4;
    case 531u: goto L_08A3E9FC;
    case 532u: goto L_08A3EA0C;
    case 533u: goto L_08A3EA28;
    case 534u: goto L_08A3EA34;
    case 535u: goto L_08A3EA64;
    case 536u: goto L_08A3EA6C;
    case 537u: goto L_08A3EA78;
    case 538u: goto L_08A3EB88;
    case 539u: goto L_08A3EB94;
    case 540u: goto L_08A3EB9C;
    case 541u: goto L_08A3EBA8;
    case 542u: goto L_08A3EC88;
    case 543u: goto L_08A3EC94;
    case 544u: goto L_08A3ED18;
    case 545u: goto L_08A3ED1C;
    case 546u: goto L_08A3ED2C;
    case 547u: goto L_08A3ED44;
    case 548u: goto L_08A3ED78;
    case 549u: goto L_08A3ED94;
    case 550u: goto L_08A3EDC4;
    case 551u: goto L_08A3EDD0;
    case 552u: goto L_08A3EDDC;
    case 553u: goto L_08A3EDF0;
    case 554u: goto L_08A3EDF8;
    case 555u: goto L_08A3EE10;
    case 556u: goto L_08A3EE44;
    case 557u: goto L_08A3EE4C;
    case 558u: goto L_08A3EE5C;
    case 559u: goto L_08A3EE6C;
    case 560u: goto L_08A3EE7C;
    case 561u: goto L_08A3EE84;
    case 562u: goto L_08A3EE90;
    case 563u: goto L_08A3EEBC;
    case 564u: goto L_08A3EED8;
    case 565u: goto L_08A3EF0C;
    case 566u: goto L_08A3EF20;
    case 567u: goto L_08A3EF34;
    case 568u: goto L_08A3EF50;
    case 569u: goto L_08A3EF60;
    case 570u: goto L_08A3EF68;
    case 571u: goto L_08A3EF80;
    case 572u: goto L_08A3EF88;
    case 573u: goto L_08A3EFA0;
    case 574u: goto L_08A3EFB0;
    case 575u: goto L_08A3EFCC;
    case 576u: goto L_08A3EFD0;
    case 577u: goto L_08A3EFE0;
    case 578u: goto L_08A3EFFC;
    case 579u: goto L_08A3F018;
    case 580u: goto L_08A3F01C;
    case 581u: goto L_08A3F028;
    case 582u: goto L_08A3F05C;
    case 583u: goto L_08A3F078;
    case 584u: goto L_08A3F0A8;
    case 585u: goto L_08A3F0B4;
    case 586u: goto L_08A3F0C0;
    case 587u: goto L_08A3F0D4;
    case 588u: goto L_08A3F0DC;
    case 589u: goto L_08A3F0F4;
    case 590u: goto L_08A3F110;
    case 591u: goto L_08A3F118;
    case 592u: goto L_08A3F128;
    case 593u: goto L_08A3F138;
    case 594u: goto L_08A3F148;
    case 595u: goto L_08A3F14C;
    case 596u: goto L_08A3F180;
    case 597u: goto L_08A3F188;
    case 598u: goto L_08A3F1C0;
    case 599u: goto L_08A3F1D8;
    case 600u: goto L_08A3F1F8;
    case 601u: goto L_08A3F21C;
    case 602u: goto L_08A3F234;
    case 603u: goto L_08A3F238;
    case 604u: goto L_08A3F244;
    case 605u: goto L_08A3F25C;
    case 606u: goto L_08A3F260;
    case 607u: goto L_08A3F268;
    case 608u: goto L_08A3F274;
    case 609u: goto L_08A3F280;
    case 610u: goto L_08A3F28C;
    case 611u: goto L_08A3F29C;
    case 612u: goto L_08A3F2B0;
    case 613u: goto L_08A3F2C0;
    case 614u: goto L_08A3F2CC;
    case 615u: goto L_08A3F2D8;
    case 616u: goto L_08A3F2F0;
    case 617u: goto L_08A3F2FC;
    case 618u: goto L_08A3F310;
    case 619u: goto L_08A3F32C;
    case 620u: goto L_08A3F344;
    case 621u: goto L_08A3F34C;
    case 622u: goto L_08A3F358;
    case 623u: goto L_08A3F364;
    case 624u: goto L_08A3F370;
    case 625u: goto L_08A3F380;
    case 626u: goto L_08A3F390;
    case 627u: goto L_08A3F3A0;
    case 628u: goto L_08A3F3AC;
    case 629u: goto L_08A3F3B8;
    case 630u: goto L_08A3F3D0;
    case 631u: goto L_08A3F3DC;
    case 632u: goto L_08A3F3F0;
    case 633u: goto L_08A3F40C;
    case 634u: goto L_08A3F424;
    case 635u: goto L_08A3F430;
    case 636u: goto L_08A3F43C;
    case 637u: goto L_08A3F448;
    case 638u: goto L_08A3F458;
    case 639u: goto L_08A3F464;
    case 640u: goto L_08A3F474;
    case 641u: goto L_08A3F480;
    case 642u: goto L_08A3F490;
    case 643u: goto L_08A3F4A8;
    case 644u: goto L_08A3F4B4;
    case 645u: goto L_08A3F4C0;
    case 646u: goto L_08A3F4D8;
    case 647u: goto L_08A3F4F0;
    case 648u: goto L_08A3F4F4;
    case 649u: goto L_08A3F500;
    case 650u: goto L_08A3F524;
    case 651u: goto L_08A3F530;
    case 652u: goto L_08A3F53C;
    case 653u: goto L_08A3F54C;
    case 654u: goto L_08A3F56C;
    case 655u: goto L_08A3F578;
    case 656u: goto L_08A3F584;
    case 657u: goto L_08A3F5A0;
    case 658u: goto L_08A3F5C4;
    case 659u: goto L_08A3F5D0;
    case 660u: goto L_08A3F5D8;
    case 661u: goto L_08A3F604;
    case 662u: goto L_08A3F614;
    case 663u: goto L_08A3F62C;
    case 664u: goto L_08A3F650;
    case 665u: goto L_08A3F660;
    case 666u: goto L_08A3F678;
    case 667u: goto L_08A3F698;
    case 668u: goto L_08A3F6A8;
    case 669u: goto L_08A3F6C0;
    case 670u: goto L_08A3F6E4;
    case 671u: goto L_08A3F700;
    case 672u: goto L_08A3F710;
    case 673u: goto L_08A3F728;
    case 674u: goto L_08A3F748;
    case 675u: goto L_08A3F758;
    case 676u: goto L_08A3F770;
    case 677u: goto L_08A3F790;
    case 678u: goto L_08A3F7A0;
    case 679u: goto L_08A3F7B8;
    case 680u: goto L_08A3F7D8;
    case 681u: goto L_08A3F7E8;
    case 682u: goto L_08A3F800;
    case 683u: goto L_08A3F81C;
    case 684u: goto L_08A3F840;
    case 685u: goto L_08A3F850;
    case 686u: goto L_08A3F868;
    case 687u: goto L_08A3F888;
    case 688u: goto L_08A3F898;
    case 689u: goto L_08A3F8B0;
    case 690u: goto L_08A3F8D0;
    case 691u: goto L_08A3F8E0;
    case 692u: goto L_08A3F8F8;
    case 693u: goto L_08A3F914;
    case 694u: goto L_08A3F934;
    case 695u: goto L_08A3F964;
    case 696u: goto L_08A3F978;
    case 697u: goto L_08A3F980;
    case 698u: goto L_08A3F9EC;
    case 699u: goto L_08A3FA14;
    case 700u: goto L_08A3FA40;
    case 701u: goto L_08A3FA4C;
    case 702u: goto L_08A3FA58;
    case 703u: goto L_08A3FA68;
    case 704u: goto L_08A3FA70;
    case 705u: goto L_08A3FA7C;
    case 706u: goto L_08A3FA88;
    case 707u: goto L_08A3FA90;
    case 708u: goto L_08A3FAA0;
    case 709u: goto L_08A3FABC;
    case 710u: goto L_08A3FAE4;
    case 711u: goto L_08A3FAFC;
    case 712u: goto L_08A3FB08;
    case 713u: goto L_08A3FB14;
    case 714u: goto L_08A3FB20;
    case 715u: goto L_08A3FB30;
    case 716u: goto L_08A3FB4C;
    case 717u: goto L_08A3FB58;
    case 718u: goto L_08A3FB78;
    case 719u: goto L_08A3FB98;
    case 720u: goto L_08A3FBA8;
    case 721u: goto L_08A3FBB4;
    case 722u: goto L_08A3FBC0;
    case 723u: goto L_08A3FBCC;
    case 724u: goto L_08A3FBE0;
    case 725u: goto L_08A3FBEC;
    case 726u: goto L_08A3FBF8;
    case 727u: goto L_08A3FC04;
    case 728u: goto L_08A3FC14;
    case 729u: goto L_08A3FC54;
    case 730u: goto L_08A3FC64;
    case 731u: goto L_08A3FC7C;
    case 732u: goto L_08A3FCA8;
    case 733u: goto L_08A3FCB8;
    case 734u: goto L_08A3FCD0;
    case 735u: goto L_08A3FCE0;
    case 736u: goto L_08A3FCF4;
    case 737u: goto L_08A3FD18;
    case 738u: goto L_08A3FD4C;
    case 739u: goto L_08A3FD90;
    case 740u: goto L_08A3FD9C;
    case 741u: goto L_08A3FDA8;
    case 742u: goto L_08A3FDB8;
    case 743u: goto L_08A3FDCC;
    case 744u: goto L_08A3FDDC;
    case 745u: goto L_08A3FDEC;
    case 746u: goto L_08A3FE08;
    case 747u: goto L_08A3FE18;
    case 748u: goto L_08A3FE20;
    case 749u: goto L_08A3FE2C;
    case 750u: goto L_08A3FE3C;
    case 751u: goto L_08A3FE58;
    case 752u: goto L_08A3FE68;
    case 753u: goto L_08A3FE78;
    case 754u: goto L_08A3FE8C;
    case 755u: goto L_08A3FEA8;
    case 756u: goto L_08A3FEB8;
    case 757u: goto L_08A3FEC0;
    case 758u: goto L_08A3FED8;
    case 759u: goto L_08A3FEE4;
    case 760u: goto L_08A3FEEC;
    case 761u: goto L_08A3FEFC;
    case 762u: goto L_08A3FF20;
    case 763u: goto L_08A3FF30;
    case 764u: goto L_08A3FF40;
    case 765u: goto L_08A3FF64;
    case 766u: goto L_08A3FF74;
    case 767u: goto L_08A3FF94;
    case 768u: goto L_08A3FFA4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A3C000:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23732)));
    ctx.set_gpr(31, 0x08A3C010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 478u, 0x0895DF98u>(ctx, &aot_mem) && ctx.pc == 0x08A3C010u) goto L_08A3C010;
    return;
L_08A3C010:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[19]))));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3C044u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3C044u) goto L_08A3C044;
    return;
L_08A3C044:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C074;
      }
      goto L_08A3C04C;
    }
L_08A3C04C:
    ctx.set_gpr(5, ctx.gpr[21] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23736)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A3C06Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A3C06Cu) goto L_08A3C06C;
    return;
L_08A3C06C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C08C;
      }
      goto L_08A3C074;
    }
L_08A3C074:
    ctx.set_gpr(5, ctx.gpr[21] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3C08Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3C08Cu) goto L_08A3C08C;
    return;
L_08A3C08C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A3C09Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 585u, 0x08A2E9A8u>(ctx, &aot_mem) && ctx.pc == 0x08A3C09Cu) goto L_08A3C09C;
    return;
L_08A3C09C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23736)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    goto L_08A3C0AC;
L_08A3C0AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08A3C0DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08A3C104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A3C104u) goto L_08A3C104;
    return;
L_08A3C104:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C12C;
      }
      goto L_08A3C110;
    }
L_08A3C110:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(31, 0x08A3C124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 595u, 0x08A2EB18u>(ctx, &aot_mem) && ctx.pc == 0x08A3C124u) goto L_08A3C124;
    return;
L_08A3C124:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C17C;
      }
      goto L_08A3C12C;
    }
L_08A3C12C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C164;
      }
      goto L_08A3C138;
    }
L_08A3C138:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C164;
      }
      goto L_08A3C144;
    }
L_08A3C144:
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(-9));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23816)));
    ctx.set_gpr(31, 0x08A3C15Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 600u, 0x08A2EBC4u>(ctx, &aot_mem) && ctx.pc == 0x08A3C15Cu) goto L_08A3C15C;
    return;
L_08A3C15C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C17C;
      }
      goto L_08A3C164;
    }
L_08A3C164:
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23732)));
    ctx.set_gpr(31, 0x08A3C17Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 600u, 0x08A2EBC4u>(ctx, &aot_mem) && ctx.pc == 0x08A3C17Cu) goto L_08A3C17C;
    return;
L_08A3C17C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A3C190;
      }
      goto L_08A3C188;
    }
L_08A3C188:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C194;
      }
      goto L_08A3C190;
    }
L_08A3C190:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A3C194;
L_08A3C194:
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
L_08A3C1B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(532)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(532), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A3C25C;
      }
      goto L_08A3C1E0;
    }
L_08A3C1E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A3C20Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3C20Cu) goto L_08A3C20C;
    return;
L_08A3C20C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[4] ^ 0u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C22C;
      }
      goto L_08A3C220;
    }
L_08A3C220:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C240;
      }
      goto L_08A3C22C;
    }
L_08A3C22C:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08A3C240;
L_08A3C240:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(496)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A3C258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x08A3C258u) goto L_08A3C258;
    return;
L_08A3C258:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(536), ctx.gpr[2]);
    goto L_08A3C25C;
L_08A3C25C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A3C26Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 718u, 0x08A3BA28u>(ctx, &aot_mem) && ctx.pc == 0x08A3C26Cu) goto L_08A3C26C;
    return;
L_08A3C26C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(532)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(532), ctx.gpr[3]);
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
L_08A3C290:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C2D8;
      }
      goto L_08A3C2CC;
    }
L_08A3C2CC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C8A8;
      }
      goto L_08A3C2D8;
    }
L_08A3C2D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08A3C2E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3C2E8u) goto L_08A3C2E8;
    return;
L_08A3C2E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A3C2F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 628u, 0x089F7718u>(ctx, &aot_mem) && ctx.pc == 0x08A3C2F4u) goto L_08A3C2F4;
    return;
L_08A3C2F4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3C304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3C304u) goto L_08A3C304;
    return;
L_08A3C304:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A3C310u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 628u, 0x089F7718u>(ctx, &aot_mem) && ctx.pc == 0x08A3C310u) goto L_08A3C310;
    return;
L_08A3C310:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32512)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(21, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C468;
      }
      goto L_08A3C364;
    }
L_08A3C364:
    ctx.set_gpr(3, ctx.gpr[21] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25092)));
    ctx.set_gpr(31, 0x08A3C388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3C388u) goto L_08A3C388;
    return;
L_08A3C388:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C3EC;
      }
      goto L_08A3C390;
    }
L_08A3C390:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C3AC;
      }
      goto L_08A3C3A0;
    }
L_08A3C3A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A3C3AC;
L_08A3C3AC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A3C3BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 11u, 0x08A30084u>(ctx, &aot_mem) && ctx.pc == 0x08A3C3BCu) goto L_08A3C3BC;
    return;
L_08A3C3BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C3D0;
      }
      goto L_08A3C3C8;
    }
L_08A3C3C8:
    ctx.set_gpr(31, 0x08A3C3D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A3C3D0u) goto L_08A3C3D0;
    return;
L_08A3C3D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x08A3C3E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 693u, 0x089FF550u>(ctx, &aot_mem) && ctx.pc == 0x08A3C3E0u) goto L_08A3C3E0;
    return;
L_08A3C3E0:
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C464;
      }
      goto L_08A3C3EC;
    }
L_08A3C3EC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25044)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3C408u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3C408u) goto L_08A3C408;
    return;
L_08A3C408:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A3C464;
      }
      goto L_08A3C410;
    }
L_08A3C410:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C42C;
      }
      goto L_08A3C420;
    }
L_08A3C420:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A3C42C;
L_08A3C42C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A3C43Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 98u, 0x08A30814u>(ctx, &aot_mem) && ctx.pc == 0x08A3C43Cu) goto L_08A3C43C;
    return;
L_08A3C43C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C450;
      }
      goto L_08A3C448;
    }
L_08A3C448:
    ctx.set_gpr(31, 0x08A3C450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A3C450u) goto L_08A3C450;
    return;
L_08A3C450:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x08A3C460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 693u, 0x089FF550u>(ctx, &aot_mem) && ctx.pc == 0x08A3C460u) goto L_08A3C460;
    return;
L_08A3C460:
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    goto L_08A3C464;
L_08A3C464:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08A3C468;
L_08A3C468:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C364;
      }
      goto L_08A3C474;
    }
L_08A3C474:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C4EC;
      }
      goto L_08A3C47C;
    }
L_08A3C47C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C4E0;
      }
      goto L_08A3C488;
    }
L_08A3C488:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3C494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3C494u) goto L_08A3C494;
    return;
L_08A3C494:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A3C4A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 628u, 0x089F7718u>(ctx, &aot_mem) && ctx.pc == 0x08A3C4A0u) goto L_08A3C4A0;
    return;
L_08A3C4A0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(512));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A3C4B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A3C4B4u) goto L_08A3C4B4;
    return;
L_08A3C4B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(512)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x08A3C4C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 693u, 0x089FF550u>(ctx, &aot_mem) && ctx.pc == 0x08A3C4C4u) goto L_08A3C4C4;
    return;
L_08A3C4C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C4EC;
      }
      goto L_08A3C4D0;
    }
L_08A3C4D0:
    ctx.set_gpr(31, 0x08A3C4D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A3C4D8u) goto L_08A3C4D8;
    return;
L_08A3C4D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C4EC;
      }
      goto L_08A3C4E0;
    }
L_08A3C4E0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x08A3C4ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 693u, 0x089FF550u>(ctx, &aot_mem) && ctx.pc == 0x08A3C4ECu) goto L_08A3C4EC;
    return;
L_08A3C4EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C530;
      }
      goto L_08A3C4FC;
    }
L_08A3C4FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C510;
      }
      goto L_08A3C508;
    }
L_08A3C508:
    ctx.set_gpr(31, 0x08A3C510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A3C510u) goto L_08A3C510;
    return;
L_08A3C510:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C524;
      }
      goto L_08A3C51C;
    }
L_08A3C51C:
    ctx.set_gpr(31, 0x08A3C524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A3C524u) goto L_08A3C524;
    return;
L_08A3C524:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C8A8;
      }
      goto L_08A3C530;
    }
L_08A3C530:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23700)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] ^ 0u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C690;
      }
      goto L_08A3C58C;
    }
L_08A3C58C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3C598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3C598u) goto L_08A3C598;
    return;
L_08A3C598:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A3C5A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 365u, 0x08A1DF18u>(ctx, &aot_mem) && ctx.pc == 0x08A3C5A4u) goto L_08A3C5A4;
    return;
L_08A3C5A4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A3C5B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A3C5B8u) goto L_08A3C5B8;
    return;
L_08A3C5B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08A3C5D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 183u, 0x088CCE5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3C5D8u) goto L_08A3C5D8;
    return;
L_08A3C5D8:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(496)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A3C5ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A3C5ECu) goto L_08A3C5EC;
    return;
L_08A3C5EC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(500)));
    ctx.set_gpr(31, 0x08A3C5FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A3C5FCu) goto L_08A3C5FC;
    return;
L_08A3C5FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A3C60Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 585u, 0x08A2E9A8u>(ctx, &aot_mem) && ctx.pc == 0x08A3C60Cu) goto L_08A3C60C;
    return;
L_08A3C60C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A3C630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3C630u) goto L_08A3C630;
    return;
L_08A3C630:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[4] ^ 0u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C650;
      }
      goto L_08A3C644;
    }
L_08A3C644:
    ctx.set_gpr(21, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C664;
      }
      goto L_08A3C650;
    }
L_08A3C650:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08A3C664;
L_08A3C664:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A3C674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 585u, 0x08A2E9A8u>(ctx, &aot_mem) && ctx.pc == 0x08A3C674u) goto L_08A3C674;
    return;
L_08A3C674:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C814;
      }
      goto L_08A3C680;
    }
L_08A3C680:
    ctx.set_gpr(31, 0x08A3C688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A3C688u) goto L_08A3C688;
    return;
L_08A3C688:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C814;
      }
      goto L_08A3C690;
    }
L_08A3C690:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23692)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A3C6D4;
      }
      goto L_08A3C6C0;
    }
L_08A3C6C0:
    ctx.set_gpr(31, 0x08A3C6C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 146u, 0x08A38C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3C6C8u) goto L_08A3C6C8;
    return;
L_08A3C6C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C6F8;
      }
      goto L_08A3C6D4;
    }
L_08A3C6D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C6F4;
      }
      goto L_08A3C6E0;
    }
L_08A3C6E0:
    ctx.set_gpr(31, 0x08A3C6E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 114u, 0x08A28A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3C6E8u) goto L_08A3C6E8;
    return;
L_08A3C6E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C6F8;
      }
      goto L_08A3C6F4;
    }
L_08A3C6F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08A3C6F8;
L_08A3C6F8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C814;
      }
      goto L_08A3C704;
    }
L_08A3C704:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(248)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A3C734;
      }
      goto L_08A3C714;
    }
L_08A3C714:
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A3C720u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 145u, 0x08A38C00u>(ctx, &aot_mem) && ctx.pc == 0x08A3C720u) goto L_08A3C720;
    return;
L_08A3C720:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C738;
      }
      goto L_08A3C734;
    }
L_08A3C734:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A3C738;
L_08A3C738:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C814;
      }
      goto L_08A3C740;
    }
L_08A3C740:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3C74Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3C74Cu) goto L_08A3C74C;
    return;
L_08A3C74C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A3C758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 355u, 0x088BA060u>(ctx, &aot_mem) && ctx.pc == 0x08A3C758u) goto L_08A3C758;
    return;
L_08A3C758:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3C768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3C768u) goto L_08A3C768;
    return;
L_08A3C768:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A3C774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 365u, 0x08A1DF18u>(ctx, &aot_mem) && ctx.pc == 0x08A3C774u) goto L_08A3C774;
    return;
L_08A3C774:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A3C788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A3C788u) goto L_08A3C788;
    return;
L_08A3C788:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-28120));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3C7B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3C7B8u) goto L_08A3C7B8;
    return;
L_08A3C7B8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(496)));
    ctx.set_gpr(31, 0x08A3C7C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A3C7C8u) goto L_08A3C7C8;
    return;
L_08A3C7C8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(500)));
    ctx.set_gpr(31, 0x08A3C7D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A3C7D8u) goto L_08A3C7D8;
    return;
L_08A3C7D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x08A3C7E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 585u, 0x08A2E9A8u>(ctx, &aot_mem) && ctx.pc == 0x08A3C7E8u) goto L_08A3C7E8;
    return;
L_08A3C7E8:
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C800;
      }
      goto L_08A3C7F8;
    }
L_08A3C7F8:
    ctx.set_gpr(31, 0x08A3C800u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A3C800u) goto L_08A3C800;
    return;
L_08A3C800:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C814;
      }
      goto L_08A3C80C;
    }
L_08A3C80C:
    ctx.set_gpr(31, 0x08A3C814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A3C814u) goto L_08A3C814;
    return;
L_08A3C814:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A3C82Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 388u, 0x08A61EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A3C82Cu) goto L_08A3C82C;
    return;
L_08A3C82C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C860;
      }
      goto L_08A3C834;
    }
L_08A3C834:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A3C844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 589u, 0x08A2EA40u>(ctx, &aot_mem) && ctx.pc == 0x08A3C844u) goto L_08A3C844;
    return;
L_08A3C844:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(31, 0x08A3C858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 595u, 0x08A2EB18u>(ctx, &aot_mem) && ctx.pc == 0x08A3C858u) goto L_08A3C858;
    return;
L_08A3C858:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C87C;
      }
      goto L_08A3C860;
    }
L_08A3C860:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C87C;
      }
      goto L_08A3C868;
    }
L_08A3C868:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(31, 0x08A3C87Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 595u, 0x08A2EB18u>(ctx, &aot_mem) && ctx.pc == 0x08A3C87Cu) goto L_08A3C87C;
    return;
L_08A3C87C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C890;
      }
      goto L_08A3C888;
    }
L_08A3C888:
    ctx.set_gpr(31, 0x08A3C890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A3C890u) goto L_08A3C890;
    return;
L_08A3C890:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3C8A4;
      }
      goto L_08A3C89C;
    }
L_08A3C89C:
    ctx.set_gpr(31, 0x08A3C8A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A3C8A4u) goto L_08A3C8A4;
    return;
L_08A3C8A4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A3C8A8;
L_08A3C8A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08A3C8D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(508), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3C8EC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(508), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3C900:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(508), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3C914:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(508), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3C928:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(508), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3C93C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(508), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3C950:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(508), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3C964:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    ctx.set_gpr(31, 0x08A3C988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A3C988u) goto L_08A3C988;
    return;
L_08A3C988:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3C9A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3C9A0u) goto L_08A3C9A0;
    return;
L_08A3C9A0:
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
L_08A3C9BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(520), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, 0x08A3C9F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3C9F4u) goto L_08A3C9F4;
    return;
L_08A3C9F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A3CA00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 355u, 0x088BA060u>(ctx, &aot_mem) && ctx.pc == 0x08A3CA00u) goto L_08A3CA00;
    return;
L_08A3CA00:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A3CA10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3CA10u) goto L_08A3CA10;
    return;
L_08A3CA10:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A3CA1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 365u, 0x08A1DF18u>(ctx, &aot_mem) && ctx.pc == 0x08A3CA1Cu) goto L_08A3CA1C;
    return;
L_08A3CA1C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(496)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A3CA38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A3CA38u) goto L_08A3CA38;
    return;
L_08A3CA38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(500)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3CA48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A3CA48u) goto L_08A3CA48;
    return;
L_08A3CA48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CA70;
      }
      goto L_08A3CA64;
    }
L_08A3CA64:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A3CA70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A3CA70u) goto L_08A3CA70;
    return;
L_08A3CA70:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CA98;
      }
      goto L_08A3CA8C;
    }
L_08A3CA8C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3CA98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A3CA98u) goto L_08A3CA98;
    return;
L_08A3CA98:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A3CAA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 585u, 0x08A2E9A8u>(ctx, &aot_mem) && ctx.pc == 0x08A3CAA8u) goto L_08A3CAA8;
    return;
L_08A3CAA8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A3CAB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A3CAB8u) goto L_08A3CAB8;
    return;
L_08A3CAB8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A3CACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 589u, 0x08A2EA40u>(ctx, &aot_mem) && ctx.pc == 0x08A3CACCu) goto L_08A3CACC;
    return;
L_08A3CACC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A3CAE0;
      }
      goto L_08A3CAD8;
    }
L_08A3CAD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CAE4;
      }
      goto L_08A3CAE0;
    }
L_08A3CAE0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A3CAE4;
L_08A3CAE4:
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
L_08A3CB08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(520), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A3CB40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3CB40u) goto L_08A3CB40;
    return;
L_08A3CB40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A3CB4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 221u, 0x088C1444u>(ctx, &aot_mem) && ctx.pc == 0x08A3CB4Cu) goto L_08A3CB4C;
    return;
L_08A3CB4C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(528)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3CB60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A3CB60u) goto L_08A3CB60;
    return;
L_08A3CB60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CB88;
      }
      goto L_08A3CB7C;
    }
L_08A3CB7C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3CB88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A3CB88u) goto L_08A3CB88;
    return;
L_08A3CB88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CBE8;
      }
      goto L_08A3CBA0;
    }
L_08A3CBA0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CBB8;
      }
      goto L_08A3CBAC;
    }
L_08A3CBAC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3CBB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x08A3CBB8u) goto L_08A3CBB8;
    return;
L_08A3CBB8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CBD0;
      }
      goto L_08A3CBC4;
    }
L_08A3CBC4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3CBD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x08A3CBD0u) goto L_08A3CBD0;
    return;
L_08A3CBD0:
    ctx.set_gpr(5, ctx.gpr[20] << 2u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3CBE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 3u, 0x08948028u>(ctx, &aot_mem) && ctx.pc == 0x08A3CBE0u) goto L_08A3CBE0;
    return;
L_08A3CBE0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    goto L_08A3CBE8;
L_08A3CBE8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CC18;
      }
      goto L_08A3CBF8;
    }
L_08A3CBF8:
    ctx.set_gpr(4, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08A3CC18;
L_08A3CC18:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CBF8;
      }
      goto L_08A3CC2C;
    }
L_08A3CC2C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3CC3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 585u, 0x08A2E9A8u>(ctx, &aot_mem) && ctx.pc == 0x08A3CC3Cu) goto L_08A3CC3C;
    return;
L_08A3CC3C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A3CC4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 20u, 0x08A3814Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3CC4Cu) goto L_08A3CC4C;
    return;
L_08A3CC4C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3CC60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 589u, 0x08A2EA40u>(ctx, &aot_mem) && ctx.pc == 0x08A3CC60u) goto L_08A3CC60;
    return;
L_08A3CC60:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A3CC74;
      }
      goto L_08A3CC6C;
    }
L_08A3CC6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CC78;
      }
      goto L_08A3CC74;
    }
L_08A3CC74:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A3CC78;
L_08A3CC78:
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
L_08A3CC9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A3CCD8;
      }
      goto L_08A3CCC4;
    }
L_08A3CCC4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3CCD8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3CCD8u) goto L_08A3CCD8;
    return;
L_08A3CCD8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A3CCE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A3CCE8u) goto L_08A3CCE8;
    return;
L_08A3CCE8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A3CD00;
      }
      goto L_08A3CCF4;
    }
L_08A3CCF4:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CD04;
      }
      goto L_08A3CD00;
    }
L_08A3CD00:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A3CD04;
L_08A3CD04:
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
L_08A3CD1C:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3CD28:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3CD34:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3CD3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A3CD4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 434u, 0x08945EECu>(ctx, &aot_mem) && ctx.pc == 0x08A3CD4Cu) goto L_08A3CD4C;
    return;
L_08A3CD4C:
    ctx.set_gpr(31, 0x08A3CD54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A3CD54u) goto L_08A3CD54;
    return;
L_08A3CD54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32604)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22104));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(31));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A3CD80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 578u, 0x08A7B518u>(ctx, &aot_mem) && ctx.pc == 0x08A3CD80u) goto L_08A3CD80;
    return;
L_08A3CD80:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32604), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3CD98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CDEC;
      }
      goto L_08A3CDC8;
    }
L_08A3CDC8:
    ctx.set_gpr(4, ctx.gpr[19] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CDE8;
      }
      goto L_08A3CDE0;
    }
L_08A3CDE0:
    ctx.set_gpr(31, 0x08A3CDE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A3CDE8u) goto L_08A3CDE8;
    return;
L_08A3CDE8:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A3CDEC;
L_08A3CDEC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CDC8;
      }
      goto L_08A3CDF8;
    }
L_08A3CDF8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CE1C;
      }
      goto L_08A3CE08;
    }
L_08A3CE08:
    ctx.set_gpr(4, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A3CE1C;
L_08A3CE1C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CE08;
      }
      goto L_08A3CE28;
    }
L_08A3CE28:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CE64;
      }
      goto L_08A3CE40;
    }
L_08A3CE40:
    ctx.set_gpr(4, ctx.gpr[19] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CE60;
      }
      goto L_08A3CE58;
    }
L_08A3CE58:
    ctx.set_gpr(31, 0x08A3CE60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A3CE60u) goto L_08A3CE60;
    return;
L_08A3CE60:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A3CE64;
L_08A3CE64:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CE40;
      }
      goto L_08A3CE70;
    }
L_08A3CE70:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CE94;
      }
      goto L_08A3CE80;
    }
L_08A3CE80:
    ctx.set_gpr(4, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A3CE94;
L_08A3CE94:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CE80;
      }
      goto L_08A3CEA0;
    }
L_08A3CEA0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CEDC;
      }
      goto L_08A3CEB8;
    }
L_08A3CEB8:
    ctx.set_gpr(4, ctx.gpr[19] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CED8;
      }
      goto L_08A3CED0;
    }
L_08A3CED0:
    ctx.set_gpr(31, 0x08A3CED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A3CED8u) goto L_08A3CED8;
    return;
L_08A3CED8:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A3CEDC;
L_08A3CEDC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CEB8;
      }
      goto L_08A3CEE8;
    }
L_08A3CEE8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CF0C;
      }
      goto L_08A3CEF8;
    }
L_08A3CEF8:
    ctx.set_gpr(4, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A3CF0C;
L_08A3CF0C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CEF8;
      }
      goto L_08A3CF18;
    }
L_08A3CF18:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CF5C;
      }
      goto L_08A3CF38;
    }
L_08A3CF38:
    ctx.set_gpr(4, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CF58;
      }
      goto L_08A3CF50;
    }
L_08A3CF50:
    ctx.set_gpr(31, 0x08A3CF58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A3CF58u) goto L_08A3CF58;
    return;
L_08A3CF58:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A3CF5C;
L_08A3CF5C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CF38;
      }
      goto L_08A3CF68;
    }
L_08A3CF68:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CF8C;
      }
      goto L_08A3CF78;
    }
L_08A3CF78:
    ctx.set_gpr(4, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A3CF8C;
L_08A3CF8C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3CF78;
      }
      goto L_08A3CF98;
    }
L_08A3CF98:
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
L_08A3CFBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A3CFD4u);
    // nop
    goto L_08A3CD98;
L_08A3CFD4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3D018:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A3D030u);
    // nop
    goto L_08A3CD98;
L_08A3D030:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A3D03Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 225u, 0x08A491B0u>(ctx, &aot_mem) && ctx.pc == 0x08A3D03Cu) goto L_08A3D03C;
    return;
L_08A3D03C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3D050:
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
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D12C;
      }
      goto L_08A3D090;
    }
L_08A3D090:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25204)));
    ctx.set_gpr(31, 0x08A3D0B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3D0B8u) goto L_08A3D0B8;
    return;
L_08A3D0B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D0D8;
      }
      goto L_08A3D0C0;
    }
L_08A3D0C0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A3D0D0u);
    // nop
    goto L_08A3D050;
L_08A3D0D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D128;
      }
      goto L_08A3D0D8;
    }
L_08A3D0D8:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D104;
      }
      goto L_08A3D0F0;
    }
L_08A3D0F0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D118;
      }
      goto L_08A3D104;
    }
L_08A3D104:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A3D118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3D118u) goto L_08A3D118;
    return;
L_08A3D118:
    ctx.set_gpr(4, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08A3D128;
L_08A3D128:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A3D12C;
L_08A3D12C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D090;
      }
      goto L_08A3D138;
    }
L_08A3D138:
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
L_08A3D164:
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
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D220;
      }
      goto L_08A3D1A8;
    }
L_08A3D1A8:
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D204;
      }
      goto L_08A3D1B4;
    }
L_08A3D1B4:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A3D1DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x08A3D1DCu) goto L_08A3D1DC;
    return;
L_08A3D1DC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A3D200;
      }
      goto L_08A3D1E8;
    }
L_08A3D1E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A3D1F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x08A3D1F8u) goto L_08A3D1F8;
    return;
L_08A3D1F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D204;
      }
      goto L_08A3D200;
    }
L_08A3D200:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A3D204;
L_08A3D204:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D1B4;
      }
      goto L_08A3D218;
    }
L_08A3D218:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D534;
      }
      goto L_08A3D220;
    }
L_08A3D220:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A3D294;
      }
      goto L_08A3D234;
    }
L_08A3D234:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D28C;
      }
      goto L_08A3D23C;
    }
L_08A3D23C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A3D26Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x08A3D26Cu) goto L_08A3D26C;
    return;
L_08A3D26C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A3D294;
      }
      goto L_08A3D278;
    }
L_08A3D278:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A3D28Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x08A3D28Cu) goto L_08A3D28C;
    return;
L_08A3D28C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D23C;
      }
      goto L_08A3D294;
    }
L_08A3D294:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D524;
      }
      goto L_08A3D2AC;
    }
L_08A3D2AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A3D2D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x08A3D2D8u) goto L_08A3D2D8;
    return;
L_08A3D2D8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A3D520;
      }
      goto L_08A3D2E4;
    }
L_08A3D2E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(22, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D31C;
      }
      goto L_08A3D308;
    }
L_08A3D308:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D330;
      }
      goto L_08A3D31C;
    }
L_08A3D31C:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A3D330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3D330u) goto L_08A3D330;
    return;
L_08A3D330:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24908)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3D368u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3D368u) goto L_08A3D368;
    return;
L_08A3D368:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A3D444;
      }
      goto L_08A3D370;
    }
L_08A3D370:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D438;
      }
      goto L_08A3D37C;
    }
L_08A3D37C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A3D3A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 801u, 0x08947B00u>(ctx, &aot_mem) && ctx.pc == 0x08A3D3A0u) goto L_08A3D3A0;
    return;
L_08A3D3A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D434;
      }
      goto L_08A3D3A8;
    }
L_08A3D3A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D3D8;
      }
      goto L_08A3D3B8;
    }
L_08A3D3B8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A3D3D8;
      }
      goto L_08A3D3C0;
    }
L_08A3D3C0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D3D8;
      }
      goto L_08A3D3CC;
    }
L_08A3D3CC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08A3D3D8;
L_08A3D3D8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D404;
      }
      goto L_08A3D3F0;
    }
L_08A3D3F0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D418;
      }
      goto L_08A3D404;
    }
L_08A3D404:
    ctx.set_gpr(5, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A3D418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3D418u) goto L_08A3D418;
    return;
L_08A3D418:
    ctx.set_gpr(4, ctx.gpr[22] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D444;
      }
      goto L_08A3D434;
    }
L_08A3D434:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A3D438;
L_08A3D438:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D37C;
      }
      goto L_08A3D444;
    }
L_08A3D444:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D520;
      }
      goto L_08A3D44C;
    }
L_08A3D44C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3D464u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3D464u) goto L_08A3D464;
    return;
L_08A3D464:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D498;
      }
      goto L_08A3D478;
    }
L_08A3D478:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A3D498;
      }
      goto L_08A3D480;
    }
L_08A3D480:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D498;
      }
      goto L_08A3D48C;
    }
L_08A3D48C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08A3D498;
L_08A3D498:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D4C4;
      }
      goto L_08A3D4B0;
    }
L_08A3D4B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D4D8;
      }
      goto L_08A3D4C4;
    }
L_08A3D4C4:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A3D4D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3D4D8u) goto L_08A3D4D8;
    return;
L_08A3D4D8:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A3D4F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A3D4F8u) goto L_08A3D4F8;
    return;
L_08A3D4F8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D520;
      }
      goto L_08A3D514;
    }
L_08A3D514:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A3D520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A3D520u) goto L_08A3D520;
    return;
L_08A3D520:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A3D524;
L_08A3D524:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D2AC;
      }
      goto L_08A3D534;
    }
L_08A3D534:
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
L_08A3D568:
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
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(496)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D6C4;
      }
      goto L_08A3D5B0;
    }
L_08A3D5B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(496)));
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A3D5DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x08A3D5DCu) goto L_08A3D5DC;
    return;
L_08A3D5DC:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D6B4;
      }
      goto L_08A3D5E8;
    }
L_08A3D5E8:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D614;
      }
      goto L_08A3D600;
    }
L_08A3D600:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D628;
      }
      goto L_08A3D614;
    }
L_08A3D614:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A3D628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3D628u) goto L_08A3D628;
    return;
L_08A3D628:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
    ctx.set_gpr(22, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D674;
      }
      goto L_08A3D660;
    }
L_08A3D660:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D688;
      }
      goto L_08A3D674;
    }
L_08A3D674:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A3D688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3D688u) goto L_08A3D688;
    return;
L_08A3D688:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08A3D6B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x08A3D6B0u) goto L_08A3D6B0;
    return;
L_08A3D6B0:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    goto L_08A3D6B4;
L_08A3D6B4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A3D5E8;
      }
      goto L_08A3D6C0;
    }
L_08A3D6C0:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A3D6C4;
L_08A3D6C4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D5B0;
      }
      goto L_08A3D6D0;
    }
L_08A3D6D0:
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
L_08A3D704:
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
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(22, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DA58;
      }
      goto L_08A3D748;
    }
L_08A3D748:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23700)));
    ctx.set_gpr(31, 0x08A3D770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3D770u) goto L_08A3D770;
    return;
L_08A3D770:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D934;
      }
      goto L_08A3D778;
    }
L_08A3D778:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3D784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3D784u) goto L_08A3D784;
    return;
L_08A3D784:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A3D790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 235u, 0x08A1D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3D790u) goto L_08A3D790;
    return;
L_08A3D790:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A3D7A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A3D7A4u) goto L_08A3D7A4;
    return;
L_08A3D7A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D7CC;
      }
      goto L_08A3D7C0;
    }
L_08A3D7C0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A3D7CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A3D7CCu) goto L_08A3D7CC;
    return;
L_08A3D7CC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3D7D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3D7D8u) goto L_08A3D7D8;
    return;
L_08A3D7D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A3D7E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 221u, 0x088C1444u>(ctx, &aot_mem) && ctx.pc == 0x08A3D7E4u) goto L_08A3D7E4;
    return;
L_08A3D7E4:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A3D7F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A3D7F8u) goto L_08A3D7F8;
    return;
L_08A3D7F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D820;
      }
      goto L_08A3D814;
    }
L_08A3D814:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A3D820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A3D820u) goto L_08A3D820;
    return;
L_08A3D820:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D860;
      }
      goto L_08A3D840;
    }
L_08A3D840:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A3D860;
      }
      goto L_08A3D848;
    }
L_08A3D848:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D860;
      }
      goto L_08A3D854;
    }
L_08A3D854:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    goto L_08A3D860;
L_08A3D860:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D8C0;
      }
      goto L_08A3D878;
    }
L_08A3D878:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D890;
      }
      goto L_08A3D884;
    }
L_08A3D884:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A3D890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x08A3D890u) goto L_08A3D890;
    return;
L_08A3D890:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D8A8;
      }
      goto L_08A3D89C;
    }
L_08A3D89C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A3D8A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x08A3D8A8u) goto L_08A3D8A8;
    return;
L_08A3D8A8:
    ctx.set_gpr(5, ctx.gpr[18] << 2u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A3D8B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 3u, 0x08948028u>(ctx, &aot_mem) && ctx.pc == 0x08A3D8B8u) goto L_08A3D8B8;
    return;
L_08A3D8B8:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    goto L_08A3D8C0;
L_08A3D8C0:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    ctx.set_gpr(21, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D920;
      }
      goto L_08A3D8D0;
    }
L_08A3D8D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[21] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(504)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A3D8FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x08A3D8FCu) goto L_08A3D8FC;
    return;
L_08A3D8FC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A3D90C;
      }
      goto L_08A3D908;
    }
L_08A3D908:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A3D90C;
L_08A3D90C:
    ctx.set_gpr(4, ctx.gpr[21] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08A3D920;
L_08A3D920:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D8D0;
      }
      goto L_08A3D92C;
    }
L_08A3D92C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DA54;
      }
      goto L_08A3D934;
    }
L_08A3D934:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25480)));
    ctx.set_gpr(31, 0x08A3D948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3D948u) goto L_08A3D948;
    return;
L_08A3D948:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D9FC;
      }
      goto L_08A3D950;
    }
L_08A3D950:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3D95Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3D95Cu) goto L_08A3D95C;
    return;
L_08A3D95C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A3D968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 235u, 0x08A1D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3D968u) goto L_08A3D968;
    return;
L_08A3D968:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A3D97Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A3D97Cu) goto L_08A3D97C;
    return;
L_08A3D97C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D9A4;
      }
      goto L_08A3D998;
    }
L_08A3D998:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A3D9A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A3D9A4u) goto L_08A3D9A4;
    return;
L_08A3D9A4:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A3D9B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A3D9B4u) goto L_08A3D9B4;
    return;
L_08A3D9B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DA54;
      }
      goto L_08A3D9D4;
    }
L_08A3D9D4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A3DA54;
      }
      goto L_08A3D9DC;
    }
L_08A3D9DC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DA54;
      }
      goto L_08A3D9E8;
    }
L_08A3D9E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DA54;
      }
      goto L_08A3D9FC;
    }
L_08A3D9FC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24788)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3DA18u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3DA18u) goto L_08A3DA18;
    return;
L_08A3DA18:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A3DA54;
      }
      goto L_08A3DA20;
    }
L_08A3DA20:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DA54;
      }
      goto L_08A3DA34;
    }
L_08A3DA34:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A3DA54;
      }
      goto L_08A3DA3C;
    }
L_08A3DA3C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DA54;
      }
      goto L_08A3DA48;
    }
L_08A3DA48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A3DA54;
L_08A3DA54:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A3DA58;
L_08A3DA58:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D748;
      }
      goto L_08A3DA64;
    }
L_08A3DA64:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3DA98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A3DADC;
      }
      goto L_08A3DACC;
    }
L_08A3DACC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3DADCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3DADCu) goto L_08A3DADC;
    return;
L_08A3DADC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A3DAE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3DAE8u) goto L_08A3DAE8;
    return;
L_08A3DAE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A3DAF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 422u, 0x08A1E410u>(ctx, &aot_mem) && ctx.pc == 0x08A3DAF4u) goto L_08A3DAF4;
    return;
L_08A3DAF4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3DB10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3DB10u) goto L_08A3DB10;
    return;
L_08A3DB10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3DB28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3DB28u) goto L_08A3DB28;
    return;
L_08A3DB28:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A3DB38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A3DB38u) goto L_08A3DB38;
    return;
L_08A3DB38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DB60;
      }
      goto L_08A3DB58;
    }
L_08A3DB58:
    ctx.set_gpr(31, 0x08A3DB60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A3DB60u) goto L_08A3DB60;
    return;
L_08A3DB60:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A3DB6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A3DB6Cu) goto L_08A3DB6C;
    return;
L_08A3DB6C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A3DB78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A3DB78u) goto L_08A3DB78;
    return;
L_08A3DB78:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A3DB84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3DB84u) goto L_08A3DB84;
    return;
L_08A3DB84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A3DB90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 338u, 0x08A19DA4u>(ctx, &aot_mem) && ctx.pc == 0x08A3DB90u) goto L_08A3DB90;
    return;
L_08A3DB90:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DBAC;
      }
      goto L_08A3DBA0;
    }
L_08A3DBA0:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DBB0;
      }
      goto L_08A3DBAC;
    }
L_08A3DBAC:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A3DBB0;
L_08A3DBB0:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DC18;
      }
      goto L_08A3DBB8;
    }
L_08A3DBB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DBE0;
      }
      goto L_08A3DBD4;
    }
L_08A3DBD4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A3DBE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A3DBE0u) goto L_08A3DBE0;
    return;
L_08A3DBE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DC08;
      }
      goto L_08A3DBFC;
    }
L_08A3DBFC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3DC08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A3DC08u) goto L_08A3DC08;
    return;
L_08A3DC08:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E020;
      }
      goto L_08A3DC18;
    }
L_08A3DC18:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DC48;
      }
      goto L_08A3DC24;
    }
L_08A3DC24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A3DC44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x08A3DC44u) goto L_08A3DC44;
    return;
L_08A3DC44:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A3DC48;
L_08A3DC48:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DC24;
      }
      goto L_08A3DC54;
    }
L_08A3DC54:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A3DC64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 444u, 0x08A36694u>(ctx, &aot_mem) && ctx.pc == 0x08A3DC64u) goto L_08A3DC64;
    return;
L_08A3DC64:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3DC7Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3DC7Cu) goto L_08A3DC7C;
    return;
L_08A3DC7C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3DC90u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3DC90u) goto L_08A3DC90;
    return;
L_08A3DC90:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DCBC;
      }
      goto L_08A3DCB0;
    }
L_08A3DCB0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A3DCBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A3DCBCu) goto L_08A3DCBC;
    return;
L_08A3DCBC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DD00;
      }
      goto L_08A3DCC8;
    }
L_08A3DCC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DCF0;
      }
      goto L_08A3DCE4;
    }
L_08A3DCE4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3DCF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A3DCF0u) goto L_08A3DCF0;
    return;
L_08A3DCF0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E020;
      }
      goto L_08A3DD00;
    }
L_08A3DD00:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A3DD10u);
    // nop
    goto L_08A3D050;
L_08A3DD10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DD58;
      }
      goto L_08A3DD20;
    }
L_08A3DD20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DD48;
      }
      goto L_08A3DD3C;
    }
L_08A3DD3C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3DD48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A3DD48u) goto L_08A3DD48;
    return;
L_08A3DD48:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E020;
      }
      goto L_08A3DD58;
    }
L_08A3DD58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(496)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DD90;
      }
      goto L_08A3DD6C;
    }
L_08A3DD6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(496)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08A3DD8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A3DD8Cu) goto L_08A3DD8C;
    return;
L_08A3DD8C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A3DD90;
L_08A3DD90:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DD6C;
      }
      goto L_08A3DD9C;
    }
L_08A3DD9C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(500)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DDD4;
      }
      goto L_08A3DDB0;
    }
L_08A3DDB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(500)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x08A3DDD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A3DDD0u) goto L_08A3DDD0;
    return;
L_08A3DDD0:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A3DDD4;
L_08A3DDD4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DDB0;
      }
      goto L_08A3DDE0;
    }
L_08A3DDE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32604)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DF24;
      }
      goto L_08A3DDF8;
    }
L_08A3DDF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DF24;
      }
      goto L_08A3DE04;
    }
L_08A3DE04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DF24;
      }
      goto L_08A3DE10;
    }
L_08A3DE10:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26660)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3DE28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3DE28u) goto L_08A3DE28;
    return;
L_08A3DE28:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A3DEA8;
      }
      goto L_08A3DE30;
    }
L_08A3DE30:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A3DE3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3DE3Cu) goto L_08A3DE3C;
    return;
L_08A3DE3C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A3DE48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 628u, 0x089F7718u>(ctx, &aot_mem) && ctx.pc == 0x08A3DE48u) goto L_08A3DE48;
    return;
L_08A3DE48:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32512)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(512)));
    ctx.set_gpr(31, 0x08A3DE7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 693u, 0x089FF550u>(ctx, &aot_mem) && ctx.pc == 0x08A3DE7Cu) goto L_08A3DE7C;
    return;
L_08A3DE7C:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08A3DE8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A3DE8Cu) goto L_08A3DE8C;
    return;
L_08A3DE8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DF24;
      }
      goto L_08A3DE98;
    }
L_08A3DE98:
    ctx.set_gpr(31, 0x08A3DEA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A3DEA0u) goto L_08A3DEA0;
    return;
L_08A3DEA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DF24;
      }
      goto L_08A3DEA8;
    }
L_08A3DEA8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26892)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(512)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3DEC4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3DEC4u) goto L_08A3DEC4;
    return;
L_08A3DEC4:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A3DF24;
      }
      goto L_08A3DECC;
    }
L_08A3DECC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A3DED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3DED8u) goto L_08A3DED8;
    return;
L_08A3DED8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A3DEE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 420u, 0x089F2F0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3DEE4u) goto L_08A3DEE4;
    return;
L_08A3DEE4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(3, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(512)));
    ctx.set_gpr(31, 0x08A3DF00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 693u, 0x089FF550u>(ctx, &aot_mem) && ctx.pc == 0x08A3DF00u) goto L_08A3DF00;
    return;
L_08A3DF00:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x08A3DF10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A3DF10u) goto L_08A3DF10;
    return;
L_08A3DF10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DF24;
      }
      goto L_08A3DF1C;
    }
L_08A3DF1C:
    ctx.set_gpr(31, 0x08A3DF24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A3DF24u) goto L_08A3DF24;
    return;
L_08A3DF24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(524)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DF5C;
      }
      goto L_08A3DF38;
    }
L_08A3DF38:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(524)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x08A3DF58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A3DF58u) goto L_08A3DF58;
    return;
L_08A3DF58:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A3DF5C;
L_08A3DF5C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DF38;
      }
      goto L_08A3DF68;
    }
L_08A3DF68:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3DF78u);
    // nop
    goto L_08A3D164;
L_08A3DF78:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3DF88u);
    // nop
    goto L_08A3D568;
L_08A3DF88:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3DF98u);
    // nop
    goto L_08A3D704;
L_08A3DF98:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DFF4;
      }
      goto L_08A3DFA8;
    }
L_08A3DFA8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3DFBCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3DFBCu) goto L_08A3DFBC;
    return;
L_08A3DFBC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DFE8;
      }
      goto L_08A3DFDC;
    }
L_08A3DFDC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3DFE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A3DFE8u) goto L_08A3DFE8;
    return;
L_08A3DFE8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E020;
      }
      goto L_08A3DFF4;
    }
L_08A3DFF4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E01C;
      }
      goto L_08A3E010;
    }
L_08A3E010:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3E01Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A3E01Cu) goto L_08A3E01C;
    return;
L_08A3E01C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A3E020;
L_08A3E020:
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
L_08A3E044:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
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
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E090;
      }
      goto L_08A3E084;
    }
L_08A3E084:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F14C;
      }
      goto L_08A3E090;
    }
L_08A3E090:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A3E0BC;
      }
      goto L_08A3E0A0;
    }
L_08A3E0A0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x08A3E0ACu);
    // nop
    goto L_08A3DA98;
L_08A3E0AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E0BC;
      }
      goto L_08A3E0B4;
    }
L_08A3E0B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F14C;
      }
      goto L_08A3E0BC;
    }
L_08A3E0BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
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
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[3] ^ 0u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E110;
      }
      goto L_08A3E104;
    }
L_08A3E104:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E124;
      }
      goto L_08A3E110;
    }
L_08A3E110:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08A3E124;
L_08A3E124:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3E140u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3E140u) goto L_08A3E140;
    return;
L_08A3E140:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E368;
      }
      goto L_08A3E164;
    }
L_08A3E164:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(17, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24908)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3E194u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3E194u) goto L_08A3E194;
    return;
L_08A3E194:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A3E364;
      }
      goto L_08A3E19C;
    }
L_08A3E19C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24908)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3E1BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3E1BCu) goto L_08A3E1BC;
    return;
L_08A3E1BC:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A3E2CC;
      }
      goto L_08A3E1C4;
    }
L_08A3E1C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E23C;
      }
      goto L_08A3E1E8;
    }
L_08A3E1E8:
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[7]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    ctx.set_gpr(4, ctx.gpr[8] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E21C;
      }
      goto L_08A3E210;
    }
L_08A3E210:
    ctx.set_gpr(2, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E23C;
      }
      goto L_08A3E21C;
    }
L_08A3E21C:
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E234;
      }
      goto L_08A3E228;
    }
L_08A3E228:
    ctx.set_gpr(7, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E23C;
      }
      goto L_08A3E234;
    }
L_08A3E234:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E298;
      }
      goto L_08A3E23C;
    }
L_08A3E23C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E1E8;
      }
      goto L_08A3E248;
    }
L_08A3E248:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E25C;
      }
      goto L_08A3E250;
    }
L_08A3E250:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E298;
      }
      goto L_08A3E25C;
    }
L_08A3E25C:
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E288;
      }
      goto L_08A3E27C;
    }
L_08A3E27C:
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E294;
      }
      goto L_08A3E288;
    }
L_08A3E288:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E298;
      }
      goto L_08A3E294;
    }
L_08A3E294:
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    goto L_08A3E298;
L_08A3E298:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[8] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E2E8;
      }
      goto L_08A3E2CC;
    }
L_08A3E2CC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    goto L_08A3E2E8;
L_08A3E2E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A3E334;
      }
      goto L_08A3E31C;
    }
L_08A3E31C:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E360;
      }
      goto L_08A3E334;
    }
L_08A3E334:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E35C;
      }
      goto L_08A3E340;
    }
L_08A3E340:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E360;
      }
      goto L_08A3E35C;
    }
L_08A3E35C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    goto L_08A3E360;
L_08A3E360:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08A3E364;
L_08A3E364:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A3E368;
L_08A3E368:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E164;
      }
      goto L_08A3E374;
    }
L_08A3E374:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E3B4;
      }
      goto L_08A3E388;
    }
L_08A3E388:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3E3B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3E3B0u) goto L_08A3E3B0;
    return;
L_08A3E3B0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A3E3B4;
L_08A3E3B4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E388;
      }
      goto L_08A3E3C0;
    }
L_08A3E3C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(248)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A3E3EC;
      }
      goto L_08A3E3D0;
    }
L_08A3E3D0:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E3F0;
      }
      goto L_08A3E3EC;
    }
L_08A3E3EC:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08A3E3F0;
L_08A3E3F0:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3EE84;
      }
      goto L_08A3E414;
    }
L_08A3E414:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(244)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E4CC;
      }
      goto L_08A3E430;
    }
L_08A3E430:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E460;
      }
      goto L_08A3E444;
    }
L_08A3E444:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20604)));
    ctx.set_gpr(31, 0x08A3E460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 478u, 0x0895DF98u>(ctx, &aot_mem) && ctx.pc == 0x08A3E460u) goto L_08A3E460;
    return;
L_08A3E460:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E4A4;
      }
      goto L_08A3E490;
    }
L_08A3E490:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E4B8;
      }
      goto L_08A3E4A4;
    }
L_08A3E4A4:
    ctx.set_gpr(5, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A3E4B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3E4B8u) goto L_08A3E4B8;
    return;
L_08A3E4B8:
    ctx.set_gpr(3, ctx.gpr[22] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A3E4CC;
L_08A3E4CC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E430;
      }
      goto L_08A3E4D8;
    }
L_08A3E4D8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E50C;
      }
      goto L_08A3E4F0;
    }
L_08A3E4F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(31, 0x08A3E50Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 478u, 0x0895DF98u>(ctx, &aot_mem) && ctx.pc == 0x08A3E50Cu) goto L_08A3E50C;
    return;
L_08A3E50C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E554;
      }
      goto L_08A3E540;
    }
L_08A3E540:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E568;
      }
      goto L_08A3E554;
    }
L_08A3E554:
    ctx.set_gpr(5, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A3E568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3E568u) goto L_08A3E568;
    return;
L_08A3E568:
    ctx.set_gpr(3, ctx.gpr[22] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x08A3E588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3E588u) goto L_08A3E588;
    return;
L_08A3E588:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E5A8;
      }
      goto L_08A3E590;
    }
L_08A3E590:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A3E5A8;
L_08A3E5A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E5D4;
      }
      goto L_08A3E5B8;
    }
L_08A3E5B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E590;
      }
      goto L_08A3E5D4;
    }
L_08A3E5D4:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3ED1C;
      }
      goto L_08A3E5E0;
    }
L_08A3E5E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E63C;
      }
      goto L_08A3E620;
    }
L_08A3E620:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(31, 0x08A3E63Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 478u, 0x0895DF98u>(ctx, &aot_mem) && ctx.pc == 0x08A3E63Cu) goto L_08A3E63C;
    return;
L_08A3E63C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E684;
      }
      goto L_08A3E670;
    }
L_08A3E670:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E698;
      }
      goto L_08A3E684;
    }
L_08A3E684:
    ctx.set_gpr(5, ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A3E698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3E698u) goto L_08A3E698;
    return;
L_08A3E698:
    ctx.set_gpr(3, ctx.gpr[30] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E6D4;
      }
      goto L_08A3E6B4;
    }
L_08A3E6B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3E6D4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3E6D4u) goto L_08A3E6D4;
    return;
L_08A3E6D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A3E9C8;
      }
      goto L_08A3E6E0;
    }
L_08A3E6E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(6, ctx.gpr[22] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3E844;
      }
      goto L_08A3E70C;
    }
L_08A3E70C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3E844;
      }
      goto L_08A3E714;
    }
L_08A3E714:
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E830;
      }
      goto L_08A3E720;
    }
L_08A3E720:
    ctx.set_gpr(2, ctx.gpr[7] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[5]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08A3E830;
L_08A3E830:
    ctx.set_gpr(2, ctx.gpr[7] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E720;
      }
      goto L_08A3E83C;
    }
L_08A3E83C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E9FC;
      }
      goto L_08A3E844;
    }
L_08A3E844:
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E930;
      }
      goto L_08A3E850;
    }
L_08A3E850:
    ctx.set_gpr(3, ctx.gpr[7] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[0] + ctx.fpr[4];
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[4] + ctx.fpr[5];
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(5, 0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[5] + ctx.fpr[4];
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[4] + ctx.fpr[5];
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[4] + ctx.fpr[5];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(5, 0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[5] + ctx.fpr[4];
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[4] + ctx.fpr[5];
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[4] + ctx.fpr[5];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[4] + ctx.fpr[2];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[1] + ctx.fpr[3];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08A3E930;
L_08A3E930:
    ctx.set_gpr(2, ctx.gpr[7] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E850;
      }
      goto L_08A3E93C;
    }
L_08A3E93C:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E9FC;
      }
      goto L_08A3E9C8;
    }
L_08A3E9C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[22] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A3E9DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3E9DCu) goto L_08A3E9DC;
    return;
L_08A3E9DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E9FC;
      }
      goto L_08A3E9E4;
    }
L_08A3E9E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A3E9FC;
L_08A3E9FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3EA28;
      }
      goto L_08A3EA0C;
    }
L_08A3EA0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A3E9E4;
      }
      goto L_08A3EA28;
    }
L_08A3EA28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3ED18;
      }
      goto L_08A3EA34;
    }
L_08A3EA34:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[22] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-20600)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[4] + ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A3EB9C;
      }
      goto L_08A3EA64;
    }
L_08A3EA64:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3EB9C;
      }
      goto L_08A3EA6C;
    }
L_08A3EA6C:
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3EB88;
      }
      goto L_08A3EA78;
    }
L_08A3EA78:
    ctx.set_gpr(3, ctx.gpr[7] << 2u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[5]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(52)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(60)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08A3EB88;
L_08A3EB88:
    ctx.set_gpr(3, ctx.gpr[7] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3EA78;
      }
      goto L_08A3EB94;
    }
L_08A3EB94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3ED18;
      }
      goto L_08A3EB9C;
    }
L_08A3EB9C:
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3EC88;
      }
      goto L_08A3EBA8;
    }
L_08A3EBA8:
    ctx.set_gpr(4, ctx.gpr[7] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[0] + ctx.fpr[4];
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[4] + ctx.fpr[5];
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(5, 0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[5] + ctx.fpr[4];
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[4] + ctx.fpr[5];
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[4] + ctx.fpr[5];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(5, 0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[5] + ctx.fpr[4];
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[4] + ctx.fpr[5];
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[4] + ctx.fpr[5];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[4] + ctx.fpr[2];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[1] + ctx.fpr[3];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08A3EC88;
L_08A3EC88:
    ctx.set_gpr(3, ctx.gpr[7] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3EBA8;
      }
      goto L_08A3EC94;
    }
L_08A3EC94:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A3ED18;
L_08A3ED18:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A3ED1C;
L_08A3ED1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3E5E0;
      }
      goto L_08A3ED2C;
    }
L_08A3ED2C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3EE6C;
      }
      goto L_08A3ED44;
    }
L_08A3ED44:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(268)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3ED94;
      }
      goto L_08A3ED78;
    }
L_08A3ED78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25504)));
    ctx.set_gpr(31, 0x08A3ED94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 478u, 0x0895DF98u>(ctx, &aot_mem) && ctx.pc == 0x08A3ED94u) goto L_08A3ED94;
    return;
L_08A3ED94:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3EDF8;
      }
      goto L_08A3EDC4;
    }
L_08A3EDC4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3EDDC;
      }
      goto L_08A3EDD0;
    }
L_08A3EDD0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A3EDDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x08A3EDDCu) goto L_08A3EDDC;
    return;
L_08A3EDDC:
    ctx.set_gpr(5, ctx.gpr[16] << 6u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A3EDF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 6u, 0x0894806Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3EDF0u) goto L_08A3EDF0;
    return;
L_08A3EDF0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    goto L_08A3EDF8;
L_08A3EDF8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3EE4C;
      }
      goto L_08A3EE10;
    }
L_08A3EE10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20600)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08A3EE44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3EE44u) goto L_08A3EE44;
    return;
L_08A3EE44:
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A3EE4C;
L_08A3EE4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3EE10;
      }
      goto L_08A3EE5C;
    }
L_08A3EE5C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A3EE6C;
L_08A3EE6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3ED44;
      }
      goto L_08A3EE7C;
    }
L_08A3EE7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F148;
      }
      goto L_08A3EE84;
    }
L_08A3EE84:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3EFD0;
      }
      goto L_08A3EE90;
    }
L_08A3EE90:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3EED8;
      }
      goto L_08A3EEBC;
    }
L_08A3EEBC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(31, 0x08A3EED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 478u, 0x0895DF98u>(ctx, &aot_mem) && ctx.pc == 0x08A3EED8u) goto L_08A3EED8;
    return;
L_08A3EED8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3EF20;
      }
      goto L_08A3EF0C;
    }
L_08A3EF0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3EF34;
      }
      goto L_08A3EF20;
    }
L_08A3EF20:
    ctx.set_gpr(5, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A3EF34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3EF34u) goto L_08A3EF34;
    return;
L_08A3EF34:
    ctx.set_gpr(3, ctx.gpr[23] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A3EF68;
      }
      goto L_08A3EF50;
    }
L_08A3EF50:
    ctx.set_gpr(4, ctx.gpr[22] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3EF60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3EF60u) goto L_08A3EF60;
    return;
L_08A3EF60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3EFA0;
      }
      goto L_08A3EF68;
    }
L_08A3EF68:
    ctx.set_gpr(2, ctx.gpr[2] << 6u);
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[22] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3EF80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A3EF80u) goto L_08A3EF80;
    return;
L_08A3EF80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3EFA0;
      }
      goto L_08A3EF88;
    }
L_08A3EF88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A3EFA0;
L_08A3EFA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3EFCC;
      }
      goto L_08A3EFB0;
    }
L_08A3EFB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A3EF88;
      }
      goto L_08A3EFCC;
    }
L_08A3EFCC:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A3EFD0;
L_08A3EFD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3EE90;
      }
      goto L_08A3EFE0;
    }
L_08A3EFE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(252)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A3F018;
      }
      goto L_08A3EFFC;
    }
L_08A3EFFC:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F01C;
      }
      goto L_08A3F018;
    }
L_08A3F018:
    ctx.set_gpr(30, 0u + 0u);
    goto L_08A3F01C;
L_08A3F01C:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F138;
      }
      goto L_08A3F028;
    }
L_08A3F028:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(268)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F078;
      }
      goto L_08A3F05C;
    }
L_08A3F05C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25504)));
    ctx.set_gpr(31, 0x08A3F078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 478u, 0x0895DF98u>(ctx, &aot_mem) && ctx.pc == 0x08A3F078u) goto L_08A3F078;
    return;
L_08A3F078:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F0DC;
      }
      goto L_08A3F0A8;
    }
L_08A3F0A8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F0C0;
      }
      goto L_08A3F0B4;
    }
L_08A3F0B4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A3F0C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x08A3F0C0u) goto L_08A3F0C0;
    return;
L_08A3F0C0:
    ctx.set_gpr(5, ctx.gpr[16] << 6u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A3F0D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 6u, 0x0894806Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3F0D4u) goto L_08A3F0D4;
    return;
L_08A3F0D4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    goto L_08A3F0DC;
L_08A3F0DC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F118;
      }
      goto L_08A3F0F4;
    }
L_08A3F0F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 6u);
    ctx.set_gpr(5, ctx.gpr[30] + ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08A3F110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3F110u) goto L_08A3F110;
    return;
L_08A3F110:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A3F118;
L_08A3F118:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F0F4;
      }
      goto L_08A3F128;
    }
L_08A3F128:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A3F138;
L_08A3F138:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F028;
      }
      goto L_08A3F148;
    }
L_08A3F148:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A3F14C;
L_08A3F14C:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3F180:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3F188:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3F1C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3F1C0u) goto L_08A3F1C0;
    return;
L_08A3F1C0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(212)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3F1D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3F1D8u) goto L_08A3F1D8;
    return;
L_08A3F1D8:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(232)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3F1F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3F1F8u) goto L_08A3F1F8;
    return;
L_08A3F1F8:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.set_gpr(16, ctx.gpr[16] & 255u);
    ctx.set_gpr(20, ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F238;
      }
      goto L_08A3F21C;
    }
L_08A3F21C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3F234u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3F234u) goto L_08A3F234;
    return;
L_08A3F234:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08A3F238;
L_08A3F238:
    ctx.set_gpr(16, ctx.gpr[16] & 2u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F260;
      }
      goto L_08A3F244;
    }
L_08A3F244:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3F25Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3F25Cu) goto L_08A3F25C;
    return;
L_08A3F25C:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08A3F260;
L_08A3F260:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F344;
      }
      goto L_08A3F268;
    }
L_08A3F268:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F29C;
      }
      goto L_08A3F274;
    }
L_08A3F274:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A3F280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3F280u) goto L_08A3F280;
    return;
L_08A3F280:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A3F28Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 654u, 0x088F772Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3F28Cu) goto L_08A3F28C;
    return;
L_08A3F28C:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A3F29Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3F29Cu) goto L_08A3F29C;
    return;
L_08A3F29C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A3F2D8;
      }
      goto L_08A3F2B0;
    }
L_08A3F2B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F2CC;
      }
      goto L_08A3F2C0;
    }
L_08A3F2C0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F2D8;
      }
      goto L_08A3F2CC;
    }
L_08A3F2CC:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A3F2D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3F2D8u) goto L_08A3F2D8;
    return;
L_08A3F2D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F2FC;
      }
      goto L_08A3F2F0;
    }
L_08A3F2F0:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A3F2FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3F2FCu) goto L_08A3F2FC;
    return;
L_08A3F2FC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3F310u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3F310u) goto L_08A3F310;
    return;
L_08A3F310:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08A3F32Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 44u, 0x08A78418u>(ctx, &aot_mem) && ctx.pc == 0x08A3F32Cu) goto L_08A3F32C;
    return;
L_08A3F32C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32256)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A3F344;
L_08A3F344:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F424;
      }
      goto L_08A3F34C;
    }
L_08A3F34C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F380;
      }
      goto L_08A3F358;
    }
L_08A3F358:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A3F364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3F364u) goto L_08A3F364;
    return;
L_08A3F364:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A3F370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 654u, 0x088F772Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3F370u) goto L_08A3F370;
    return;
L_08A3F370:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A3F380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3F380u) goto L_08A3F380;
    return;
L_08A3F380:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[17] << 2u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A3F3B8;
      }
      goto L_08A3F390;
    }
L_08A3F390:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F3AC;
      }
      goto L_08A3F3A0;
    }
L_08A3F3A0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F3B8;
      }
      goto L_08A3F3AC;
    }
L_08A3F3AC:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A3F3B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3F3B8u) goto L_08A3F3B8;
    return;
L_08A3F3B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F3DC;
      }
      goto L_08A3F3D0;
    }
L_08A3F3D0:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A3F3DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3F3DCu) goto L_08A3F3DC;
    return;
L_08A3F3DC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(244)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3F3F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3F3F0u) goto L_08A3F3F0;
    return;
L_08A3F3F0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08A3F40Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 77u, 0x08A786ACu>(ctx, &aot_mem) && ctx.pc == 0x08A3F40Cu) goto L_08A3F40C;
    return;
L_08A3F40C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32256)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A3F424;
L_08A3F424:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F458;
      }
      goto L_08A3F430;
    }
L_08A3F430:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A3F43Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3F43Cu) goto L_08A3F43C;
    return;
L_08A3F43C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A3F448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 654u, 0x088F772Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3F448u) goto L_08A3F448;
    return;
L_08A3F448:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A3F458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3F458u) goto L_08A3F458;
    return;
L_08A3F458:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A3F490;
      }
      goto L_08A3F464;
    }
L_08A3F464:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F480;
      }
      goto L_08A3F474;
    }
L_08A3F474:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F490;
      }
      goto L_08A3F480;
    }
L_08A3F480:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A3F490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3F490u) goto L_08A3F490;
    return;
L_08A3F490:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F4B4;
      }
      goto L_08A3F4A8;
    }
L_08A3F4A8:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A3F4B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3F4B4u) goto L_08A3F4B4;
    return;
L_08A3F4B4:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F4F4;
      }
      goto L_08A3F4C0;
    }
L_08A3F4C0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3F4D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3F4D8u) goto L_08A3F4D8;
    return;
L_08A3F4D8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A3F4F0u);
    // nop
    goto L_08A3F54C;
L_08A3F4F0:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A3F4F4;
L_08A3F4F4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F4C0;
      }
      goto L_08A3F500;
    }
L_08A3F500:
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
L_08A3F524:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3F530:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3F53C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3F54C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.set_gpr(1, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F5A0;
      }
      goto L_08A3F56C;
    }
L_08A3F56C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F584;
      }
      goto L_08A3F578;
    }
L_08A3F578:
    ctx.set_gpr(1, ctx.gpr[6] < 0u ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F5A0;
      }
      goto L_08A3F584;
    }
L_08A3F584:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] | 32768u);
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(4, 0u < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(6, 0u - ctx.gpr[6]);
    ctx.set_gpr(3, 0u - ctx.gpr[7]);
    ctx.set_gpr(7, ctx.gpr[3] - ctx.gpr[4]);
    goto L_08A3F5A0;
L_08A3F5A0:
    ctx.set_gpr(4, ctx.gpr[6] >> 23u);
    ctx.set_gpr(3, ctx.gpr[7] << 9u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3F5C4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32154))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F5D8;
      }
      goto L_08A3F5D0;
    }
L_08A3F5D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32154), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08A3F5D8;
L_08A3F5D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-22056));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A3F614;
      }
      goto L_08A3F604;
    }
L_08A3F604:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F62C;
      }
      goto L_08A3F614;
    }
L_08A3F614:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_08A3F62C;
L_08A3F62C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22056), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A3F660;
      }
      goto L_08A3F650;
    }
L_08A3F650:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F678;
      }
      goto L_08A3F660;
    }
L_08A3F660:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_08A3F678;
L_08A3F678:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A3F6A8;
      }
      goto L_08A3F698;
    }
L_08A3F698:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F6C0;
      }
      goto L_08A3F6A8;
    }
L_08A3F6A8:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_08A3F6C0;
L_08A3F6C0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-22056));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3F6E4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[5] << 3u);
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A3F710;
      }
      goto L_08A3F700;
    }
L_08A3F700:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F728;
      }
      goto L_08A3F710;
    }
L_08A3F710:
    ctx.set_gpr(5, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_08A3F728;
L_08A3F728:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A3F758;
      }
      goto L_08A3F748;
    }
L_08A3F748:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F770;
      }
      goto L_08A3F758;
    }
L_08A3F758:
    ctx.set_gpr(5, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_08A3F770;
L_08A3F770:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A3F7A0;
      }
      goto L_08A3F790;
    }
L_08A3F790:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F7B8;
      }
      goto L_08A3F7A0;
    }
L_08A3F7A0:
    ctx.set_gpr(5, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_08A3F7B8;
L_08A3F7B8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A3F7E8;
      }
      goto L_08A3F7D8;
    }
L_08A3F7D8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F800;
      }
      goto L_08A3F7E8;
    }
L_08A3F7E8:
    ctx.set_gpr(5, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_08A3F800;
L_08A3F800:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3F81C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A3F850;
      }
      goto L_08A3F840;
    }
L_08A3F840:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F868;
      }
      goto L_08A3F850;
    }
L_08A3F850:
    ctx.set_gpr(5, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_08A3F868;
L_08A3F868:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A3F898;
      }
      goto L_08A3F888;
    }
L_08A3F888:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F8B0;
      }
      goto L_08A3F898;
    }
L_08A3F898:
    ctx.set_gpr(5, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_08A3F8B0;
L_08A3F8B0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A3F8E0;
      }
      goto L_08A3F8D0;
    }
L_08A3F8D0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F8F8;
      }
      goto L_08A3F8E0;
    }
L_08A3F8E0:
    ctx.set_gpr(5, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_08A3F8F8;
L_08A3F8F8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3F914:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] & 32768u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F964;
      }
      goto L_08A3F934;
    }
L_08A3F934:
    ctx.set_gpr(4, ctx.gpr[3] & 32767u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.set_gpr(3, ctx.gpr[2] << 23u);
    ctx.set_gpr(5, ctx.gpr[4] << 23u);
    ctx.set_gpr(2, ctx.gpr[4] >> 9u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(4, 0u < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, 0u - ctx.gpr[5]);
    ctx.set_gpr(3, 0u - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3F978;
      }
      goto L_08A3F964;
    }
L_08A3F964:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.set_gpr(4, ctx.gpr[2] << 23u);
    ctx.set_gpr(2, ctx.gpr[3] << 23u);
    ctx.set_gpr(3, ctx.gpr[3] >> 9u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    goto L_08A3F978;
L_08A3F978:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3F980:
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[10]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3F9ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3F9ECu) goto L_08A3F9EC;
    return;
L_08A3F9EC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3FA14u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3FA14u) goto L_08A3FA14;
    return;
L_08A3FA14:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(16, ctx.gpr[18] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[16] < ctx.gpr[18] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(30, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FBA8;
      }
      goto L_08A3FA40;
    }
L_08A3FA40:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FA58;
      }
      goto L_08A3FA4C;
    }
L_08A3FA4C:
    ctx.set_gpr(1, ctx.gpr[16] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FBA8;
      }
      goto L_08A3FA58;
    }
L_08A3FA58:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A3FB30;
      }
      goto L_08A3FA68;
    }
L_08A3FA68:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FAA0;
      }
      goto L_08A3FA70;
    }
L_08A3FA70:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A3FAA0;
      }
      goto L_08A3FA7C;
    }
L_08A3FA7C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3FA90;
      }
      goto L_08A3FA88;
    }
L_08A3FA88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FB98;
      }
      goto L_08A3FA90;
    }
L_08A3FA90:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FD18;
      }
      goto L_08A3FAA0;
    }
L_08A3FAA0:
    ctx.set_gpr(3, ctx.gpr[20] < ctx.gpr[18] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[20] - ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[19] - ctx.gpr[17]);
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(31, 0x08A3FABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 363u, 0x08A66580u>(ctx, &aot_mem) && ctx.pc == 0x08A3FABCu) goto L_08A3FABC;
    return;
L_08A3FABC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(20, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[20] < ctx.gpr[18] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(19, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A3FBE0;
      }
      goto L_08A3FAE4;
    }
L_08A3FAE4:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3FAFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3FAFCu) goto L_08A3FAFC;
    return;
L_08A3FAFC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FBE0;
      }
      goto L_08A3FB08;
    }
L_08A3FB08:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FB20;
      }
      goto L_08A3FB14;
    }
L_08A3FB14:
    ctx.set_gpr(1, ctx.gpr[20] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FBE0;
      }
      goto L_08A3FB20;
    }
L_08A3FB20:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FBE0;
      }
      goto L_08A3FB30;
    }
L_08A3FB30:
    ctx.set_gpr(3, ctx.gpr[20] < ctx.gpr[18] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[20] - ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[19] - ctx.gpr[17]);
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(31, 0x08A3FB4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 363u, 0x08A66580u>(ctx, &aot_mem) && ctx.pc == 0x08A3FB4Cu) goto L_08A3FB4C;
    return;
L_08A3FB4C:
    ctx.set_gpr(3, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FB78;
      }
      goto L_08A3FB58;
    }
L_08A3FB58:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, ctx.gpr[16] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(20, ctx.gpr[16] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[30] - ctx.gpr[3]);
    ctx.set_gpr(19, ctx.gpr[3] - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FBE0;
      }
      goto L_08A3FB78;
    }
L_08A3FB78:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(20, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[20] < ctx.gpr[18] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(19, ctx.gpr[3] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FBE0;
      }
      goto L_08A3FB98;
    }
L_08A3FB98:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FD18;
      }
      goto L_08A3FBA8;
    }
L_08A3FBA8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FBE0;
      }
      goto L_08A3FBB4;
    }
L_08A3FBB4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FBCC;
      }
      goto L_08A3FBC0;
    }
L_08A3FBC0:
    ctx.set_gpr(1, ctx.gpr[20] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FBE0;
      }
      goto L_08A3FBCC;
    }
L_08A3FBCC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FD18;
      }
      goto L_08A3FBE0;
    }
L_08A3FBE0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FCF4;
      }
      goto L_08A3FBEC;
    }
L_08A3FBEC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FC04;
      }
      goto L_08A3FBF8;
    }
L_08A3FBF8:
    ctx.set_gpr(1, ctx.gpr[22] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FCF4;
      }
      goto L_08A3FC04;
    }
L_08A3FC04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A3FCE0;
      }
      goto L_08A3FC14;
    }
L_08A3FC14:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(5, ctx.gpr[20] < ctx.gpr[22] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[20] - ctx.gpr[22]);
    ctx.set_gpr(3, ctx.gpr[19] - ctx.gpr[23]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[4] >> 18u);
    ctx.set_gpr(3, ctx.gpr[3] << 14u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A3FC64;
      }
      goto L_08A3FC54;
    }
L_08A3FC54:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FC7C;
      }
      goto L_08A3FC64;
    }
L_08A3FC64:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_08A3FC7C;
L_08A3FC7C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, ctx.gpr[16] < ctx.gpr[22] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[16] - ctx.gpr[22]);
    ctx.set_gpr(3, ctx.gpr[30] - ctx.gpr[23]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[4] >> 18u);
    ctx.set_gpr(3, ctx.gpr[3] << 14u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A3FCB8;
      }
      goto L_08A3FCA8;
    }
L_08A3FCA8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FCD0;
      }
      goto L_08A3FCB8;
    }
L_08A3FCB8:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_08A3FCD0;
L_08A3FCD0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FD18;
      }
      goto L_08A3FCE0;
    }
L_08A3FCE0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FD18;
      }
      goto L_08A3FCF4;
    }
L_08A3FCF4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x08A3FD18u);
    // nop
    goto L_08A3FFA4;
L_08A3FD18:
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
L_08A3FD4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(95));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(94));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x08A3FD90u);
    // nop
    goto L_08A3F980;
L_08A3FD90:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A3FD9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A3FD9Cu) goto L_08A3FD9C;
    return;
L_08A3FD9C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(95)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FE20;
      }
      goto L_08A3FDA8;
    }
L_08A3FDA8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FDDC;
      }
      goto L_08A3FDB8;
    }
L_08A3FDB8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08A3FDCCu);
    // nop
    goto L_08A3F6E4;
L_08A3FDCC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A3FDDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 175u, 0x08A024A4u>(ctx, &aot_mem) && ctx.pc == 0x08A3FDDCu) goto L_08A3FDDC;
    return;
L_08A3FDDC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FF74;
      }
      goto L_08A3FDEC;
    }
L_08A3FDEC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3FE08u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3FE08u) goto L_08A3FE08;
    return;
L_08A3FE08:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A3FE18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 749u, 0x089FFD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3FE18u) goto L_08A3FE18;
    return;
L_08A3FE18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FF74;
      }
      goto L_08A3FE20;
    }
L_08A3FE20:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(94)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FEC0;
      }
      goto L_08A3FE2C;
    }
L_08A3FE2C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FE68;
      }
      goto L_08A3FE3C;
    }
L_08A3FE3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08A3FE58u);
    // nop
    goto L_08A3F6E4;
L_08A3FE58:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A3FE68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 175u, 0x08A024A4u>(ctx, &aot_mem) && ctx.pc == 0x08A3FE68u) goto L_08A3FE68;
    return;
L_08A3FE68:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FF74;
      }
      goto L_08A3FE78;
    }
L_08A3FE78:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3FE8Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3FE8Cu) goto L_08A3FE8C;
    return;
L_08A3FE8C:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3FEA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3FEA8u) goto L_08A3FEA8;
    return;
L_08A3FEA8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A3FEB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 749u, 0x089FFD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3FEB8u) goto L_08A3FEB8;
    return;
L_08A3FEB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FF74;
      }
      goto L_08A3FEC0;
    }
L_08A3FEC0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32408)));
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3FEE4;
      }
      goto L_08A3FED8;
    }
L_08A3FED8:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FEEC;
      }
      goto L_08A3FEE4;
    }
L_08A3FEE4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[20] = ctx.fpr[0] / ctx.fpr[1];
    goto L_08A3FEEC;
L_08A3FEEC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FF30;
      }
      goto L_08A3FEFC;
    }
L_08A3FEFC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3FF20u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3FF20u) goto L_08A3FF20;
    return;
L_08A3FF20:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A3FF30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 175u, 0x08A024A4u>(ctx, &aot_mem) && ctx.pc == 0x08A3FF30u) goto L_08A3FF30;
    return;
L_08A3FF30:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3FF74;
      }
      goto L_08A3FF40;
    }
L_08A3FF40:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3FF64u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3FF64u) goto L_08A3FF64;
    return;
L_08A3FF64:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A3FF74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 749u, 0x089FFD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3FF74u) goto L_08A3FF74;
    return;
L_08A3FF74:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3FF94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3FFA4:
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
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    ctx.set_gpr(22, ctx.gpr[10] + 0u);
    ctx.set_gpr(23, ctx.gpr[11] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A40000u);
    // nop
    ctx.pc = jump_target;
    (void)rt.invoke_chained_call(ctx, &aot_mem);
    return;
}

void recomp_unit_0142(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0142_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_142(Runtime &runtime) {
    runtime.register_generated_unit(142u, 0x08A3C000u, 16384u, &recomp_unit_0142, &recomp_unit_0142_entry);
    runtime.register_function(0x08A3C000u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C010u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C044u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C04Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C06Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C074u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C08Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C09Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C0ACu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C0DCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C104u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C110u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C124u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C12Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C138u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C144u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C15Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C164u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C17Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C188u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C190u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C194u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C1B0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C1E0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C20Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C220u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C22Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C240u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C258u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C25Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C26Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C290u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C2CCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C2D8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C2E8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C2F4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C304u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C310u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C364u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C388u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C390u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C3A0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C3ACu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C3BCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C3C8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C3D0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C3E0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C3ECu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C408u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C410u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C420u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C42Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C43Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C448u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C450u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C460u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C464u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C468u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C474u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C47Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C488u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C494u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C4A0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C4B4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C4C4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C4D0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C4D8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C4E0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C4ECu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C4FCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C508u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C510u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C51Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C524u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C530u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C58Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C598u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C5A4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C5B8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C5D8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C5ECu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C5FCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C60Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C630u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C644u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C650u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C664u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C674u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C680u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C688u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C690u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C6C0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C6C8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C6D4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C6E0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C6E8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C6F4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C6F8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C704u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C714u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C720u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C734u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C738u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C740u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C74Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C758u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C768u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C774u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C788u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C7B8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C7C8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C7D8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C7E8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C7F8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C800u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C80Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C814u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C82Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C834u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C844u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C858u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C860u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C868u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C87Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C888u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C890u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C89Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C8A4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C8A8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C8D8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C8ECu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C900u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C914u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C928u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C93Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C950u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C964u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C988u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C9A0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C9BCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3C9F4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CA00u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CA10u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CA1Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CA38u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CA48u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CA64u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CA70u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CA8Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CA98u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CAA8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CAB8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CACCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CAD8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CAE0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CAE4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CB08u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CB40u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CB4Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CB60u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CB7Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CB88u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CBA0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CBACu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CBB8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CBC4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CBD0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CBE0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CBE8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CBF8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CC18u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CC2Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CC3Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CC4Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CC60u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CC6Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CC74u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CC78u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CC9Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CCC4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CCD8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CCE8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CCF4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CD00u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CD04u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CD1Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CD28u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CD34u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CD3Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CD4Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CD54u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CD80u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CD98u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CDC8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CDE0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CDE8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CDECu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CDF8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CE08u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CE1Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CE28u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CE40u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CE58u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CE60u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CE64u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CE70u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CE80u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CE94u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CEA0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CEB8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CED0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CED8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CEDCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CEE8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CEF8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CF0Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CF18u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CF38u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CF50u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CF58u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CF5Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CF68u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CF78u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CF8Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CF98u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CFBCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3CFD4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D018u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D030u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D03Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D050u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D090u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D0B8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D0C0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D0D0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D0D8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D0F0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D104u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D118u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D128u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D12Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D138u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D164u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D1A8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D1B4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D1DCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D1E8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D1F8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D200u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D204u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D218u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D220u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D234u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D23Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D26Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D278u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D28Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D294u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D2ACu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D2D8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D2E4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D308u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D31Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D330u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D368u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D370u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D37Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D3A0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D3A8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D3B8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D3C0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D3CCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D3D8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D3F0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D404u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D418u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D434u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D438u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D444u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D44Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D464u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D478u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D480u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D48Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D498u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D4B0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D4C4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D4D8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D4F8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D514u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D520u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D524u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D534u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D568u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D5B0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D5DCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D5E8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D600u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D614u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D628u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D660u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D674u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D688u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D6B0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D6B4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D6C0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D6C4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D6D0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D704u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D748u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D770u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D778u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D784u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D790u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D7A4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D7C0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D7CCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D7D8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D7E4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D7F8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D814u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D820u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D840u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D848u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D854u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D860u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D878u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D884u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D890u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D89Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D8A8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D8B8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D8C0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D8D0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D8FCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D908u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D90Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D920u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D92Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D934u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D948u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D950u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D95Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D968u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D97Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D998u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D9A4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D9B4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D9D4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D9DCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D9E8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3D9FCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DA18u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DA20u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DA34u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DA3Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DA48u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DA54u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DA58u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DA64u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DA98u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DACCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DADCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DAE8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DAF4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DB10u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DB28u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DB38u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DB58u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DB60u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DB6Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DB78u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DB84u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DB90u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DBA0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DBACu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DBB0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DBB8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DBD4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DBE0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DBFCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DC08u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DC18u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DC24u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DC44u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DC48u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DC54u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DC64u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DC7Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DC90u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DCB0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DCBCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DCC8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DCE4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DCF0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DD00u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DD10u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DD20u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DD3Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DD48u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DD58u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DD6Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DD8Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DD90u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DD9Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DDB0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DDD0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DDD4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DDE0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DDF8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DE04u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DE10u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DE28u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DE30u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DE3Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DE48u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DE7Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DE8Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DE98u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DEA0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DEA8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DEC4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DECCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DED8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DEE4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DF00u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DF10u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DF1Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DF24u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DF38u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DF58u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DF5Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DF68u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DF78u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DF88u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DF98u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DFA8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DFBCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DFDCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DFE8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3DFF4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E010u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E01Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E020u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E044u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E084u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E090u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E0A0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E0ACu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E0B4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E0BCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E104u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E110u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E124u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E140u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E164u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E194u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E19Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E1BCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E1C4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E1E8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E210u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E21Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E228u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E234u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E23Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E248u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E250u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E25Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E27Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E288u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E294u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E298u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E2CCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E2E8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E31Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E334u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E340u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E35Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E360u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E364u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E368u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E374u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E388u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E3B0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E3B4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E3C0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E3D0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E3ECu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E3F0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E414u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E430u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E444u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E460u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E490u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E4A4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E4B8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E4CCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E4D8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E4F0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E50Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E540u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E554u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E568u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E588u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E590u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E5A8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E5B8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E5D4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E5E0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E620u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E63Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E670u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E684u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E698u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E6B4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E6D4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E6E0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E70Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E714u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E720u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E830u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E83Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E844u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E850u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E930u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E93Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E9C8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E9DCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E9E4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3E9FCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EA0Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EA28u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EA34u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EA64u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EA6Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EA78u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EB88u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EB94u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EB9Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EBA8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EC88u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EC94u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3ED18u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3ED1Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3ED2Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3ED44u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3ED78u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3ED94u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EDC4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EDD0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EDDCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EDF0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EDF8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EE10u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EE44u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EE4Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EE5Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EE6Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EE7Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EE84u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EE90u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EEBCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EED8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EF0Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EF20u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EF34u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EF50u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EF60u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EF68u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EF80u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EF88u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EFA0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EFB0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EFCCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EFD0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EFE0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3EFFCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F018u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F01Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F028u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F05Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F078u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F0A8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F0B4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F0C0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F0D4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F0DCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F0F4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F110u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F118u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F128u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F138u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F148u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F14Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F180u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F188u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F1C0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F1D8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F1F8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F21Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F234u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F238u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F244u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F25Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F260u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F268u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F274u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F280u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F28Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F29Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F2B0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F2C0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F2CCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F2D8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F2F0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F2FCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F310u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F32Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F344u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F34Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F358u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F364u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F370u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F380u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F390u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F3A0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F3ACu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F3B8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F3D0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F3DCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F3F0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F40Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F424u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F430u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F43Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F448u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F458u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F464u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F474u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F480u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F490u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F4A8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F4B4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F4C0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F4D8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F4F0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F4F4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F500u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F524u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F530u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F53Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F54Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F56Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F578u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F584u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F5A0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F5C4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F5D0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F5D8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F604u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F614u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F62Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F650u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F660u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F678u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F698u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F6A8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F6C0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F6E4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F700u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F710u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F728u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F748u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F758u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F770u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F790u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F7A0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F7B8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F7D8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F7E8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F800u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F81Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F840u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F850u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F868u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F888u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F898u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F8B0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F8D0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F8E0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F8F8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F914u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F934u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F964u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F978u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F980u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3F9ECu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FA14u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FA40u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FA4Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FA58u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FA68u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FA70u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FA7Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FA88u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FA90u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FAA0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FABCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FAE4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FAFCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FB08u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FB14u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FB20u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FB30u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FB4Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FB58u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FB78u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FB98u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FBA8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FBB4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FBC0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FBCCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FBE0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FBECu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FBF8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FC04u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FC14u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FC54u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FC64u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FC7Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FCA8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FCB8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FCD0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FCE0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FCF4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FD18u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FD4Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FD90u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FD9Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FDA8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FDB8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FDCCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FDDCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FDECu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FE08u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FE18u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FE20u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FE2Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FE3Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FE58u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FE68u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FE78u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FE8Cu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FEA8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FEB8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FEC0u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FED8u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FEE4u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FEECu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FEFCu, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FF20u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FF30u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FF40u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FF64u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FF74u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FF94u, &recomp_unit_0142, "recomp_unit_0142");
    runtime.register_function(0x08A3FFA4u, &recomp_unit_0142, "recomp_unit_0142");
}
} // namespace psprecomp
