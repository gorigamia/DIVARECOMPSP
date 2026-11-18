#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0063[4086] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0,
    0, 0, 0, 0, 5, 0, 6, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 11,
    0, 12, 0, 0, 0, 0, 13, 0, 0, 14, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0,
    0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 27, 28,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31,
    0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0,
    0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 40, 0, 0, 41, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 46, 0, 47, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 52,
    0, 53, 0, 0, 0, 0, 54, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    57, 0, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 63, 64, 0, 0, 65,
    0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 74,
    75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0,
    81, 0, 82, 83, 84, 0, 0, 85, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0,
    0, 99, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 105, 0, 0, 106, 107, 0, 0,
    0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 118,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123,
    0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0,
    130, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0,
    138, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    150, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0,
    0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 162,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169,
    0, 0, 0, 0, 170, 0, 171, 0, 0, 172, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 175, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0,
    0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 181, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185,
    0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 193,
    194, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 198, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0,
    202, 0, 0, 203, 0, 0, 0, 0, 204, 0, 205, 0, 206, 0, 0, 0, 0, 207, 0, 208, 0, 209, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0,
    212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0,
    0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 224,
    0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 230, 0, 231, 0, 0, 232, 0, 233,
    0, 0, 234, 0, 235, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 241, 0, 242, 0, 243, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 246,
    0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0,
    254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0,
    0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 265, 266, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 270, 0,
    0, 0, 0, 0, 271, 0, 272, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0,
    279, 280, 0, 281, 0, 282, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0,
    0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298,
    0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 0, 301, 0, 302, 0, 0, 0, 0, 303, 0, 0, 304, 0, 305, 0, 306, 0, 0,
    0, 0, 0, 307, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 314, 315, 0, 316,
    0, 317, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0,
    0, 0, 0, 324, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 332, 333, 0, 334, 0, 0, 335, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 336, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 341,
    0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 345, 0, 0, 346, 0, 0, 0, 347, 348, 0, 0, 349, 0, 0, 0, 0, 0, 0,
    350, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 357, 0, 358, 0, 359, 0,
    0, 0, 360, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 365, 0, 0, 366, 0, 0, 367,
    0, 0, 368, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 374, 0, 0, 0, 375, 0,
    376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0, 0, 381, 382, 0, 0, 383, 0, 0,
    384, 0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 388, 0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 0, 0, 391, 0, 392,
    0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 395, 396, 0, 397, 0, 398, 0, 0, 0, 0, 399, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0,
    0, 0, 0, 402, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 408, 0,
    0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 411, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 416, 0, 0, 0, 0, 417,
    0, 418, 0, 0, 0, 0, 419, 0, 0, 420, 0, 421, 0, 422, 0, 0, 0, 0, 0, 423, 0, 424, 0, 0, 425, 0, 0, 0, 0, 0, 0, 426,
    0, 427, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 430, 431, 0, 432, 0, 433, 0, 0, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0, 0, 436,
    0, 0, 0, 0, 0, 437, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 440, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 445, 0, 446, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 449, 0, 450, 0, 0, 451, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 452, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 457, 0,
    0, 458, 0, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 461, 0, 0, 462, 0, 0, 0, 463, 464, 0, 0, 465, 0, 0, 0, 0, 0, 0, 466,
    0, 467, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 471, 0,
    0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0,
    0, 0, 0, 476, 0, 0, 0, 0, 0, 477, 0, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 481, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 483, 0, 484, 0, 0, 485, 0, 0, 0, 0, 486, 0, 0, 487, 0, 0,
    0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 0, 0, 491, 0, 0, 0, 492, 0, 493, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 495, 0, 496, 0, 0, 497, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 500,
    0, 0, 0, 0, 0, 0, 501, 0, 0, 502, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0,
    506, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 509, 0, 0, 0, 0, 0, 0, 510, 0, 0, 511, 0, 512, 0, 513,
    0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 515, 0, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 518, 0, 519, 0, 0,
    0, 520, 0, 521, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 525, 0, 0, 526,
    0, 0, 527, 0, 0, 0, 0, 0, 528, 529, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 531, 0, 532, 533, 0, 0, 534, 0, 0, 0, 535, 0,
    0, 0, 0, 536, 0, 0, 537, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    540, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 544, 0, 0,
    0, 545, 546, 0, 0, 0, 0, 547, 0, 0, 0, 548, 549, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0,
    552, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 554, 555, 0, 0, 0, 0, 556, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 558, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 561, 0, 562, 0, 0, 563, 0,
    0, 0, 0, 564, 0, 565, 0, 0, 566, 0, 567, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 570, 0, 571,
    0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 573, 574, 575, 0, 576, 0, 0, 577, 0, 0, 0, 0, 0, 578, 0, 579, 0, 0, 0, 580,
    0, 0, 0, 0, 581, 582, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 585, 586, 0, 0, 0, 587, 0,
    0, 0, 0, 588, 0, 589, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 592, 0, 0, 0, 593, 0, 0, 0,
    0, 0, 0, 0, 594, 0, 595, 0, 596, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 600, 0,
    601, 0, 0, 0, 0, 0, 602, 0, 603, 0, 0, 0, 0, 604, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606,
    0, 0, 607, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 609, 0, 610, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 612,
    613, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0,
    616, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 621,
    0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 624, 0, 0, 0, 0, 625, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 626, 0, 0, 627, 628, 0, 0, 629, 630, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 633, 0,
    0, 634, 0, 0, 0, 0, 635, 0, 0, 0, 0, 636, 0, 0, 0, 0, 637, 0, 0, 638, 0, 0, 639, 0, 0, 0, 0, 640, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 642, 643, 0, 0, 644, 0, 645, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    647, 0, 0, 0, 0, 0, 648, 0, 0, 649, 0, 0, 0, 0, 650, 0, 0, 0, 0, 651, 0, 0, 0, 652, 0, 653, 0, 0, 654, 0, 0, 0,
    0, 0, 0, 655, 0, 0, 0, 0, 0, 656, 0, 0, 0, 657, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 660,
    0, 0, 0, 0, 0, 661, 662, 0, 663, 0, 0, 664, 0, 665, 0, 0, 0, 666, 0, 0, 0, 667, 0, 0, 668, 0, 669, 0, 0, 0, 670, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 672, 0, 0, 0, 673, 0, 0, 674, 0, 675, 0, 0, 676, 0, 677, 0, 0, 0, 0,
    678, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 680, 681, 0, 682, 0, 0, 0, 0, 0, 683, 0, 0, 684, 685, 0, 0, 0, 0, 686, 0, 0,
    0, 0, 0, 687, 0, 0, 0, 688, 0, 0, 689, 0, 690, 0, 0, 691, 0, 692, 0, 0, 0, 0, 693, 0, 0, 0, 0, 694, 0, 0, 0, 0,
    0, 695, 696, 0, 697, 0, 0, 0, 0, 0, 698, 0, 0, 699, 700, 0, 0, 0, 701, 0, 702, 0, 0, 703, 0, 0, 704, 0, 705, 0, 0, 706,
    0, 0, 707, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 710, 0, 0, 711, 0, 0, 712, 0, 0, 0,
    0, 0, 713, 0, 0, 0, 714, 0, 0, 715, 0, 716, 0, 717, 0, 0, 0, 0, 0, 718, 0, 0, 0, 719, 0, 0, 720, 0, 721, 0, 0, 722,
    0, 0, 723, 0, 0, 0, 0, 724, 0, 725, 0, 0, 726, 0, 0, 727, 0, 0, 0, 0, 0, 0, 0, 728, 0, 0, 0, 0, 0, 729, 730, 0,
    731, 0, 0, 732, 0, 0, 733, 0, 0, 0, 0, 0, 734, 0, 0, 735, 0, 0, 0, 736, 0, 0, 737, 0, 738, 0, 0, 739, 0, 740, 0, 0,
    0, 0, 741, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 743, 744, 0, 745, 0, 0, 0, 0, 0, 746, 0, 0, 747, 748, 0, 0, 0, 0, 749,
    0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 751, 0, 0, 0, 0, 0, 752, 753, 0, 754, 0, 0, 0, 0, 0, 755, 0, 0, 756, 757, 0, 0,
    0, 0, 758, 0, 759, 0, 0, 0, 0, 0, 760, 0, 0, 761, 0, 762, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 764, 0, 0, 765, 0, 0, 0, 766, 0, 0, 0, 767, 0, 0, 0, 0, 768, 0, 0, 0, 769, 0, 0, 0, 0, 770, 0, 0, 0, 771, 0,
    0, 0, 0, 0, 772, 0, 0, 0, 0, 0, 0, 773, 0, 0, 0, 0, 774, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 775, 0, 0, 0,
    0, 776, 0, 0, 0, 0, 777, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 0, 779, 0, 0, 0, 0, 0,
    0, 0, 780, 0, 0, 0, 0, 781, 0, 0, 0, 0, 0, 782, 0, 783, 784, 0, 0, 785, 0, 0, 0, 786, 0, 0, 0, 0, 787, 0, 0, 788,
    0, 0, 0, 0, 0, 0, 0, 789, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 790, 0, 0, 791, 0, 792, 0, 0, 793,
    0, 794, 0, 0, 0, 0, 795, 0, 0, 0, 0, 796, 0, 0, 797, 0, 798, 0, 799, 0, 0, 0, 800, 0, 0, 0, 0, 0, 0, 801, 0, 0,
    802, 0, 0, 0, 0, 803, 0, 0, 804, 0, 0, 0, 0, 805, 0, 0, 806, 0, 0, 807, 0, 0, 808, 0, 0, 0, 0, 0, 0, 809, 0, 0,
    0, 810, 0, 0, 811, 0, 812, 0, 0, 813, 0, 814, 0, 0, 0, 0, 815, 0, 0, 0, 0, 816, 0, 0, 817, 0, 818, 0, 819, 0, 0, 0,
    820, 0, 0, 0, 0, 0, 0, 0, 0, 821, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 822, 0, 0,
    0, 0, 0, 0, 823, 0, 0, 824, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 825, 0, 0, 826,
};
void recomp_unit_0063_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08900000u;
        entry_id = (entry_delta < 16344u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0063[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08900000;
    case 2u: goto L_08900030;
    case 3u: goto L_08900060;
    case 4u: goto L_08900070;
    case 5u: goto L_08900090;
    case 6u: goto L_08900098;
    case 7u: goto L_089000A4;
    case 8u: goto L_089000B0;
    case 9u: goto L_089000D8;
    case 10u: goto L_089000E0;
    case 11u: goto L_089000FC;
    case 12u: goto L_08900104;
    case 13u: goto L_08900118;
    case 14u: goto L_08900124;
    case 15u: goto L_08900128;
    case 16u: goto L_0890014C;
    case 17u: goto L_0890019C;
    case 18u: goto L_089001B0;
    case 19u: goto L_089001F0;
    case 20u: goto L_089001F8;
    case 21u: goto L_08900204;
    case 22u: goto L_08900210;
    case 23u: goto L_08900238;
    case 24u: goto L_08900240;
    case 25u: goto L_0890025C;
    case 26u: goto L_08900264;
    case 27u: goto L_08900278;
    case 28u: goto L_0890027C;
    case 29u: goto L_089002B4;
    case 30u: goto L_089002EC;
    case 31u: goto L_089002FC;
    case 32u: goto L_08900320;
    case 33u: goto L_08900328;
    case 34u: goto L_08900334;
    case 35u: goto L_08900340;
    case 36u: goto L_08900368;
    case 37u: goto L_08900370;
    case 38u: goto L_0890038C;
    case 39u: goto L_08900394;
    case 40u: goto L_089003A8;
    case 41u: goto L_089003B4;
    case 42u: goto L_089003B8;
    case 43u: goto L_089003E0;
    case 44u: goto L_08900430;
    case 45u: goto L_08900444;
    case 46u: goto L_08900490;
    case 47u: goto L_08900498;
    case 48u: goto L_089004A4;
    case 49u: goto L_089004B0;
    case 50u: goto L_089004D8;
    case 51u: goto L_089004E0;
    case 52u: goto L_089004FC;
    case 53u: goto L_08900504;
    case 54u: goto L_08900518;
    case 55u: goto L_0890051C;
    case 56u: goto L_08900554;
    case 57u: goto L_08900580;
    case 58u: goto L_08900590;
    case 59u: goto L_0890059C;
    case 60u: goto L_089005A8;
    case 61u: goto L_089005CC;
    case 62u: goto L_089005D4;
    case 63u: goto L_089005EC;
    case 64u: goto L_089005F0;
    case 65u: goto L_089005FC;
    case 66u: goto L_08900618;
    case 67u: goto L_0890063C;
    case 68u: goto L_08900690;
    case 69u: goto L_089006A0;
    case 70u: goto L_089006AC;
    case 71u: goto L_089006B8;
    case 72u: goto L_089006DC;
    case 73u: goto L_089006E4;
    case 74u: goto L_089006FC;
    case 75u: goto L_08900700;
    case 76u: goto L_0890070C;
    case 77u: goto L_08900748;
    case 78u: goto L_08900750;
    case 79u: goto L_08900758;
    case 80u: goto L_0890076C;
    case 81u: goto L_08900780;
    case 82u: goto L_08900788;
    case 83u: goto L_0890078C;
    case 84u: goto L_08900790;
    case 85u: goto L_0890079C;
    case 86u: goto L_089007B0;
    case 87u: goto L_089007B8;
    case 88u: goto L_089007CC;
    case 89u: goto L_0890080C;
    case 90u: goto L_08900830;
    case 91u: goto L_08900840;
    case 92u: goto L_08900874;
    case 93u: goto L_089008A0;
    case 94u: goto L_089008B0;
    case 95u: goto L_089008C8;
    case 96u: goto L_089008D4;
    case 97u: goto L_089008E0;
    case 98u: goto L_089008F8;
    case 99u: goto L_08900904;
    case 100u: goto L_08900918;
    case 101u: goto L_08900924;
    case 102u: goto L_08900930;
    case 103u: goto L_0890094C;
    case 104u: goto L_08900954;
    case 105u: goto L_08900964;
    case 106u: goto L_08900970;
    case 107u: goto L_08900974;
    case 108u: goto L_08900998;
    case 109u: goto L_089009A0;
    case 110u: goto L_089009DC;
    case 111u: goto L_089009E4;
    case 112u: goto L_08900A20;
    case 113u: goto L_08900A28;
    case 114u: goto L_08900A64;
    case 115u: goto L_08900A74;
    case 116u: goto L_08900AEC;
    case 117u: goto L_08900AF4;
    case 118u: goto L_08900AFC;
    case 119u: goto L_08900B24;
    case 120u: goto L_08900B28;
    case 121u: goto L_08900B50;
    case 122u: goto L_08900B54;
    case 123u: goto L_08900B7C;
    case 124u: goto L_08900B88;
    case 125u: goto L_08900BD0;
    case 126u: goto L_08900BD8;
    case 127u: goto L_08900C2C;
    case 128u: goto L_08900C40;
    case 129u: goto L_08900C74;
    case 130u: goto L_08900C80;
    case 131u: goto L_08900C8C;
    case 132u: goto L_08900CA4;
    case 133u: goto L_08900CB0;
    case 134u: goto L_08900CC4;
    case 135u: goto L_08900CD0;
    case 136u: goto L_08900CDC;
    case 137u: goto L_08900CF8;
    case 138u: goto L_08900D00;
    case 139u: goto L_08900D10;
    case 140u: goto L_08900D24;
    case 141u: goto L_08900D2C;
    case 142u: goto L_08900D40;
    case 143u: goto L_08900D58;
    case 144u: goto L_08900D94;
    case 145u: goto L_08900DB8;
    case 146u: goto L_08900DC8;
    case 147u: goto L_08900E00;
    case 148u: goto L_08900E20;
    case 149u: goto L_08900E30;
    case 150u: goto L_08900E80;
    case 151u: goto L_08900E90;
    case 152u: goto L_08900E98;
    case 153u: goto L_08900EAC;
    case 154u: goto L_08900EE4;
    case 155u: goto L_08900F04;
    case 156u: goto L_08900F14;
    case 157u: goto L_08900F50;
    case 158u: goto L_08900F80;
    case 159u: goto L_08900FD0;
    case 160u: goto L_08900FE0;
    case 161u: goto L_08900FE8;
    case 162u: goto L_08900FFC;
    case 163u: goto L_08901034;
    case 164u: goto L_08901054;
    case 165u: goto L_08901064;
    case 166u: goto L_089010A0;
    case 167u: goto L_089010D0;
    case 168u: goto L_089010F0;
    case 169u: goto L_089010FC;
    case 170u: goto L_08901110;
    case 171u: goto L_08901118;
    case 172u: goto L_08901124;
    case 173u: goto L_08901134;
    case 174u: goto L_0890113C;
    case 175u: goto L_08901150;
    case 176u: goto L_08901154;
    case 177u: goto L_08901168;
    case 178u: goto L_08901188;
    case 179u: goto L_08901194;
    case 180u: goto L_089011AC;
    case 181u: goto L_089011B4;
    case 182u: goto L_089011B8;
    case 183u: goto L_089011D0;
    case 184u: goto L_089011F0;
    case 185u: goto L_089011FC;
    case 186u: goto L_08901208;
    case 187u: goto L_08901218;
    case 188u: goto L_08901230;
    case 189u: goto L_08901234;
    case 190u: goto L_08901250;
    case 191u: goto L_08901264;
    case 192u: goto L_08901274;
    case 193u: goto L_0890127C;
    case 194u: goto L_08901280;
    case 195u: goto L_08901290;
    case 196u: goto L_089012A4;
    case 197u: goto L_089012B4;
    case 198u: goto L_089012BC;
    case 199u: goto L_089012C0;
    case 200u: goto L_089012D0;
    case 201u: goto L_089012F4;
    case 202u: goto L_08901300;
    case 203u: goto L_0890130C;
    case 204u: goto L_08901320;
    case 205u: goto L_08901328;
    case 206u: goto L_08901330;
    case 207u: goto L_08901344;
    case 208u: goto L_0890134C;
    case 209u: goto L_08901354;
    case 210u: goto L_08901368;
    case 211u: goto L_08901370;
    case 212u: goto L_08901380;
    case 213u: goto L_0890139C;
    case 214u: goto L_089013B4;
    case 215u: goto L_089013D0;
    case 216u: goto L_089013E0;
    case 217u: goto L_089013F0;
    case 218u: goto L_08901414;
    case 219u: goto L_08901428;
    case 220u: goto L_08901434;
    case 221u: goto L_08901440;
    case 222u: goto L_08901458;
    case 223u: goto L_08901460;
    case 224u: goto L_0890147C;
    case 225u: goto L_08901488;
    case 226u: goto L_089014A0;
    case 227u: goto L_089014B4;
    case 228u: goto L_089014D0;
    case 229u: goto L_089014DC;
    case 230u: goto L_089014E0;
    case 231u: goto L_089014E8;
    case 232u: goto L_089014F4;
    case 233u: goto L_089014FC;
    case 234u: goto L_08901508;
    case 235u: goto L_08901510;
    case 236u: goto L_08901528;
    case 237u: goto L_08901530;
    case 238u: goto L_0890154C;
    case 239u: goto L_089015A4;
    case 240u: goto L_089015B4;
    case 241u: goto L_089015C0;
    case 242u: goto L_089015C8;
    case 243u: goto L_089015D0;
    case 244u: goto L_089015E0;
    case 245u: goto L_089015E8;
    case 246u: goto L_089015FC;
    case 247u: goto L_08901614;
    case 248u: goto L_08901634;
    case 249u: goto L_0890163C;
    case 250u: goto L_08901648;
    case 251u: goto L_08901654;
    case 252u: goto L_08901660;
    case 253u: goto L_08901668;
    case 254u: goto L_08901680;
    case 255u: goto L_08901694;
    case 256u: goto L_089016A8;
    case 257u: goto L_089016B4;
    case 258u: goto L_089016C0;
    case 259u: goto L_089016D0;
    case 260u: goto L_089016D8;
    case 261u: goto L_089016F0;
    case 262u: goto L_08901704;
    case 263u: goto L_08901718;
    case 264u: goto L_0890172C;
    case 265u: goto L_0890173C;
    case 266u: goto L_08901740;
    case 267u: goto L_0890174C;
    case 268u: goto L_08901758;
    case 269u: goto L_0890176C;
    case 270u: goto L_08901778;
    case 271u: goto L_08901790;
    case 272u: goto L_08901798;
    case 273u: goto L_089017A4;
    case 274u: goto L_089017B0;
    case 275u: goto L_089017CC;
    case 276u: goto L_089017D4;
    case 277u: goto L_089017E0;
    case 278u: goto L_089017F8;
    case 279u: goto L_08901800;
    case 280u: goto L_08901804;
    case 281u: goto L_0890180C;
    case 282u: goto L_08901814;
    case 283u: goto L_08901828;
    case 284u: goto L_08901834;
    case 285u: goto L_0890184C;
    case 286u: goto L_08901864;
    case 287u: goto L_08901870;
    case 288u: goto L_0890188C;
    case 289u: goto L_0890189C;
    case 290u: goto L_089018B8;
    case 291u: goto L_089018C0;
    case 292u: goto L_089018D0;
    case 293u: goto L_089018DC;
    case 294u: goto L_08901930;
    case 295u: goto L_08901948;
    case 296u: goto L_08901950;
    case 297u: goto L_08901968;
    case 298u: goto L_0890197C;
    case 299u: goto L_089019A0;
    case 300u: goto L_089019A8;
    case 301u: goto L_089019BC;
    case 302u: goto L_089019C4;
    case 303u: goto L_089019D8;
    case 304u: goto L_089019E4;
    case 305u: goto L_089019EC;
    case 306u: goto L_089019F4;
    case 307u: goto L_08901A0C;
    case 308u: goto L_08901A14;
    case 309u: goto L_08901A20;
    case 310u: goto L_08901A3C;
    case 311u: goto L_08901A44;
    case 312u: goto L_08901A50;
    case 313u: goto L_08901A68;
    case 314u: goto L_08901A70;
    case 315u: goto L_08901A74;
    case 316u: goto L_08901A7C;
    case 317u: goto L_08901A84;
    case 318u: goto L_08901A98;
    case 319u: goto L_08901AA4;
    case 320u: goto L_08901ABC;
    case 321u: goto L_08901AD4;
    case 322u: goto L_08901AE0;
    case 323u: goto L_08901AF0;
    case 324u: goto L_08901B0C;
    case 325u: goto L_08901B14;
    case 326u: goto L_08901B24;
    case 327u: goto L_08901B44;
    case 328u: goto L_08901B54;
    case 329u: goto L_08901BA8;
    case 330u: goto L_08901BB0;
    case 331u: goto L_08901BBC;
    case 332u: goto L_08901BE0;
    case 333u: goto L_08901BE4;
    case 334u: goto L_08901BEC;
    case 335u: goto L_08901BF8;
    case 336u: goto L_08901C20;
    case 337u: goto L_08901C24;
    case 338u: goto L_08901C4C;
    case 339u: goto L_08901C50;
    case 340u: goto L_08901C78;
    case 341u: goto L_08901C7C;
    case 342u: goto L_08901C88;
    case 343u: goto L_08901C98;
    case 344u: goto L_08901CB0;
    case 345u: goto L_08901CB8;
    case 346u: goto L_08901CC4;
    case 347u: goto L_08901CD4;
    case 348u: goto L_08901CD8;
    case 349u: goto L_08901CE4;
    case 350u: goto L_08901D00;
    case 351u: goto L_08901D08;
    case 352u: goto L_08901D18;
    case 353u: goto L_08901D30;
    case 354u: goto L_08901D60;
    case 355u: goto L_08901DCC;
    case 356u: goto L_08901DDC;
    case 357u: goto L_08901DE8;
    case 358u: goto L_08901DF0;
    case 359u: goto L_08901DF8;
    case 360u: goto L_08901E08;
    case 361u: goto L_08901E10;
    case 362u: goto L_08901E24;
    case 363u: goto L_08901E3C;
    case 364u: goto L_08901E5C;
    case 365u: goto L_08901E64;
    case 366u: goto L_08901E70;
    case 367u: goto L_08901E7C;
    case 368u: goto L_08901E88;
    case 369u: goto L_08901E90;
    case 370u: goto L_08901EA8;
    case 371u: goto L_08901EBC;
    case 372u: goto L_08901ED0;
    case 373u: goto L_08901EDC;
    case 374u: goto L_08901EE8;
    case 375u: goto L_08901EF8;
    case 376u: goto L_08901F00;
    case 377u: goto L_08901F18;
    case 378u: goto L_08901F2C;
    case 379u: goto L_08901F40;
    case 380u: goto L_08901F54;
    case 381u: goto L_08901F64;
    case 382u: goto L_08901F68;
    case 383u: goto L_08901F74;
    case 384u: goto L_08901F80;
    case 385u: goto L_08901F94;
    case 386u: goto L_08901FA0;
    case 387u: goto L_08901FB8;
    case 388u: goto L_08901FC0;
    case 389u: goto L_08901FCC;
    case 390u: goto L_08901FD8;
    case 391u: goto L_08901FF4;
    case 392u: goto L_08901FFC;
    case 393u: goto L_08902008;
    case 394u: goto L_08902020;
    case 395u: goto L_08902028;
    case 396u: goto L_0890202C;
    case 397u: goto L_08902034;
    case 398u: goto L_0890203C;
    case 399u: goto L_08902050;
    case 400u: goto L_0890205C;
    case 401u: goto L_08902074;
    case 402u: goto L_0890208C;
    case 403u: goto L_08902098;
    case 404u: goto L_089020B4;
    case 405u: goto L_089020C4;
    case 406u: goto L_089020E0;
    case 407u: goto L_089020E8;
    case 408u: goto L_089020F8;
    case 409u: goto L_08902104;
    case 410u: goto L_08902158;
    case 411u: goto L_08902188;
    case 412u: goto L_08902190;
    case 413u: goto L_089021A8;
    case 414u: goto L_089021BC;
    case 415u: goto L_089021E0;
    case 416u: goto L_089021E8;
    case 417u: goto L_089021FC;
    case 418u: goto L_08902204;
    case 419u: goto L_08902218;
    case 420u: goto L_08902224;
    case 421u: goto L_0890222C;
    case 422u: goto L_08902234;
    case 423u: goto L_0890224C;
    case 424u: goto L_08902254;
    case 425u: goto L_08902260;
    case 426u: goto L_0890227C;
    case 427u: goto L_08902284;
    case 428u: goto L_08902290;
    case 429u: goto L_089022A8;
    case 430u: goto L_089022B0;
    case 431u: goto L_089022B4;
    case 432u: goto L_089022BC;
    case 433u: goto L_089022C4;
    case 434u: goto L_089022D8;
    case 435u: goto L_089022E4;
    case 436u: goto L_089022FC;
    case 437u: goto L_08902314;
    case 438u: goto L_08902320;
    case 439u: goto L_08902330;
    case 440u: goto L_0890234C;
    case 441u: goto L_08902354;
    case 442u: goto L_08902364;
    case 443u: goto L_089023A4;
    case 444u: goto L_089023B4;
    case 445u: goto L_08902408;
    case 446u: goto L_08902410;
    case 447u: goto L_0890241C;
    case 448u: goto L_0890245C;
    case 449u: goto L_08902460;
    case 450u: goto L_08902468;
    case 451u: goto L_08902474;
    case 452u: goto L_0890249C;
    case 453u: goto L_089024A0;
    case 454u: goto L_089024C8;
    case 455u: goto L_089024CC;
    case 456u: goto L_089024F4;
    case 457u: goto L_089024F8;
    case 458u: goto L_08902504;
    case 459u: goto L_08902514;
    case 460u: goto L_0890252C;
    case 461u: goto L_08902534;
    case 462u: goto L_08902540;
    case 463u: goto L_08902550;
    case 464u: goto L_08902554;
    case 465u: goto L_08902560;
    case 466u: goto L_0890257C;
    case 467u: goto L_08902584;
    case 468u: goto L_08902594;
    case 469u: goto L_089025AC;
    case 470u: goto L_089025E0;
    case 471u: goto L_089025F8;
    case 472u: goto L_0890260C;
    case 473u: goto L_08902634;
    case 474u: goto L_0890264C;
    case 475u: goto L_08902674;
    case 476u: goto L_0890268C;
    case 477u: goto L_089026A4;
    case 478u: goto L_089026B0;
    case 479u: goto L_089026C8;
    case 480u: goto L_089026E0;
    case 481u: goto L_08902708;
    case 482u: goto L_08902724;
    case 483u: goto L_08902740;
    case 484u: goto L_08902748;
    case 485u: goto L_08902754;
    case 486u: goto L_08902768;
    case 487u: goto L_08902774;
    case 488u: goto L_08902788;
    case 489u: goto L_089027AC;
    case 490u: goto L_089027BC;
    case 491u: goto L_089027D0;
    case 492u: goto L_089027E0;
    case 493u: goto L_089027E8;
    case 494u: goto L_08902810;
    case 495u: goto L_0890282C;
    case 496u: goto L_08902834;
    case 497u: goto L_08902840;
    case 498u: goto L_0890284C;
    case 499u: goto L_08902874;
    case 500u: goto L_0890287C;
    case 501u: goto L_08902898;
    case 502u: goto L_089028A4;
    case 503u: goto L_089028BC;
    case 504u: goto L_089028D0;
    case 505u: goto L_089028F4;
    case 506u: goto L_08902900;
    case 507u: goto L_08902908;
    case 508u: goto L_08902938;
    case 509u: goto L_08902944;
    case 510u: goto L_08902960;
    case 511u: goto L_0890296C;
    case 512u: goto L_08902974;
    case 513u: goto L_0890297C;
    case 514u: goto L_08902998;
    case 515u: goto L_089029AC;
    case 516u: goto L_089029BC;
    case 517u: goto L_089029CC;
    case 518u: goto L_089029EC;
    case 519u: goto L_089029F4;
    case 520u: goto L_08902A04;
    case 521u: goto L_08902A0C;
    case 522u: goto L_08902A20;
    case 523u: goto L_08902A38;
    case 524u: goto L_08902A60;
    case 525u: goto L_08902A70;
    case 526u: goto L_08902A7C;
    case 527u: goto L_08902A88;
    case 528u: goto L_08902AA0;
    case 529u: goto L_08902AA4;
    case 530u: goto L_08902AB8;
    case 531u: goto L_08902AD0;
    case 532u: goto L_08902AD8;
    case 533u: goto L_08902ADC;
    case 534u: goto L_08902AE8;
    case 535u: goto L_08902AF8;
    case 536u: goto L_08902B0C;
    case 537u: goto L_08902B18;
    case 538u: goto L_08902B34;
    case 539u: goto L_08902B48;
    case 540u: goto L_08902B80;
    case 541u: goto L_08902B98;
    case 542u: goto L_08902BC0;
    case 543u: goto L_08902BE8;
    case 544u: goto L_08902BF4;
    case 545u: goto L_08902C04;
    case 546u: goto L_08902C08;
    case 547u: goto L_08902C1C;
    case 548u: goto L_08902C2C;
    case 549u: goto L_08902C30;
    case 550u: goto L_08902C54;
    case 551u: goto L_08902C60;
    case 552u: goto L_08902C80;
    case 553u: goto L_08902C9C;
    case 554u: goto L_08902CAC;
    case 555u: goto L_08902CB0;
    case 556u: goto L_08902CC4;
    case 557u: goto L_08902CD4;
    case 558u: goto L_08902D08;
    case 559u: goto L_08902D1C;
    case 560u: goto L_08902D44;
    case 561u: goto L_08902D64;
    case 562u: goto L_08902D6C;
    case 563u: goto L_08902D78;
    case 564u: goto L_08902D8C;
    case 565u: goto L_08902D94;
    case 566u: goto L_08902DA0;
    case 567u: goto L_08902DA8;
    case 568u: goto L_08902DB4;
    case 569u: goto L_08902DD4;
    case 570u: goto L_08902DF4;
    case 571u: goto L_08902DFC;
    case 572u: goto L_08902E0C;
    case 573u: goto L_08902E30;
    case 574u: goto L_08902E34;
    case 575u: goto L_08902E38;
    case 576u: goto L_08902E40;
    case 577u: goto L_08902E4C;
    case 578u: goto L_08902E64;
    case 579u: goto L_08902E6C;
    case 580u: goto L_08902E7C;
    case 581u: goto L_08902E90;
    case 582u: goto L_08902E94;
    case 583u: goto L_08902E9C;
    case 584u: goto L_08902EC8;
    case 585u: goto L_08902EE4;
    case 586u: goto L_08902EE8;
    case 587u: goto L_08902EF8;
    case 588u: goto L_08902F0C;
    case 589u: goto L_08902F14;
    case 590u: goto L_08902F2C;
    case 591u: goto L_08902F54;
    case 592u: goto L_08902F60;
    case 593u: goto L_08902F70;
    case 594u: goto L_08902F90;
    case 595u: goto L_08902F98;
    case 596u: goto L_08902FA0;
    case 597u: goto L_08902FC0;
    case 598u: goto L_08902FD8;
    case 599u: goto L_08902FE8;
    case 600u: goto L_08902FF8;
    case 601u: goto L_08903000;
    case 602u: goto L_08903018;
    case 603u: goto L_08903020;
    case 604u: goto L_08903034;
    case 605u: goto L_08903040;
    case 606u: goto L_0890307C;
    case 607u: goto L_08903088;
    case 608u: goto L_089030A8;
    case 609u: goto L_089030C0;
    case 610u: goto L_089030C8;
    case 611u: goto L_089030D8;
    case 612u: goto L_089030FC;
    case 613u: goto L_08903100;
    case 614u: goto L_0890311C;
    case 615u: goto L_08903164;
    case 616u: goto L_08903180;
    case 617u: goto L_08903188;
    case 618u: goto L_089031AC;
    case 619u: goto L_089031B4;
    case 620u: goto L_089031E0;
    case 621u: goto L_089031FC;
    case 622u: goto L_08903208;
    case 623u: goto L_0890324C;
    case 624u: goto L_08903258;
    case 625u: goto L_0890326C;
    case 626u: goto L_08903294;
    case 627u: goto L_089032A0;
    case 628u: goto L_089032A4;
    case 629u: goto L_089032B0;
    case 630u: goto L_089032B4;
    case 631u: goto L_089032BC;
    case 632u: goto L_089032EC;
    case 633u: goto L_089032F8;
    case 634u: goto L_08903304;
    case 635u: goto L_08903318;
    case 636u: goto L_0890332C;
    case 637u: goto L_08903340;
    case 638u: goto L_0890334C;
    case 639u: goto L_08903358;
    case 640u: goto L_0890336C;
    case 641u: goto L_08903394;
    case 642u: goto L_089033A8;
    case 643u: goto L_089033AC;
    case 644u: goto L_089033B8;
    case 645u: goto L_089033C0;
    case 646u: goto L_089033D8;
    case 647u: goto L_08903400;
    case 648u: goto L_08903418;
    case 649u: goto L_08903424;
    case 650u: goto L_08903438;
    case 651u: goto L_0890344C;
    case 652u: goto L_0890345C;
    case 653u: goto L_08903464;
    case 654u: goto L_08903470;
    case 655u: goto L_0890348C;
    case 656u: goto L_089034A4;
    case 657u: goto L_089034B4;
    case 658u: goto L_089034B8;
    case 659u: goto L_089034EC;
    case 660u: goto L_089034FC;
    case 661u: goto L_08903514;
    case 662u: goto L_08903518;
    case 663u: goto L_08903520;
    case 664u: goto L_0890352C;
    case 665u: goto L_08903534;
    case 666u: goto L_08903544;
    case 667u: goto L_08903554;
    case 668u: goto L_08903560;
    case 669u: goto L_08903568;
    case 670u: goto L_08903578;
    case 671u: goto L_089035A0;
    case 672u: goto L_089035B4;
    case 673u: goto L_089035C4;
    case 674u: goto L_089035D0;
    case 675u: goto L_089035D8;
    case 676u: goto L_089035E4;
    case 677u: goto L_089035EC;
    case 678u: goto L_08903600;
    case 679u: goto L_08903614;
    case 680u: goto L_0890362C;
    case 681u: goto L_08903630;
    case 682u: goto L_08903638;
    case 683u: goto L_08903650;
    case 684u: goto L_0890365C;
    case 685u: goto L_08903660;
    case 686u: goto L_08903674;
    case 687u: goto L_0890368C;
    case 688u: goto L_0890369C;
    case 689u: goto L_089036A8;
    case 690u: goto L_089036B0;
    case 691u: goto L_089036BC;
    case 692u: goto L_089036C4;
    case 693u: goto L_089036D8;
    case 694u: goto L_089036EC;
    case 695u: goto L_08903704;
    case 696u: goto L_08903708;
    case 697u: goto L_08903710;
    case 698u: goto L_08903728;
    case 699u: goto L_08903734;
    case 700u: goto L_08903738;
    case 701u: goto L_08903748;
    case 702u: goto L_08903750;
    case 703u: goto L_0890375C;
    case 704u: goto L_08903768;
    case 705u: goto L_08903770;
    case 706u: goto L_0890377C;
    case 707u: goto L_08903788;
    case 708u: goto L_089037A4;
    case 709u: goto L_089037CC;
    case 710u: goto L_089037D8;
    case 711u: goto L_089037E4;
    case 712u: goto L_089037F0;
    case 713u: goto L_08903808;
    case 714u: goto L_08903818;
    case 715u: goto L_08903824;
    case 716u: goto L_0890382C;
    case 717u: goto L_08903834;
    case 718u: goto L_0890384C;
    case 719u: goto L_0890385C;
    case 720u: goto L_08903868;
    case 721u: goto L_08903870;
    case 722u: goto L_0890387C;
    case 723u: goto L_08903888;
    case 724u: goto L_0890389C;
    case 725u: goto L_089038A4;
    case 726u: goto L_089038B0;
    case 727u: goto L_089038BC;
    case 728u: goto L_089038DC;
    case 729u: goto L_089038F4;
    case 730u: goto L_089038F8;
    case 731u: goto L_08903900;
    case 732u: goto L_0890390C;
    case 733u: goto L_08903918;
    case 734u: goto L_08903930;
    case 735u: goto L_0890393C;
    case 736u: goto L_0890394C;
    case 737u: goto L_08903958;
    case 738u: goto L_08903960;
    case 739u: goto L_0890396C;
    case 740u: goto L_08903974;
    case 741u: goto L_08903988;
    case 742u: goto L_0890399C;
    case 743u: goto L_089039B4;
    case 744u: goto L_089039B8;
    case 745u: goto L_089039C0;
    case 746u: goto L_089039D8;
    case 747u: goto L_089039E4;
    case 748u: goto L_089039E8;
    case 749u: goto L_089039FC;
    case 750u: goto L_08903A18;
    case 751u: goto L_08903A28;
    case 752u: goto L_08903A40;
    case 753u: goto L_08903A44;
    case 754u: goto L_08903A4C;
    case 755u: goto L_08903A64;
    case 756u: goto L_08903A70;
    case 757u: goto L_08903A74;
    case 758u: goto L_08903A88;
    case 759u: goto L_08903A90;
    case 760u: goto L_08903AA8;
    case 761u: goto L_08903AB4;
    case 762u: goto L_08903ABC;
    case 763u: goto L_08903AD8;
    case 764u: goto L_08903B04;
    case 765u: goto L_08903B10;
    case 766u: goto L_08903B20;
    case 767u: goto L_08903B30;
    case 768u: goto L_08903B44;
    case 769u: goto L_08903B54;
    case 770u: goto L_08903B68;
    case 771u: goto L_08903B78;
    case 772u: goto L_08903B90;
    case 773u: goto L_08903BAC;
    case 774u: goto L_08903BC0;
    case 775u: goto L_08903BF0;
    case 776u: goto L_08903C04;
    case 777u: goto L_08903C18;
    case 778u: goto L_08903C4C;
    case 779u: goto L_08903C68;
    case 780u: goto L_08903C88;
    case 781u: goto L_08903C9C;
    case 782u: goto L_08903CB4;
    case 783u: goto L_08903CBC;
    case 784u: goto L_08903CC0;
    case 785u: goto L_08903CCC;
    case 786u: goto L_08903CDC;
    case 787u: goto L_08903CF0;
    case 788u: goto L_08903CFC;
    case 789u: goto L_08903D1C;
    case 790u: goto L_08903D5C;
    case 791u: goto L_08903D68;
    case 792u: goto L_08903D70;
    case 793u: goto L_08903D7C;
    case 794u: goto L_08903D84;
    case 795u: goto L_08903D98;
    case 796u: goto L_08903DAC;
    case 797u: goto L_08903DB8;
    case 798u: goto L_08903DC0;
    case 799u: goto L_08903DC8;
    case 800u: goto L_08903DD8;
    case 801u: goto L_08903DF4;
    case 802u: goto L_08903E00;
    case 803u: goto L_08903E14;
    case 804u: goto L_08903E20;
    case 805u: goto L_08903E34;
    case 806u: goto L_08903E40;
    case 807u: goto L_08903E4C;
    case 808u: goto L_08903E58;
    case 809u: goto L_08903E74;
    case 810u: goto L_08903E84;
    case 811u: goto L_08903E90;
    case 812u: goto L_08903E98;
    case 813u: goto L_08903EA4;
    case 814u: goto L_08903EAC;
    case 815u: goto L_08903EC0;
    case 816u: goto L_08903ED4;
    case 817u: goto L_08903EE0;
    case 818u: goto L_08903EE8;
    case 819u: goto L_08903EF0;
    case 820u: goto L_08903F00;
    case 821u: goto L_08903F24;
    case 822u: goto L_08903F74;
    case 823u: goto L_08903F90;
    case 824u: goto L_08903F9C;
    case 825u: goto L_08903FC8;
    case 826u: goto L_08903FD4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08900000:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08900030:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08900060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 428u, 0x088FE728u>(ctx, &aot_mem) && ctx.pc == 0x08900060u) goto L_08900060;
    return;
L_08900060:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900124;
      }
      goto L_08900070;
    }
L_08900070:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08900090u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08900090u) goto L_08900090;
    return;
L_08900090:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08900124;
      }
      goto L_08900098;
    }
L_08900098:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08900104;
      }
      goto L_089000A4;
    }
L_089000A4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(220)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089000E0;
      }
      goto L_089000B0;
    }
L_089000B0:
    ctx.set_gpr(2, ctx.gpr[16] & 65535u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(476)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089000D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089000D8u) goto L_089000D8;
    return;
L_089000D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089000FC;
      }
      goto L_089000E0;
    }
L_089000E0:
    ctx.set_gpr(2, ctx.gpr[16] & 65535u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089000FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 453u, 0x0892DF00u>(ctx, &aot_mem) && ctx.pc == 0x089000FCu) goto L_089000FC;
    return;
L_089000FC:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[2] & 65535u);
    goto L_08900104;
L_08900104:
    ctx.set_gpr(3, ctx.gpr[16] & 65535u);
    ctx.set_gpr(2, ctx.gpr[20] & 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089000A4;
      }
      goto L_08900118;
    }
L_08900118:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08900128;
      }
      goto L_08900124;
    }
L_08900124:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08900128;
L_08900128:
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
L_0890014C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
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
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(22, ctx.gpr[8] + 0u);
    ctx.set_gpr(23, ctx.gpr[9] + 0u);
    ctx.set_gpr(30, ctx.gpr[10] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[11]);
    ctx.set_gpr(31, 0x0890019Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 428u, 0x088FE728u>(ctx, &aot_mem) && ctx.pc == 0x0890019Cu) goto L_0890019C;
    return;
L_0890019C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890027C;
      }
      goto L_089001B0;
    }
L_089001B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, ctx.gpr[22] + 0u);
    ctx.set_gpr(9, ctx.gpr[23] + 0u);
    ctx.set_gpr(10, ctx.gpr[30] + 0u);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089001F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089001F0u) goto L_089001F0;
    return;
L_089001F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890027C;
      }
      goto L_089001F8;
    }
L_089001F8:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08900264;
      }
      goto L_08900204;
    }
L_08900204:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(220)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900240;
      }
      goto L_08900210;
    }
L_08900210:
    ctx.set_gpr(2, ctx.gpr[17] & 65535u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(476)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08900238u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08900238u) goto L_08900238;
    return;
L_08900238:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890025C;
      }
      goto L_08900240;
    }
L_08900240:
    ctx.set_gpr(2, ctx.gpr[17] & 65535u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0890025Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 453u, 0x0892DF00u>(ctx, &aot_mem) && ctx.pc == 0x0890025Cu) goto L_0890025C;
    return;
L_0890025C:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[2] & 65535u);
    goto L_08900264;
L_08900264:
    ctx.set_gpr(3, ctx.gpr[17] & 65535u);
    ctx.set_gpr(2, ctx.gpr[21] & 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08900204;
      }
      goto L_08900278;
    }
L_08900278:
    ctx.set_gpr(17, 0u + 0u);
    goto L_0890027C;
L_0890027C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089002B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(21, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    ctx.set_gpr(31, 0x089002ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 428u, 0x088FE728u>(ctx, &aot_mem) && ctx.pc == 0x089002ECu) goto L_089002EC;
    return;
L_089002EC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089003B4;
      }
      goto L_089002FC;
    }
L_089002FC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08900320u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08900320u) goto L_08900320;
    return;
L_08900320:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089003B4;
      }
      goto L_08900328;
    }
L_08900328:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08900394;
      }
      goto L_08900334;
    }
L_08900334:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(220)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900370;
      }
      goto L_08900340;
    }
L_08900340:
    ctx.set_gpr(2, ctx.gpr[16] & 65535u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(476)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08900368u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08900368u) goto L_08900368;
    return;
L_08900368:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890038C;
      }
      goto L_08900370;
    }
L_08900370:
    ctx.set_gpr(2, ctx.gpr[16] & 65535u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0890038Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 453u, 0x0892DF00u>(ctx, &aot_mem) && ctx.pc == 0x0890038Cu) goto L_0890038C;
    return;
L_0890038C:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[2] & 65535u);
    goto L_08900394;
L_08900394:
    ctx.set_gpr(3, ctx.gpr[16] & 65535u);
    ctx.set_gpr(2, ctx.gpr[20] & 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08900334;
      }
      goto L_089003A8;
    }
L_089003A8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089003B8;
      }
      goto L_089003B4;
    }
L_089003B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089003B8;
L_089003B8:
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
L_089003E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
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
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(22, ctx.gpr[8] + 0u);
    ctx.set_gpr(23, ctx.gpr[9] + 0u);
    ctx.set_gpr(30, ctx.gpr[10] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[11]);
    ctx.set_gpr(31, 0x08900430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 428u, 0x088FE728u>(ctx, &aot_mem) && ctx.pc == 0x08900430u) goto L_08900430;
    return;
L_08900430:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890051C;
      }
      goto L_08900444;
    }
L_08900444:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, ctx.gpr[22] + 0u);
    ctx.set_gpr(9, ctx.gpr[23] + 0u);
    ctx.set_gpr(10, ctx.gpr[30] + 0u);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08900490u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08900490u) goto L_08900490;
    return;
L_08900490:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890051C;
      }
      goto L_08900498;
    }
L_08900498:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08900504;
      }
      goto L_089004A4;
    }
L_089004A4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(220)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089004E0;
      }
      goto L_089004B0;
    }
L_089004B0:
    ctx.set_gpr(2, ctx.gpr[17] & 65535u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(476)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089004D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089004D8u) goto L_089004D8;
    return;
L_089004D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089004FC;
      }
      goto L_089004E0;
    }
L_089004E0:
    ctx.set_gpr(2, ctx.gpr[17] & 65535u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089004FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 453u, 0x0892DF00u>(ctx, &aot_mem) && ctx.pc == 0x089004FCu) goto L_089004FC;
    return;
L_089004FC:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[2] & 65535u);
    goto L_08900504;
L_08900504:
    ctx.set_gpr(3, ctx.gpr[17] & 65535u);
    ctx.set_gpr(2, ctx.gpr[21] & 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089004A4;
      }
      goto L_08900518;
    }
L_08900518:
    ctx.set_gpr(17, 0u + 0u);
    goto L_0890051C;
L_0890051C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08900554:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08900580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 428u, 0x088FE728u>(ctx, &aot_mem) && ctx.pc == 0x08900580u) goto L_08900580;
    return;
L_08900580:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900618;
      }
      goto L_08900590;
    }
L_08900590:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089005F0;
      }
      goto L_0890059C;
    }
L_0890059C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(220)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089005D4;
      }
      goto L_089005A8;
    }
L_089005A8:
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(476)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089005CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089005CCu) goto L_089005CC;
    return;
L_089005CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089005EC;
      }
      goto L_089005D4;
    }
L_089005D4:
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089005ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 465u, 0x0892E010u>(ctx, &aot_mem) && ctx.pc == 0x089005ECu) goto L_089005EC;
    return;
L_089005EC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089005F0;
L_089005F0:
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890059C;
      }
      goto L_089005FC;
    }
L_089005FC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08900618u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08900618u) goto L_08900618;
    return;
L_08900618:
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
L_0890063C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(23, ctx.gpr[8] + 0u);
    ctx.set_gpr(30, ctx.gpr[9] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[11]);
    ctx.set_gpr(31, 0x08900690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 428u, 0x088FE728u>(ctx, &aot_mem) && ctx.pc == 0x08900690u) goto L_08900690;
    return;
L_08900690:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900840;
      }
      goto L_089006A0;
    }
L_089006A0:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08900700;
      }
      goto L_089006AC;
    }
L_089006AC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(220)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089006E4;
      }
      goto L_089006B8;
    }
L_089006B8:
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(476)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089006DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089006DCu) goto L_089006DC;
    return;
L_089006DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089006FC;
      }
      goto L_089006E4;
    }
L_089006E4:
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x089006FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 465u, 0x0892E010u>(ctx, &aot_mem) && ctx.pc == 0x089006FCu) goto L_089006FC;
    return;
L_089006FC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08900700;
L_08900700:
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089006AC;
      }
      goto L_0890070C;
    }
L_0890070C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, ctx.gpr[23] + 0u);
    ctx.set_gpr(9, ctx.gpr[30] + 0u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08900748u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08900748u) goto L_08900748;
    return;
L_08900748:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900840;
      }
      goto L_08900750;
    }
L_08900750:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900840;
      }
      goto L_08900758;
    }
L_08900758:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08900790;
      }
      goto L_0890076C;
    }
L_0890076C:
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890078C;
      }
      goto L_08900780;
    }
L_08900780:
    ctx.set_gpr(31, 0x08900788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 442u, 0x08929F30u>(ctx, &aot_mem) && ctx.pc == 0x08900788u) goto L_08900788;
    return;
L_08900788:
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    goto L_0890078C;
L_0890078C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08900790;
L_08900790:
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890076C;
      }
      goto L_0890079C;
    }
L_0890079C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089007B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089007B0u) goto L_089007B0;
    return;
L_089007B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900840;
      }
      goto L_089007B8;
    }
L_089007B8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089007CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089007CCu) goto L_089007CC;
    return;
L_089007CC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[23] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x0890080Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 1009u, 0x0891BF54u>(ctx, &aot_mem) && ctx.pc == 0x0890080Cu) goto L_0890080C;
    return;
L_0890080C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08900830u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08900830u) goto L_08900830;
    return;
L_08900830:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08900840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x08900840u) goto L_08900840;
    return;
L_08900840:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08900874:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089008A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 428u, 0x088FE728u>(ctx, &aot_mem) && ctx.pc == 0x089008A0u) goto L_089008A0;
    return;
L_089008A0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900970;
      }
      goto L_089008B0;
    }
L_089008B0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089008C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089008C8u) goto L_089008C8;
    return;
L_089008C8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900970;
      }
      goto L_089008D4;
    }
L_089008D4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900924;
      }
      goto L_089008E0;
    }
L_089008E0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089008F8u);
    // nop
    goto L_08900AF4;
L_089008F8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(205)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900918;
      }
      goto L_08900904;
    }
L_08900904:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08900918u);
    // nop
    goto L_08900998;
L_08900918:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08900924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 508u, 0x088FED00u>(ctx, &aot_mem) && ctx.pc == 0x08900924u) goto L_08900924;
    return;
L_08900924:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(220)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900954;
      }
      goto L_08900930;
    }
L_08900930:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(476)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890094Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890094Cu) goto L_0890094C;
    return;
L_0890094C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08900964;
      }
      goto L_08900954;
    }
L_08900954:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08900964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 453u, 0x0892DF00u>(ctx, &aot_mem) && ctx.pc == 0x08900964u) goto L_08900964;
    return;
L_08900964:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08900974;
      }
      goto L_08900970;
    }
L_08900970:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08900974;
L_08900974:
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
L_08900998:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900A74;
      }
      goto L_089009A0;
    }
L_089009A0:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30828)));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30828), ctx.gpr[6]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30836)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30836), ctx.gpr[4]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30840)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089009E4;
      }
      goto L_089009DC;
    }
L_089009DC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30840), ctx.gpr[4]);
    goto L_089009E4;
L_089009E4:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30844)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30844), ctx.gpr[4]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30852)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30852), ctx.gpr[4]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30856)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900A28;
      }
      goto L_08900A20;
    }
L_08900A20:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30856), ctx.gpr[4]);
    goto L_08900A28;
L_08900A28:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30860)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30860), ctx.gpr[4]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30868)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30868), ctx.gpr[4]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30872)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900AEC;
      }
      goto L_08900A64;
    }
L_08900A64:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30872), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08900AEC;
      }
      goto L_08900A74;
    }
L_08900A74:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30832)));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30832), ctx.gpr[6]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30836)));
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30836), ctx.gpr[4]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30848)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30848), ctx.gpr[4]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30852)));
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30852), ctx.gpr[4]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30864)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30864), ctx.gpr[4]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30868)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30868), ctx.gpr[4]);
    goto L_08900AEC;
L_08900AEC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08900AF4:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900B88;
      }
      goto L_08900AFC;
    }
L_08900AFC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(156), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(164), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900B28;
      }
      goto L_08900B24;
    }
L_08900B24:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    goto L_08900B28;
L_08900B28:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(172), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(180), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900B54;
      }
      goto L_08900B50;
    }
L_08900B50:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), ctx.gpr[5]);
    goto L_08900B54;
L_08900B54:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900BD0;
      }
      goto L_08900B7C;
    }
L_08900B7C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(200), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08900BD0;
      }
      goto L_08900B88;
    }
L_08900B88:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(160), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(164), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(176), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(180), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), ctx.gpr[3]);
    goto L_08900BD0;
L_08900BD0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08900BD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(22, ctx.gpr[7] + 0u);
    ctx.set_gpr(23, ctx.gpr[8] + 0u);
    ctx.set_gpr(30, ctx.gpr[9] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[11]);
    ctx.set_gpr(31, 0x08900C2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 428u, 0x088FE728u>(ctx, &aot_mem) && ctx.pc == 0x08900C2Cu) goto L_08900C2C;
    return;
L_08900C2C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900DC8;
      }
      goto L_08900C40;
    }
L_08900C40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(11, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[22] + 0u);
    ctx.set_gpr(8, ctx.gpr[23] + 0u);
    ctx.set_gpr(9, ctx.gpr[30] + 0u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(200)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08900C74u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08900C74u) goto L_08900C74;
    return;
L_08900C74:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900DC8;
      }
      goto L_08900C80;
    }
L_08900C80:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900CD0;
      }
      goto L_08900C8C;
    }
L_08900C8C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08900CA4u);
    // nop
    goto L_08900AF4;
L_08900CA4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(205)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900CC4;
      }
      goto L_08900CB0;
    }
L_08900CB0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08900CC4u);
    // nop
    goto L_08900998;
L_08900CC4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08900CD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 508u, 0x088FED00u>(ctx, &aot_mem) && ctx.pc == 0x08900CD0u) goto L_08900CD0;
    return;
L_08900CD0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(220)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900D00;
      }
      goto L_08900CDC;
    }
L_08900CDC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(476)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08900CF8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08900CF8u) goto L_08900CF8;
    return;
L_08900CF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08900D10;
      }
      goto L_08900D00;
    }
L_08900D00:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08900D10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 453u, 0x0892DF00u>(ctx, &aot_mem) && ctx.pc == 0x08900D10u) goto L_08900D10;
    return;
L_08900D10:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08900D24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08900D24u) goto L_08900D24;
    return;
L_08900D24:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900DC8;
      }
      goto L_08900D2C;
    }
L_08900D2C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(300)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08900D40u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08900D40u) goto L_08900D40;
    return;
L_08900D40:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08900D58u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08900D58u) goto L_08900D58;
    return;
L_08900D58:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[30]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(9, ctx.gpr[22] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08900D94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 1009u, 0x0891BF54u>(ctx, &aot_mem) && ctx.pc == 0x08900D94u) goto L_08900D94;
    return;
L_08900D94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08900DB8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08900DB8u) goto L_08900DB8;
    return;
L_08900DB8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08900DC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x08900DC8u) goto L_08900DC8;
    return;
L_08900DC8:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08900E00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(524)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08900E20u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08900E20u) goto L_08900E20;
    return;
L_08900E20:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08900E30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    ctx.set_gpr(22, ctx.gpr[10] + 0u);
    ctx.set_gpr(23, ctx.gpr[11] + 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900F50;
      }
      goto L_08900E80;
    }
L_08900E80:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08900E90u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08900E90u) goto L_08900E90;
    return;
L_08900E90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08900F14;
      }
      goto L_08900E98;
    }
L_08900E98:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08900EACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08900EACu) goto L_08900EAC;
    return;
L_08900EAC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[18] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08900EE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 1009u, 0x0891BF54u>(ctx, &aot_mem) && ctx.pc == 0x08900EE4u) goto L_08900EE4;
    return;
L_08900EE4:
    ctx.set_gpr(7, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08900F04u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08900F04u) goto L_08900F04;
    return;
L_08900F04:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08900F14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x08900F14u) goto L_08900F14;
    return;
L_08900F14:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.set_gpr(2, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(9, ctx.gpr[18] + 0u);
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    ctx.set_gpr(11, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(528)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08900F50u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08900F50u) goto L_08900F50;
    return;
L_08900F50:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08900F80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    ctx.set_gpr(22, ctx.gpr[10] + 0u);
    ctx.set_gpr(23, ctx.gpr[11] + 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089010A0;
      }
      goto L_08900FD0;
    }
L_08900FD0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08900FE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08900FE0u) goto L_08900FE0;
    return;
L_08900FE0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08901064;
      }
      goto L_08900FE8;
    }
L_08900FE8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08900FFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08900FFCu) goto L_08900FFC;
    return;
L_08900FFC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[18] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08901034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 1009u, 0x0891BF54u>(ctx, &aot_mem) && ctx.pc == 0x08901034u) goto L_08901034;
    return;
L_08901034:
    ctx.set_gpr(7, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08901054u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08901054u) goto L_08901054;
    return;
L_08901054:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08901064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x08901064u) goto L_08901064;
    return;
L_08901064:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.set_gpr(2, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(9, ctx.gpr[18] + 0u);
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    ctx.set_gpr(11, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(528)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089010A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089010A0u) goto L_089010A0;
    return;
L_089010A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089010D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08901124;
      }
      goto L_089010F0;
    }
L_089010F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08901150;
      }
      goto L_089010FC;
    }
L_089010FC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(484)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08901110u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08901110u) goto L_08901110;
    return;
L_08901110:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08901150;
      }
      goto L_08901118;
    }
L_08901118:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08901154;
      }
      goto L_08901124;
    }
L_08901124:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08901134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 439u, 0x0892DE28u>(ctx, &aot_mem) && ctx.pc == 0x08901134u) goto L_08901134;
    return;
L_08901134:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08901150;
      }
      goto L_0890113C;
    }
L_0890113C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, ctx.gpr[2] ^ ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08901154;
      }
      goto L_08901150;
    }
L_08901150:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08901154;
L_08901154:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08901168:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08901188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 428u, 0x088FE728u>(ctx, &aot_mem) && ctx.pc == 0x08901188u) goto L_08901188;
    return;
L_08901188:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089011B4;
      }
      goto L_08901194;
    }
L_08901194:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(476)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089011ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089011ACu) goto L_089011AC;
    return;
L_089011AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089011B8;
      }
      goto L_089011B4;
    }
L_089011B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089011B8;
L_089011B8:
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
L_089011D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08901234;
      }
      goto L_089011F0;
    }
L_089011F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(31, 0x089011FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089011FCu) goto L_089011FC;
    return;
L_089011FC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08901234;
      }
      goto L_08901208;
    }
L_08901208:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(212));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08901218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08901218u) goto L_08901218;
    return;
L_08901218:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(480)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08901230u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08901230u) goto L_08901230;
    return;
L_08901230:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(220), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08901234;
L_08901234:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(220)));
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
L_08901250:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890127C;
      }
      goto L_08901264;
    }
L_08901264:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(484)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08901274u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08901274u) goto L_08901274;
    return;
L_08901274:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08901280;
      }
      goto L_0890127C;
    }
L_0890127C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08901280;
L_08901280:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08901290:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089012BC;
      }
      goto L_089012A4;
    }
L_089012A4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(372)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089012B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089012B4u) goto L_089012B4;
    return;
L_089012B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089012C0;
      }
      goto L_089012BC;
    }
L_089012BC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089012C0;
L_089012C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089012D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089012F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 428u, 0x088FE728u>(ctx, &aot_mem) && ctx.pc == 0x089012F4u) goto L_089012F4;
    return;
L_089012F4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08901328;
      }
      goto L_08901300;
    }
L_08901300:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08901328;
      }
      goto L_0890130C;
    }
L_0890130C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15032));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08901320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08901320u) goto L_08901320;
    return;
L_08901320:
    ctx.set_gpr(31, 0x08901328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08901328u) goto L_08901328;
    return;
L_08901328:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890134C;
      }
      goto L_08901330;
    }
L_08901330:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08901344u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08901344u) goto L_08901344;
    return;
L_08901344:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08901354;
      }
      goto L_0890134C;
    }
L_0890134C:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15024));
    goto L_08901354;
L_08901354:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15016));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08901368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08901368u) goto L_08901368;
    return;
L_08901368:
    ctx.set_gpr(31, 0x08901370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08901370u) goto L_08901370;
    return;
L_08901370:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08901380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 861u, 0x0892F91Cu>(ctx, &aot_mem) && ctx.pc == 0x08901380u) goto L_08901380;
    return;
L_08901380:
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
L_0890139C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089013B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 425u, 0x0892DD18u>(ctx, &aot_mem) && ctx.pc == 0x089013B4u) goto L_089013B4;
    return;
L_089013B4:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(205), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), ctx.gpr[16]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089013D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089013E0u);
    // nop
    goto L_089013F0;
L_089013E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089013F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089014F4;
      }
      goto L_08901414;
    }
L_08901414:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(228)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(224), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(228), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089014E0;
      }
      goto L_08901428;
    }
L_08901428:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08901440;
      }
      goto L_08901434;
    }
L_08901434:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08901440;
L_08901440:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[3] << 10u);
    ctx.set_gpr(4, ctx.gpr[4] >> 10u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089014A0;
      }
      goto L_08901458;
    }
L_08901458:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08901488;
      }
      goto L_08901460;
    }
L_08901460:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08901488;
      }
      goto L_0890147C;
    }
L_0890147C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08901488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08901488u) goto L_08901488;
    return;
L_08901488:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[3] << 10u);
    ctx.set_gpr(4, ctx.gpr[4] >> 10u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08901460;
      }
      goto L_089014A0;
    }
L_089014A0:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(228), 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089014DC;
      }
      goto L_089014B4;
    }
L_089014B4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089014DC;
      }
      goto L_089014D0;
    }
L_089014D0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089014DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089014DCu) goto L_089014DC;
    return;
L_089014DC:
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
    goto L_089014E0;
L_089014E0:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08901428;
      }
      goto L_089014E8;
    }
L_089014E8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(224), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08901530;
      }
      goto L_089014F4;
    }
L_089014F4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08901530;
      }
      goto L_089014FC;
    }
L_089014FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08901528;
      }
      goto L_08901508;
    }
L_08901508:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08901528;
      }
      goto L_08901510;
    }
L_08901510:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(228)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(228), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(224), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(228), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08901530;
      }
      goto L_08901528;
    }
L_08901528:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08901508;
      }
      goto L_08901530;
    }
L_08901530:
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
L_0890154C:
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
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(22, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(23, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] & 512u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08901648;
      }
      goto L_089015A4;
    }
L_089015A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08901614;
      }
      goto L_089015B4;
    }
L_089015B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089015E0;
      }
      goto L_089015C0;
    }
L_089015C0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089015D0;
      }
      goto L_089015C8;
    }
L_089015C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089015E0;
      }
      goto L_089015D0;
    }
L_089015D0:
    ctx.set_gpr(17, 2228u << 16u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-14968));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089015E8;
      }
      goto L_089015E0;
    }
L_089015E0:
    ctx.set_gpr(17, 2228u << 16u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-14952));
    goto L_089015E8;
L_089015E8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089015FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089015FCu) goto L_089015FC;
    return;
L_089015FC:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-14936));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08901614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 461u, 0x08955FA4u>(ctx, &aot_mem) && ctx.pc == 0x08901614u) goto L_08901614;
    return;
L_08901614:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(500)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08901634u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08901634u) goto L_08901634;
    return;
L_08901634:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08901648;
      }
      goto L_0890163C;
    }
L_0890163C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08901D30;
      }
      goto L_08901648;
    }
L_08901648:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089016A8;
      }
      goto L_08901654;
    }
L_08901654:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089016A8;
      }
      goto L_08901660;
    }
L_08901660:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089016A8;
      }
      goto L_08901668;
    }
L_08901668:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08901680u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08901680u) goto L_08901680;
    return;
L_08901680:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08901694u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08901694u) goto L_08901694;
    return;
L_08901694:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-14836));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089016A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x089016A8u) goto L_089016A8;
    return;
L_089016A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08901718;
      }
      goto L_089016B4;
    }
L_089016B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08901718;
      }
      goto L_089016C0;
    }
L_089016C0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08901718;
      }
      goto L_089016D0;
    }
L_089016D0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08901718;
      }
      goto L_089016D8;
    }
L_089016D8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089016F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089016F0u) goto L_089016F0;
    return;
L_089016F0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08901704u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08901704u) goto L_08901704;
    return;
L_08901704:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-14736));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08901718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08901718u) goto L_08901718;
    return;
L_08901718:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(280)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890172Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890172Cu) goto L_0890172C;
    return;
L_0890172C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(1, ctx.gpr[22] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08901740;
      }
      goto L_0890173C;
    }
L_0890173C:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    goto L_08901740;
L_08901740:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08901950;
      }
      goto L_0890174C;
    }
L_0890174C:
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08901778;
      }
      goto L_08901758;
    }
L_08901758:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890176Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890176Cu) goto L_0890176C;
    return;
L_0890176C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08901D30;
      }
      goto L_08901778;
    }
L_08901778:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(472)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08901790u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08901790u) goto L_08901790;
    return;
L_08901790:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089017A4;
      }
      goto L_08901798;
    }
L_08901798:
    ctx.set_gpr(17, ctx.gpr[21] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08901870;
      }
      goto L_089017A4;
    }
L_089017A4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089017B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 428u, 0x088FE728u>(ctx, &aot_mem) && ctx.pc == 0x089017B0u) goto L_089017B0;
    return;
L_089017B0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(472)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089017CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089017CCu) goto L_089017CC;
    return;
L_089017CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08901870;
      }
      goto L_089017D4;
    }
L_089017D4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08901804;
      }
      goto L_089017E0;
    }
L_089017E0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(472)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089017F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089017F8u) goto L_089017F8;
    return;
L_089017F8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890180C;
      }
      goto L_08901800;
    }
L_08901800:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(228)));
    goto L_08901804;
L_08901804:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089017E0;
      }
      goto L_0890180C;
    }
L_0890180C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08901870;
      }
      goto L_08901814;
    }
L_08901814:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08901828u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08901828u) goto L_08901828;
    return;
L_08901828:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08901864;
      }
      goto L_08901834;
    }
L_08901834:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890184Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890184Cu) goto L_0890184C;
    return;
L_0890184C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-14636));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x08901864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08901864u) goto L_08901864;
    return;
L_08901864:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08901D30;
      }
      goto L_08901870;
    }
L_08901870:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(372)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890188Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890188Cu) goto L_0890188C;
    return;
L_0890188C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(220)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089018C0;
      }
      goto L_0890189C;
    }
L_0890189C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(476)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089018B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089018B8u) goto L_089018B8;
    return;
L_089018B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089018D0;
      }
      goto L_089018C0;
    }
L_089018C0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089018D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 465u, 0x0892E010u>(ctx, &aot_mem) && ctx.pc == 0x089018D0u) goto L_089018D0;
    return;
L_089018D0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08901930;
      }
      goto L_089018DC;
    }
L_089018DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(160), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(164), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(176), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(180), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(192), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(196), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08901930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 508u, 0x088FED00u>(ctx, &aot_mem) && ctx.pc == 0x08901930u) goto L_08901930;
    return;
L_08901930:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08901948u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08901948u) goto L_08901948;
    return;
L_08901948:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08901D18;
      }
      goto L_08901950;
    }
L_08901950:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089019E4;
      }
      goto L_08901968;
    }
L_08901968:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890197Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890197Cu) goto L_0890197C;
    return;
L_0890197C:
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(500)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089019A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089019A0u) goto L_089019A0;
    return;
L_089019A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089019C4;
      }
      goto L_089019A8;
    }
L_089019A8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(284)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089019BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089019BCu) goto L_089019BC;
    return;
L_089019BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08901740;
      }
      goto L_089019C4;
    }
L_089019C4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(284)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089019D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089019D8u) goto L_089019D8;
    return;
L_089019D8:
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08901D18;
      }
      goto L_089019E4;
    }
L_089019E4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08901BB0;
      }
      goto L_089019EC;
    }
L_089019EC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08901A14;
      }
      goto L_089019F4;
    }
L_089019F4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(372)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08901A0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08901A0Cu) goto L_08901A0C;
    return;
L_08901A0C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(23, ctx.gpr[18] + 0u);
    goto L_08901A14;
L_08901A14:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08901A20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 428u, 0x088FE728u>(ctx, &aot_mem) && ctx.pc == 0x08901A20u) goto L_08901A20;
    return;
L_08901A20:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(472)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08901A3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08901A3Cu) goto L_08901A3C;
    return;
L_08901A3C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08901AE0;
      }
      goto L_08901A44;
    }
L_08901A44:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08901A74;
      }
      goto L_08901A50;
    }
L_08901A50:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(472)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08901A68u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08901A68u) goto L_08901A68;
    return;
L_08901A68:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08901A7C;
      }
      goto L_08901A70;
    }
L_08901A70:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(228)));
    goto L_08901A74;
L_08901A74:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08901A50;
      }
      goto L_08901A7C;
    }
L_08901A7C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08901AE0;
      }
      goto L_08901A84;
    }
L_08901A84:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08901A98u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08901A98u) goto L_08901A98;
    return;
L_08901A98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08901AD4;
      }
      goto L_08901AA4;
    }
L_08901AA4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08901ABCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08901ABCu) goto L_08901ABC;
    return;
L_08901ABC:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-14552));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x08901AD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08901AD4u) goto L_08901AD4;
    return;
L_08901AD4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08901D30;
      }
      goto L_08901AE0;
    }
L_08901AE0:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(220)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08901B14;
      }
      goto L_08901AF0;
    }
L_08901AF0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(476)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08901B0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08901B0Cu) goto L_08901B0C;
    return;
L_08901B0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08901B24;
      }
      goto L_08901B14;
    }
L_08901B14:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08901B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 465u, 0x0892E010u>(ctx, &aot_mem) && ctx.pc == 0x08901B24u) goto L_08901B24;
    return;
L_08901B24:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08901B44u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08901B44u) goto L_08901B44;
    return;
L_08901B44:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08901BE4;
      }
      goto L_08901B54;
    }
L_08901B54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(160), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(164), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(176), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(180), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(192), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(196), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08901BA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 508u, 0x088FED00u>(ctx, &aot_mem) && ctx.pc == 0x08901BA8u) goto L_08901BA8;
    return;
L_08901BA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08901BE4;
      }
      goto L_08901BB0;
    }
L_08901BB0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08901BBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 428u, 0x088FE728u>(ctx, &aot_mem) && ctx.pc == 0x08901BBCu) goto L_08901BBC;
    return;
L_08901BBC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08901BE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08901BE0u) goto L_08901BE0;
    return;
L_08901BE0:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    goto L_08901BE4;
L_08901BE4:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08901D18;
      }
      goto L_08901BEC;
    }
L_08901BEC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08901C88;
      }
      goto L_08901BF8;
    }
L_08901BF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(156), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(164), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08901C24;
      }
      goto L_08901C20;
    }
L_08901C20:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(168), ctx.gpr[3]);
    goto L_08901C24;
L_08901C24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(172), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(180), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08901C50;
      }
      goto L_08901C4C;
    }
L_08901C4C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(184), ctx.gpr[3]);
    goto L_08901C50;
L_08901C50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(188), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(196), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08901C7C;
      }
      goto L_08901C78;
    }
L_08901C78:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(200), ctx.gpr[3]);
    goto L_08901C7C;
L_08901C7C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08901C88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 508u, 0x088FED00u>(ctx, &aot_mem) && ctx.pc == 0x08901C88u) goto L_08901C88;
    return;
L_08901C88:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08901CD8;
      }
      goto L_08901C98;
    }
L_08901C98:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(472)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08901CB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08901CB0u) goto L_08901CB0;
    return;
L_08901CB0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08901CD8;
      }
      goto L_08901CB8;
    }
L_08901CB8:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08901CC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 445u, 0x08929F74u>(ctx, &aot_mem) && ctx.pc == 0x08901CC4u) goto L_08901CC4;
    return;
L_08901CC4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08901CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 468u, 0x088FEA10u>(ctx, &aot_mem) && ctx.pc == 0x08901CD4u) goto L_08901CD4;
    return;
L_08901CD4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_08901CD8;
L_08901CD8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(220)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08901D08;
      }
      goto L_08901CE4;
    }
L_08901CE4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(476)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08901D00u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08901D00u) goto L_08901D00;
    return;
L_08901D00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08901D18;
      }
      goto L_08901D08;
    }
L_08901D08:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08901D18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 453u, 0x0892DF00u>(ctx, &aot_mem) && ctx.pc == 0x08901D18u) goto L_08901D18;
    return;
L_08901D18:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(292)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08901D30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08901D30u) goto L_08901D30;
    return;
L_08901D30:
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
L_08901D60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(22, ctx.gpr[7] + 0u);
    ctx.set_gpr(23, ctx.gpr[8] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[11]);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(30, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] & 512u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08901E70;
      }
      goto L_08901DCC;
    }
L_08901DCC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08901E3C;
      }
      goto L_08901DDC;
    }
L_08901DDC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08901E08;
      }
      goto L_08901DE8;
    }
L_08901DE8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08901DF8;
      }
      goto L_08901DF0;
    }
L_08901DF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08901E08;
      }
      goto L_08901DF8;
    }
L_08901DF8:
    ctx.set_gpr(17, 2228u << 16u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-14968));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08901E10;
      }
      goto L_08901E08;
    }
L_08901E08:
    ctx.set_gpr(17, 2228u << 16u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-14952));
    goto L_08901E10;
L_08901E10:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08901E24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08901E24u) goto L_08901E24;
    return;
L_08901E24:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-14936));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08901E3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 461u, 0x08955FA4u>(ctx, &aot_mem) && ctx.pc == 0x08901E3Cu) goto L_08901E3C;
    return;
L_08901E3C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(500)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08901E5Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08901E5Cu) goto L_08901E5C;
    return;
L_08901E5C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08901E70;
      }
      goto L_08901E64;
    }
L_08901E64:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089025AC;
      }
      goto L_08901E70;
    }
L_08901E70:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08901ED0;
      }
      goto L_08901E7C;
    }
L_08901E7C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08901ED0;
      }
      goto L_08901E88;
    }
L_08901E88:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08901ED0;
      }
      goto L_08901E90;
    }
L_08901E90:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08901EA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08901EA8u) goto L_08901EA8;
    return;
L_08901EA8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08901EBCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08901EBCu) goto L_08901EBC;
    return;
L_08901EBC:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-14836));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08901ED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08901ED0u) goto L_08901ED0;
    return;
L_08901ED0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08901F40;
      }
      goto L_08901EDC;
    }
L_08901EDC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08901F40;
      }
      goto L_08901EE8;
    }
L_08901EE8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08901F40;
      }
      goto L_08901EF8;
    }
L_08901EF8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08901F40;
      }
      goto L_08901F00;
    }
L_08901F00:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08901F18u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08901F18u) goto L_08901F18;
    return;
L_08901F18:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08901F2Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08901F2Cu) goto L_08901F2C;
    return;
L_08901F2C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-14736));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08901F40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08901F40u) goto L_08901F40;
    return;
L_08901F40:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(280)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08901F54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08901F54u) goto L_08901F54;
    return;
L_08901F54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(1, ctx.gpr[22] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08901F68;
      }
      goto L_08901F64;
    }
L_08901F64:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    goto L_08901F68;
L_08901F68:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08902190;
      }
      goto L_08901F74;
    }
L_08901F74:
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08901FA0;
      }
      goto L_08901F80;
    }
L_08901F80:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08901F94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08901F94u) goto L_08901F94;
    return;
L_08901F94:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089025AC;
      }
      goto L_08901FA0;
    }
L_08901FA0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(472)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08901FB8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08901FB8u) goto L_08901FB8;
    return;
L_08901FB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08901FCC;
      }
      goto L_08901FC0;
    }
L_08901FC0:
    ctx.set_gpr(17, ctx.gpr[21] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08902098;
      }
      goto L_08901FCC;
    }
L_08901FCC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08901FD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 428u, 0x088FE728u>(ctx, &aot_mem) && ctx.pc == 0x08901FD8u) goto L_08901FD8;
    return;
L_08901FD8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(472)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08901FF4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08901FF4u) goto L_08901FF4;
    return;
L_08901FF4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08902098;
      }
      goto L_08901FFC;
    }
L_08901FFC:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890202C;
      }
      goto L_08902008;
    }
L_08902008:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(472)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08902020u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08902020u) goto L_08902020;
    return;
L_08902020:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08902034;
      }
      goto L_08902028;
    }
L_08902028:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(228)));
    goto L_0890202C;
L_0890202C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08902008;
      }
      goto L_08902034;
    }
L_08902034:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08902098;
      }
      goto L_0890203C;
    }
L_0890203C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08902050u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08902050u) goto L_08902050;
    return;
L_08902050:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0890208C;
      }
      goto L_0890205C;
    }
L_0890205C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08902074u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08902074u) goto L_08902074;
    return;
L_08902074:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-14636));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x0890208Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0890208Cu) goto L_0890208C;
    return;
L_0890208C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089025AC;
      }
      goto L_08902098;
    }
L_08902098:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(372)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089020B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089020B4u) goto L_089020B4;
    return;
L_089020B4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(220)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089020E8;
      }
      goto L_089020C4;
    }
L_089020C4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(476)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089020E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089020E0u) goto L_089020E0;
    return;
L_089020E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089020F8;
      }
      goto L_089020E8;
    }
L_089020E8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089020F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 465u, 0x0892E010u>(ctx, &aot_mem) && ctx.pc == 0x089020F8u) goto L_089020F8;
    return;
L_089020F8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902158;
      }
      goto L_08902104;
    }
L_08902104:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(160), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(164), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(176), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(180), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(192), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(196), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08902158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 508u, 0x088FED00u>(ctx, &aot_mem) && ctx.pc == 0x08902158u) goto L_08902158;
    return;
L_08902158:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08902188u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08902188u) goto L_08902188;
    return;
L_08902188:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08902594;
      }
      goto L_08902190;
    }
L_08902190:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902224;
      }
      goto L_089021A8;
    }
L_089021A8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089021BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089021BCu) goto L_089021BC;
    return;
L_089021BC:
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(500)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089021E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089021E0u) goto L_089021E0;
    return;
L_089021E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902204;
      }
      goto L_089021E8;
    }
L_089021E8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(284)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089021FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089021FCu) goto L_089021FC;
    return;
L_089021FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08901F68;
      }
      goto L_08902204;
    }
L_08902204:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(284)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08902218u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08902218u) goto L_08902218;
    return;
L_08902218:
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08902594;
      }
      goto L_08902224;
    }
L_08902224:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902410;
      }
      goto L_0890222C;
    }
L_0890222C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902254;
      }
      goto L_08902234;
    }
L_08902234:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(372)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890224Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890224Cu) goto L_0890224C;
    return;
L_0890224C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(30, ctx.gpr[18] + 0u);
    goto L_08902254;
L_08902254:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08902260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 428u, 0x088FE728u>(ctx, &aot_mem) && ctx.pc == 0x08902260u) goto L_08902260;
    return;
L_08902260:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(472)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890227Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890227Cu) goto L_0890227C;
    return;
L_0890227C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08902320;
      }
      goto L_08902284;
    }
L_08902284:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089022B4;
      }
      goto L_08902290;
    }
L_08902290:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(472)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089022A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089022A8u) goto L_089022A8;
    return;
L_089022A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089022BC;
      }
      goto L_089022B0;
    }
L_089022B0:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(228)));
    goto L_089022B4;
L_089022B4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08902290;
      }
      goto L_089022BC;
    }
L_089022BC:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08902320;
      }
      goto L_089022C4;
    }
L_089022C4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089022D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089022D8u) goto L_089022D8;
    return;
L_089022D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08902314;
      }
      goto L_089022E4;
    }
L_089022E4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089022FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089022FCu) goto L_089022FC;
    return;
L_089022FC:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-14552));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x08902314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08902314u) goto L_08902314;
    return;
L_08902314:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089025AC;
      }
      goto L_08902320;
    }
L_08902320:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(220)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902354;
      }
      goto L_08902330;
    }
L_08902330:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(476)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890234Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890234Cu) goto L_0890234C;
    return;
L_0890234C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08902364;
      }
      goto L_08902354;
    }
L_08902354:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08902364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 465u, 0x0892E010u>(ctx, &aot_mem) && ctx.pc == 0x08902364u) goto L_08902364;
    return;
L_08902364:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[22] + 0u);
    ctx.set_gpr(8, ctx.gpr[23] + 0u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089023A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089023A4u) goto L_089023A4;
    return;
L_089023A4:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902460;
      }
      goto L_089023B4;
    }
L_089023B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(160), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(164), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(176), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(180), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(192), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(196), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08902408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 508u, 0x088FED00u>(ctx, &aot_mem) && ctx.pc == 0x08902408u) goto L_08902408;
    return;
L_08902408:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08902460;
      }
      goto L_08902410;
    }
L_08902410:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0890241Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 428u, 0x088FE728u>(ctx, &aot_mem) && ctx.pc == 0x0890241Cu) goto L_0890241C;
    return;
L_0890241C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890245Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890245Cu) goto L_0890245C;
    return;
L_0890245C:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    goto L_08902460;
L_08902460:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902594;
      }
      goto L_08902468;
    }
L_08902468:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902504;
      }
      goto L_08902474;
    }
L_08902474:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(156), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(164), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089024A0;
      }
      goto L_0890249C;
    }
L_0890249C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(168), ctx.gpr[3]);
    goto L_089024A0;
L_089024A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(172), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(180), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089024CC;
      }
      goto L_089024C8;
    }
L_089024C8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(184), ctx.gpr[3]);
    goto L_089024CC;
L_089024CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(188), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(196), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089024F8;
      }
      goto L_089024F4;
    }
L_089024F4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(200), ctx.gpr[3]);
    goto L_089024F8;
L_089024F8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08902504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 508u, 0x088FED00u>(ctx, &aot_mem) && ctx.pc == 0x08902504u) goto L_08902504;
    return;
L_08902504:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08902554;
      }
      goto L_08902514;
    }
L_08902514:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(472)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890252Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890252Cu) goto L_0890252C;
    return;
L_0890252C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08902554;
      }
      goto L_08902534;
    }
L_08902534:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08902540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 445u, 0x08929F74u>(ctx, &aot_mem) && ctx.pc == 0x08902540u) goto L_08902540;
    return;
L_08902540:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08902550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 468u, 0x088FEA10u>(ctx, &aot_mem) && ctx.pc == 0x08902550u) goto L_08902550;
    return;
L_08902550:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_08902554;
L_08902554:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(220)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902584;
      }
      goto L_08902560;
    }
L_08902560:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(476)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890257Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890257Cu) goto L_0890257C;
    return;
L_0890257C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08902594;
      }
      goto L_08902584;
    }
L_08902584:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08902594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 453u, 0x0892DF00u>(ctx, &aot_mem) && ctx.pc == 0x08902594u) goto L_08902594;
    return;
L_08902594:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(292)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089025ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089025ACu) goto L_089025AC;
    return;
L_089025AC:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089025E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089025F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 265u, 0x08931DC0u>(ctx, &aot_mem) && ctx.pc == 0x089025F8u) goto L_089025F8;
    return;
L_089025F8:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(205), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(212));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0890260Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0890260Cu) goto L_0890260C;
    return;
L_0890260C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(216), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(220), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(228), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08902634:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0890264Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 282u, 0x0892D320u>(ctx, &aot_mem) && ctx.pc == 0x0890264Cu) goto L_0890264C;
    return;
L_0890264C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12592));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), 0u);
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
L_08902674:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0890268Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 284u, 0x0892D364u>(ctx, &aot_mem) && ctx.pc == 0x0890268Cu) goto L_0890268C;
    return;
L_0890268C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12592));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089026B0;
      }
      goto L_089026A4;
    }
L_089026A4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089026B0u);
    // nop
    goto L_08902634;
L_089026B0:
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
L_089026C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089026E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 286u, 0x0892D3A8u>(ctx, &aot_mem) && ctx.pc == 0x089026E0u) goto L_089026E0;
    return;
L_089026E0:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12592));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), 0u);
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
L_08902708:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902748;
      }
      goto L_08902724;
    }
L_08902724:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08902748;
      }
      goto L_08902740;
    }
L_08902740:
    ctx.set_gpr(31, 0x08902748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08902748u) goto L_08902748;
    return;
L_08902748:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08902754u);
    // nop
    goto L_089013F0;
L_08902754:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(496)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08902768u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08902768u) goto L_08902768;
    return;
L_08902768:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08902774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 288u, 0x0892D3ECu>(ctx, &aot_mem) && ctx.pc == 0x08902774u) goto L_08902774;
    return;
L_08902774:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08902788:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890297C;
      }
      goto L_089027AC;
    }
L_089027AC:
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(212));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08902834;
      }
      goto L_089027BC;
    }
L_089027BC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[5] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089027E8;
      }
      goto L_089027D0;
    }
L_089027D0:
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089027E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089027E0u) goto L_089027E0;
    return;
L_089027E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890282C;
      }
      goto L_089027E8;
    }
L_089027E8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, 65472u << 16u);
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(212));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08902810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08902810u) goto L_08902810;
    return;
L_08902810:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, 0u << 10u);
    ctx.set_gpr(4, ctx.gpr[4] >> 10u);
    ctx.set_gpr(3, 65472u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_0890282C;
L_0890282C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890297C;
      }
      goto L_08902834;
    }
L_08902834:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08902974;
      }
      goto L_08902840;
    }
L_08902840:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0890296C;
      }
      goto L_0890284C;
    }
L_0890284C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(228)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(228), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(224), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(228), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[3] << 10u);
    ctx.set_gpr(4, ctx.gpr[4] >> 10u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089028BC;
      }
      goto L_08902874;
    }
L_08902874:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089028A4;
      }
      goto L_0890287C;
    }
L_0890287C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089028A4;
      }
      goto L_08902898;
    }
L_08902898:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089028A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089028A4u) goto L_089028A4;
    return;
L_089028A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[3] << 10u);
    ctx.set_gpr(4, ctx.gpr[4] >> 10u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0890287C;
      }
      goto L_089028BC;
    }
L_089028BC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[5] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08902908;
      }
      goto L_089028D0;
    }
L_089028D0:
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08902960;
      }
      goto L_089028F4;
    }
L_089028F4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08902900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08902900u) goto L_08902900;
    return;
L_08902900:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08902960;
      }
      goto L_08902908;
    }
L_08902908:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, 65472u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08902944;
      }
      goto L_08902938;
    }
L_08902938:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08902944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08902944u) goto L_08902944;
    return;
L_08902944:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, 0u << 10u);
    ctx.set_gpr(4, ctx.gpr[4] >> 10u);
    ctx.set_gpr(3, 65472u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08902960;
L_08902960:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08902974;
      }
      goto L_0890296C;
    }
L_0890296C:
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(228)));
    goto L_08902974;
L_08902974:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08902840;
      }
      goto L_0890297C;
    }
L_0890297C:
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
L_08902998:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089029BC;
      }
      goto L_089029AC;
    }
L_089029AC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089029BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089029BCu) goto L_089029BC;
    return;
L_089029BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089029CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089029F4;
      }
      goto L_089029EC;
    }
L_089029EC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    goto L_089029F4;
L_089029F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08902A0C;
      }
      goto L_08902A04;
    }
L_08902A04:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_08902A0C;
L_08902A0C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x08902A20u);
    // nop
    goto L_089030A8;
L_08902A20:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08902A38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902AA4;
      }
      goto L_08902A60;
    }
L_08902A60:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08902A70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08902A70u) goto L_08902A70;
    return;
L_08902A70:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902AA4;
      }
      goto L_08902A7C;
    }
L_08902A7C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08902A88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08902A88u) goto L_08902A88;
    return;
L_08902A88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08902AA0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08902AA0u) goto L_08902AA0;
    return;
L_08902AA0:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), 0u);
    goto L_08902AA4;
L_08902AA4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08902ADC;
      }
      goto L_08902AB8;
    }
L_08902AB8:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902AD8;
      }
      goto L_08902AD0;
    }
L_08902AD0:
    ctx.set_gpr(31, 0x08902AD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08902AD8u) goto L_08902AD8;
    return;
L_08902AD8:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08902ADC;
L_08902ADC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08902AB8;
      }
      goto L_08902AE8;
    }
L_08902AE8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08902B0C;
      }
      goto L_08902AF8;
    }
L_08902AF8:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08902B0C;
L_08902B0C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08902AF8;
      }
      goto L_08902B18;
    }
L_08902B18:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08902B34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 400u, 0x08841620u>(ctx, &aot_mem) && ctx.pc == 0x08902B34u) goto L_08902B34;
    return;
L_08902B34:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08902B48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 375u, 0x088414ACu>(ctx, &aot_mem) && ctx.pc == 0x08902B48u) goto L_08902B48;
    return;
L_08902B48:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
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
L_08902B80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] ^ 0u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08902B98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08902C08;
      }
      goto L_08902BC0;
    }
L_08902BC0:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08902BE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x08902BE8u) goto L_08902BE8;
    return;
L_08902BE8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08902C04;
      }
      goto L_08902BF4;
    }
L_08902BF4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08902C1C;
      }
      goto L_08902C04;
    }
L_08902C04:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08902C08;
L_08902C08:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08902BC0;
      }
      goto L_08902C1C;
    }
L_08902C1C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08902C30;
      }
      goto L_08902C2C;
    }
L_08902C2C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), 0u);
    goto L_08902C30;
L_08902C30:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_08902C54:
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08902CB0;
      }
      goto L_08902C60;
    }
L_08902C60:
    ctx.set_gpr(3, ctx.gpr[7] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08902C9C;
      }
      goto L_08902C80;
    }
L_08902C80:
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08902C9C;
L_08902C9C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08902C80;
      }
      goto L_08902CAC;
    }
L_08902CAC:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08902CB0;
L_08902CB0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08902C60;
      }
      goto L_08902CC4;
    }
L_08902CC4:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08902CD4:
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
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08902E9C;
      }
      goto L_08902D08;
    }
L_08902D08:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(20, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08902E94;
      }
      goto L_08902D1C;
    }
L_08902D1C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(22, ctx.gpr[20] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[22]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08902E38;
      }
      goto L_08902D44;
    }
L_08902D44:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08902D78;
      }
      goto L_08902D64;
    }
L_08902D64:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902D78;
      }
      goto L_08902D6C;
    }
L_08902D6C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08902E34;
      }
      goto L_08902D78;
    }
L_08902D78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902DD4;
      }
      goto L_08902D8C;
    }
L_08902D8C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08902DD4;
      }
      goto L_08902D94;
    }
L_08902D94:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902DD4;
      }
      goto L_08902DA0;
    }
L_08902DA0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08902DD4;
      }
      goto L_08902DA8;
    }
L_08902DA8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902DD4;
      }
      goto L_08902DB4;
    }
L_08902DB4:
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08902DD4;
L_08902DD4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902DFC;
      }
      goto L_08902DF4;
    }
L_08902DF4:
    ctx.set_gpr(31, 0x08902DFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08902DFCu) goto L_08902DFC;
    return;
L_08902DFC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08902E0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x08902E0Cu) goto L_08902E0C;
    return;
L_08902E0C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08902E34;
      }
      goto L_08902E30;
    }
L_08902E30:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    goto L_08902E34;
L_08902E34:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    goto L_08902E38;
L_08902E38:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08902D44;
      }
      goto L_08902E40;
    }
L_08902E40:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08902E90;
      }
      goto L_08902E4C;
    }
L_08902E4C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[22]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902E6C;
      }
      goto L_08902E64;
    }
L_08902E64:
    ctx.set_gpr(31, 0x08902E6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08902E6Cu) goto L_08902E6C;
    return;
L_08902E6C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08902E7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x08902E7Cu) goto L_08902E7C;
    return;
L_08902E7C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    goto L_08902E90;
L_08902E90:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    goto L_08902E94;
L_08902E94:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08902D1C;
      }
      goto L_08902E9C;
    }
L_08902E9C:
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
L_08902EC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08902EE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 352u, 0x0891D884u>(ctx, &aot_mem) && ctx.pc == 0x08902EE4u) goto L_08902EE4;
    return;
L_08902EE4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08902EE8;
L_08902EE8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08902EF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 506u, 0x0891E50Cu>(ctx, &aot_mem) && ctx.pc == 0x08902EF8u) goto L_08902EF8;
    return;
L_08902EF8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08902F0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08902F0Cu) goto L_08902F0C;
    return;
L_08902F0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902EE8;
      }
      goto L_08902F14;
    }
L_08902F14:
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
L_08902F2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08902F54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 352u, 0x0891D884u>(ctx, &aot_mem) && ctx.pc == 0x08902F54u) goto L_08902F54;
    return;
L_08902F54:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902FA0;
      }
      goto L_08902F60;
    }
L_08902F60:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08902F70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 506u, 0x0891E50Cu>(ctx, &aot_mem) && ctx.pc == 0x08902F70u) goto L_08902F70;
    return;
L_08902F70:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(16, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08902F90u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08902F90u) goto L_08902F90;
    return;
L_08902F90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902F60;
      }
      goto L_08902F98;
    }
L_08902F98:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08902F60;
      }
      goto L_08902FA0;
    }
L_08902FA0:
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
L_08902FC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08902FE8;
      }
      goto L_08902FD8;
    }
L_08902FD8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08902FE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x08902FE8u) goto L_08902FE8;
    return;
L_08902FE8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(47));
    ctx.set_gpr(31, 0x08902FF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 464u, 0x088164FCu>(ctx, &aot_mem) && ctx.pc == 0x08902FF8u) goto L_08902FF8;
    return;
L_08902FF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08903018;
      }
      goto L_08903000;
    }
L_08903000:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(92));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(47));
    ctx.set_gpr(31, 0x08903018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 464u, 0x088164FCu>(ctx, &aot_mem) && ctx.pc == 0x08903018u) goto L_08903018;
    return;
L_08903018:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08903000;
      }
      goto L_08903020;
    }
L_08903020:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08903034:
    ctx.set_gpr(2, 0u < ctx.gpr[5] ? 1u : 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08903040:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(8, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[7]);
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[8] & ctx.gpr[4]);
    ctx.set_gpr(3, 0u & ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890307C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08903088:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089030A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903100;
      }
      goto L_089030C0;
    }
L_089030C0:
    ctx.set_gpr(31, 0x089030C8u);
    // nop
    goto L_08903088;
L_089030C8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089030D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089030D8u) goto L_089030D8;
    return;
L_089030D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089030FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089030FCu) goto L_089030FC;
    return;
L_089030FC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    goto L_08903100;
L_08903100:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890311C:
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
    ctx.set_gpr(30, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08903164u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08903164u) goto L_08903164;
    return;
L_08903164:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08903180u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08903180u) goto L_08903180;
    return;
L_08903180:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890348C;
      }
      goto L_08903188;
    }
L_08903188:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089031ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089031ACu) goto L_089031AC;
    return;
L_089031AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890348C;
      }
      goto L_089031B4;
    }
L_089031B4:
    ctx.set_gpr(30, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089031FC;
      }
      goto L_089031E0;
    }
L_089031E0:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] >> 6u);
    ctx.set_gpr(3, ctx.gpr[3] ^ ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089031FC;
L_089031FC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089031E0;
      }
      goto L_08903208;
    }
L_08903208:
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] >> 11u);
    ctx.set_gpr(3, ctx.gpr[3] ^ ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 15u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(8, ctx.gpr[20] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[3]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(3, ctx.hi);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08903258;
      }
      goto L_0890324C;
    }
L_0890324C:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089032B4;
      }
      goto L_08903258;
    }
L_08903258:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089032A4;
      }
      goto L_0890326C;
    }
L_0890326C:
    ctx.set_gpr(4, ctx.gpr[9] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089032A0;
      }
      goto L_08903294;
    }
L_08903294:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089032B4;
      }
      goto L_089032A0;
    }
L_089032A0:
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_089032A4;
L_089032A4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890326C;
      }
      goto L_089032B0;
    }
L_089032B0:
    ctx.set_gpr(3, 0u + 0u);
    goto L_089032B4;
L_089032B4:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890348C;
      }
      goto L_089032BC;
    }
L_089032BC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, ctx.gpr[20] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[3]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(22, ctx.hi);
    ctx.set_gpr(23, ctx.gpr[22] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[23]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08903358;
      }
      goto L_089032EC;
    }
L_089032EC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089032F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089032F8u) goto L_089032F8;
    return;
L_089032F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08903304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 472u, 0x088D58ACu>(ctx, &aot_mem) && ctx.pc == 0x08903304u) goto L_08903304;
    return;
L_08903304:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08903318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 270u, 0x0883D560u>(ctx, &aot_mem) && ctx.pc == 0x08903318u) goto L_08903318;
    return;
L_08903318:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[23]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0890332Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x0890332Cu) goto L_0890332C;
    return;
L_0890332C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08903340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 23u, 0x088D019Cu>(ctx, &aot_mem) && ctx.pc == 0x08903340u) goto L_08903340;
    return;
L_08903340:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903358;
      }
      goto L_0890334C;
    }
L_0890334C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08903358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08903358u) goto L_08903358;
    return;
L_08903358:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089033AC;
      }
      goto L_0890336C;
    }
L_0890336C:
    ctx.set_gpr(5, ctx.gpr[8] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[2] & ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089033A8;
      }
      goto L_08903394;
    }
L_08903394:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08903438;
      }
      goto L_089033A8;
    }
L_089033A8:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_089033AC;
L_089033AC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890336C;
      }
      goto L_089033B8;
    }
L_089033B8:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08903438;
      }
      goto L_089033C0;
    }
L_089033C0:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089033D8u);
    // nop
    goto L_08903534;
L_089033D8:
    ctx.set_gpr(3, ctx.gpr[22] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08903400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 79u, 0x0895C4C8u>(ctx, &aot_mem) && ctx.pc == 0x08903400u) goto L_08903400;
    return;
L_08903400:
    ctx.set_gpr(3, ctx.gpr[22] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08903418u);
    // nop
    goto L_089034EC;
L_08903418:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08903424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x08903424u) goto L_08903424;
    return;
L_08903424:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    goto L_08903438;
L_08903438:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890344Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890344Cu) goto L_0890344C;
    return;
L_0890344C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890348C;
      }
      goto L_0890345C;
    }
L_0890345C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_0890348C;
      }
      goto L_08903464;
    }
L_08903464:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890348C;
      }
      goto L_08903470;
    }
L_08903470:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, ctx.gpr[16] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_0890348C;
L_0890348C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089034A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089034A4u) goto L_089034A4;
    return;
L_089034A4:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u < ctx.gpr[30] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089034B8;
      }
      goto L_089034B4;
    }
L_089034B4:
    ctx.set_gpr(2, 0u < ctx.gpr[3] ? 1u : 0u);
    goto L_089034B8;
L_089034B8:
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
L_089034EC:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903518;
      }
      goto L_089034FC;
    }
L_089034FC:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903518;
      }
      goto L_08903514;
    }
L_08903514:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08903518;
L_08903518:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890352C;
      }
      goto L_08903520;
    }
L_08903520:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    goto L_0890352C;
L_0890352C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08903534:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08903568;
      }
      goto L_08903544;
    }
L_08903544:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08903560;
      }
      goto L_08903554;
    }
L_08903554:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08903568;
      }
      goto L_08903560;
    }
L_08903560:
    ctx.set_gpr(31, 0x08903568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08903568u) goto L_08903568;
    return;
L_08903568:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08903578:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903660;
      }
      goto L_089035A0;
    }
L_089035A0:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089035B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089035B4u) goto L_089035B4;
    return;
L_089035B4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089035EC;
      }
      goto L_089035C4;
    }
L_089035C4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089035D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089035D0u) goto L_089035D0;
    return;
L_089035D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089035E4;
      }
      goto L_089035D8;
    }
L_089035D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089035E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089035E4u) goto L_089035E4;
    return;
L_089035E4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089035EC;
L_089035EC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08903600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08903600u) goto L_08903600;
    return;
L_08903600:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903630;
      }
      goto L_08903614;
    }
L_08903614:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903630;
      }
      goto L_0890362C;
    }
L_0890362C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08903630;
L_08903630:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890365C;
      }
      goto L_08903638;
    }
L_08903638:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890365C;
      }
      goto L_08903650;
    }
L_08903650:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0890365Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0890365Cu) goto L_0890365C;
    return;
L_0890365C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    goto L_08903660;
L_08903660:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903738;
      }
      goto L_08903674;
    }
L_08903674:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890368Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890368Cu) goto L_0890368C;
    return;
L_0890368C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089036C4;
      }
      goto L_0890369C;
    }
L_0890369C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089036A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089036A8u) goto L_089036A8;
    return;
L_089036A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089036BC;
      }
      goto L_089036B0;
    }
L_089036B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089036BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089036BCu) goto L_089036BC;
    return;
L_089036BC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089036C4;
L_089036C4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089036D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089036D8u) goto L_089036D8;
    return;
L_089036D8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903708;
      }
      goto L_089036EC;
    }
L_089036EC:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903708;
      }
      goto L_08903704;
    }
L_08903704:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08903708;
L_08903708:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903734;
      }
      goto L_08903710;
    }
L_08903710:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08903734;
      }
      goto L_08903728;
    }
L_08903728:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08903734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08903734u) goto L_08903734;
    return;
L_08903734:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    goto L_08903738;
L_08903738:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08903750;
      }
      goto L_08903748;
    }
L_08903748:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(512));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_08903750;
L_08903750:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0890375Cu);
    // nop
    goto L_089029CC;
L_0890375C:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903788;
      }
      goto L_08903768;
    }
L_08903768:
    ctx.set_gpr(31, 0x08903770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 352u, 0x0891D884u>(ctx, &aot_mem) && ctx.pc == 0x08903770u) goto L_08903770;
    return;
L_08903770:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0890377Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 481u, 0x0891E354u>(ctx, &aot_mem) && ctx.pc == 0x0890377Cu) goto L_0890377C;
    return;
L_0890377C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08903788u);
    // nop
    goto L_089037A4;
L_08903788:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(272));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089037A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089037D8;
      }
      goto L_089037CC;
    }
L_089037CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089037D8;
L_089037D8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903870;
      }
      goto L_089037E4;
    }
L_089037E4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903834;
      }
      goto L_089037F0;
    }
L_089037F0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08903808u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08903808u) goto L_08903808;
    return;
L_08903808:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(284));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x08903818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08903818u) goto L_08903818;
    return;
L_08903818:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903870;
      }
      goto L_08903824;
    }
L_08903824:
    ctx.set_gpr(31, 0x0890382Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0890382Cu) goto L_0890382C;
    return;
L_0890382C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08903870;
      }
      goto L_08903834;
    }
L_08903834:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890384Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890384Cu) goto L_0890384C;
    return;
L_0890384C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(284));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x0890385Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0890385Cu) goto L_0890385C;
    return;
L_0890385C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903870;
      }
      goto L_08903868;
    }
L_08903868:
    ctx.set_gpr(31, 0x08903870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08903870u) goto L_08903870;
    return;
L_08903870:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903A90;
      }
      goto L_0890387C;
    }
L_0890387C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903A90;
      }
      goto L_08903888;
    }
L_08903888:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890389Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890389Cu) goto L_0890389C;
    return;
L_0890389C:
    ctx.set_gpr(31, 0x089038A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 352u, 0x0891D884u>(ctx, &aot_mem) && ctx.pc == 0x089038A4u) goto L_089038A4;
    return;
L_089038A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089038B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 481u, 0x0891E354u>(ctx, &aot_mem) && ctx.pc == 0x089038B0u) goto L_089038B0;
    return;
L_089038B0:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08903A74;
      }
      goto L_089038BC;
    }
L_089038BC:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[3]);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089038F8;
      }
      goto L_089038DC;
    }
L_089038DC:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089038F8;
      }
      goto L_089038F4;
    }
L_089038F4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089038F8;
L_089038F8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890390C;
      }
      goto L_08903900;
    }
L_08903900:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    goto L_0890390C;
L_0890390C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(37)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089039E8;
      }
      goto L_08903918;
    }
L_08903918:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08903930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x08903930u) goto L_08903930;
    return;
L_08903930:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0890393Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 590u, 0x0895A800u>(ctx, &aot_mem) && ctx.pc == 0x0890393Cu) goto L_0890393C;
    return;
L_0890393C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08903974;
      }
      goto L_0890394C;
    }
L_0890394C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08903958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08903958u) goto L_08903958;
    return;
L_08903958:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890396C;
      }
      goto L_08903960;
    }
L_08903960:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0890396Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0890396Cu) goto L_0890396C;
    return;
L_0890396C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08903974;
L_08903974:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08903988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08903988u) goto L_08903988;
    return;
L_08903988:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089039B8;
      }
      goto L_0890399C;
    }
L_0890399C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089039B8;
      }
      goto L_089039B4;
    }
L_089039B4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089039B8;
L_089039B8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089039E4;
      }
      goto L_089039C0;
    }
L_089039C0:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089039E4;
      }
      goto L_089039D8;
    }
L_089039D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089039E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089039E4u) goto L_089039E4;
    return;
L_089039E4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[16]);
    goto L_089039E8;
L_089039E8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(280));
    ctx.set_gpr(31, 0x089039FCu);
    // nop
    goto L_08903D1C;
L_089039FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08903A18u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08903A18u) goto L_08903A18;
    return;
L_08903A18:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903A44;
      }
      goto L_08903A28;
    }
L_08903A28:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903A44;
      }
      goto L_08903A40;
    }
L_08903A40:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08903A44;
L_08903A44:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903A70;
      }
      goto L_08903A4C;
    }
L_08903A4C:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08903A70;
      }
      goto L_08903A64;
    }
L_08903A64:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08903A70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08903A70u) goto L_08903A70;
    return;
L_08903A70:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08903A74;
L_08903A74:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089038BC;
      }
      goto L_08903A88;
    }
L_08903A88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08903AA8;
      }
      goto L_08903A90;
    }
L_08903A90:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08903AA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08903AA8u) goto L_08903AA8;
    return;
L_08903AA8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903ABC;
      }
      goto L_08903AB4;
    }
L_08903AB4:
    ctx.set_gpr(31, 0x08903ABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08903ABCu) goto L_08903ABC;
    return;
L_08903ABC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(288));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08903AD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08903B10;
      }
      goto L_08903B04;
    }
L_08903B04:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08903B10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08903B10u) goto L_08903B10;
    return;
L_08903B10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08903B20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 312u, 0x089495E8u>(ctx, &aot_mem) && ctx.pc == 0x08903B20u) goto L_08903B20;
    return;
L_08903B20:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08903B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 278u, 0x0894936Cu>(ctx, &aot_mem) && ctx.pc == 0x08903B30u) goto L_08903B30;
    return;
L_08903B30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08903B54;
      }
      goto L_08903B44;
    }
L_08903B44:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08903B54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08903B54u) goto L_08903B54;
    return;
L_08903B54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08903B78;
      }
      goto L_08903B68;
    }
L_08903B68:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08903B78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08903B78u) goto L_08903B78;
    return;
L_08903B78:
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
L_08903B90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(31, 0x08903BACu);
    // nop
    goto L_0890311C;
L_08903BAC:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08903BC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903C04;
      }
      goto L_08903BF0;
    }
L_08903BF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08903C18;
      }
      goto L_08903C04;
    }
L_08903C04:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08903C18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08903C18u) goto L_08903C18;
    return;
L_08903C18:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-14456)));
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-14452)));
    ctx.set_gpr(3, ctx.gpr[16] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08903C4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08903C4Cu) goto L_08903C4C;
    return;
L_08903C4C:
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
L_08903C68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08903C88u);
    // nop
    goto L_08902A38;
L_08903C88:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08903CC0;
      }
      goto L_08903C9C;
    }
L_08903C9C:
    ctx.set_gpr(4, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903CBC;
      }
      goto L_08903CB4;
    }
L_08903CB4:
    ctx.set_gpr(31, 0x08903CBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08903CBCu) goto L_08903CBC;
    return;
L_08903CBC:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08903CC0;
L_08903CC0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08903C9C;
      }
      goto L_08903CCC;
    }
L_08903CCC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08903CF0;
      }
      goto L_08903CDC;
    }
L_08903CDC:
    ctx.set_gpr(4, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08903CF0;
L_08903CF0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08903CDC;
      }
      goto L_08903CFC;
    }
L_08903CFC:
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
L_08903D1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(16, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08903D84;
      }
      goto L_08903D5C;
    }
L_08903D5C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08903D68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08903D68u) goto L_08903D68;
    return;
L_08903D68:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903D7C;
      }
      goto L_08903D70;
    }
L_08903D70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08903D7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08903D7Cu) goto L_08903D7C;
    return;
L_08903D7C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08903D84;
L_08903D84:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08903D98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08903D98u) goto L_08903D98;
    return;
L_08903D98:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903DC0;
      }
      goto L_08903DAC;
    }
L_08903DAC:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08903DB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08903DB8u) goto L_08903DB8;
    return;
L_08903DB8:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08903DC0;
L_08903DC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903DD8;
      }
      goto L_08903DC8;
    }
L_08903DC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08903DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08903DD8u) goto L_08903DD8;
    return;
L_08903DD8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903E00;
      }
      goto L_08903DF4;
    }
L_08903DF4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08903E00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x08903E00u) goto L_08903E00;
    return;
L_08903E00:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903E20;
      }
      goto L_08903E14;
    }
L_08903E14:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08903E20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x08903E20u) goto L_08903E20;
    return;
L_08903E20:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903E40;
      }
      goto L_08903E34;
    }
L_08903E34:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08903E40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x08903E40u) goto L_08903E40;
    return;
L_08903E40:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(37)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08903E58;
      }
      goto L_08903E4C;
    }
L_08903E4C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08903E58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 590u, 0x0895A800u>(ctx, &aot_mem) && ctx.pc == 0x08903E58u) goto L_08903E58;
    return;
L_08903E58:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08903E74u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08903E74u) goto L_08903E74;
    return;
L_08903E74:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08903EAC;
      }
      goto L_08903E84;
    }
L_08903E84:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08903E90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08903E90u) goto L_08903E90;
    return;
L_08903E90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903EA4;
      }
      goto L_08903E98;
    }
L_08903E98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08903EA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08903EA4u) goto L_08903EA4;
    return;
L_08903EA4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08903EAC;
L_08903EAC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08903EC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08903EC0u) goto L_08903EC0;
    return;
L_08903EC0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903EE8;
      }
      goto L_08903ED4;
    }
L_08903ED4:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08903EE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08903EE0u) goto L_08903EE0;
    return;
L_08903EE0:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    goto L_08903EE8;
L_08903EE8:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903F00;
      }
      goto L_08903EF0;
    }
L_08903EF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08903F00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08903F00u) goto L_08903F00;
    return;
L_08903F00:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(288));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08903F24:
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
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08903F90;
      }
      goto L_08903F74;
    }
L_08903F74:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] >> 6u);
    ctx.set_gpr(3, ctx.gpr[3] ^ ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08903F90;
L_08903F90:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08903F74;
      }
      goto L_08903F9C;
    }
L_08903F9C:
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] >> 11u);
    ctx.set_gpr(3, ctx.gpr[3] ^ ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 15u);
    ctx.set_gpr(21, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08903FD4;
      }
      goto L_08903FC8;
    }
L_08903FC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08903FD4;
L_08903FD4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(9, ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const std::uint32_t dividend = ctx.gpr[21]; const std::uint32_t divisor = ctx.gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 2u, 0x0890400Cu>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 1u, 0x08904000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0063(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0063_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_63(Runtime &runtime) {
    runtime.register_generated_unit(63u, 0x08900000u, 16384u, &recomp_unit_0063, &recomp_unit_0063_entry);
    runtime.register_function(0x08900000u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900030u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900060u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900070u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900090u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900098u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089000A4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089000B0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089000D8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089000E0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089000FCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900104u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900118u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900124u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900128u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890014Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890019Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089001B0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089001F0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089001F8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900204u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900210u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900238u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900240u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890025Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900264u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900278u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890027Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089002B4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089002ECu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089002FCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900320u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900328u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900334u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900340u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900368u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900370u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890038Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900394u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089003A8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089003B4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089003B8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089003E0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900430u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900444u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900490u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900498u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089004A4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089004B0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089004D8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089004E0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089004FCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900504u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900518u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890051Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900554u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900580u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900590u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890059Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089005A8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089005CCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089005D4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089005ECu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089005F0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089005FCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900618u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890063Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900690u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089006A0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089006ACu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089006B8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089006DCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089006E4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089006FCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900700u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890070Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900748u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900750u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900758u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890076Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900780u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900788u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890078Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900790u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890079Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089007B0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089007B8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089007CCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890080Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900830u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900840u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900874u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089008A0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089008B0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089008C8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089008D4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089008E0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089008F8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900904u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900918u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900924u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900930u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890094Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900954u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900964u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900970u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900974u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900998u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089009A0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089009DCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089009E4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900A20u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900A28u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900A64u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900A74u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900AECu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900AF4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900AFCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900B24u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900B28u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900B50u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900B54u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900B7Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900B88u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900BD0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900BD8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900C2Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900C40u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900C74u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900C80u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900C8Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900CA4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900CB0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900CC4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900CD0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900CDCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900CF8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900D00u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900D10u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900D24u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900D2Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900D40u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900D58u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900D94u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900DB8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900DC8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900E00u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900E20u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900E30u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900E80u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900E90u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900E98u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900EACu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900EE4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900F04u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900F14u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900F50u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900F80u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900FD0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900FE0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900FE8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08900FFCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901034u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901054u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901064u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089010A0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089010D0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089010F0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089010FCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901110u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901118u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901124u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901134u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890113Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901150u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901154u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901168u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901188u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901194u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089011ACu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089011B4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089011B8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089011D0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089011F0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089011FCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901208u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901218u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901230u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901234u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901250u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901264u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901274u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890127Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901280u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901290u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089012A4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089012B4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089012BCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089012C0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089012D0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089012F4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901300u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890130Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901320u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901328u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901330u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901344u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890134Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901354u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901368u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901370u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901380u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890139Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089013B4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089013D0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089013E0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089013F0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901414u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901428u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901434u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901440u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901458u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901460u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890147Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901488u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089014A0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089014B4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089014D0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089014DCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089014E0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089014E8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089014F4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089014FCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901508u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901510u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901528u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901530u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890154Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089015A4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089015B4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089015C0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089015C8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089015D0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089015E0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089015E8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089015FCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901614u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901634u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890163Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901648u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901654u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901660u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901668u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901680u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901694u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089016A8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089016B4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089016C0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089016D0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089016D8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089016F0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901704u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901718u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890172Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890173Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901740u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890174Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901758u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890176Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901778u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901790u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901798u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089017A4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089017B0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089017CCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089017D4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089017E0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089017F8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901800u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901804u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890180Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901814u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901828u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901834u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890184Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901864u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901870u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890188Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890189Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089018B8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089018C0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089018D0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089018DCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901930u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901948u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901950u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901968u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890197Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089019A0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089019A8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089019BCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089019C4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089019D8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089019E4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089019ECu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089019F4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901A0Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901A14u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901A20u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901A3Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901A44u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901A50u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901A68u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901A70u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901A74u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901A7Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901A84u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901A98u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901AA4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901ABCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901AD4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901AE0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901AF0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901B0Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901B14u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901B24u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901B44u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901B54u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901BA8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901BB0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901BBCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901BE0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901BE4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901BECu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901BF8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901C20u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901C24u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901C4Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901C50u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901C78u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901C7Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901C88u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901C98u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901CB0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901CB8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901CC4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901CD4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901CD8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901CE4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901D00u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901D08u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901D18u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901D30u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901D60u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901DCCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901DDCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901DE8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901DF0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901DF8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901E08u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901E10u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901E24u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901E3Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901E5Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901E64u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901E70u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901E7Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901E88u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901E90u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901EA8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901EBCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901ED0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901EDCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901EE8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901EF8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901F00u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901F18u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901F2Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901F40u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901F54u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901F64u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901F68u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901F74u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901F80u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901F94u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901FA0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901FB8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901FC0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901FCCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901FD8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901FF4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08901FFCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902008u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902020u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902028u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890202Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902034u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890203Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902050u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890205Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902074u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890208Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902098u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089020B4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089020C4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089020E0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089020E8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089020F8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902104u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902158u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902188u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902190u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089021A8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089021BCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089021E0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089021E8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089021FCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902204u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902218u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902224u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890222Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902234u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890224Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902254u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902260u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890227Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902284u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902290u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089022A8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089022B0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089022B4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089022BCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089022C4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089022D8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089022E4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089022FCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902314u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902320u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902330u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890234Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902354u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902364u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089023A4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089023B4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902408u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902410u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890241Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890245Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902460u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902468u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902474u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890249Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089024A0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089024C8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089024CCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089024F4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089024F8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902504u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902514u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890252Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902534u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902540u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902550u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902554u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902560u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890257Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902584u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902594u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089025ACu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089025E0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089025F8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890260Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902634u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890264Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902674u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890268Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089026A4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089026B0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089026C8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089026E0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902708u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902724u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902740u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902748u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902754u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902768u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902774u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902788u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089027ACu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089027BCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089027D0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089027E0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089027E8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902810u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890282Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902834u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902840u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890284Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902874u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890287Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902898u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089028A4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089028BCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089028D0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089028F4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902900u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902908u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902938u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902944u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902960u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890296Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902974u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890297Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902998u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089029ACu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089029BCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089029CCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089029ECu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089029F4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902A04u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902A0Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902A20u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902A38u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902A60u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902A70u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902A7Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902A88u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902AA0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902AA4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902AB8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902AD0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902AD8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902ADCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902AE8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902AF8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902B0Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902B18u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902B34u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902B48u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902B80u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902B98u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902BC0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902BE8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902BF4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902C04u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902C08u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902C1Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902C2Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902C30u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902C54u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902C60u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902C80u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902C9Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902CACu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902CB0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902CC4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902CD4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902D08u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902D1Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902D44u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902D64u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902D6Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902D78u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902D8Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902D94u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902DA0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902DA8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902DB4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902DD4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902DF4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902DFCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902E0Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902E30u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902E34u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902E38u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902E40u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902E4Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902E64u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902E6Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902E7Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902E90u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902E94u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902E9Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902EC8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902EE4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902EE8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902EF8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902F0Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902F14u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902F2Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902F54u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902F60u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902F70u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902F90u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902F98u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902FA0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902FC0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902FD8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902FE8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08902FF8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903000u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903018u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903020u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903034u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903040u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890307Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903088u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089030A8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089030C0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089030C8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089030D8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089030FCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903100u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890311Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903164u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903180u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903188u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089031ACu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089031B4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089031E0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089031FCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903208u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890324Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903258u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890326Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903294u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089032A0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089032A4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089032B0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089032B4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089032BCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089032ECu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089032F8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903304u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903318u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890332Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903340u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890334Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903358u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890336Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903394u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089033A8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089033ACu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089033B8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089033C0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089033D8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903400u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903418u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903424u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903438u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890344Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890345Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903464u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903470u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890348Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089034A4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089034B4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089034B8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089034ECu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089034FCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903514u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903518u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903520u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890352Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903534u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903544u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903554u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903560u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903568u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903578u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089035A0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089035B4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089035C4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089035D0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089035D8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089035E4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089035ECu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903600u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903614u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890362Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903630u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903638u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903650u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890365Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903660u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903674u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890368Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890369Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089036A8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089036B0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089036BCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089036C4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089036D8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089036ECu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903704u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903708u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903710u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903728u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903734u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903738u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903748u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903750u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890375Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903768u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903770u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890377Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903788u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089037A4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089037CCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089037D8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089037E4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089037F0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903808u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903818u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903824u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890382Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903834u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890384Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890385Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903868u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903870u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890387Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903888u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890389Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089038A4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089038B0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089038BCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089038DCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089038F4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089038F8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903900u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890390Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903918u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903930u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890393Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890394Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903958u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903960u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890396Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903974u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903988u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0890399Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089039B4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089039B8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089039C0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089039D8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089039E4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089039E8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x089039FCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903A18u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903A28u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903A40u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903A44u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903A4Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903A64u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903A70u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903A74u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903A88u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903A90u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903AA8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903AB4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903ABCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903AD8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903B04u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903B10u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903B20u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903B30u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903B44u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903B54u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903B68u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903B78u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903B90u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903BACu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903BC0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903BF0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903C04u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903C18u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903C4Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903C68u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903C88u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903C9Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903CB4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903CBCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903CC0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903CCCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903CDCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903CF0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903CFCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903D1Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903D5Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903D68u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903D70u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903D7Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903D84u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903D98u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903DACu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903DB8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903DC0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903DC8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903DD8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903DF4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903E00u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903E14u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903E20u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903E34u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903E40u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903E4Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903E58u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903E74u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903E84u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903E90u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903E98u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903EA4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903EACu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903EC0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903ED4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903EE0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903EE8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903EF0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903F00u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903F24u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903F74u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903F90u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903F9Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903FC8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08903FD4u, &recomp_unit_0063, "recomp_unit_0063");
}
} // namespace psprecomp
