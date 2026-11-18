#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0151[4093] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 6, 7, 0, 0, 0, 0, 0,
    0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 12, 0, 13, 0, 0, 0, 14,
    15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 20, 0, 0, 21,
    0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 26, 0, 27, 0,
    28, 29, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48,
    0, 0, 49, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 55, 0, 56, 57, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0,
    0, 0, 0, 70, 0, 0, 71, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 76, 0, 0,
    77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 90, 0, 0, 91, 0,
    0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 96, 0, 0, 0, 97, 0, 0, 98,
    0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0,
    107, 0, 0, 0, 0, 108, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0,
    0, 114, 0, 115, 0, 0, 0, 116, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0,
    0, 120, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123,
    0, 0, 124, 0, 125, 0, 0, 126, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 130, 0, 0, 131, 0, 132, 0, 0, 133, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 139, 0, 0, 140, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0,
    143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 146, 0, 147, 0, 0, 148, 0, 149, 0, 0, 150, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 157, 0,
    0, 0, 158, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0,
    163, 0, 0, 164, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 173, 0, 0, 174, 0, 175, 0, 0, 176, 0, 0, 0,
    0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 181, 0, 0, 182, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 185, 0, 0, 186, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0,
    0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 192, 0, 0, 193, 0, 194, 0, 0, 195, 0, 0, 196, 0, 0, 197, 0, 0, 0, 198, 0, 199, 0, 0, 200, 0, 0, 201, 202,
    0, 203, 0, 0, 204, 0, 205, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210,
    0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0,
    215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 220, 0, 221, 0, 0, 0, 222,
    0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 226, 0,
    0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0,
    235, 0, 236, 0, 0, 237, 0, 0, 0, 238, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 242, 0, 0, 243, 0, 244, 0, 0, 245, 0,
    246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252,
    0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 255, 0, 0, 256, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 259, 0, 0, 260,
    0, 0, 0, 261, 0, 262, 0, 0, 263, 0, 0, 0, 264, 265, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268,
    0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 274, 0, 275, 0, 276, 0, 0, 0, 0,
    0, 0, 277, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0,
    0, 0, 0, 283, 0, 284, 285, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 290, 0,
    0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 296, 0,
    0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 302, 0, 303, 0, 304,
    0, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320,
    0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326,
    0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332,
    0, 0, 0, 333, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 338, 0, 0, 339, 0, 0, 340, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 341, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0,
    0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 352, 0,
    0, 0, 353, 0, 0, 354, 0, 0, 0, 355, 0, 356, 0, 0, 357, 0, 0, 0, 358, 359, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0,
    0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0,
    366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370,
    0, 0, 0, 0, 0, 0, 0, 371, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 375, 0, 0,
    0, 376, 377, 0, 0, 0, 0, 378, 0, 379, 0, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0,
    0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 390, 0, 0, 391, 0, 0, 0, 392, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397, 398, 399, 0, 0, 0, 400, 0, 0, 401, 0, 402, 0,
    0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 408, 0, 0, 0, 0, 409, 0, 0,
    0, 0, 0, 0, 410, 0, 411, 0, 0, 0, 412, 0, 413, 0, 0, 0, 414, 0, 0, 0, 415, 416, 0, 417, 418, 0, 0, 0, 419, 0, 0, 420,
    0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0,
    0, 428, 0, 429, 0, 0, 0, 430, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0,
    0, 440, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 444, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 448, 0, 449, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 451, 0, 0, 452, 0, 453,
    0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 457, 0, 0, 0, 0, 458,
    0, 459, 0, 0, 0, 0, 460, 0, 461, 0, 0, 0, 0, 0, 462, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 465,
    0, 0, 466, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 470, 0, 471, 0, 0, 0, 0,
    0, 472, 0, 0, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0,
    0, 478, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 482,
    0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 485, 0, 0, 486, 0, 0, 0, 0, 487, 0, 0, 0, 0, 488,
    0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 0, 491, 0, 0, 0, 0, 492, 0, 493, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0,
    0, 495, 0, 496, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0,
    0, 0, 0, 500, 0, 0, 501, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 505, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 508, 0, 0, 0, 0, 509, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 512, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0,
    515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 519, 0, 0, 520, 0, 0,
    0, 521, 0, 0, 0, 0, 522, 0, 0, 523, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 526, 0, 0,
    0, 0, 527, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 529, 0, 0, 530, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 532, 0, 0, 0,
    0, 533, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 536, 0, 0, 0, 0, 537, 0, 0, 0, 538, 0, 0, 0,
    539, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 542, 0, 543, 0, 0, 544,
    545, 0, 0, 0, 546, 547, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549,
    0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 551, 0, 0, 0, 0, 552, 0, 553, 0, 554, 0, 0, 0, 0, 0, 555, 0, 0, 0, 556, 0, 0,
    557, 0, 0, 558, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 560, 0, 561, 0, 562, 563, 0, 0, 0, 564, 0, 0, 565, 0, 0, 566, 0, 567,
    0, 0, 0, 0, 568, 0, 569, 0, 570, 571, 0, 0, 572, 0, 573, 0, 0, 0, 0, 0, 574, 0, 0, 0, 575, 0, 0, 576, 0, 0, 0, 577,
    0, 0, 578, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 580, 0, 0, 0, 0, 0, 581, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 583,
    0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 586, 0, 0, 0, 0, 587, 0, 588, 0, 589, 0, 0, 590, 0,
    0, 0, 591, 0, 0, 0, 592, 593, 0, 0, 0, 594, 0, 595, 0, 0, 596, 0, 597, 0, 0, 598, 0, 0, 599, 0, 0, 600, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 603, 0, 604, 0, 0, 0, 0,
    605, 0, 606, 0, 0, 607, 608, 0, 0, 0, 0, 0, 0, 609, 0, 0, 610, 0, 0, 0, 0, 0, 611, 0, 0, 612, 0, 0, 0, 613, 0, 0,
    0, 0, 0, 614, 0, 0, 0, 0, 615, 0, 616, 0, 617, 618, 0, 0, 0, 0, 619, 0, 620, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 624, 0, 0, 0, 0, 625, 0, 626, 0, 627, 628, 0,
    0, 0, 629, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 631, 0, 632, 0, 0, 633, 634, 0, 0, 635, 0, 0, 636, 0, 637, 0, 0, 0, 0,
    638, 0, 639, 0, 0, 640, 641, 0, 0, 642, 0, 0, 643, 0, 644, 0, 0, 0, 0, 645, 0, 646, 0, 0, 647, 648, 0, 0, 649, 0, 0, 650,
    0, 0, 651, 0, 0, 0, 652, 0, 0, 0, 653, 0, 0, 654, 0, 0, 655, 0, 0, 656, 0, 657, 0, 0, 658, 0, 659, 0, 0, 660, 0, 661,
    0, 662, 0, 0, 663, 0, 0, 0, 664, 0, 0, 0, 665, 0, 0, 666, 0, 0, 667, 0, 0, 668, 0, 669, 0, 0, 670, 0, 671, 0, 0, 672,
    0, 673, 0, 674, 0, 0, 675, 0, 0, 0, 676, 0, 0, 0, 677, 0, 0, 678, 0, 0, 679, 0, 0, 680, 0, 681, 0, 0, 682, 0, 683, 0,
    0, 684, 0, 685, 0, 686, 0, 0, 0, 0, 0, 687, 0, 0, 688, 0, 689, 0, 0, 690, 0, 691, 0, 0, 692, 0, 693, 694, 0, 0, 0, 695,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    697, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 698, 0, 699, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 701, 0, 702, 0,
    0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 704, 0, 705, 0, 0, 706, 0, 0, 707, 0, 0, 0, 708, 0, 0, 709, 0, 0, 0, 0, 0, 710,
    0, 0, 711, 0, 0, 0, 0, 0, 0, 712, 0, 0, 713, 0, 714, 715, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 717,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0, 719, 0, 720, 0, 721, 0, 0, 0, 0, 722, 0, 723, 0, 724, 725, 0,
    0, 0, 0, 0, 726, 0, 727, 0, 0, 0, 728, 0, 0, 0, 0, 729, 0, 0, 0, 0, 730, 0, 0, 0, 0, 731, 0, 0, 0, 0, 0, 0,
    0, 732, 0, 0, 733, 0, 0, 0, 0, 0, 734, 0, 735, 736, 0, 0, 737, 0, 0, 0, 738, 0, 739, 0, 0, 0, 0, 740, 0, 741, 0, 742,
    0, 0, 0, 0, 743, 0, 744, 0, 745, 746, 0, 0, 0, 0, 0, 747, 0, 748, 0, 0, 0, 749, 0, 0, 0, 0, 750, 0, 0, 0, 0, 751,
    0, 0, 752, 753, 0, 0, 754, 0, 0, 0, 755, 0, 756, 0, 0, 0, 0, 757, 0, 758, 0, 759, 0, 0, 0, 0, 760, 0, 761, 0, 762, 763,
    0, 0, 0, 0, 0, 764, 0, 765, 0, 0, 0, 766, 0, 0, 0, 0, 767, 0, 0, 0, 0, 768, 0, 0, 0, 0, 769, 0, 0, 0, 0, 0,
    0, 0, 770, 0, 0, 771, 0, 0, 0, 0, 0, 772, 0, 773, 774, 0, 0, 775, 0, 0, 0, 776, 0, 777, 0, 0, 0, 778, 0, 0, 0, 0,
    0, 779, 0, 0, 0, 0, 780, 0, 781, 0, 782, 783, 0, 0, 0, 0, 784, 785, 0, 0, 0, 786, 0, 0, 0, 0, 0, 0, 0, 0, 787, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 788, 0, 0, 0, 0, 789, 0, 0, 0, 0, 790, 0, 0, 791,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 792, 0, 0, 0, 0, 793, 0, 0, 0, 0, 794, 0, 0, 0, 0, 795, 0,
    0, 796, 0, 0, 797, 0, 0, 0, 798, 0, 0, 0, 799, 800, 0, 0, 0, 0, 801, 802, 0, 0, 0, 803, 804, 0, 0, 0, 805, 0, 806, 0,
    0, 0, 807, 0, 0, 0, 0, 0, 0, 808, 0, 0, 809, 0, 0, 810, 0, 0, 811, 812, 0, 813, 0, 0, 0, 814, 0, 0, 0, 0, 0, 815,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 816, 0, 0, 0, 0, 817, 0, 0, 818, 0, 0, 0, 0, 819, 0, 0, 0, 0, 820, 0, 0, 821, 0,
    822, 0, 0, 0, 0, 0, 823, 0, 0, 0, 824, 0, 0, 0, 0, 0, 825, 0, 826, 0, 827, 0, 0, 0, 828, 0, 0, 829, 0, 830, 0, 831,
    0, 0, 0, 0, 0, 832, 0, 0, 0, 833, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 834, 0, 0, 0, 0, 0, 835, 0, 0, 836, 0, 0,
    0, 0, 0, 0, 837, 838, 0, 0, 0, 0, 839, 840, 0, 0, 0, 841, 0, 0, 0, 0, 842, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 843, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 844, 0, 0, 0, 0, 0, 845, 0, 0, 0, 846, 0,
    0, 0, 847, 0, 848, 0, 0, 0, 849, 0, 0, 0, 850, 0, 0, 0, 851, 0, 852, 0, 0, 0, 0, 0, 853, 0, 854, 0, 0, 0, 0, 0,
    0, 855, 0, 0, 0, 856, 0, 0, 0, 857, 0, 0, 0, 0, 858, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 859, 0, 0, 0, 0, 0, 860,
    0, 0, 861, 0, 0, 0, 0, 0, 0, 862, 863, 0, 0, 0, 0, 0, 864, 865, 0, 0, 0, 0, 866, 0, 0, 867, 0, 868, 869,
};
void recomp_unit_0151_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A60000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0151[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A60000;
    case 2u: goto L_08A60004;
    case 3u: goto L_08A60030;
    case 4u: goto L_08A60040;
    case 5u: goto L_08A60058;
    case 6u: goto L_08A60064;
    case 7u: goto L_08A60068;
    case 8u: goto L_08A60088;
    case 9u: goto L_08A600B4;
    case 10u: goto L_08A600D0;
    case 11u: goto L_08A600DC;
    case 12u: goto L_08A600E4;
    case 13u: goto L_08A600EC;
    case 14u: goto L_08A600FC;
    case 15u: goto L_08A60100;
    case 16u: goto L_08A60120;
    case 17u: goto L_08A60144;
    case 18u: goto L_08A60160;
    case 19u: goto L_08A6016C;
    case 20u: goto L_08A60170;
    case 21u: goto L_08A6017C;
    case 22u: goto L_08A6019C;
    case 23u: goto L_08A601B8;
    case 24u: goto L_08A601D4;
    case 25u: goto L_08A601E8;
    case 26u: goto L_08A601F0;
    case 27u: goto L_08A601F8;
    case 28u: goto L_08A60200;
    case 29u: goto L_08A60204;
    case 30u: goto L_08A60210;
    case 31u: goto L_08A60218;
    case 32u: goto L_08A60230;
    case 33u: goto L_08A60240;
    case 34u: goto L_08A60250;
    case 35u: goto L_08A60264;
    case 36u: goto L_08A60274;
    case 37u: goto L_08A602C0;
    case 38u: goto L_08A602CC;
    case 39u: goto L_08A602D0;
    case 40u: goto L_08A602D8;
    case 41u: goto L_08A60324;
    case 42u: goto L_08A60330;
    case 43u: goto L_08A60334;
    case 44u: goto L_08A6033C;
    case 45u: goto L_08A60388;
    case 46u: goto L_08A603D4;
    case 47u: goto L_08A603DC;
    case 48u: goto L_08A603FC;
    case 49u: goto L_08A60408;
    case 50u: goto L_08A6040C;
    case 51u: goto L_08A60414;
    case 52u: goto L_08A60440;
    case 53u: goto L_08A60458;
    case 54u: goto L_08A60470;
    case 55u: goto L_08A60488;
    case 56u: goto L_08A60490;
    case 57u: goto L_08A60494;
    case 58u: goto L_08A604A0;
    case 59u: goto L_08A604B0;
    case 60u: goto L_08A604C4;
    case 61u: goto L_08A604D0;
    case 62u: goto L_08A604F0;
    case 63u: goto L_08A60510;
    case 64u: goto L_08A60520;
    case 65u: goto L_08A6058C;
    case 66u: goto L_08A605C8;
    case 67u: goto L_08A605D0;
    case 68u: goto L_08A605DC;
    case 69u: goto L_08A605E8;
    case 70u: goto L_08A6060C;
    case 71u: goto L_08A60618;
    case 72u: goto L_08A6061C;
    case 73u: goto L_08A6062C;
    case 74u: goto L_08A60658;
    case 75u: goto L_08A60668;
    case 76u: goto L_08A60674;
    case 77u: goto L_08A60680;
    case 78u: goto L_08A60698;
    case 79u: goto L_08A606A8;
    case 80u: goto L_08A606B4;
    case 81u: goto L_08A606C4;
    case 82u: goto L_08A606E4;
    case 83u: goto L_08A60718;
    case 84u: goto L_08A60724;
    case 85u: goto L_08A60744;
    case 86u: goto L_08A60780;
    case 87u: goto L_08A607A0;
    case 88u: goto L_08A607D0;
    case 89u: goto L_08A607E8;
    case 90u: goto L_08A607EC;
    case 91u: goto L_08A607F8;
    case 92u: goto L_08A6080C;
    case 93u: goto L_08A60834;
    case 94u: goto L_08A60844;
    case 95u: goto L_08A6085C;
    case 96u: goto L_08A60860;
    case 97u: goto L_08A60870;
    case 98u: goto L_08A6087C;
    case 99u: goto L_08A6088C;
    case 100u: goto L_08A60898;
    case 101u: goto L_08A608A8;
    case 102u: goto L_08A608B8;
    case 103u: goto L_08A608C4;
    case 104u: goto L_08A608D4;
    case 105u: goto L_08A608E4;
    case 106u: goto L_08A608F8;
    case 107u: goto L_08A60900;
    case 108u: goto L_08A60914;
    case 109u: goto L_08A60920;
    case 110u: goto L_08A60928;
    case 111u: goto L_08A60944;
    case 112u: goto L_08A6094C;
    case 113u: goto L_08A60968;
    case 114u: goto L_08A60984;
    case 115u: goto L_08A6098C;
    case 116u: goto L_08A6099C;
    case 117u: goto L_08A609A0;
    case 118u: goto L_08A609B0;
    case 119u: goto L_08A609E4;
    case 120u: goto L_08A60A04;
    case 121u: goto L_08A60A1C;
    case 122u: goto L_08A60A24;
    case 123u: goto L_08A60A7C;
    case 124u: goto L_08A60A88;
    case 125u: goto L_08A60A90;
    case 126u: goto L_08A60A9C;
    case 127u: goto L_08A60AA4;
    case 128u: goto L_08A60AB0;
    case 129u: goto L_08A60ABC;
    case 130u: goto L_08A60B10;
    case 131u: goto L_08A60B1C;
    case 132u: goto L_08A60B24;
    case 133u: goto L_08A60B30;
    case 134u: goto L_08A60B38;
    case 135u: goto L_08A60B44;
    case 136u: goto L_08A60B5C;
    case 137u: goto L_08A60BAC;
    case 138u: goto L_08A60BB8;
    case 139u: goto L_08A60BC0;
    case 140u: goto L_08A60BCC;
    case 141u: goto L_08A60BD4;
    case 142u: goto L_08A60BE0;
    case 143u: goto L_08A60C00;
    case 144u: goto L_08A60C2C;
    case 145u: goto L_08A60C5C;
    case 146u: goto L_08A60C8C;
    case 147u: goto L_08A60C94;
    case 148u: goto L_08A60CA0;
    case 149u: goto L_08A60CA8;
    case 150u: goto L_08A60CB4;
    case 151u: goto L_08A60CBC;
    case 152u: goto L_08A60CC8;
    case 153u: goto L_08A60CEC;
    case 154u: goto L_08A60D2C;
    case 155u: goto L_08A60D5C;
    case 156u: goto L_08A60D68;
    case 157u: goto L_08A60D78;
    case 158u: goto L_08A60D88;
    case 159u: goto L_08A60D90;
    case 160u: goto L_08A60D98;
    case 161u: goto L_08A60DEC;
    case 162u: goto L_08A60DF8;
    case 163u: goto L_08A60E00;
    case 164u: goto L_08A60E0C;
    case 165u: goto L_08A60E14;
    case 166u: goto L_08A60E20;
    case 167u: goto L_08A60E40;
    case 168u: goto L_08A60E50;
    case 169u: goto L_08A60E5C;
    case 170u: goto L_08A60E64;
    case 171u: goto L_08A60EBC;
    case 172u: goto L_08A60EC8;
    case 173u: goto L_08A60ED0;
    case 174u: goto L_08A60EDC;
    case 175u: goto L_08A60EE4;
    case 176u: goto L_08A60EF0;
    case 177u: goto L_08A60F10;
    case 178u: goto L_08A60F30;
    case 179u: goto L_08A60F4C;
    case 180u: goto L_08A60F5C;
    case 181u: goto L_08A60F64;
    case 182u: goto L_08A60F70;
    case 183u: goto L_08A60FB4;
    case 184u: goto L_08A60FC0;
    case 185u: goto L_08A60FC8;
    case 186u: goto L_08A60FD4;
    case 187u: goto L_08A60FE0;
    case 188u: goto L_08A60FF0;
    case 189u: goto L_08A61008;
    case 190u: goto L_08A61010;
    case 191u: goto L_08A61054;
    case 192u: goto L_08A61090;
    case 193u: goto L_08A6109C;
    case 194u: goto L_08A610A4;
    case 195u: goto L_08A610B0;
    case 196u: goto L_08A610BC;
    case 197u: goto L_08A610C8;
    case 198u: goto L_08A610D8;
    case 199u: goto L_08A610E0;
    case 200u: goto L_08A610EC;
    case 201u: goto L_08A610F8;
    case 202u: goto L_08A610FC;
    case 203u: goto L_08A61104;
    case 204u: goto L_08A61110;
    case 205u: goto L_08A61118;
    case 206u: goto L_08A61120;
    case 207u: goto L_08A61144;
    case 208u: goto L_08A6114C;
    case 209u: goto L_08A61164;
    case 210u: goto L_08A6117C;
    case 211u: goto L_08A61194;
    case 212u: goto L_08A611AC;
    case 213u: goto L_08A611C4;
    case 214u: goto L_08A611EC;
    case 215u: goto L_08A61200;
    case 216u: goto L_08A61214;
    case 217u: goto L_08A61234;
    case 218u: goto L_08A61244;
    case 219u: goto L_08A61254;
    case 220u: goto L_08A61264;
    case 221u: goto L_08A6126C;
    case 222u: goto L_08A6127C;
    case 223u: goto L_08A6129C;
    case 224u: goto L_08A612DC;
    case 225u: goto L_08A612E8;
    case 226u: goto L_08A612F8;
    case 227u: goto L_08A61310;
    case 228u: goto L_08A61318;
    case 229u: goto L_08A6132C;
    case 230u: goto L_08A61338;
    case 231u: goto L_08A61348;
    case 232u: goto L_08A61354;
    case 233u: goto L_08A61364;
    case 234u: goto L_08A61370;
    case 235u: goto L_08A61380;
    case 236u: goto L_08A61388;
    case 237u: goto L_08A61394;
    case 238u: goto L_08A613A4;
    case 239u: goto L_08A613A8;
    case 240u: goto L_08A613B4;
    case 241u: goto L_08A613D0;
    case 242u: goto L_08A613D8;
    case 243u: goto L_08A613E4;
    case 244u: goto L_08A613EC;
    case 245u: goto L_08A613F8;
    case 246u: goto L_08A61400;
    case 247u: goto L_08A6140C;
    case 248u: goto L_08A6142C;
    case 249u: goto L_08A61434;
    case 250u: goto L_08A61440;
    case 251u: goto L_08A61460;
    case 252u: goto L_08A6147C;
    case 253u: goto L_08A61498;
    case 254u: goto L_08A614B0;
    case 255u: goto L_08A614B8;
    case 256u: goto L_08A614C4;
    case 257u: goto L_08A614D4;
    case 258u: goto L_08A614E0;
    case 259u: goto L_08A614F0;
    case 260u: goto L_08A614FC;
    case 261u: goto L_08A6150C;
    case 262u: goto L_08A61514;
    case 263u: goto L_08A61520;
    case 264u: goto L_08A61530;
    case 265u: goto L_08A61534;
    case 266u: goto L_08A61540;
    case 267u: goto L_08A6155C;
    case 268u: goto L_08A6157C;
    case 269u: goto L_08A61584;
    case 270u: goto L_08A61590;
    case 271u: goto L_08A615B0;
    case 272u: goto L_08A615C4;
    case 273u: goto L_08A615D0;
    case 274u: goto L_08A615DC;
    case 275u: goto L_08A615E4;
    case 276u: goto L_08A615EC;
    case 277u: goto L_08A61608;
    case 278u: goto L_08A61610;
    case 279u: goto L_08A6162C;
    case 280u: goto L_08A61648;
    case 281u: goto L_08A61660;
    case 282u: goto L_08A61670;
    case 283u: goto L_08A6168C;
    case 284u: goto L_08A61694;
    case 285u: goto L_08A61698;
    case 286u: goto L_08A616A0;
    case 287u: goto L_08A616BC;
    case 288u: goto L_08A616D8;
    case 289u: goto L_08A616E0;
    case 290u: goto L_08A616F8;
    case 291u: goto L_08A61708;
    case 292u: goto L_08A61724;
    case 293u: goto L_08A6172C;
    case 294u: goto L_08A61748;
    case 295u: goto L_08A61770;
    case 296u: goto L_08A61778;
    case 297u: goto L_08A61794;
    case 298u: goto L_08A617A8;
    case 299u: goto L_08A617BC;
    case 300u: goto L_08A617D4;
    case 301u: goto L_08A617DC;
    case 302u: goto L_08A617EC;
    case 303u: goto L_08A617F4;
    case 304u: goto L_08A617FC;
    case 305u: goto L_08A6180C;
    case 306u: goto L_08A61814;
    case 307u: goto L_08A61830;
    case 308u: goto L_08A61844;
    case 309u: goto L_08A61858;
    case 310u: goto L_08A61880;
    case 311u: goto L_08A61894;
    case 312u: goto L_08A618A8;
    case 313u: goto L_08A618D4;
    case 314u: goto L_08A618E8;
    case 315u: goto L_08A618FC;
    case 316u: goto L_08A61924;
    case 317u: goto L_08A61938;
    case 318u: goto L_08A6194C;
    case 319u: goto L_08A61964;
    case 320u: goto L_08A6197C;
    case 321u: goto L_08A61990;
    case 322u: goto L_08A619A4;
    case 323u: goto L_08A619BC;
    case 324u: goto L_08A619D0;
    case 325u: goto L_08A619E0;
    case 326u: goto L_08A619FC;
    case 327u: goto L_08A61A10;
    case 328u: goto L_08A61A24;
    case 329u: goto L_08A61A3C;
    case 330u: goto L_08A61A54;
    case 331u: goto L_08A61A68;
    case 332u: goto L_08A61A7C;
    case 333u: goto L_08A61A8C;
    case 334u: goto L_08A61A90;
    case 335u: goto L_08A61AA8;
    case 336u: goto L_08A61AB8;
    case 337u: goto L_08A61AC8;
    case 338u: goto L_08A61AD4;
    case 339u: goto L_08A61AE0;
    case 340u: goto L_08A61AEC;
    case 341u: goto L_08A61B18;
    case 342u: goto L_08A61B1C;
    case 343u: goto L_08A61B30;
    case 344u: goto L_08A61B4C;
    case 345u: goto L_08A61B68;
    case 346u: goto L_08A61B84;
    case 347u: goto L_08A61B9C;
    case 348u: goto L_08A61BAC;
    case 349u: goto L_08A61BC8;
    case 350u: goto L_08A61BDC;
    case 351u: goto L_08A61BEC;
    case 352u: goto L_08A61BF8;
    case 353u: goto L_08A61C08;
    case 354u: goto L_08A61C14;
    case 355u: goto L_08A61C24;
    case 356u: goto L_08A61C2C;
    case 357u: goto L_08A61C38;
    case 358u: goto L_08A61C48;
    case 359u: goto L_08A61C4C;
    case 360u: goto L_08A61C58;
    case 361u: goto L_08A61C74;
    case 362u: goto L_08A61C90;
    case 363u: goto L_08A61CAC;
    case 364u: goto L_08A61CB0;
    case 365u: goto L_08A61CE4;
    case 366u: goto L_08A61D00;
    case 367u: goto L_08A61D20;
    case 368u: goto L_08A61D4C;
    case 369u: goto L_08A61D68;
    case 370u: goto L_08A61D7C;
    case 371u: goto L_08A61D9C;
    case 372u: goto L_08A61DA0;
    case 373u: goto L_08A61DC8;
    case 374u: goto L_08A61DE8;
    case 375u: goto L_08A61DF4;
    case 376u: goto L_08A61E04;
    case 377u: goto L_08A61E08;
    case 378u: goto L_08A61E1C;
    case 379u: goto L_08A61E24;
    case 380u: goto L_08A61E38;
    case 381u: goto L_08A61E4C;
    case 382u: goto L_08A61E60;
    case 383u: goto L_08A61E74;
    case 384u: goto L_08A61E88;
    case 385u: goto L_08A61E9C;
    case 386u: goto L_08A61EB0;
    case 387u: goto L_08A61EBC;
    case 388u: goto L_08A61EE8;
    case 389u: goto L_08A61F2C;
    case 390u: goto L_08A61F34;
    case 391u: goto L_08A61F40;
    case 392u: goto L_08A61F50;
    case 393u: goto L_08A61F58;
    case 394u: goto L_08A61F8C;
    case 395u: goto L_08A61FA4;
    case 396u: goto L_08A61FB0;
    case 397u: goto L_08A61FCC;
    case 398u: goto L_08A61FD0;
    case 399u: goto L_08A61FD4;
    case 400u: goto L_08A61FE4;
    case 401u: goto L_08A61FF0;
    case 402u: goto L_08A61FF8;
    case 403u: goto L_08A6200C;
    case 404u: goto L_08A62024;
    case 405u: goto L_08A62034;
    case 406u: goto L_08A62044;
    case 407u: goto L_08A62058;
    case 408u: goto L_08A62060;
    case 409u: goto L_08A62074;
    case 410u: goto L_08A62090;
    case 411u: goto L_08A62098;
    case 412u: goto L_08A620A8;
    case 413u: goto L_08A620B0;
    case 414u: goto L_08A620C0;
    case 415u: goto L_08A620D0;
    case 416u: goto L_08A620D4;
    case 417u: goto L_08A620DC;
    case 418u: goto L_08A620E0;
    case 419u: goto L_08A620F0;
    case 420u: goto L_08A620FC;
    case 421u: goto L_08A62104;
    case 422u: goto L_08A62118;
    case 423u: goto L_08A62128;
    case 424u: goto L_08A62138;
    case 425u: goto L_08A6214C;
    case 426u: goto L_08A62154;
    case 427u: goto L_08A62168;
    case 428u: goto L_08A62184;
    case 429u: goto L_08A6218C;
    case 430u: goto L_08A6219C;
    case 431u: goto L_08A621A4;
    case 432u: goto L_08A621BC;
    case 433u: goto L_08A621D8;
    case 434u: goto L_08A62218;
    case 435u: goto L_08A62228;
    case 436u: goto L_08A62238;
    case 437u: goto L_08A6224C;
    case 438u: goto L_08A62254;
    case 439u: goto L_08A62268;
    case 440u: goto L_08A62284;
    case 441u: goto L_08A6228C;
    case 442u: goto L_08A6229C;
    case 443u: goto L_08A622B4;
    case 444u: goto L_08A622BC;
    case 445u: goto L_08A622D4;
    case 446u: goto L_08A622F0;
    case 447u: goto L_08A62328;
    case 448u: goto L_08A62334;
    case 449u: goto L_08A6233C;
    case 450u: goto L_08A6235C;
    case 451u: goto L_08A62368;
    case 452u: goto L_08A62374;
    case 453u: goto L_08A6237C;
    case 454u: goto L_08A623A0;
    case 455u: goto L_08A623C8;
    case 456u: goto L_08A623DC;
    case 457u: goto L_08A623E8;
    case 458u: goto L_08A623FC;
    case 459u: goto L_08A62404;
    case 460u: goto L_08A62418;
    case 461u: goto L_08A62420;
    case 462u: goto L_08A62438;
    case 463u: goto L_08A62444;
    case 464u: goto L_08A62458;
    case 465u: goto L_08A6247C;
    case 466u: goto L_08A62488;
    case 467u: goto L_08A624A4;
    case 468u: goto L_08A624B8;
    case 469u: goto L_08A624CC;
    case 470u: goto L_08A624E4;
    case 471u: goto L_08A624EC;
    case 472u: goto L_08A62504;
    case 473u: goto L_08A62518;
    case 474u: goto L_08A6252C;
    case 475u: goto L_08A62544;
    case 476u: goto L_08A6255C;
    case 477u: goto L_08A62570;
    case 478u: goto L_08A62584;
    case 479u: goto L_08A62594;
    case 480u: goto L_08A625C8;
    case 481u: goto L_08A625F4;
    case 482u: goto L_08A625FC;
    case 483u: goto L_08A6260C;
    case 484u: goto L_08A62634;
    case 485u: goto L_08A62648;
    case 486u: goto L_08A62654;
    case 487u: goto L_08A62668;
    case 488u: goto L_08A6267C;
    case 489u: goto L_08A62698;
    case 490u: goto L_08A626A8;
    case 491u: goto L_08A626B8;
    case 492u: goto L_08A626CC;
    case 493u: goto L_08A626D4;
    case 494u: goto L_08A626E8;
    case 495u: goto L_08A62704;
    case 496u: goto L_08A6270C;
    case 497u: goto L_08A6271C;
    case 498u: goto L_08A62738;
    case 499u: goto L_08A62778;
    case 500u: goto L_08A6278C;
    case 501u: goto L_08A62798;
    case 502u: goto L_08A627AC;
    case 503u: goto L_08A627C4;
    case 504u: goto L_08A627E0;
    case 505u: goto L_08A627F8;
    case 506u: goto L_08A62828;
    case 507u: goto L_08A62850;
    case 508u: goto L_08A62860;
    case 509u: goto L_08A62874;
    case 510u: goto L_08A628A4;
    case 511u: goto L_08A628B8;
    case 512u: goto L_08A628C4;
    case 513u: goto L_08A628D4;
    case 514u: goto L_08A628F0;
    case 515u: goto L_08A62900;
    case 516u: goto L_08A62928;
    case 517u: goto L_08A62938;
    case 518u: goto L_08A62950;
    case 519u: goto L_08A62968;
    case 520u: goto L_08A62974;
    case 521u: goto L_08A62984;
    case 522u: goto L_08A62998;
    case 523u: goto L_08A629A4;
    case 524u: goto L_08A629B4;
    case 525u: goto L_08A629D8;
    case 526u: goto L_08A629F4;
    case 527u: goto L_08A62A08;
    case 528u: goto L_08A62A1C;
    case 529u: goto L_08A62A34;
    case 530u: goto L_08A62A40;
    case 531u: goto L_08A62A5C;
    case 532u: goto L_08A62A70;
    case 533u: goto L_08A62A84;
    case 534u: goto L_08A62A9C;
    case 535u: goto L_08A62AB8;
    case 536u: goto L_08A62ACC;
    case 537u: goto L_08A62AE0;
    case 538u: goto L_08A62AF0;
    case 539u: goto L_08A62B00;
    case 540u: goto L_08A62B20;
    case 541u: goto L_08A62B48;
    case 542u: goto L_08A62B68;
    case 543u: goto L_08A62B70;
    case 544u: goto L_08A62B7C;
    case 545u: goto L_08A62B80;
    case 546u: goto L_08A62B90;
    case 547u: goto L_08A62B94;
    case 548u: goto L_08A62BB0;
    case 549u: goto L_08A62BFC;
    case 550u: goto L_08A62C18;
    case 551u: goto L_08A62C28;
    case 552u: goto L_08A62C3C;
    case 553u: goto L_08A62C44;
    case 554u: goto L_08A62C4C;
    case 555u: goto L_08A62C64;
    case 556u: goto L_08A62C74;
    case 557u: goto L_08A62C80;
    case 558u: goto L_08A62C8C;
    case 559u: goto L_08A62CA4;
    case 560u: goto L_08A62CB8;
    case 561u: goto L_08A62CC0;
    case 562u: goto L_08A62CC8;
    case 563u: goto L_08A62CCC;
    case 564u: goto L_08A62CDC;
    case 565u: goto L_08A62CE8;
    case 566u: goto L_08A62CF4;
    case 567u: goto L_08A62CFC;
    case 568u: goto L_08A62D10;
    case 569u: goto L_08A62D18;
    case 570u: goto L_08A62D20;
    case 571u: goto L_08A62D24;
    case 572u: goto L_08A62D30;
    case 573u: goto L_08A62D38;
    case 574u: goto L_08A62D50;
    case 575u: goto L_08A62D60;
    case 576u: goto L_08A62D6C;
    case 577u: goto L_08A62D7C;
    case 578u: goto L_08A62D88;
    case 579u: goto L_08A62DA4;
    case 580u: goto L_08A62DB4;
    case 581u: goto L_08A62DCC;
    case 582u: goto L_08A62DDC;
    case 583u: goto L_08A62DFC;
    case 584u: goto L_08A62E14;
    case 585u: goto L_08A62E34;
    case 586u: goto L_08A62E48;
    case 587u: goto L_08A62E5C;
    case 588u: goto L_08A62E64;
    case 589u: goto L_08A62E6C;
    case 590u: goto L_08A62E78;
    case 591u: goto L_08A62E88;
    case 592u: goto L_08A62E98;
    case 593u: goto L_08A62E9C;
    case 594u: goto L_08A62EAC;
    case 595u: goto L_08A62EB4;
    case 596u: goto L_08A62EC0;
    case 597u: goto L_08A62EC8;
    case 598u: goto L_08A62ED4;
    case 599u: goto L_08A62EE0;
    case 600u: goto L_08A62EEC;
    case 601u: goto L_08A62F1C;
    case 602u: goto L_08A62F5C;
    case 603u: goto L_08A62F64;
    case 604u: goto L_08A62F6C;
    case 605u: goto L_08A62F80;
    case 606u: goto L_08A62F88;
    case 607u: goto L_08A62F94;
    case 608u: goto L_08A62F98;
    case 609u: goto L_08A62FB4;
    case 610u: goto L_08A62FC0;
    case 611u: goto L_08A62FD8;
    case 612u: goto L_08A62FE4;
    case 613u: goto L_08A62FF4;
    case 614u: goto L_08A6300C;
    case 615u: goto L_08A63020;
    case 616u: goto L_08A63028;
    case 617u: goto L_08A63030;
    case 618u: goto L_08A63034;
    case 619u: goto L_08A63048;
    case 620u: goto L_08A63050;
    case 621u: goto L_08A63060;
    case 622u: goto L_08A6308C;
    case 623u: goto L_08A630C8;
    case 624u: goto L_08A630D0;
    case 625u: goto L_08A630E4;
    case 626u: goto L_08A630EC;
    case 627u: goto L_08A630F4;
    case 628u: goto L_08A630F8;
    case 629u: goto L_08A63108;
    case 630u: goto L_08A63120;
    case 631u: goto L_08A63134;
    case 632u: goto L_08A6313C;
    case 633u: goto L_08A63148;
    case 634u: goto L_08A6314C;
    case 635u: goto L_08A63158;
    case 636u: goto L_08A63164;
    case 637u: goto L_08A6316C;
    case 638u: goto L_08A63180;
    case 639u: goto L_08A63188;
    case 640u: goto L_08A63194;
    case 641u: goto L_08A63198;
    case 642u: goto L_08A631A4;
    case 643u: goto L_08A631B0;
    case 644u: goto L_08A631B8;
    case 645u: goto L_08A631CC;
    case 646u: goto L_08A631D4;
    case 647u: goto L_08A631E0;
    case 648u: goto L_08A631E4;
    case 649u: goto L_08A631F0;
    case 650u: goto L_08A631FC;
    case 651u: goto L_08A63208;
    case 652u: goto L_08A63218;
    case 653u: goto L_08A63228;
    case 654u: goto L_08A63234;
    case 655u: goto L_08A63240;
    case 656u: goto L_08A6324C;
    case 657u: goto L_08A63254;
    case 658u: goto L_08A63260;
    case 659u: goto L_08A63268;
    case 660u: goto L_08A63274;
    case 661u: goto L_08A6327C;
    case 662u: goto L_08A63284;
    case 663u: goto L_08A63290;
    case 664u: goto L_08A632A0;
    case 665u: goto L_08A632B0;
    case 666u: goto L_08A632BC;
    case 667u: goto L_08A632C8;
    case 668u: goto L_08A632D4;
    case 669u: goto L_08A632DC;
    case 670u: goto L_08A632E8;
    case 671u: goto L_08A632F0;
    case 672u: goto L_08A632FC;
    case 673u: goto L_08A63304;
    case 674u: goto L_08A6330C;
    case 675u: goto L_08A63318;
    case 676u: goto L_08A63328;
    case 677u: goto L_08A63338;
    case 678u: goto L_08A63344;
    case 679u: goto L_08A63350;
    case 680u: goto L_08A6335C;
    case 681u: goto L_08A63364;
    case 682u: goto L_08A63370;
    case 683u: goto L_08A63378;
    case 684u: goto L_08A63384;
    case 685u: goto L_08A6338C;
    case 686u: goto L_08A63394;
    case 687u: goto L_08A633AC;
    case 688u: goto L_08A633B8;
    case 689u: goto L_08A633C0;
    case 690u: goto L_08A633CC;
    case 691u: goto L_08A633D4;
    case 692u: goto L_08A633E0;
    case 693u: goto L_08A633E8;
    case 694u: goto L_08A633EC;
    case 695u: goto L_08A633FC;
    case 696u: goto L_08A63424;
    case 697u: goto L_08A63480;
    case 698u: goto L_08A634B8;
    case 699u: goto L_08A634C0;
    case 700u: goto L_08A634D4;
    case 701u: goto L_08A634F0;
    case 702u: goto L_08A634F8;
    case 703u: goto L_08A6350C;
    case 704u: goto L_08A63528;
    case 705u: goto L_08A63530;
    case 706u: goto L_08A6353C;
    case 707u: goto L_08A63548;
    case 708u: goto L_08A63558;
    case 709u: goto L_08A63564;
    case 710u: goto L_08A6357C;
    case 711u: goto L_08A63588;
    case 712u: goto L_08A635A4;
    case 713u: goto L_08A635B0;
    case 714u: goto L_08A635B8;
    case 715u: goto L_08A635BC;
    case 716u: goto L_08A635D0;
    case 717u: goto L_08A635FC;
    case 718u: goto L_08A6362C;
    case 719u: goto L_08A63640;
    case 720u: goto L_08A63648;
    case 721u: goto L_08A63650;
    case 722u: goto L_08A63664;
    case 723u: goto L_08A6366C;
    case 724u: goto L_08A63674;
    case 725u: goto L_08A63678;
    case 726u: goto L_08A63690;
    case 727u: goto L_08A63698;
    case 728u: goto L_08A636A8;
    case 729u: goto L_08A636BC;
    case 730u: goto L_08A636D0;
    case 731u: goto L_08A636E4;
    case 732u: goto L_08A63704;
    case 733u: goto L_08A63710;
    case 734u: goto L_08A63728;
    case 735u: goto L_08A63730;
    case 736u: goto L_08A63734;
    case 737u: goto L_08A63740;
    case 738u: goto L_08A63750;
    case 739u: goto L_08A63758;
    case 740u: goto L_08A6376C;
    case 741u: goto L_08A63774;
    case 742u: goto L_08A6377C;
    case 743u: goto L_08A63790;
    case 744u: goto L_08A63798;
    case 745u: goto L_08A637A0;
    case 746u: goto L_08A637A4;
    case 747u: goto L_08A637BC;
    case 748u: goto L_08A637C4;
    case 749u: goto L_08A637D4;
    case 750u: goto L_08A637E8;
    case 751u: goto L_08A637FC;
    case 752u: goto L_08A63808;
    case 753u: goto L_08A6380C;
    case 754u: goto L_08A63818;
    case 755u: goto L_08A63828;
    case 756u: goto L_08A63830;
    case 757u: goto L_08A63844;
    case 758u: goto L_08A6384C;
    case 759u: goto L_08A63854;
    case 760u: goto L_08A63868;
    case 761u: goto L_08A63870;
    case 762u: goto L_08A63878;
    case 763u: goto L_08A6387C;
    case 764u: goto L_08A63894;
    case 765u: goto L_08A6389C;
    case 766u: goto L_08A638AC;
    case 767u: goto L_08A638C0;
    case 768u: goto L_08A638D4;
    case 769u: goto L_08A638E8;
    case 770u: goto L_08A63908;
    case 771u: goto L_08A63914;
    case 772u: goto L_08A6392C;
    case 773u: goto L_08A63934;
    case 774u: goto L_08A63938;
    case 775u: goto L_08A63944;
    case 776u: goto L_08A63954;
    case 777u: goto L_08A6395C;
    case 778u: goto L_08A6396C;
    case 779u: goto L_08A63984;
    case 780u: goto L_08A63998;
    case 781u: goto L_08A639A0;
    case 782u: goto L_08A639A8;
    case 783u: goto L_08A639AC;
    case 784u: goto L_08A639C0;
    case 785u: goto L_08A639C4;
    case 786u: goto L_08A639D4;
    case 787u: goto L_08A639F8;
    case 788u: goto L_08A63A48;
    case 789u: goto L_08A63A5C;
    case 790u: goto L_08A63A70;
    case 791u: goto L_08A63A7C;
    case 792u: goto L_08A63ABC;
    case 793u: goto L_08A63AD0;
    case 794u: goto L_08A63AE4;
    case 795u: goto L_08A63AF8;
    case 796u: goto L_08A63B04;
    case 797u: goto L_08A63B10;
    case 798u: goto L_08A63B20;
    case 799u: goto L_08A63B30;
    case 800u: goto L_08A63B34;
    case 801u: goto L_08A63B48;
    case 802u: goto L_08A63B4C;
    case 803u: goto L_08A63B5C;
    case 804u: goto L_08A63B60;
    case 805u: goto L_08A63B70;
    case 806u: goto L_08A63B78;
    case 807u: goto L_08A63B88;
    case 808u: goto L_08A63BA4;
    case 809u: goto L_08A63BB0;
    case 810u: goto L_08A63BBC;
    case 811u: goto L_08A63BC8;
    case 812u: goto L_08A63BCC;
    case 813u: goto L_08A63BD4;
    case 814u: goto L_08A63BE4;
    case 815u: goto L_08A63BFC;
    case 816u: goto L_08A63C24;
    case 817u: goto L_08A63C38;
    case 818u: goto L_08A63C44;
    case 819u: goto L_08A63C58;
    case 820u: goto L_08A63C6C;
    case 821u: goto L_08A63C78;
    case 822u: goto L_08A63C80;
    case 823u: goto L_08A63C98;
    case 824u: goto L_08A63CA8;
    case 825u: goto L_08A63CC0;
    case 826u: goto L_08A63CC8;
    case 827u: goto L_08A63CD0;
    case 828u: goto L_08A63CE0;
    case 829u: goto L_08A63CEC;
    case 830u: goto L_08A63CF4;
    case 831u: goto L_08A63CFC;
    case 832u: goto L_08A63D14;
    case 833u: goto L_08A63D24;
    case 834u: goto L_08A63D50;
    case 835u: goto L_08A63D68;
    case 836u: goto L_08A63D74;
    case 837u: goto L_08A63D90;
    case 838u: goto L_08A63D94;
    case 839u: goto L_08A63DA8;
    case 840u: goto L_08A63DAC;
    case 841u: goto L_08A63DBC;
    case 842u: goto L_08A63DD0;
    case 843u: goto L_08A63E0C;
    case 844u: goto L_08A63E50;
    case 845u: goto L_08A63E68;
    case 846u: goto L_08A63E78;
    case 847u: goto L_08A63E88;
    case 848u: goto L_08A63E90;
    case 849u: goto L_08A63EA0;
    case 850u: goto L_08A63EB0;
    case 851u: goto L_08A63EC0;
    case 852u: goto L_08A63EC8;
    case 853u: goto L_08A63EE0;
    case 854u: goto L_08A63EE8;
    case 855u: goto L_08A63F04;
    case 856u: goto L_08A63F14;
    case 857u: goto L_08A63F24;
    case 858u: goto L_08A63F38;
    case 859u: goto L_08A63F64;
    case 860u: goto L_08A63F7C;
    case 861u: goto L_08A63F88;
    case 862u: goto L_08A63FA4;
    case 863u: goto L_08A63FA8;
    case 864u: goto L_08A63FC0;
    case 865u: goto L_08A63FC4;
    case 866u: goto L_08A63FD8;
    case 867u: goto L_08A63FE4;
    case 868u: goto L_08A63FEC;
    case 869u: goto L_08A63FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A60000:
    // nop
    goto L_08A60004;
L_08A60004:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A60040;
      }
      goto L_08A60030;
    }
L_08A60030:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60068;
      }
      goto L_08A60040;
    }
L_08A60040:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A60058u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A60058u) goto L_08A60058;
    return;
L_08A60058:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A60004;
      }
      goto L_08A60064;
    }
L_08A60064:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A60068;
L_08A60068:
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
L_08A60088:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    goto L_08A600B4;
L_08A600B4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A600D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A600D0u) goto L_08A600D0;
    return;
L_08A600D0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A600EC;
      }
      goto L_08A600DC;
    }
L_08A600DC:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A600EC;
      }
      goto L_08A600E4;
    }
L_08A600E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60100;
      }
      goto L_08A600EC;
    }
L_08A600EC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A600B4;
      }
      goto L_08A600FC;
    }
L_08A600FC:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    goto L_08A60100;
L_08A60100:
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
L_08A60120:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    goto L_08A60144;
L_08A60144:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A60160u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A60160u) goto L_08A60160;
    return;
L_08A60160:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A60170;
      }
      goto L_08A6016C;
    }
L_08A6016C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A60170;
L_08A60170:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A60144;
      }
      goto L_08A6017C;
    }
L_08A6017C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_08A6019C:
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(22868));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60204;
      }
      goto L_08A601B8;
    }
L_08A601B8:
    ctx.set_gpr(4, ctx.gpr[8] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A60200;
      }
      goto L_08A601D4;
    }
L_08A601D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A601F0;
      }
      goto L_08A601E8;
    }
L_08A601E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A601F8;
      }
      goto L_08A601F0;
    }
L_08A601F0:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8240));
    goto L_08A601F8;
L_08A601F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60210;
      }
      goto L_08A60200;
    }
L_08A60200:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08A60204;
L_08A60204:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A601B8;
      }
      goto L_08A60210;
    }
L_08A60210:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60218:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60240;
      }
      goto L_08A60230;
    }
L_08A60230:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A60240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 317u, 0x08A69C98u>(ctx, &aot_mem) && ctx.pc == 0x08A60240u) goto L_08A60240;
    return;
L_08A60240:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60250:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08A60264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A60264u) goto L_08A60264;
    return;
L_08A60264:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60274:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21064)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A602CC;
      }
      goto L_08A602C0;
    }
L_08A602C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A602D0;
      }
      goto L_08A602CC;
    }
L_08A602CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A602D0;
L_08A602D0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A602D8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21064)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A60330;
      }
      goto L_08A60324;
    }
L_08A60324:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60334;
      }
      goto L_08A60330;
    }
L_08A60330:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A60334;
L_08A60334:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6033C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21064)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[3]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(2, ctx.lo);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60388:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21064)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[3]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(2, ctx.lo);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A603DC;
      }
      goto L_08A603D4;
    }
L_08A603D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6040C;
      }
      goto L_08A603DC;
    }
L_08A603DC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A60408;
      }
      goto L_08A603FC;
    }
L_08A603FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6040C;
      }
      goto L_08A60408;
    }
L_08A60408:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A6040C;
L_08A6040C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60414:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08A60440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A60440u) goto L_08A60440;
    return;
L_08A60440:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A60458u);
    // nop
    goto L_08A61EE8;
L_08A60458:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60494;
      }
      goto L_08A60470;
    }
L_08A60470:
    ctx.set_gpr(4, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60490;
      }
      goto L_08A60488;
    }
L_08A60488:
    ctx.set_gpr(31, 0x08A60490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A60490u) goto L_08A60490;
    return;
L_08A60490:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A60494;
L_08A60494:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A60470;
      }
      goto L_08A604A0;
    }
L_08A604A0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A604C4;
      }
      goto L_08A604B0;
    }
L_08A604B0:
    ctx.set_gpr(4, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A604C4;
L_08A604C4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A604B0;
      }
      goto L_08A604D0;
    }
L_08A604D0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
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
L_08A604F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A60510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 448u, 0x08A2DDA8u>(ctx, &aot_mem) && ctx.pc == 0x08A60510u) goto L_08A60510;
    return;
L_08A60510:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60520:
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[6]);
    ctx.set_gpr(20, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[8]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    ctx.set_gpr(23, 0u + 0u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A609A0;
      }
      goto L_08A6058C;
    }
L_08A6058C:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A605DC;
      }
      goto L_08A605C8;
    }
L_08A605C8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A605DC;
      }
      goto L_08A605D0;
    }
L_08A605D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(23, 0u + 0u);
    goto L_08A605DC;
L_08A605DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6061C;
      }
      goto L_08A605E8;
    }
L_08A605E8:
    ctx.set_gpr(2, ctx.gpr[23] + 0u);
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A60618;
      }
      goto L_08A6060C;
    }
L_08A6060C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6061C;
      }
      goto L_08A60618;
    }
L_08A60618:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    goto L_08A6061C;
L_08A6061C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A60900;
      }
      goto L_08A6062C;
    }
L_08A6062C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[22]);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A60680;
      }
      goto L_08A60658;
    }
L_08A60658:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A60674;
      }
      goto L_08A60668;
    }
L_08A60668:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60680;
      }
      goto L_08A60674;
    }
L_08A60674:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A60680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A60680u) goto L_08A60680;
    return;
L_08A60680:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A606C4;
      }
      goto L_08A60698;
    }
L_08A60698:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A606B4;
      }
      goto L_08A606A8;
    }
L_08A606A8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A606C4;
      }
      goto L_08A606B4;
    }
L_08A606B4:
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A606C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A606C4u) goto L_08A606C4;
    return;
L_08A606C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(30, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A607EC;
      }
      goto L_08A606E4;
    }
L_08A606E4:
    ctx.set_gpr(2, ctx.gpr[30] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24908)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A60718u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A60718u) goto L_08A60718;
    return;
L_08A60718:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A60780;
      }
      goto L_08A60724;
    }
L_08A60724:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08A60744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 250u, 0x088C5528u>(ctx, &aot_mem) && ctx.pc == 0x08A60744u) goto L_08A60744;
    return;
L_08A60744:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A607A0;
      }
      goto L_08A60780;
    }
L_08A60780:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[2]);
    goto L_08A607A0;
L_08A607A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A607E8;
      }
      goto L_08A607D0;
    }
L_08A607D0:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A607E8;
L_08A607E8:
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(1));
    goto L_08A607EC;
L_08A607EC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A606E4;
      }
      goto L_08A607F8;
    }
L_08A607F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60860;
      }
      goto L_08A6080C;
    }
L_08A6080C:
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A6085C;
      }
      goto L_08A60834;
    }
L_08A60834:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A6085C;
      }
      goto L_08A60844;
    }
L_08A60844:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A6085C;
L_08A6085C:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A60860;
L_08A60860:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6080C;
      }
      goto L_08A60870;
    }
L_08A60870:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A608A8;
      }
      goto L_08A6087C;
    }
L_08A6087C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A60898;
      }
      goto L_08A6088C;
    }
L_08A6088C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A608A8;
      }
      goto L_08A60898;
    }
L_08A60898:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A608A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A608A8u) goto L_08A608A8;
    return;
L_08A608A8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A608C4;
      }
      goto L_08A608B8;
    }
L_08A608B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A608C4;
L_08A608C4:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(31, 0x08A608D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A608D4u) goto L_08A608D4;
    return;
L_08A608D4:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(31, 0x08A608E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A608E4u) goto L_08A608E4;
    return;
L_08A608E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60900;
      }
      goto L_08A608F8;
    }
L_08A608F8:
    ctx.set_gpr(31, 0x08A60900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A60900u) goto L_08A60900;
    return;
L_08A60900:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A6094C;
      }
      goto L_08A60914;
    }
L_08A60914:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A60928;
      }
      goto L_08A60920;
    }
L_08A60920:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6098C;
      }
      goto L_08A60928;
    }
L_08A60928:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x08A60944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 82u, 0x08A287A8u>(ctx, &aot_mem) && ctx.pc == 0x08A60944u) goto L_08A60944;
    return;
L_08A60944:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6099C;
      }
      goto L_08A6094C;
    }
L_08A6094C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(31, 0x08A60968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 82u, 0x08A287A8u>(ctx, &aot_mem) && ctx.pc == 0x08A60968u) goto L_08A60968;
    return;
L_08A60968:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(31, 0x08A60984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 82u, 0x08A287A8u>(ctx, &aot_mem) && ctx.pc == 0x08A60984u) goto L_08A60984;
    return;
L_08A60984:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6099C;
      }
      goto L_08A6098C;
    }
L_08A6098C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A6099Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 844u, 0x0890FFD4u>(ctx, &aot_mem) && ctx.pc == 0x08A6099Cu) goto L_08A6099C;
    return;
L_08A6099C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A609A0;
L_08A609A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6058C;
      }
      goto L_08A609B0;
    }
L_08A609B0:
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
L_08A609E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    goto L_08A60A04;
L_08A60A04:
    ctx.set_gpr(17, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[18]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A60A24;
      }
      goto L_08A60A1C;
    }
L_08A60A1C:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_08A60A24;
L_08A60A24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(7, ctx.gpr[8] << 2u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[10] + ctx.gpr[7]);
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-21064)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[14] << 2u);
    ctx.set_gpr(6, ctx.gpr[11] + ctx.gpr[6]);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[5] << 2u);
    ctx.set_gpr(12, ctx.gpr[10] + ctx.gpr[6]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.gpr[10] << 2u);
    ctx.set_gpr(10, ctx.gpr[11] + ctx.gpr[10]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(1, ctx.gpr[10] < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60ABC;
      }
      goto L_08A60A7C;
    }
L_08A60A7C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60ABC;
      }
      goto L_08A60A88;
    }
L_08A60A88:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A60ABC;
      }
      goto L_08A60A90;
    }
L_08A60A90:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60ABC;
      }
      goto L_08A60A9C;
    }
L_08A60A9C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A60ABC;
      }
      goto L_08A60AA4;
    }
L_08A60AA4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60ABC;
      }
      goto L_08A60AB0;
    }
L_08A60AB0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(0), ctx.gpr[14]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A60ABC;
L_08A60ABC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(12, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(10, 2246u << 16u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-21064)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.gpr[10] << 2u);
    ctx.set_gpr(10, ctx.gpr[11] + ctx.gpr[10]);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[18] << 2u);
    ctx.set_gpr(12, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.gpr[10] << 2u);
    ctx.set_gpr(10, ctx.gpr[11] + ctx.gpr[10]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(1, ctx.gpr[11] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60B5C;
      }
      goto L_08A60B10;
    }
L_08A60B10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60B5C;
      }
      goto L_08A60B1C;
    }
L_08A60B1C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A60B5C;
      }
      goto L_08A60B24;
    }
L_08A60B24:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60B5C;
      }
      goto L_08A60B30;
    }
L_08A60B30:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A60B5C;
      }
      goto L_08A60B38;
    }
L_08A60B38:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60B5C;
      }
      goto L_08A60B44;
    }
L_08A60B44:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[8] << 2u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    goto L_08A60B5C;
L_08A60B5C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(12, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(10, 2246u << 16u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-21064)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.gpr[10] << 2u);
    ctx.set_gpr(10, ctx.gpr[11] + ctx.gpr[10]);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.gpr[10] << 2u);
    ctx.set_gpr(10, ctx.gpr[11] + ctx.gpr[10]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(1, ctx.gpr[10] < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60C00;
      }
      goto L_08A60BAC;
    }
L_08A60BAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60C00;
      }
      goto L_08A60BB8;
    }
L_08A60BB8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A60C00;
      }
      goto L_08A60BC0;
    }
L_08A60BC0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60C00;
      }
      goto L_08A60BCC;
    }
L_08A60BCC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A60C00;
      }
      goto L_08A60BD4;
    }
L_08A60BD4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60C00;
      }
      goto L_08A60BE0;
    }
L_08A60BE0:
    ctx.set_gpr(4, ctx.gpr[5] << 2u);
    ctx.set_gpr(11, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[8] << 2u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    goto L_08A60C00;
L_08A60C00:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21064)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08A60C2C;
L_08A60C2C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(10, ctx.gpr[17] << 2u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[10]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[7] << 2u);
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(7, ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A60C2C;
      }
      goto L_08A60C5C;
    }
L_08A60C5C:
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, ctx.gpr[9] << 2u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[10]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[7] << 2u);
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(1, ctx.gpr[7] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A60C5C;
      }
      goto L_08A60C8C;
    }
L_08A60C8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60D5C;
      }
      goto L_08A60C94;
    }
L_08A60C94:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60CEC;
      }
      goto L_08A60CA0;
    }
L_08A60CA0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A60CEC;
      }
      goto L_08A60CA8;
    }
L_08A60CA8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60CEC;
      }
      goto L_08A60CB4;
    }
L_08A60CB4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A60CEC;
      }
      goto L_08A60CBC;
    }
L_08A60CBC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60CEC;
      }
      goto L_08A60CC8;
    }
L_08A60CC8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[9] << 2u);
    ctx.set_gpr(10, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    goto L_08A60CEC;
L_08A60CEC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(7, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21064)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[7] << 2u);
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(7, ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A60CEC;
      }
      goto L_08A60D2C;
    }
L_08A60D2C:
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, ctx.gpr[9] << 2u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[10]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[7] << 2u);
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(1, ctx.gpr[7] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A60D2C;
      }
      goto L_08A60D5C;
    }
L_08A60D5C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A60C94;
      }
      goto L_08A60D68;
    }
L_08A60D68:
    ctx.set_gpr(3, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60D90;
      }
      goto L_08A60D78;
    }
L_08A60D78:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A60D88u);
    // nop
    goto L_08A609E4;
L_08A60D88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60E40;
      }
      goto L_08A60D90;
    }
L_08A60D90:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A60E40;
      }
      goto L_08A60D98;
    }
L_08A60D98:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[9] + ctx.gpr[6]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21064)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[7]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60E40;
      }
      goto L_08A60DEC;
    }
L_08A60DEC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60E40;
      }
      goto L_08A60DF8;
    }
L_08A60DF8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A60E40;
      }
      goto L_08A60E00;
    }
L_08A60E00:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60E40;
      }
      goto L_08A60E0C;
    }
L_08A60E0C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A60E40;
      }
      goto L_08A60E14;
    }
L_08A60E14:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60E40;
      }
      goto L_08A60E20;
    }
L_08A60E20:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(6, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[7]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08A60E40;
L_08A60E40:
    ctx.set_gpr(3, ctx.gpr[18] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60E5C;
      }
      goto L_08A60E50;
    }
L_08A60E50:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60A04;
      }
      goto L_08A60E5C;
    }
L_08A60E5C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A60F10;
      }
      goto L_08A60E64;
    }
L_08A60E64:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[7] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21064)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60F10;
      }
      goto L_08A60EBC;
    }
L_08A60EBC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60F10;
      }
      goto L_08A60EC8;
    }
L_08A60EC8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A60F10;
      }
      goto L_08A60ED0;
    }
L_08A60ED0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60F10;
      }
      goto L_08A60EDC;
    }
L_08A60EDC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A60F10;
      }
      goto L_08A60EE4;
    }
L_08A60EE4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60F10;
      }
      goto L_08A60EF0;
    }
L_08A60EF0:
    ctx.set_gpr(4, ctx.gpr[17] << 2u);
    ctx.set_gpr(6, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[18] << 2u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08A60F10;
L_08A60F10:
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
L_08A60F30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A60F64;
      }
      goto L_08A60F4C;
    }
L_08A60F4C:
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A60F5Cu);
    // nop
    goto L_08A609E4;
L_08A60F5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60FE0;
      }
      goto L_08A60F64;
    }
L_08A60F64:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A60FE0;
      }
      goto L_08A60F70;
    }
L_08A60F70:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21064)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60FE0;
      }
      goto L_08A60FB4;
    }
L_08A60FB4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60FE0;
      }
      goto L_08A60FC0;
    }
L_08A60FC0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A60FE0;
      }
      goto L_08A60FC8;
    }
L_08A60FC8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A60FE0;
      }
      goto L_08A60FD4;
    }
L_08A60FD4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08A60FE0;
L_08A60FE0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60FF0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61110;
      }
      goto L_08A61008;
    }
L_08A61008:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61118;
      }
      goto L_08A61010;
    }
L_08A61010:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[6] << 2u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, ctx.gpr[6] + ctx.gpr[7]);
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-21064)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[6] << 2u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[7]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(12, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61104;
      }
      goto L_08A61054;
    }
L_08A61054:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(7, ctx.gpr[12] << 2u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(9, ctx.gpr[6] + ctx.gpr[7]);
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-21064)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[6] << 2u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[7]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(1, ctx.gpr[8] < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A610FC;
      }
      goto L_08A61090;
    }
L_08A61090:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A610D8;
      }
      goto L_08A6109C;
    }
L_08A6109C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[12]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A610D8;
      }
      goto L_08A610A4;
    }
L_08A610A4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A610D8;
      }
      goto L_08A610B0;
    }
L_08A610B0:
    ctx.set_gpr(6, ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A610D8;
      }
      goto L_08A610BC;
    }
L_08A610BC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A610D8;
      }
      goto L_08A610C8;
    }
L_08A610C8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-4)));
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-4), ctx.gpr[7]);
    goto L_08A610D8;
L_08A610D8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A610FC;
      }
      goto L_08A610E0;
    }
L_08A610E0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[12]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A610F8;
      }
      goto L_08A610EC;
    }
L_08A610EC:
    ctx.set_gpr(5, ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A610FC;
      }
      goto L_08A610F8;
    }
L_08A610F8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08A610FC;
L_08A610FC:
    ctx.set_gpr(11, ctx.gpr[8] + 0u);
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    goto L_08A61104;
L_08A61104:
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A61054;
      }
      goto L_08A61110;
    }
L_08A61110:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A61010;
      }
      goto L_08A61118;
    }
L_08A61118:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A61120:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6127C;
      }
      goto L_08A61144;
    }
L_08A61144:
    ctx.set_gpr(31, 0x08A6114Cu);
    // nop
    goto L_08A61D20;
L_08A6114C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A61164u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A61164u) goto L_08A61164;
    return;
L_08A61164:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6117Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6117Cu) goto L_08A6117C;
    return;
L_08A6117C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A61194u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A61194u) goto L_08A61194;
    return;
L_08A61194:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A611ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A611ACu) goto L_08A611AC;
    return;
L_08A611AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A611C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A611C4u) goto L_08A611C4;
    return;
L_08A611C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61200;
      }
      goto L_08A611EC;
    }
L_08A611EC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61214;
      }
      goto L_08A61200;
    }
L_08A61200:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A61214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A61214u) goto L_08A61214;
    return;
L_08A61214:
    ctx.set_gpr(4, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A61244;
      }
      goto L_08A61234;
    }
L_08A61234:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61254;
      }
      goto L_08A61244;
    }
L_08A61244:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A61254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A61254u) goto L_08A61254;
    return;
L_08A61254:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6127C;
      }
      goto L_08A61264;
    }
L_08A61264:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6127C;
      }
      goto L_08A6126C;
    }
L_08A6126C:
    ctx.set_gpr(3, 2229u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(22880)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A6127C;
L_08A6127C:
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
L_08A6129C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
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
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A612E8;
      }
      goto L_08A612DC;
    }
L_08A612DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61CB0;
      }
      goto L_08A612E8;
    }
L_08A612E8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, 0x08A612F8u);
    // nop
    goto L_08A604F0;
L_08A612F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] & 112u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A61318;
      }
      goto L_08A61310;
    }
L_08A61310:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61498;
      }
      goto L_08A61318;
    }
L_08A61318:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A613B4;
      }
      goto L_08A6132C;
    }
L_08A6132C:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A61364;
      }
      goto L_08A61338;
    }
L_08A61338:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A61354;
      }
      goto L_08A61348;
    }
L_08A61348:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61364;
      }
      goto L_08A61354;
    }
L_08A61354:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A61364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A61364u) goto L_08A61364;
    return;
L_08A61364:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A613A8;
      }
      goto L_08A61370;
    }
L_08A61370:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A613A4;
      }
      goto L_08A61380;
    }
L_08A61380:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A613A4;
      }
      goto L_08A61388;
    }
L_08A61388:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A613A4;
      }
      goto L_08A61394;
    }
L_08A61394:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08A613A4;
L_08A613A4:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08A613A8;
L_08A613A8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A61370;
      }
      goto L_08A613B4;
    }
L_08A613B4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21064), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[3] & 32u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61400;
      }
      goto L_08A613D0;
    }
L_08A613D0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A613EC;
      }
      goto L_08A613D8;
    }
L_08A613D8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A613E4u);
    // nop
    goto L_08A60F30;
L_08A613E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61460;
      }
      goto L_08A613EC;
    }
L_08A613EC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A613F8u);
    // nop
    goto L_08A60FF0;
L_08A613F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61460;
      }
      goto L_08A61400;
    }
L_08A61400:
    ctx.set_gpr(2, ctx.gpr[3] & 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61434;
      }
      goto L_08A6140C;
    }
L_08A6140C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, 2214u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(728));
    ctx.set_gpr(31, 0x08A6142Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 48u, 0x08814578u>(ctx, &aot_mem) && ctx.pc == 0x08A6142Cu) goto L_08A6142C;
    return;
L_08A6142C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61460;
      }
      goto L_08A61434;
    }
L_08A61434:
    ctx.set_gpr(2, ctx.gpr[3] & 64u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61460;
      }
      goto L_08A61440;
    }
L_08A61440:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, 2214u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(904));
    ctx.set_gpr(31, 0x08A61460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 48u, 0x08814578u>(ctx, &aot_mem) && ctx.pc == 0x08A61460u) goto L_08A61460;
    return;
L_08A61460:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A6147Cu);
    // nop
    goto L_08A60520;
L_08A6147C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08A61498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 82u, 0x08A287A8u>(ctx, &aot_mem) && ctx.pc == 0x08A61498u) goto L_08A61498;
    return;
L_08A61498:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] & 5u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A614B8;
      }
      goto L_08A614B0;
    }
L_08A614B0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61B4C;
      }
      goto L_08A614B8;
    }
L_08A614B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A614F0;
      }
      goto L_08A614C4;
    }
L_08A614C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A614E0;
      }
      goto L_08A614D4;
    }
L_08A614D4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A614F0;
      }
      goto L_08A614E0;
    }
L_08A614E0:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A614F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A614F0u) goto L_08A614F0;
    return;
L_08A614F0:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61534;
      }
      goto L_08A614FC;
    }
L_08A614FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61530;
      }
      goto L_08A6150C;
    }
L_08A6150C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A61530;
      }
      goto L_08A61514;
    }
L_08A61514:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61530;
      }
      goto L_08A61520;
    }
L_08A61520:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08A61530;
L_08A61530:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08A61534;
L_08A61534:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A614FC;
      }
      goto L_08A61540;
    }
L_08A61540:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21064), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61584;
      }
      goto L_08A6155C;
    }
L_08A6155C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, 2214u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(628));
    ctx.set_gpr(31, 0x08A6157Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 48u, 0x08814578u>(ctx, &aot_mem) && ctx.pc == 0x08A6157Cu) goto L_08A6157C;
    return;
L_08A6157C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A615B0;
      }
      goto L_08A61584;
    }
L_08A61584:
    ctx.set_gpr(2, ctx.gpr[3] & 8u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A615B0;
      }
      goto L_08A61590;
    }
L_08A61590:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, 2214u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(828));
    ctx.set_gpr(31, 0x08A615B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 48u, 0x08814578u>(ctx, &aot_mem) && ctx.pc == 0x08A615B0u) goto L_08A615B0;
    return;
L_08A615B0:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A61698;
      }
      goto L_08A615C4;
    }
L_08A615C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A61694;
      }
      goto L_08A615D0;
    }
L_08A615D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A61610;
      }
      goto L_08A615DC;
    }
L_08A615DC:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A615EC;
      }
      goto L_08A615E4;
    }
L_08A615E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61B30;
      }
      goto L_08A615EC;
    }
L_08A615EC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A61608u);
    // nop
    goto L_08A60520;
L_08A61608:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61B30;
      }
      goto L_08A61610;
    }
L_08A61610:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x08A6162Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 82u, 0x08A287A8u>(ctx, &aot_mem) && ctx.pc == 0x08A6162Cu) goto L_08A6162C;
    return;
L_08A6162C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A61648u);
    // nop
    goto L_08A60520;
L_08A61648:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25276)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A61660u);
    // nop
    goto L_08A61D00;
L_08A61660:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A61670u);
    // nop
    goto L_08A61CE4;
L_08A61670:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x08A6168Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 82u, 0x08A287A8u>(ctx, &aot_mem) && ctx.pc == 0x08A6168Cu) goto L_08A6168C;
    return;
L_08A6168C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61B30;
      }
      goto L_08A61694;
    }
L_08A61694:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_08A61698;
L_08A61698:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A616BC;
      }
      goto L_08A616A0;
    }
L_08A616A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A616BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 82u, 0x08A287A8u>(ctx, &aot_mem) && ctx.pc == 0x08A616BCu) goto L_08A616BC;
    return;
L_08A616BC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A616D8u);
    // nop
    goto L_08A60520;
L_08A616D8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61724;
      }
      goto L_08A616E0;
    }
L_08A616E0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25276)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A616F8u);
    // nop
    goto L_08A61D00;
L_08A616F8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A61708u);
    // nop
    goto L_08A61CE4;
L_08A61708:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x08A61724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 82u, 0x08A287A8u>(ctx, &aot_mem) && ctx.pc == 0x08A61724u) goto L_08A61724;
    return;
L_08A61724:
    ctx.set_gpr(31, 0x08A6172Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 657u, 0x088BFC04u>(ctx, &aot_mem) && ctx.pc == 0x08A6172Cu) goto L_08A6172C;
    return;
L_08A6172C:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61A90;
      }
      goto L_08A61748;
    }
L_08A61748:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A61770u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A61770u) goto L_08A61770;
    return;
L_08A61770:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A617D4;
      }
      goto L_08A61778;
    }
L_08A61778:
    ctx.set_gpr(22, ctx.gpr[16] + 0u);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A617A8;
      }
      goto L_08A61794;
    }
L_08A61794:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A617BC;
      }
      goto L_08A617A8;
    }
L_08A617A8:
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A617BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A617BCu) goto L_08A617BC;
    return;
L_08A617BC:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61A8C;
      }
      goto L_08A617D4;
    }
L_08A617D4:
    ctx.set_gpr(31, 0x08A617DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 115u, 0x088BCABCu>(ctx, &aot_mem) && ctx.pc == 0x08A617DCu) goto L_08A617DC;
    return;
L_08A617DC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A617ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A617ECu) goto L_08A617EC;
    return;
L_08A617EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A61814;
      }
      goto L_08A617F4;
    }
L_08A617F4:
    ctx.set_gpr(31, 0x08A617FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 275u, 0x088BD87Cu>(ctx, &aot_mem) && ctx.pc == 0x08A617FCu) goto L_08A617FC;
    return;
L_08A617FC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6180Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6180Cu) goto L_08A6180C;
    return;
L_08A6180C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61A3C;
      }
      goto L_08A61814;
    }
L_08A61814:
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61844;
      }
      goto L_08A61830;
    }
L_08A61830:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61858;
      }
      goto L_08A61844;
    }
L_08A61844:
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A61858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A61858u) goto L_08A61858;
    return;
L_08A61858:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61894;
      }
      goto L_08A61880;
    }
L_08A61880:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A618A8;
      }
      goto L_08A61894;
    }
L_08A61894:
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A618A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A618A8u) goto L_08A618A8;
    return;
L_08A618A8:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A618E8;
      }
      goto L_08A618D4;
    }
L_08A618D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A618FC;
      }
      goto L_08A618E8;
    }
L_08A618E8:
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A618FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A618FCu) goto L_08A618FC;
    return;
L_08A618FC:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61938;
      }
      goto L_08A61924;
    }
L_08A61924:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6194C;
      }
      goto L_08A61938;
    }
L_08A61938:
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A6194Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6194Cu) goto L_08A6194C;
    return;
L_08A6194C:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A619BC;
      }
      goto L_08A61964;
    }
L_08A61964:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61990;
      }
      goto L_08A6197C;
    }
L_08A6197C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A619A4;
      }
      goto L_08A61990;
    }
L_08A61990:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A619A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A619A4u) goto L_08A619A4;
    return;
L_08A619A4:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61A8C;
      }
      goto L_08A619BC;
    }
L_08A619BC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A619D0u);
    // nop
    goto L_08A61D00;
L_08A619D0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A619E0u);
    // nop
    goto L_08A61CE4;
L_08A619E0:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61A10;
      }
      goto L_08A619FC;
    }
L_08A619FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61A24;
      }
      goto L_08A61A10;
    }
L_08A61A10:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A61A24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A61A24u) goto L_08A61A24;
    return;
L_08A61A24:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61A8C;
      }
      goto L_08A61A3C;
    }
L_08A61A3C:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61A68;
      }
      goto L_08A61A54;
    }
L_08A61A54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61A7C;
      }
      goto L_08A61A68;
    }
L_08A61A68:
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A61A7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A61A7Cu) goto L_08A61A7C;
    return;
L_08A61A7C:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08A61A8C;
L_08A61A8C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A61A90;
L_08A61A90:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A61748;
      }
      goto L_08A61AA8;
    }
L_08A61AA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A61AE0;
      }
      goto L_08A61AB8;
    }
L_08A61AB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A61AD4;
      }
      goto L_08A61AC8;
    }
L_08A61AC8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61AE0;
      }
      goto L_08A61AD4;
    }
L_08A61AD4:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A61AE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A61AE0u) goto L_08A61AE0;
    return;
L_08A61AE0:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61B1C;
      }
      goto L_08A61AEC;
    }
L_08A61AEC:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(31, 0x08A61B18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 23u, 0x088D019Cu>(ctx, &aot_mem) && ctx.pc == 0x08A61B18u) goto L_08A61B18;
    return;
L_08A61B18:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A61B1C;
L_08A61B1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A61AEC;
      }
      goto L_08A61B30;
    }
L_08A61B30:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x08A61B4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 82u, 0x08A287A8u>(ctx, &aot_mem) && ctx.pc == 0x08A61B4Cu) goto L_08A61B4C;
    return;
L_08A61B4C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A61B68u);
    // nop
    goto L_08A60520;
L_08A61B68:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08A61B84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 82u, 0x08A287A8u>(ctx, &aot_mem) && ctx.pc == 0x08A61B84u) goto L_08A61B84;
    return;
L_08A61B84:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25424)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A61B9Cu);
    // nop
    goto L_08A61D00;
L_08A61B9C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A61BACu);
    // nop
    goto L_08A61CE4;
L_08A61BAC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08A61BC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 82u, 0x08A287A8u>(ctx, &aot_mem) && ctx.pc == 0x08A61BC8u) goto L_08A61BC8;
    return;
L_08A61BC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A61C08;
      }
      goto L_08A61BDC;
    }
L_08A61BDC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A61BF8;
      }
      goto L_08A61BEC;
    }
L_08A61BEC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61C08;
      }
      goto L_08A61BF8;
    }
L_08A61BF8:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A61C08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A61C08u) goto L_08A61C08;
    return;
L_08A61C08:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61C4C;
      }
      goto L_08A61C14;
    }
L_08A61C14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61C48;
      }
      goto L_08A61C24;
    }
L_08A61C24:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A61C48;
      }
      goto L_08A61C2C;
    }
L_08A61C2C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61C48;
      }
      goto L_08A61C38;
    }
L_08A61C38:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08A61C48;
L_08A61C48:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08A61C4C;
L_08A61C4C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A61C14;
      }
      goto L_08A61C58;
    }
L_08A61C58:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A61C74u);
    // nop
    goto L_08A60520;
L_08A61C74:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A61C90u);
    // nop
    goto L_08A60520;
L_08A61C90:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08A61CACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 82u, 0x08A287A8u>(ctx, &aot_mem) && ctx.pc == 0x08A61CACu) goto L_08A61CAC;
    return;
L_08A61CAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_08A61CB0;
L_08A61CB0:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A61CE4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A61D00:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A61D20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A61D4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 82u, 0x08A287A8u>(ctx, &aot_mem) && ctx.pc == 0x08A61D4Cu) goto L_08A61D4C;
    return;
L_08A61D4C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A61D68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 82u, 0x08A287A8u>(ctx, &aot_mem) && ctx.pc == 0x08A61D68u) goto L_08A61D68;
    return;
L_08A61D68:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A61D7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61DA0;
      }
      goto L_08A61D9C;
    }
L_08A61D9C:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    goto L_08A61DA0;
L_08A61DA0:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61E08;
      }
      goto L_08A61DC8;
    }
L_08A61DC8:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A61DF4;
      }
      goto L_08A61DE8;
    }
L_08A61DE8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61E04;
      }
      goto L_08A61DF4;
    }
L_08A61DF4:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A61E04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A61E04u) goto L_08A61E04;
    return;
L_08A61E04:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A61E08;
L_08A61E08:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A61DC8;
      }
      goto L_08A61E1C;
    }
L_08A61E1C:
    ctx.set_gpr(31, 0x08A61E24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 472u, 0x0895DF24u>(ctx, &aot_mem) && ctx.pc == 0x08A61E24u) goto L_08A61E24;
    return;
L_08A61E24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A61E38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A61E38u) goto L_08A61E38;
    return;
L_08A61E38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A61E4Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A61E4Cu) goto L_08A61E4C;
    return;
L_08A61E4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A61E60u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A61E60u) goto L_08A61E60;
    return;
L_08A61E60:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A61E74u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A61E74u) goto L_08A61E74;
    return;
L_08A61E74:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A61E88u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A61E88u) goto L_08A61E88;
    return;
L_08A61E88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A61E9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A61E9Cu) goto L_08A61E9C;
    return;
L_08A61E9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A61EB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A61EB0u) goto L_08A61EB0;
    return;
L_08A61EB0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A61EBCu);
    // nop
    goto L_08A61D20;
L_08A61EBC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(124), 0u);
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
L_08A61EE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
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
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62594;
      }
      goto L_08A61F2C;
    }
L_08A61F2C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62594;
      }
      goto L_08A61F34;
    }
L_08A61F34:
    ctx.set_gpr(17, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A61FD4;
      }
      goto L_08A61F40;
    }
L_08A61F40:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[3] & 13u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61FD4;
      }
      goto L_08A61F50;
    }
L_08A61F50:
    ctx.set_gpr(31, 0x08A61F58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 203u, 0x088C1278u>(ctx, &aot_mem) && ctx.pc == 0x08A61F58u) goto L_08A61F58;
    return;
L_08A61F58:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A61FA4;
      }
      goto L_08A61F8C;
    }
L_08A61F8C:
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61FD0;
      }
      goto L_08A61FA4;
    }
L_08A61FA4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61FCC;
      }
      goto L_08A61FB0;
    }
L_08A61FB0:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61FD0;
      }
      goto L_08A61FCC;
    }
L_08A61FCC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    goto L_08A61FD0;
L_08A61FD0:
    ctx.set_gpr(17, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    goto L_08A61FD4;
L_08A61FD4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[4] & 114u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A620B0;
      }
      goto L_08A61FE4;
    }
L_08A61FE4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A620B0;
      }
      goto L_08A61FF0;
    }
L_08A61FF0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A620B0;
      }
      goto L_08A61FF8;
    }
L_08A61FF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A6200Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 448u, 0x08A2DDA8u>(ctx, &aot_mem) && ctx.pc == 0x08A6200Cu) goto L_08A6200C;
    return;
L_08A6200C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] & 12u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62060;
      }
      goto L_08A62024;
    }
L_08A62024:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A62044;
      }
      goto L_08A62034;
    }
L_08A62034:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08A62044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A62044u) goto L_08A62044;
    return;
L_08A62044:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x08A62058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 82u, 0x08A287A8u>(ctx, &aot_mem) && ctx.pc == 0x08A62058u) goto L_08A62058;
    return;
L_08A62058:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A620A8;
      }
      goto L_08A62060;
    }
L_08A62060:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A62098;
      }
      goto L_08A62074;
    }
L_08A62074:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08A62090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 82u, 0x08A287A8u>(ctx, &aot_mem) && ctx.pc == 0x08A62090u) goto L_08A62090;
    return;
L_08A62090:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A620A8;
      }
      goto L_08A62098;
    }
L_08A62098:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A620A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 844u, 0x0890FFD4u>(ctx, &aot_mem) && ctx.pc == 0x08A620A8u) goto L_08A620A8;
    return;
L_08A620A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62594;
      }
      goto L_08A620B0;
    }
L_08A620B0:
    ctx.set_gpr(30, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[4] & 80u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A620E0;
      }
      goto L_08A620C0;
    }
L_08A620C0:
    ctx.set_gpr(3, ctx.gpr[4] & 4u);
    ctx.set_gpr(3, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A620D4;
      }
      goto L_08A620D0;
    }
L_08A620D0:
    ctx.set_gpr(3, 0u < ctx.gpr[17] ? 1u : 0u);
    goto L_08A620D4;
L_08A620D4:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A620E0;
      }
      goto L_08A620DC;
    }
L_08A620DC:
    ctx.set_gpr(30, 0u + 0u);
    goto L_08A620E0;
L_08A620E0:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A622B4;
      }
      goto L_08A620F0;
    }
L_08A620F0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A622B4;
      }
      goto L_08A620FC;
    }
L_08A620FC:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A621A4;
      }
      goto L_08A62104;
    }
L_08A62104:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] & 12u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62154;
      }
      goto L_08A62118;
    }
L_08A62118:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A62138;
      }
      goto L_08A62128;
    }
L_08A62128:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08A62138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A62138u) goto L_08A62138;
    return;
L_08A62138:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08A6214Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 82u, 0x08A287A8u>(ctx, &aot_mem) && ctx.pc == 0x08A6214Cu) goto L_08A6214C;
    return;
L_08A6214C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6219C;
      }
      goto L_08A62154;
    }
L_08A62154:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A6218C;
      }
      goto L_08A62168;
    }
L_08A62168:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08A62184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 82u, 0x08A287A8u>(ctx, &aot_mem) && ctx.pc == 0x08A62184u) goto L_08A62184;
    return;
L_08A62184:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6219C;
      }
      goto L_08A6218C;
    }
L_08A6218C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A6219Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 844u, 0x0890FFD4u>(ctx, &aot_mem) && ctx.pc == 0x08A6219Cu) goto L_08A6219C;
    return;
L_08A6219C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62594;
      }
      goto L_08A621A4;
    }
L_08A621A4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A621D8;
      }
      goto L_08A621BC;
    }
L_08A621BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26128)));
    ctx.set_gpr(31, 0x08A621D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 478u, 0x0895DF98u>(ctx, &aot_mem) && ctx.pc == 0x08A621D8u) goto L_08A621D8;
    return;
L_08A621D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] & 12u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62254;
      }
      goto L_08A62218;
    }
L_08A62218:
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A62238;
      }
      goto L_08A62228;
    }
L_08A62228:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, ctx.gpr[23] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08A62238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A62238u) goto L_08A62238;
    return;
L_08A62238:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A6224Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 82u, 0x08A287A8u>(ctx, &aot_mem) && ctx.pc == 0x08A6224Cu) goto L_08A6224C;
    return;
L_08A6224C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6229C;
      }
      goto L_08A62254;
    }
L_08A62254:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A6228C;
      }
      goto L_08A62268;
    }
L_08A62268:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A62284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 82u, 0x08A287A8u>(ctx, &aot_mem) && ctx.pc == 0x08A62284u) goto L_08A62284;
    return;
L_08A62284:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6229C;
      }
      goto L_08A6228C;
    }
L_08A6228C:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A6229Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 844u, 0x0890FFD4u>(ctx, &aot_mem) && ctx.pc == 0x08A6229Cu) goto L_08A6229C;
    return;
L_08A6229C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    goto L_08A622B4;
L_08A622B4:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A62328;
      }
      goto L_08A622BC;
    }
L_08A622BC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A622F0;
      }
      goto L_08A622D4;
    }
L_08A622D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26128)));
    ctx.set_gpr(31, 0x08A622F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 478u, 0x0895DF98u>(ctx, &aot_mem) && ctx.pc == 0x08A622F0u) goto L_08A622F0;
    return;
L_08A622F0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A62328u);
    // nop
    goto L_08A625C8;
L_08A62328:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6247C;
      }
      goto L_08A62334;
    }
L_08A62334:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6235C;
      }
      goto L_08A6233C;
    }
L_08A6233C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62438;
      }
      goto L_08A6235C;
    }
L_08A6235C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6237C;
      }
      goto L_08A62368;
    }
L_08A62368:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x08A62374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 717u, 0x089FF778u>(ctx, &aot_mem) && ctx.pc == 0x08A62374u) goto L_08A62374;
    return;
L_08A62374:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A623A0;
      }
      goto L_08A6237C;
    }
L_08A6237C:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27776)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27772)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27768)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A623A0;
L_08A623A0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A623C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A623C8u) goto L_08A623C8;
    return;
L_08A623C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[4] ^ 0u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A623E8;
      }
      goto L_08A623DC;
    }
L_08A623DC:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A623FC;
      }
      goto L_08A623E8;
    }
L_08A623E8:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    goto L_08A623FC;
L_08A623FC:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62420;
      }
      goto L_08A62404;
    }
L_08A62404:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A62418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08A62418u) goto L_08A62418;
    return;
L_08A62418:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62438;
      }
      goto L_08A62420;
    }
L_08A62420:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A62438;
L_08A62438:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(129)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62458;
      }
      goto L_08A62444;
    }
L_08A62444:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6247C;
      }
      goto L_08A62458;
    }
L_08A62458:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A6247C;
L_08A6247C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A624E4;
      }
      goto L_08A62488;
    }
L_08A62488:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A624B8;
      }
      goto L_08A624A4;
    }
L_08A624A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A624CC;
      }
      goto L_08A624B8;
    }
L_08A624B8:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A624CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A624CCu) goto L_08A624CC;
    return;
L_08A624CC:
    ctx.set_gpr(4, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62594;
      }
      goto L_08A624E4;
    }
L_08A624E4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62544;
      }
      goto L_08A624EC;
    }
L_08A624EC:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62518;
      }
      goto L_08A62504;
    }
L_08A62504:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6252C;
      }
      goto L_08A62518;
    }
L_08A62518:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A6252Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6252Cu) goto L_08A6252C;
    return;
L_08A6252C:
    ctx.set_gpr(4, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62594;
      }
      goto L_08A62544;
    }
L_08A62544:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62570;
      }
      goto L_08A6255C;
    }
L_08A6255C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62584;
      }
      goto L_08A62570;
    }
L_08A62570:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A62584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A62584u) goto L_08A62584;
    return;
L_08A62584:
    ctx.set_gpr(4, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08A62594;
L_08A62594:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A625C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32147))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6260C;
      }
      goto L_08A625F4;
    }
L_08A625F4:
    ctx.set_gpr(31, 0x08A625FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 364u, 0x088B21ECu>(ctx, &aot_mem) && ctx.pc == 0x08A625FCu) goto L_08A625FC;
    return;
L_08A625FC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21060), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32147), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08A6260C;
L_08A6260C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21060)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A62634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A62634u) goto L_08A62634;
    return;
L_08A62634:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[4] ^ 0u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62654;
      }
      goto L_08A62648;
    }
L_08A62648:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62668;
      }
      goto L_08A62654;
    }
L_08A62654:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08A62668;
L_08A62668:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08A6267Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 479u, 0x08A2E004u>(ctx, &aot_mem) && ctx.pc == 0x08A6267Cu) goto L_08A6267C;
    return;
L_08A6267C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] & 12u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A626D4;
      }
      goto L_08A62698;
    }
L_08A62698:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A626B8;
      }
      goto L_08A626A8;
    }
L_08A626A8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08A626B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A626B8u) goto L_08A626B8;
    return;
L_08A626B8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A626CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 82u, 0x08A287A8u>(ctx, &aot_mem) && ctx.pc == 0x08A626CCu) goto L_08A626CC;
    return;
L_08A626CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6271C;
      }
      goto L_08A626D4;
    }
L_08A626D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A6270C;
      }
      goto L_08A626E8;
    }
L_08A626E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A62704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 82u, 0x08A287A8u>(ctx, &aot_mem) && ctx.pc == 0x08A62704u) goto L_08A62704;
    return;
L_08A62704:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6271C;
      }
      goto L_08A6270C;
    }
L_08A6270C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A6271Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 844u, 0x0890FFD4u>(ctx, &aot_mem) && ctx.pc == 0x08A6271Cu) goto L_08A6271C;
    return;
L_08A6271C:
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
L_08A62738:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A62778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A62778u) goto L_08A62778;
    return;
L_08A62778:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[4] ^ 0u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62798;
      }
      goto L_08A6278C;
    }
L_08A6278C:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A627AC;
      }
      goto L_08A62798;
    }
L_08A62798:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08A627AC;
L_08A627AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A627C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 82u, 0x08A287A8u>(ctx, &aot_mem) && ctx.pc == 0x08A627C4u) goto L_08A627C4;
    return;
L_08A627C4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A627E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 844u, 0x0890FFD4u>(ctx, &aot_mem) && ctx.pc == 0x08A627E0u) goto L_08A627E0;
    return;
L_08A627E0:
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
L_08A627F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A628D4;
      }
      goto L_08A62828;
    }
L_08A62828:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A62874;
      }
      goto L_08A62850;
    }
L_08A62850:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A62860u);
    // nop
    goto L_08A628F0;
L_08A62860:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A62874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 478u, 0x0895DF98u>(ctx, &aot_mem) && ctx.pc == 0x08A62874u) goto L_08A62874;
    return;
L_08A62874:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(31, 0x08A628A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A628A4u) goto L_08A628A4;
    return;
L_08A628A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A628C4;
      }
      goto L_08A628B8;
    }
L_08A628B8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A628D4;
      }
      goto L_08A628C4;
    }
L_08A628C4:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A628D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A628D4u) goto L_08A628D4;
    return;
L_08A628D4:
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
L_08A628F0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26128)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A62900:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62B00;
      }
      goto L_08A62928;
    }
L_08A62928:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A62B00;
      }
      goto L_08A62938;
    }
L_08A62938:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62B00;
      }
      goto L_08A62950;
    }
L_08A62950:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A62974;
      }
      goto L_08A62968;
    }
L_08A62968:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62984;
      }
      goto L_08A62974;
    }
L_08A62974:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A62984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A62984u) goto L_08A62984;
    return;
L_08A62984:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A629A4;
      }
      goto L_08A62998;
    }
L_08A62998:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A629B4;
      }
      goto L_08A629A4;
    }
L_08A629A4:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A629B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A629B4u) goto L_08A629B4;
    return;
L_08A629B4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(113)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62A34;
      }
      goto L_08A629D8;
    }
L_08A629D8:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62A08;
      }
      goto L_08A629F4;
    }
L_08A629F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62A1C;
      }
      goto L_08A62A08;
    }
L_08A62A08:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A62A1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A62A1Cu) goto L_08A62A1C;
    return;
L_08A62A1C:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62AF0;
      }
      goto L_08A62A34;
    }
L_08A62A34:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(114)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62A9C;
      }
      goto L_08A62A40;
    }
L_08A62A40:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62A70;
      }
      goto L_08A62A5C;
    }
L_08A62A5C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62A84;
      }
      goto L_08A62A70;
    }
L_08A62A70:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A62A84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A62A84u) goto L_08A62A84;
    return;
L_08A62A84:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62AF0;
      }
      goto L_08A62A9C;
    }
L_08A62A9C:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62ACC;
      }
      goto L_08A62AB8;
    }
L_08A62AB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62AE0;
      }
      goto L_08A62ACC;
    }
L_08A62ACC:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A62AE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A62AE0u) goto L_08A62AE0;
    return;
L_08A62AE0:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    goto L_08A62AF0;
L_08A62AF0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A62B00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A62B00u) goto L_08A62B00;
    return;
L_08A62B00:
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
L_08A62B20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62B80;
      }
      goto L_08A62B48;
    }
L_08A62B48:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A62B68u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A62B68u) goto L_08A62B68;
    return;
L_08A62B68:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A62B7C;
      }
      goto L_08A62B70;
    }
L_08A62B70:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62B94;
      }
      goto L_08A62B7C;
    }
L_08A62B7C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A62B80;
L_08A62B80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A62B48;
      }
      goto L_08A62B90;
    }
L_08A62B90:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A62B94;
L_08A62B94:
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
L_08A62BB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25044)));
    ctx.set_gpr(31, 0x08A62BFCu);
    // nop
    goto L_08A62B20;
L_08A62BFC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(31, 0x08A62C18u);
    // nop
    goto L_08A62B20;
L_08A62C18:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62EEC;
      }
      goto L_08A62C28;
    }
L_08A62C28:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A62C3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A62C3Cu) goto L_08A62C3C;
    return;
L_08A62C3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62EEC;
      }
      goto L_08A62C44;
    }
L_08A62C44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62EC8;
      }
      goto L_08A62C4C;
    }
L_08A62C4C:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25044)));
    ctx.set_gpr(31, 0x08A62C64u);
    // nop
    goto L_08A62B20;
L_08A62C64:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A62EC8;
      }
      goto L_08A62C74;
    }
L_08A62C74:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A62C8C;
      }
      goto L_08A62C80;
    }
L_08A62C80:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62EC8;
      }
      goto L_08A62C8C;
    }
L_08A62C8C:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62CC8;
      }
      goto L_08A62CA4;
    }
L_08A62CA4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25044)));
    ctx.set_gpr(31, 0x08A62CB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A62CB8u) goto L_08A62CB8;
    return;
L_08A62CB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62CC8;
      }
      goto L_08A62CC0;
    }
L_08A62CC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62CCC;
      }
      goto L_08A62CC8;
    }
L_08A62CC8:
    ctx.set_gpr(21, 0u + 0u);
    goto L_08A62CCC;
L_08A62CCC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A62CDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 314u, 0x089F26D8u>(ctx, &aot_mem) && ctx.pc == 0x08A62CDCu) goto L_08A62CDC;
    return;
L_08A62CDC:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62CF4;
      }
      goto L_08A62CE8;
    }
L_08A62CE8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A62CF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A62CF4u) goto L_08A62CF4;
    return;
L_08A62CF4:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62D20;
      }
      goto L_08A62CFC;
    }
L_08A62CFC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-31088)));
    ctx.set_gpr(31, 0x08A62D10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A62D10u) goto L_08A62D10;
    return;
L_08A62D10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62D20;
      }
      goto L_08A62D18;
    }
L_08A62D18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62D24;
      }
      goto L_08A62D20;
    }
L_08A62D20:
    ctx.set_gpr(21, 0u + 0u);
    goto L_08A62D24;
L_08A62D24:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A62D30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 602u, 0x089D6D3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A62D30u) goto L_08A62D30;
    return;
L_08A62D30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62EC8;
      }
      goto L_08A62D38;
    }
L_08A62D38:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A62D50u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A62D50u) goto L_08A62D50;
    return;
L_08A62D50:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A62D60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A62D60u) goto L_08A62D60;
    return;
L_08A62D60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A62D6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 633u, 0x08A068F8u>(ctx, &aot_mem) && ctx.pc == 0x08A62D6Cu) goto L_08A62D6C;
    return;
L_08A62D6C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A62D7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A62D7Cu) goto L_08A62D7C;
    return;
L_08A62D7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A62D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 355u, 0x088BA060u>(ctx, &aot_mem) && ctx.pc == 0x08A62D88u) goto L_08A62D88;
    return;
L_08A62D88:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A62DB4;
      }
      goto L_08A62DA4;
    }
L_08A62DA4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A62DB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A62DB4u) goto L_08A62DB4;
    return;
L_08A62DB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A62DDC;
      }
      goto L_08A62DCC;
    }
L_08A62DCC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A62DDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A62DDCu) goto L_08A62DDC;
    return;
L_08A62DDC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A62DFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 244u, 0x088C54E4u>(ctx, &aot_mem) && ctx.pc == 0x08A62DFCu) goto L_08A62DFC;
    return;
L_08A62DFC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A62E14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 837u, 0x0890FF10u>(ctx, &aot_mem) && ctx.pc == 0x08A62E14u) goto L_08A62E14;
    return;
L_08A62E14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08A62E34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 837u, 0x0890FF10u>(ctx, &aot_mem) && ctx.pc == 0x08A62E34u) goto L_08A62E34;
    return;
L_08A62E34:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08A62E48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A62E48u) goto L_08A62E48;
    return;
L_08A62E48:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62E64;
      }
      goto L_08A62E5C;
    }
L_08A62E5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62E6C;
      }
      goto L_08A62E64;
    }
L_08A62E64:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8240));
    goto L_08A62E6C;
L_08A62E6C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x08A62E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 351u, 0x08945908u>(ctx, &aot_mem) && ctx.pc == 0x08A62E78u) goto L_08A62E78;
    return;
L_08A62E78:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x08A62E88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x08A62E88u) goto L_08A62E88;
    return;
L_08A62E88:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A62E9C;
      }
      goto L_08A62E98;
    }
L_08A62E98:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A62E9C;
L_08A62E9C:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62EB4;
      }
      goto L_08A62EAC;
    }
L_08A62EAC:
    ctx.set_gpr(31, 0x08A62EB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A62EB4u) goto L_08A62EB4;
    return;
L_08A62EB4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62EC8;
      }
      goto L_08A62EC0;
    }
L_08A62EC0:
    ctx.set_gpr(31, 0x08A62EC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A62EC8u) goto L_08A62EC8;
    return;
L_08A62EC8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A62EEC;
      }
      goto L_08A62ED4;
    }
L_08A62ED4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A62C4C;
      }
      goto L_08A62EE0;
    }
L_08A62EE0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A62C4C;
      }
      goto L_08A62EEC;
    }
L_08A62EEC:
    ctx.set_gpr(2, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
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
L_08A62F1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26408)));
    ctx.set_gpr(31, 0x08A62F5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A62F5Cu) goto L_08A62F5C;
    return;
L_08A62F5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62FE4;
      }
      goto L_08A62F64;
    }
L_08A62F64:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62F94;
      }
      goto L_08A62F6C;
    }
L_08A62F6C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26408)));
    ctx.set_gpr(31, 0x08A62F80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A62F80u) goto L_08A62F80;
    return;
L_08A62F80:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62F94;
      }
      goto L_08A62F88;
    }
L_08A62F88:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62F98;
      }
      goto L_08A62F94;
    }
L_08A62F94:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A62F98;
L_08A62F98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A62FB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x08A62FB4u) goto L_08A62FB4;
    return;
L_08A62FB4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A63060;
      }
      goto L_08A62FC0;
    }
L_08A62FC0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A62FD8u);
    // nop
    goto L_08A62BB0;
L_08A62FD8:
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63060;
      }
      goto L_08A62FE4;
    }
L_08A62FE4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63050;
      }
      goto L_08A62FF4;
    }
L_08A62FF4:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63030;
      }
      goto L_08A6300C;
    }
L_08A6300C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24288)));
    ctx.set_gpr(31, 0x08A63020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A63020u) goto L_08A63020;
    return;
L_08A63020:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63030;
      }
      goto L_08A63028;
    }
L_08A63028:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63034;
      }
      goto L_08A63030;
    }
L_08A63030:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08A63034;
L_08A63034:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A63048u);
    // nop
    goto L_08A62F1C;
L_08A63048:
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A63050;
L_08A63050:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A62FF4;
      }
      goto L_08A63060;
    }
L_08A63060:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
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
L_08A6308C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A633FC;
      }
      goto L_08A630C8;
    }
L_08A630C8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A630F4;
      }
      goto L_08A630D0;
    }
L_08A630D0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24288)));
    ctx.set_gpr(31, 0x08A630E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A630E4u) goto L_08A630E4;
    return;
L_08A630E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A630F4;
      }
      goto L_08A630EC;
    }
L_08A630EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A630F8;
      }
      goto L_08A630F4;
    }
L_08A630F4:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A630F8;
L_08A630F8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A633EC;
      }
      goto L_08A63108;
    }
L_08A63108:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63148;
      }
      goto L_08A63120;
    }
L_08A63120:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26408)));
    ctx.set_gpr(31, 0x08A63134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A63134u) goto L_08A63134;
    return;
L_08A63134:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63148;
      }
      goto L_08A6313C;
    }
L_08A6313C:
    ctx.set_gpr(3, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6314C;
      }
      goto L_08A63148;
    }
L_08A63148:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08A6314C;
L_08A6314C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63164;
      }
      goto L_08A63158;
    }
L_08A63158:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A63164;
L_08A63164:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63194;
      }
      goto L_08A6316C;
    }
L_08A6316C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26396)));
    ctx.set_gpr(31, 0x08A63180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A63180u) goto L_08A63180;
    return;
L_08A63180:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63194;
      }
      goto L_08A63188;
    }
L_08A63188:
    ctx.set_gpr(3, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63198;
      }
      goto L_08A63194;
    }
L_08A63194:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08A63198;
L_08A63198:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A631B0;
      }
      goto L_08A631A4;
    }
L_08A631A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A631B0;
L_08A631B0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A631E0;
      }
      goto L_08A631B8;
    }
L_08A631B8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26384)));
    ctx.set_gpr(31, 0x08A631CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A631CCu) goto L_08A631CC;
    return;
L_08A631CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A631E0;
      }
      goto L_08A631D4;
    }
L_08A631D4:
    ctx.set_gpr(3, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A631E4;
      }
      goto L_08A631E0;
    }
L_08A631E0:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08A631E4;
L_08A631E4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A631FC;
      }
      goto L_08A631F0;
    }
L_08A631F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A631FC;
L_08A631FC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63284;
      }
      goto L_08A63208;
    }
L_08A63208:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26408)));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A63284;
      }
      goto L_08A63218;
    }
L_08A63218:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A63394;
      }
      goto L_08A63228;
    }
L_08A63228:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A63394;
      }
      goto L_08A63234;
    }
L_08A63234:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A63240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A63240u) goto L_08A63240;
    return;
L_08A63240:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63254;
      }
      goto L_08A6324C;
    }
L_08A6324C:
    ctx.set_gpr(31, 0x08A63254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A63254u) goto L_08A63254;
    return;
L_08A63254:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63268;
      }
      goto L_08A63260;
    }
L_08A63260:
    ctx.set_gpr(31, 0x08A63268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A63268u) goto L_08A63268;
    return;
L_08A63268:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6327C;
      }
      goto L_08A63274;
    }
L_08A63274:
    ctx.set_gpr(31, 0x08A6327Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A6327Cu) goto L_08A6327C;
    return;
L_08A6327C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A633FC;
      }
      goto L_08A63284;
    }
L_08A63284:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6330C;
      }
      goto L_08A63290;
    }
L_08A63290:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26396)));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A6330C;
      }
      goto L_08A632A0;
    }
L_08A632A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A63394;
      }
      goto L_08A632B0;
    }
L_08A632B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A63394;
      }
      goto L_08A632BC;
    }
L_08A632BC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A632C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A632C8u) goto L_08A632C8;
    return;
L_08A632C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A632DC;
      }
      goto L_08A632D4;
    }
L_08A632D4:
    ctx.set_gpr(31, 0x08A632DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A632DCu) goto L_08A632DC;
    return;
L_08A632DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A632F0;
      }
      goto L_08A632E8;
    }
L_08A632E8:
    ctx.set_gpr(31, 0x08A632F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A632F0u) goto L_08A632F0;
    return;
L_08A632F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63304;
      }
      goto L_08A632FC;
    }
L_08A632FC:
    ctx.set_gpr(31, 0x08A63304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A63304u) goto L_08A63304;
    return;
L_08A63304:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A633FC;
      }
      goto L_08A6330C;
    }
L_08A6330C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63394;
      }
      goto L_08A63318;
    }
L_08A63318:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26384)));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A63394;
      }
      goto L_08A63328;
    }
L_08A63328:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A63394;
      }
      goto L_08A63338;
    }
L_08A63338:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A63394;
      }
      goto L_08A63344;
    }
L_08A63344:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A63350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A63350u) goto L_08A63350;
    return;
L_08A63350:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63364;
      }
      goto L_08A6335C;
    }
L_08A6335C:
    ctx.set_gpr(31, 0x08A63364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A63364u) goto L_08A63364;
    return;
L_08A63364:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63378;
      }
      goto L_08A63370;
    }
L_08A63370:
    ctx.set_gpr(31, 0x08A63378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A63378u) goto L_08A63378;
    return;
L_08A63378:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6338C;
      }
      goto L_08A63384;
    }
L_08A63384:
    ctx.set_gpr(31, 0x08A6338Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A6338Cu) goto L_08A6338C;
    return;
L_08A6338C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A633FC;
      }
      goto L_08A63394;
    }
L_08A63394:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A633ACu);
    // nop
    goto L_08A6308C;
L_08A633AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A633C0;
      }
      goto L_08A633B8;
    }
L_08A633B8:
    ctx.set_gpr(31, 0x08A633C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A633C0u) goto L_08A633C0;
    return;
L_08A633C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A633D4;
      }
      goto L_08A633CC;
    }
L_08A633CC:
    ctx.set_gpr(31, 0x08A633D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A633D4u) goto L_08A633D4;
    return;
L_08A633D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A633E8;
      }
      goto L_08A633E0;
    }
L_08A633E0:
    ctx.set_gpr(31, 0x08A633E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A633E8u) goto L_08A633E8;
    return;
L_08A633E8:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A633EC;
L_08A633EC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A63108;
      }
      goto L_08A633FC;
    }
L_08A633FC:
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
L_08A63424:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(22, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, 2229u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(22888)));
    ctx.set_gpr(3, 2229u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(22892)));
    ctx.set_gpr(3, 2229u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(22896)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A635BC;
      }
      goto L_08A63480;
    }
L_08A63480:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A634B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A634B8u) goto L_08A634B8;
    return;
L_08A634B8:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A634D4;
      }
      goto L_08A634C0;
    }
L_08A634C0:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26408)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6353C;
      }
      goto L_08A634D4;
    }
L_08A634D4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23816)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A634F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A634F0u) goto L_08A634F0;
    return;
L_08A634F0:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A6350C;
      }
      goto L_08A634F8;
    }
L_08A634F8:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26396)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6353C;
      }
      goto L_08A6350C;
    }
L_08A6350C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25504)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A63528u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A63528u) goto L_08A63528;
    return;
L_08A63528:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A6353C;
      }
      goto L_08A63530;
    }
L_08A63530:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26384)));
    goto L_08A6353C;
L_08A6353C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A635B8;
      }
      goto L_08A63548;
    }
L_08A63548:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63564;
      }
      goto L_08A63558;
    }
L_08A63558:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A63564;
L_08A63564:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08A6357Cu);
    // nop
    goto L_08A6308C;
L_08A6357C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A635A4;
      }
      goto L_08A63588;
    }
L_08A63588:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    goto L_08A635A4;
L_08A635A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A635B8;
      }
      goto L_08A635B0;
    }
L_08A635B0:
    ctx.set_gpr(31, 0x08A635B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A635B8u) goto L_08A635B8;
    return;
L_08A635B8:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A635BC;
L_08A635BC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A63480;
      }
      goto L_08A635D0;
    }
L_08A635D0:
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
L_08A635FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A639D4;
      }
      goto L_08A6362C;
    }
L_08A6362C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26408)));
    ctx.set_gpr(31, 0x08A63640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A63640u) goto L_08A63640;
    return;
L_08A63640:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63758;
      }
      goto L_08A63648;
    }
L_08A63648:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63674;
      }
      goto L_08A63650;
    }
L_08A63650:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26408)));
    ctx.set_gpr(31, 0x08A63664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A63664u) goto L_08A63664;
    return;
L_08A63664:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63674;
      }
      goto L_08A6366C;
    }
L_08A6366C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63678;
      }
      goto L_08A63674;
    }
L_08A63674:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08A63678;
L_08A63678:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A63690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 45u, 0x088C82E4u>(ctx, &aot_mem) && ctx.pc == 0x08A63690u) goto L_08A63690;
    return;
L_08A63690:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A639D4;
      }
      goto L_08A63698;
    }
L_08A63698:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A63730;
      }
      goto L_08A636A8;
    }
L_08A636A8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63734;
      }
      goto L_08A636BC;
    }
L_08A636BC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A636D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 465u, 0x089DF40Cu>(ctx, &aot_mem) && ctx.pc == 0x08A636D0u) goto L_08A636D0;
    return;
L_08A636D0:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A63734;
      }
      goto L_08A636E4;
    }
L_08A636E4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08A63704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 453u, 0x089DF30Cu>(ctx, &aot_mem) && ctx.pc == 0x08A63704u) goto L_08A63704;
    return;
L_08A63704:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63734;
      }
      goto L_08A63710;
    }
L_08A63710:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A63728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 74u, 0x089E04FCu>(ctx, &aot_mem) && ctx.pc == 0x08A63728u) goto L_08A63728;
    return;
L_08A63728:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63734;
      }
      goto L_08A63730;
    }
L_08A63730:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_08A63734;
L_08A63734:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A639D4;
      }
      goto L_08A63740;
    }
L_08A63740:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A63750u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A63750u) goto L_08A63750;
    return;
L_08A63750:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A639D4;
      }
      goto L_08A63758;
    }
L_08A63758:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26396)));
    ctx.set_gpr(31, 0x08A6376Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6376Cu) goto L_08A6376C;
    return;
L_08A6376C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63830;
      }
      goto L_08A63774;
    }
L_08A63774:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A637A0;
      }
      goto L_08A6377C;
    }
L_08A6377C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26396)));
    ctx.set_gpr(31, 0x08A63790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A63790u) goto L_08A63790;
    return;
L_08A63790:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A637A0;
      }
      goto L_08A63798;
    }
L_08A63798:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A637A4;
      }
      goto L_08A637A0;
    }
L_08A637A0:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08A637A4;
L_08A637A4:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A637BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 45u, 0x088C82E4u>(ctx, &aot_mem) && ctx.pc == 0x08A637BCu) goto L_08A637BC;
    return;
L_08A637BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A639D4;
      }
      goto L_08A637C4;
    }
L_08A637C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A63808;
      }
      goto L_08A637D4;
    }
L_08A637D4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6380C;
      }
      goto L_08A637E8;
    }
L_08A637E8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A637FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 487u, 0x089DF678u>(ctx, &aot_mem) && ctx.pc == 0x08A637FCu) goto L_08A637FC;
    return;
L_08A637FC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6380C;
      }
      goto L_08A63808;
    }
L_08A63808:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_08A6380C;
L_08A6380C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A639D4;
      }
      goto L_08A63818;
    }
L_08A63818:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A63828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A63828u) goto L_08A63828;
    return;
L_08A63828:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A639D4;
      }
      goto L_08A63830;
    }
L_08A63830:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26384)));
    ctx.set_gpr(31, 0x08A63844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A63844u) goto L_08A63844;
    return;
L_08A63844:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6395C;
      }
      goto L_08A6384C;
    }
L_08A6384C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63878;
      }
      goto L_08A63854;
    }
L_08A63854:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26384)));
    ctx.set_gpr(31, 0x08A63868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A63868u) goto L_08A63868;
    return;
L_08A63868:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63878;
      }
      goto L_08A63870;
    }
L_08A63870:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6387C;
      }
      goto L_08A63878;
    }
L_08A63878:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08A6387C;
L_08A6387C:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A63894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 45u, 0x088C82E4u>(ctx, &aot_mem) && ctx.pc == 0x08A63894u) goto L_08A63894;
    return;
L_08A63894:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A639D4;
      }
      goto L_08A6389C;
    }
L_08A6389C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A63934;
      }
      goto L_08A638AC;
    }
L_08A638AC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63938;
      }
      goto L_08A638C0;
    }
L_08A638C0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A638D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 465u, 0x089DF40Cu>(ctx, &aot_mem) && ctx.pc == 0x08A638D4u) goto L_08A638D4;
    return;
L_08A638D4:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A63938;
      }
      goto L_08A638E8;
    }
L_08A638E8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08A63908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 453u, 0x089DF30Cu>(ctx, &aot_mem) && ctx.pc == 0x08A63908u) goto L_08A63908;
    return;
L_08A63908:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63938;
      }
      goto L_08A63914;
    }
L_08A63914:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A6392Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 74u, 0x089E04FCu>(ctx, &aot_mem) && ctx.pc == 0x08A6392Cu) goto L_08A6392C;
    return;
L_08A6392C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63938;
      }
      goto L_08A63934;
    }
L_08A63934:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_08A63938;
L_08A63938:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A639D4;
      }
      goto L_08A63944;
    }
L_08A63944:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A63954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A63954u) goto L_08A63954;
    return;
L_08A63954:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A639D4;
      }
      goto L_08A6395C;
    }
L_08A6395C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A639C4;
      }
      goto L_08A6396C;
    }
L_08A6396C:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A639A8;
      }
      goto L_08A63984;
    }
L_08A63984:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24288)));
    ctx.set_gpr(31, 0x08A63998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A63998u) goto L_08A63998;
    return;
L_08A63998:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A639A8;
      }
      goto L_08A639A0;
    }
L_08A639A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A639AC;
      }
      goto L_08A639A8;
    }
L_08A639A8:
    ctx.set_gpr(20, 0u + 0u);
    goto L_08A639AC;
L_08A639AC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A639C0u);
    // nop
    goto L_08A635FC;
L_08A639C0:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A639C4;
L_08A639C4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6396C;
      }
      goto L_08A639D4;
    }
L_08A639D4:
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
L_08A639F8:
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
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A63B04;
      }
      goto L_08A63A48;
    }
L_08A63A48:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A63A70;
      }
      goto L_08A63A5C;
    }
L_08A63A5C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A63A70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A63A70u) goto L_08A63A70;
    return;
L_08A63A70:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63AF8;
      }
      goto L_08A63A7C;
    }
L_08A63A7C:
    ctx.set_gpr(4, ctx.gpr[19] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(30, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63AD0;
      }
      goto L_08A63ABC;
    }
L_08A63ABC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63AE4;
      }
      goto L_08A63AD0;
    }
L_08A63AD0:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A63AE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A63AE4u) goto L_08A63AE4;
    return;
L_08A63AE4:
    ctx.set_gpr(4, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A63AF8;
L_08A63AF8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A63A7C;
      }
      goto L_08A63B04;
    }
L_08A63B04:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63DD0;
      }
      goto L_08A63B10;
    }
L_08A63B10:
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A63B20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 179u, 0x08A58DF0u>(ctx, &aot_mem) && ctx.pc == 0x08A63B20u) goto L_08A63B20;
    return;
L_08A63B20:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63B34;
      }
      goto L_08A63B30;
    }
L_08A63B30:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    goto L_08A63B34;
L_08A63B34:
    ctx.set_gpr(3, 2229u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(22884)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63B4C;
      }
      goto L_08A63B48;
    }
L_08A63B48:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    goto L_08A63B4C;
L_08A63B4C:
    ctx.set_gpr(5, ctx.gpr[2] << 1u);
    ctx.set_gpr(1, ctx.gpr[5] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63B60;
      }
      goto L_08A63B5C;
    }
L_08A63B5C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    goto L_08A63B60;
L_08A63B60:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63B88;
      }
      goto L_08A63B70;
    }
L_08A63B70:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63B88;
      }
      goto L_08A63B78;
    }
L_08A63B78:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(836)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A63B88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 66u, 0x089DC75Cu>(ctx, &aot_mem) && ctx.pc == 0x08A63B88u) goto L_08A63B88;
    return;
L_08A63B88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, ctx.gpr[2] ^ 3u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(30, 0u + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63C98;
      }
      goto L_08A63BA4;
    }
L_08A63BA4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63BE4;
      }
      goto L_08A63BB0;
    }
L_08A63BB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63BC8;
      }
      goto L_08A63BBC;
    }
L_08A63BBC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63BCC;
      }
      goto L_08A63BC8;
    }
L_08A63BC8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A63BCC;
L_08A63BCC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63BE4;
      }
      goto L_08A63BD4;
    }
L_08A63BD4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A63BE4u);
    // nop
    goto L_08A62F1C;
L_08A63BE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A63BFCu);
    // nop
    goto L_08A62BB0;
L_08A63BFC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24900)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A63C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A63C24u) goto L_08A63C24;
    return;
L_08A63C24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[4] ^ 0u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63C44;
      }
      goto L_08A63C38;
    }
L_08A63C38:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63C58;
      }
      goto L_08A63C44;
    }
L_08A63C44:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08A63C58;
L_08A63C58:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(296)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A63C6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A63C6Cu) goto L_08A63C6C;
    return;
L_08A63C6C:
    ctx.set_gpr(30, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63C98;
      }
      goto L_08A63C78;
    }
L_08A63C78:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63C98;
      }
      goto L_08A63C80;
    }
L_08A63C80:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A63C98u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A63C98u) goto L_08A63C98;
    return;
L_08A63C98:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A63CA8u);
    // nop
    goto L_08A63424;
L_08A63CA8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A63CC0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A63CC0u) goto L_08A63CC0;
    return;
L_08A63CC0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63CE0;
      }
      goto L_08A63CC8;
    }
L_08A63CC8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63CE0;
      }
      goto L_08A63CD0;
    }
L_08A63CD0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08A63CE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 66u, 0x089DC75Cu>(ctx, &aot_mem) && ctx.pc == 0x08A63CE0u) goto L_08A63CE0;
    return;
L_08A63CE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63DBC;
      }
      goto L_08A63CEC;
    }
L_08A63CEC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63DBC;
      }
      goto L_08A63CF4;
    }
L_08A63CF4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63DBC;
      }
      goto L_08A63CFC;
    }
L_08A63CFC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(292)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A63D14u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A63D14u) goto L_08A63D14;
    return;
L_08A63D14:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63DAC;
      }
      goto L_08A63D24;
    }
L_08A63D24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A63D68;
      }
      goto L_08A63D50;
    }
L_08A63D50:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63D94;
      }
      goto L_08A63D68;
    }
L_08A63D68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63D90;
      }
      goto L_08A63D74;
    }
L_08A63D74:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63D94;
      }
      goto L_08A63D90;
    }
L_08A63D90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08A63D94;
L_08A63D94:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A63DA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A63DA8u) goto L_08A63DA8;
    return;
L_08A63DA8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A63DAC;
L_08A63DAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A63D24;
      }
      goto L_08A63DBC;
    }
L_08A63DBC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A63DD0u);
    // nop
    goto L_08A635FC;
L_08A63DD0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[3]));
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
L_08A63E0C:
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
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63EB0;
      }
      goto L_08A63E50;
    }
L_08A63E50:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22064)));
    ctx.set_gpr(31, 0x08A63E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A63E68u) goto L_08A63E68;
    return;
L_08A63E68:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A63E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A63E78u) goto L_08A63E78;
    return;
L_08A63E78:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08A63E88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A63E88u) goto L_08A63E88;
    return;
L_08A63E88:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63EB0;
      }
      goto L_08A63E90;
    }
L_08A63E90:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A63EB0;
      }
      goto L_08A63EA0;
    }
L_08A63EA0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x08A63EB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 447u, 0x089DF2ACu>(ctx, &aot_mem) && ctx.pc == 0x08A63EB0u) goto L_08A63EB0;
    return;
L_08A63EB0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A63EC0u);
    // nop
    goto L_08A604F0;
L_08A63EC0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63EE8;
      }
      goto L_08A63EC8;
    }
L_08A63EC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08A63EE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 82u, 0x08A287A8u>(ctx, &aot_mem) && ctx.pc == 0x08A63EE0u) goto L_08A63EE0;
    return;
L_08A63EE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63F04;
      }
      goto L_08A63EE8;
    }
L_08A63EE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A63F04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 844u, 0x0890FFD4u>(ctx, &aot_mem) && ctx.pc == 0x08A63F04u) goto L_08A63F04;
    return;
L_08A63F04:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A63F14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A63F14u) goto L_08A63F14;
    return;
L_08A63F14:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A63FD8;
      }
      goto L_08A63F24;
    }
L_08A63F24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63FC4;
      }
      goto L_08A63F38;
    }
L_08A63F38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A63F7C;
      }
      goto L_08A63F64;
    }
L_08A63F64:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63FA8;
      }
      goto L_08A63F7C;
    }
L_08A63F7C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63FA4;
      }
      goto L_08A63F88;
    }
L_08A63F88:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63FA8;
      }
      goto L_08A63FA4;
    }
L_08A63FA4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08A63FA8;
L_08A63FA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08A63FC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 82u, 0x08A287A8u>(ctx, &aot_mem) && ctx.pc == 0x08A63FC0u) goto L_08A63FC0;
    return;
L_08A63FC0:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A63FC4;
L_08A63FC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A63F38;
      }
      goto L_08A63FD8;
    }
L_08A63FD8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A63FEC;
      }
      goto L_08A63FE4;
    }
L_08A63FE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63FF0;
      }
      goto L_08A63FEC;
    }
L_08A63FEC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A63FF0;
L_08A63FF0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.pc = 0x08A64000u; return;
}

void recomp_unit_0151(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0151_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_151(Runtime &runtime) {
    runtime.register_generated_unit(151u, 0x08A60000u, 16384u, &recomp_unit_0151, &recomp_unit_0151_entry);
    runtime.register_function(0x08A60000u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60004u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60030u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60040u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60058u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60064u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60068u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60088u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A600B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A600D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A600DCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A600E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A600ECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A600FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60100u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60120u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60144u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60160u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6016Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60170u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6017Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6019Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A601B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A601D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A601E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A601F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A601F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60200u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60204u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60210u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60218u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60230u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60240u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60250u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60264u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60274u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A602C0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A602CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A602D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A602D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60324u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60330u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60334u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6033Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60388u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A603D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A603DCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A603FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60408u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6040Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60414u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60440u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60458u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60470u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60488u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60490u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60494u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A604A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A604B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A604C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A604D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A604F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60510u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60520u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6058Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A605C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A605D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A605DCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A605E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6060Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60618u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6061Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6062Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60658u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60668u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60674u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60680u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60698u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A606A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A606B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A606C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A606E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60718u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60724u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60744u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60780u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A607A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A607D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A607E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A607ECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A607F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6080Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60834u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60844u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6085Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60860u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60870u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6087Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6088Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60898u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A608A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A608B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A608C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A608D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A608E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A608F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60900u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60914u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60920u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60928u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60944u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6094Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60968u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60984u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6098Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6099Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A609A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A609B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A609E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60A04u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60A1Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60A24u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60A7Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60A88u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60A90u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60A9Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60AA4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60AB0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60ABCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60B10u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60B1Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60B24u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60B30u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60B38u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60B44u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60B5Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60BACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60BB8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60BC0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60BCCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60BD4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60BE0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60C00u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60C2Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60C5Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60C8Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60C94u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60CA0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60CA8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60CB4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60CBCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60CC8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60CECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60D2Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60D5Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60D68u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60D78u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60D88u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60D90u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60D98u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60DECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60DF8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60E00u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60E0Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60E14u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60E20u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60E40u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60E50u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60E5Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60E64u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60EBCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60EC8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60ED0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60EDCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60EE4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60EF0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F10u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F30u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F4Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F5Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F64u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F70u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60FB4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60FC0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60FC8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60FD4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60FE0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60FF0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61008u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61010u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61054u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61090u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6109Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A610A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A610B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A610BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A610C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A610D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A610E0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A610ECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A610F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A610FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61104u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61110u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61118u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61120u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61144u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6114Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61164u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6117Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61194u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A611ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A611C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A611ECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61200u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61214u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61234u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61244u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61254u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61264u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6126Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6127Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6129Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A612DCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A612E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A612F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61310u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61318u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6132Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61338u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61348u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61354u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61364u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61370u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61380u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61388u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61394u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A613A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A613A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A613B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A613D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A613D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A613E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A613ECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A613F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61400u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6140Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6142Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61434u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61440u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61460u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6147Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61498u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A614B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A614B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A614C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A614D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A614E0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A614F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A614FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6150Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61514u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61520u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61530u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61534u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61540u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6155Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6157Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61584u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61590u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A615B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A615C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A615D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A615DCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A615E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A615ECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61608u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61610u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6162Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61648u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61660u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61670u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6168Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61694u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61698u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A616A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A616BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A616D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A616E0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A616F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61708u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61724u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6172Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61748u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61770u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61778u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61794u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A617A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A617BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A617D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A617DCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A617ECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A617F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A617FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6180Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61814u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61830u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61844u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61858u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61880u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61894u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A618A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A618D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A618E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A618FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61924u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61938u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6194Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61964u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6197Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61990u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A619A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A619BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A619D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A619E0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A619FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61A10u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61A24u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61A3Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61A54u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61A68u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61A7Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61A8Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61A90u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61AA8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61AB8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61AC8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61AD4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61AE0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61AECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B18u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B1Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B30u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B4Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B68u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B84u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B9Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61BACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61BC8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61BDCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61BECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61BF8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C08u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C14u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C24u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C2Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C38u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C48u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C4Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C58u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C74u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C90u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61CACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61CB0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61CE4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61D00u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61D20u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61D4Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61D68u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61D7Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61D9Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61DA0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61DC8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61DE8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61DF4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E04u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E08u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E1Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E24u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E38u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E4Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E60u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E74u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E88u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E9Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61EB0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61EBCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61EE8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61F2Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61F34u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61F40u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61F50u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61F58u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61F8Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61FA4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61FB0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61FCCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61FD0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61FD4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61FE4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61FF0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61FF8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6200Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62024u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62034u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62044u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62058u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62060u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62074u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62090u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62098u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A620A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A620B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A620C0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A620D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A620D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A620DCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A620E0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A620F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A620FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62104u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62118u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62128u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62138u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6214Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62154u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62168u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62184u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6218Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6219Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A621A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A621BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A621D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62218u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62228u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62238u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6224Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62254u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62268u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62284u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6228Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6229Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A622B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A622BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A622D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A622F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62328u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62334u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6233Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6235Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62368u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62374u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6237Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A623A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A623C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A623DCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A623E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A623FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62404u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62418u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62420u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62438u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62444u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62458u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6247Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62488u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A624A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A624B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A624CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A624E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A624ECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62504u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62518u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6252Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62544u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6255Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62570u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62584u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62594u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A625C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A625F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A625FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6260Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62634u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62648u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62654u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62668u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6267Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62698u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A626A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A626B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A626CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A626D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A626E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62704u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6270Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6271Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62738u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62778u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6278Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62798u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A627ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A627C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A627E0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A627F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62828u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62850u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62860u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62874u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A628A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A628B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A628C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A628D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A628F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62900u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62928u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62938u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62950u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62968u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62974u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62984u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62998u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A629A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A629B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A629D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A629F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A08u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A1Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A34u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A40u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A5Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A70u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A84u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A9Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62AB8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62ACCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62AE0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62AF0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B00u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B20u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B48u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B68u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B70u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B7Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B80u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B90u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B94u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62BB0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62BFCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C18u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C28u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C3Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C44u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C4Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C64u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C74u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C80u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C8Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62CA4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62CB8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62CC0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62CC8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62CCCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62CDCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62CE8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62CF4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62CFCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D10u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D18u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D20u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D24u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D30u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D38u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D50u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D60u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D6Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D7Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D88u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62DA4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62DB4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62DCCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62DDCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62DFCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E14u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E34u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E48u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E5Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E64u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E6Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E78u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E88u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E98u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E9Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62EACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62EB4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62EC0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62EC8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62ED4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62EE0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62EECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F1Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F5Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F64u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F6Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F80u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F88u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F94u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F98u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62FB4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62FC0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62FD8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62FE4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62FF4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6300Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63020u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63028u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63030u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63034u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63048u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63050u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63060u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6308Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A630C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A630D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A630E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A630ECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A630F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A630F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63108u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63120u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63134u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6313Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63148u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6314Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63158u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63164u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6316Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63180u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63188u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63194u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63198u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A631A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A631B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A631B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A631CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A631D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A631E0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A631E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A631F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A631FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63208u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63218u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63228u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63234u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63240u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6324Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63254u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63260u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63268u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63274u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6327Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63284u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63290u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A632A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A632B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A632BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A632C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A632D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A632DCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A632E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A632F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A632FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63304u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6330Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63318u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63328u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63338u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63344u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63350u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6335Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63364u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63370u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63378u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63384u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6338Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63394u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A633ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A633B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A633C0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A633CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A633D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A633E0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A633E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A633ECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A633FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63424u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63480u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A634B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A634C0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A634D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A634F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A634F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6350Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63528u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63530u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6353Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63548u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63558u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63564u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6357Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63588u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A635A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A635B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A635B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A635BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A635D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A635FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6362Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63640u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63648u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63650u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63664u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6366Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63674u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63678u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63690u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63698u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A636A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A636BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A636D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A636E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63704u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63710u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63728u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63730u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63734u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63740u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63750u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63758u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6376Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63774u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6377Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63790u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63798u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A637A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A637A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A637BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A637C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A637D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A637E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A637FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63808u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6380Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63818u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63828u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63830u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63844u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6384Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63854u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63868u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63870u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63878u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6387Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63894u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6389Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A638ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A638C0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A638D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A638E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63908u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63914u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6392Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63934u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63938u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63944u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63954u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6395Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6396Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63984u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63998u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A639A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A639A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A639ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A639C0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A639C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A639D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A639F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A48u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A5Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A70u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A7Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63ABCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63AD0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63AE4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63AF8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B04u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B10u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B20u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B30u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B34u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B48u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B4Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B5Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B60u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B70u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B78u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B88u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63BA4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63BB0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63BBCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63BC8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63BCCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63BD4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63BE4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63BFCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C24u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C38u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C44u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C58u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C6Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C78u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C80u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C98u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63CA8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63CC0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63CC8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63CD0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63CE0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63CECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63CF4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63CFCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63D14u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63D24u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63D50u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63D68u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63D74u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63D90u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63D94u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63DA8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63DACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63DBCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63DD0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E0Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E50u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E68u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E78u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E88u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E90u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63EA0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63EB0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63EC0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63EC8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63EE0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63EE8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F04u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F14u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F24u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F38u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F64u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F7Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F88u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63FA4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63FA8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63FC0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63FC4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63FD8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63FE4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63FECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63FF0u, &recomp_unit_0151, "recomp_unit_0151");
}
} // namespace psprecomp
