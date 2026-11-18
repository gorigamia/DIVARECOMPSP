#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0116[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0,
    3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0,
    15, 0, 0, 16, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0,
    0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 25, 0, 0, 26, 0,
    0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0,
    0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 47,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 50, 0, 0, 0, 0, 51, 0, 52, 53, 0, 0, 0, 0, 54, 0, 55, 0,
    56, 0, 57, 58, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 63, 0, 0, 64, 0, 65, 0, 66, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0,
    76, 0, 0, 0, 77, 78, 79, 0, 0, 80, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 90, 0, 0, 91, 92, 0, 93, 0, 0, 94, 0,
    0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0,
    0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 110, 0, 0, 111,
    112, 0, 113, 0, 0, 114, 0, 0, 115, 0, 0, 116, 0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 123,
    0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0, 128, 0, 129, 0, 0, 130, 0, 131, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0,
    135, 0, 0, 136, 0, 0, 137, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 141, 0, 142, 0, 143, 0, 0, 0, 144, 0, 145, 0, 146, 0,
    147, 0, 0, 0, 148, 0, 149, 0, 150, 0, 151, 0, 0, 0, 152, 0, 153, 0, 154, 0, 155, 0, 0, 0, 156, 157, 0, 158, 0, 0, 0, 159,
    0, 160, 0, 161, 0, 0, 0, 162, 0, 163, 0, 164, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 169, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0,
    176, 0, 177, 0, 178, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 183, 0,
    0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 188, 0, 0, 189, 0, 190, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 193, 0, 0, 194, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 197, 0, 0, 198, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 203,
    0, 204, 0, 205, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 210, 0, 211, 0, 0, 212, 0, 213, 0, 0,
    0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 216, 0, 217, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 221, 0,
    0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 224, 225, 0, 0, 226, 0, 227, 228, 0, 0, 229, 0, 230, 231, 0, 0, 232, 0, 233, 234,
    0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 238, 0, 0, 239, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 242, 0, 243, 0, 0, 244, 0, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0,
    0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253,
    254, 0, 255, 0, 0, 0, 0, 0, 0, 256, 257, 0, 258, 0, 0, 0, 0, 0, 0, 259, 260, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0,
    0, 0, 0, 0, 0, 0, 263, 0, 0, 264, 0, 265, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 268, 0, 269, 0, 0, 0, 0, 0, 0,
    270, 271, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 276, 277, 0, 0, 0, 0, 278,
    0, 0, 0, 0, 0, 0, 279, 280, 0, 281, 0, 0, 0, 0, 282, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 285, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 290, 291, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0,
    0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0,
    0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0,
    0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0,
    0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 320, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0,
    0, 324, 0, 325, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 330, 0, 0, 0, 331, 0,
    0, 0, 0, 332, 0, 333, 0, 334, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0,
    0, 344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351,
    0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0,
    0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 363, 0,
    0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 367, 0, 0, 368, 0, 0, 0, 369, 0,
    0, 0, 0, 0, 0, 370, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0,
    373, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 379, 380, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384,
    385, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 389, 390, 0, 0, 391, 0, 392,
    0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 394, 395, 0, 0, 396, 0, 0, 397, 0, 0, 398, 0, 0, 0, 0,
    0, 0, 399, 0, 0, 400, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0,
    0, 0, 405, 406, 0, 0, 407, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    410, 411, 0, 0, 412, 413, 0, 0, 414, 0, 0, 415, 0, 0, 0, 416, 0, 417, 418, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 424, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 426, 0, 427, 0, 0, 0, 0, 0, 0, 428, 429, 0, 430, 0, 0, 0, 0, 0, 0, 431, 432, 0,
    433, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 436, 0, 437, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    439, 440, 0, 441, 0, 0, 0, 0, 0, 0, 442, 443, 0, 444, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0,
    0, 447, 0, 448, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 451, 452, 0, 453, 0, 0, 0, 0, 454, 455, 0, 0, 0, 456, 0, 457,
    0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 463, 464, 0, 0, 465, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 468, 469, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 473, 474,
    0, 0, 475, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 478, 479, 0, 0, 480, 481,
    0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 484, 0, 0, 485, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0,
    488, 0, 0, 0, 0, 0, 0, 489, 490, 0, 0, 491, 0, 0, 492, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0,
    0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 496, 497, 0, 0, 0, 0, 0, 498, 499, 0, 0, 0, 500, 0, 0, 501, 0, 0, 0, 502, 503, 0,
    0, 0, 504, 0, 0, 0, 0, 505, 0, 0, 506, 0, 507, 0, 508, 0, 0, 0, 509, 0, 0, 0, 0, 510, 0, 0, 511, 0, 512, 0, 513, 0,
    0, 0, 514, 0, 0, 0, 0, 515, 0, 516, 0, 517, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 519, 0, 520, 0, 0, 521, 522, 0, 0, 0,
    0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    525, 0, 0, 526, 0, 0, 527, 0, 528, 0, 0, 529, 0, 0, 0, 0, 530, 0, 0, 531, 0, 532, 0, 0, 0, 533, 0, 0, 534, 0, 0, 535,
    0, 0, 536, 0, 0, 0, 537, 0, 0, 538, 0, 0, 0, 0, 539, 0, 0, 540, 0, 541, 0, 542, 0, 0, 0, 543, 0, 0, 544, 0, 0, 545,
    0, 0, 546, 0, 0, 547, 0, 548, 0, 0, 549, 0, 0, 550, 551, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 553, 0, 0, 0, 0, 0,
    0, 0, 554, 0, 555, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 557, 0, 558, 0, 559, 560, 0, 0, 561, 0, 0, 562, 0, 0, 563, 0, 0,
    0, 564, 0, 0, 565, 0, 0, 0, 566, 0, 0, 567, 0, 0, 0, 568, 0, 0, 569, 0, 570, 571, 0, 0, 572, 0, 573, 0, 574, 575, 0, 0,
    0, 0, 576, 0, 0, 0, 577, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 580, 0, 581, 0, 0, 582, 0, 0, 0, 583,
    0, 0, 0, 584, 0, 0, 0, 585, 0, 0, 586, 0, 0, 0, 587, 0, 0, 588, 0, 589, 0, 0, 0, 0, 0, 0, 590, 0, 591, 0, 0, 0,
    592, 0, 0, 0, 0, 593, 0, 0, 0, 594, 0, 595, 596, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 598, 0,
    0, 0, 599, 0, 0, 0, 0, 600, 0, 0, 0, 601, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 604, 0, 0, 605,
    0, 0, 606, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 608, 0, 609, 0, 0, 0, 0, 0, 0, 610, 0, 0, 611, 0, 612, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 614, 0, 615, 0, 0, 0, 0, 0, 0, 616, 617, 0, 618, 0, 0, 0, 0, 0, 0, 619,
    620, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 623, 0, 624, 0, 0, 0, 0, 0, 0, 625, 626, 0, 627, 0, 0, 0, 0, 0, 0,
    628, 629, 0, 630, 631, 0, 0, 0, 0, 0, 0, 0, 632, 0, 633, 0, 0, 0, 0, 0, 634, 0, 0, 0, 635, 0, 0, 0, 636, 0, 0, 0,
    637, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 0, 639, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    641, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 643, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 646, 0, 0,
    0, 647, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 649, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 653,
    0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 656, 0, 0, 657, 0, 0, 0, 658, 0, 0, 659, 0, 660, 0, 0, 0, 0,
    0, 0, 661, 662, 0, 663, 0, 0, 0, 0, 0, 0, 664, 665, 0, 666, 0, 0, 0, 0, 0, 0, 667, 668, 0, 669, 0, 0, 0, 0, 0, 0,
    670, 671, 0, 672, 0, 0, 0, 0, 0, 0, 673, 674, 0, 675, 0, 0, 0, 0, 0, 0, 676, 677, 0, 678, 0, 0, 679, 0, 0, 0, 0, 0,
    0, 680, 0, 0, 0, 0, 681, 0, 0, 0, 682, 0, 0, 683, 0, 684, 685, 0, 0, 0, 0, 0, 0, 686, 687, 0, 688, 0, 0, 0, 0, 0,
    0, 689, 690, 0, 691, 0, 0, 0, 0, 0, 0, 692, 693, 0, 694, 0, 0, 0, 0, 0, 0, 695, 696, 0, 697, 0, 698, 0, 0, 699, 0, 0,
    0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 0, 0, 0, 0, 0, 0, 702, 0, 0, 703, 0, 704, 705, 0,
    0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 707, 0, 0, 0, 708, 0, 0, 0, 709, 0, 0, 710, 0, 0, 711, 0, 0, 712, 0, 0,
    713, 0, 0, 714, 0, 0, 715, 0, 0, 716, 0, 717, 0, 0, 718, 0, 719, 0, 720, 0, 721, 0, 0, 0, 0, 722, 0, 0, 0, 0, 723, 0,
    0, 0, 724, 0, 725, 0, 0, 0, 0, 726, 0, 0, 0, 0, 727, 0, 0, 0, 728, 0, 729, 730, 731, 0, 0, 0, 0, 0, 0, 732, 0, 0,
    0, 733, 734, 0, 0, 0, 735, 736, 0, 0, 0, 737, 0, 738, 0, 739, 0, 740, 0, 0, 741, 0, 0, 742, 0, 0, 0, 0, 743, 0, 0, 0,
    744, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 0, 0, 0, 746, 0, 0, 0, 0, 747, 0, 748, 0, 0, 0, 0, 0, 749, 0, 750, 751, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 752, 0, 0, 753, 0, 0, 754, 0, 0, 755, 0, 0, 756, 0, 0, 757, 0, 0, 758, 0, 0, 759, 0, 0,
    760, 0, 761, 0, 0, 762, 0, 763, 0, 764, 0, 0, 765, 0, 766, 0, 0, 767, 0, 0, 768, 0, 0, 0, 769, 0, 0, 770, 0, 771, 772, 0,
    0, 773, 0, 0, 0, 0, 0, 0, 0, 0, 0, 774, 0, 775, 0, 0, 0, 0, 0, 0, 0, 776, 0, 0, 777, 0, 0, 778, 0, 0, 779, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 780, 0, 0, 0, 0, 0, 0, 0, 781,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 782, 0, 0, 0, 0, 0, 0, 0, 783, 0, 0, 0, 0,
    0, 784, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0, 0, 786, 0, 0, 787, 0, 0, 788, 0, 0, 789, 0, 790, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 791, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 792, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 793, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 794, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 795, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 796, 0, 0, 797, 0, 798, 0, 0, 0, 0, 0, 0,
    799, 0, 0, 0, 0, 0, 0, 0, 800, 0, 0, 801, 0, 0, 802, 0, 0, 803, 0, 804, 0, 0, 805, 0, 806, 0, 0, 0, 807, 0, 0, 0,
    0, 0, 0, 0, 808, 0, 0, 0, 809, 0, 810, 0, 0, 811, 0, 0, 0, 0, 0, 812, 0, 813, 0, 0, 814, 0, 0, 815, 0, 0, 0, 0,
    0, 0, 816, 0, 0, 0, 0, 0, 817, 0, 818, 0, 0, 819, 0, 0, 820, 0, 821, 822, 0, 0, 823, 0, 824, 825, 0, 0, 826, 0, 827, 828,
    0, 0, 829, 0, 0, 0, 0, 0, 830, 0, 0, 0, 0, 0, 0, 0, 831, 0, 0, 0, 832, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 833, 0, 0, 834, 0, 0, 0, 0, 0, 0, 0, 0, 835, 0, 0, 0, 0, 0, 0, 836, 0, 0, 837, 0, 0,
    838, 0, 0, 839, 0, 0, 840, 0, 0, 841, 0, 0, 842, 0, 0, 843, 0, 844, 0, 0, 845, 0, 846, 0, 0, 847, 0, 0, 848, 0, 0, 849,
};
void recomp_unit_0116_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089D4000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0116[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089D4000;
    case 2u: goto L_089D4078;
    case 3u: goto L_089D4080;
    case 4u: goto L_089D408C;
    case 5u: goto L_089D40A8;
    case 6u: goto L_089D40C0;
    case 7u: goto L_089D40CC;
    case 8u: goto L_089D4100;
    case 9u: goto L_089D4120;
    case 10u: goto L_089D412C;
    case 11u: goto L_089D4138;
    case 12u: goto L_089D4154;
    case 13u: goto L_089D4168;
    case 14u: goto L_089D4174;
    case 15u: goto L_089D4180;
    case 16u: goto L_089D418C;
    case 17u: goto L_089D4198;
    case 18u: goto L_089D41A0;
    case 19u: goto L_089D41C4;
    case 20u: goto L_089D41E4;
    case 21u: goto L_089D4208;
    case 22u: goto L_089D4214;
    case 23u: goto L_089D4250;
    case 24u: goto L_089D425C;
    case 25u: goto L_089D426C;
    case 26u: goto L_089D4278;
    case 27u: goto L_089D429C;
    case 28u: goto L_089D42B0;
    case 29u: goto L_089D42D4;
    case 30u: goto L_089D42E8;
    case 31u: goto L_089D4308;
    case 32u: goto L_089D4320;
    case 33u: goto L_089D432C;
    case 34u: goto L_089D4348;
    case 35u: goto L_089D4418;
    case 36u: goto L_089D4420;
    case 37u: goto L_089D442C;
    case 38u: goto L_089D4444;
    case 39u: goto L_089D4464;
    case 40u: goto L_089D449C;
    case 41u: goto L_089D44A8;
    case 42u: goto L_089D44B8;
    case 43u: goto L_089D44C4;
    case 44u: goto L_089D44D0;
    case 45u: goto L_089D44F0;
    case 46u: goto L_089D44F8;
    case 47u: goto L_089D44FC;
    case 48u: goto L_089D452C;
    case 49u: goto L_089D4538;
    case 50u: goto L_089D453C;
    case 51u: goto L_089D4550;
    case 52u: goto L_089D4558;
    case 53u: goto L_089D455C;
    case 54u: goto L_089D4570;
    case 55u: goto L_089D4578;
    case 56u: goto L_089D4580;
    case 57u: goto L_089D4588;
    case 58u: goto L_089D458C;
    case 59u: goto L_089D459C;
    case 60u: goto L_089D45A8;
    case 61u: goto L_089D45B8;
    case 62u: goto L_089D45C8;
    case 63u: goto L_089D45D4;
    case 64u: goto L_089D45E0;
    case 65u: goto L_089D45E8;
    case 66u: goto L_089D45F0;
    case 67u: goto L_089D462C;
    case 68u: goto L_089D4640;
    case 69u: goto L_089D4654;
    case 70u: goto L_089D4684;
    case 71u: goto L_089D4690;
    case 72u: goto L_089D46AC;
    case 73u: goto L_089D46B8;
    case 74u: goto L_089D46C4;
    case 75u: goto L_089D46F8;
    case 76u: goto L_089D4700;
    case 77u: goto L_089D4710;
    case 78u: goto L_089D4714;
    case 79u: goto L_089D4718;
    case 80u: goto L_089D4724;
    case 81u: goto L_089D472C;
    case 82u: goto L_089D4738;
    case 83u: goto L_089D4744;
    case 84u: goto L_089D475C;
    case 85u: goto L_089D4784;
    case 86u: goto L_089D4794;
    case 87u: goto L_089D47A4;
    case 88u: goto L_089D47BC;
    case 89u: goto L_089D47CC;
    case 90u: goto L_089D47D4;
    case 91u: goto L_089D47E0;
    case 92u: goto L_089D47E4;
    case 93u: goto L_089D47EC;
    case 94u: goto L_089D47F8;
    case 95u: goto L_089D4818;
    case 96u: goto L_089D4828;
    case 97u: goto L_089D4840;
    case 98u: goto L_089D484C;
    case 99u: goto L_089D485C;
    case 100u: goto L_089D4868;
    case 101u: goto L_089D48AC;
    case 102u: goto L_089D48C4;
    case 103u: goto L_089D48DC;
    case 104u: goto L_089D48F4;
    case 105u: goto L_089D4908;
    case 106u: goto L_089D491C;
    case 107u: goto L_089D4940;
    case 108u: goto L_089D4954;
    case 109u: goto L_089D4964;
    case 110u: goto L_089D4970;
    case 111u: goto L_089D497C;
    case 112u: goto L_089D4980;
    case 113u: goto L_089D4988;
    case 114u: goto L_089D4994;
    case 115u: goto L_089D49A0;
    case 116u: goto L_089D49AC;
    case 117u: goto L_089D49B4;
    case 118u: goto L_089D49C0;
    case 119u: goto L_089D49CC;
    case 120u: goto L_089D49D8;
    case 121u: goto L_089D49E4;
    case 122u: goto L_089D49F0;
    case 123u: goto L_089D49FC;
    case 124u: goto L_089D4A08;
    case 125u: goto L_089D4A14;
    case 126u: goto L_089D4A20;
    case 127u: goto L_089D4A2C;
    case 128u: goto L_089D4A34;
    case 129u: goto L_089D4A3C;
    case 130u: goto L_089D4A48;
    case 131u: goto L_089D4A50;
    case 132u: goto L_089D4A58;
    case 133u: goto L_089D4A68;
    case 134u: goto L_089D4A78;
    case 135u: goto L_089D4A80;
    case 136u: goto L_089D4A8C;
    case 137u: goto L_089D4A98;
    case 138u: goto L_089D4AA0;
    case 139u: goto L_089D4AB0;
    case 140u: goto L_089D4AC0;
    case 141u: goto L_089D4AC8;
    case 142u: goto L_089D4AD0;
    case 143u: goto L_089D4AD8;
    case 144u: goto L_089D4AE8;
    case 145u: goto L_089D4AF0;
    case 146u: goto L_089D4AF8;
    case 147u: goto L_089D4B00;
    case 148u: goto L_089D4B10;
    case 149u: goto L_089D4B18;
    case 150u: goto L_089D4B20;
    case 151u: goto L_089D4B28;
    case 152u: goto L_089D4B38;
    case 153u: goto L_089D4B40;
    case 154u: goto L_089D4B48;
    case 155u: goto L_089D4B50;
    case 156u: goto L_089D4B60;
    case 157u: goto L_089D4B64;
    case 158u: goto L_089D4B6C;
    case 159u: goto L_089D4B7C;
    case 160u: goto L_089D4B84;
    case 161u: goto L_089D4B8C;
    case 162u: goto L_089D4B9C;
    case 163u: goto L_089D4BA4;
    case 164u: goto L_089D4BAC;
    case 165u: goto L_089D4BB0;
    case 166u: goto L_089D4BB8;
    case 167u: goto L_089D4BE0;
    case 168u: goto L_089D4BE8;
    case 169u: goto L_089D4BF4;
    case 170u: goto L_089D4C24;
    case 171u: goto L_089D4C30;
    case 172u: goto L_089D4C38;
    case 173u: goto L_089D4C44;
    case 174u: goto L_089D4C6C;
    case 175u: goto L_089D4C78;
    case 176u: goto L_089D4C80;
    case 177u: goto L_089D4C88;
    case 178u: goto L_089D4C90;
    case 179u: goto L_089D4CA0;
    case 180u: goto L_089D4CAC;
    case 181u: goto L_089D4CE8;
    case 182u: goto L_089D4CF4;
    case 183u: goto L_089D4CF8;
    case 184u: goto L_089D4D14;
    case 185u: goto L_089D4D20;
    case 186u: goto L_089D4D28;
    case 187u: goto L_089D4D34;
    case 188u: goto L_089D4D8C;
    case 189u: goto L_089D4D98;
    case 190u: goto L_089D4DA0;
    case 191u: goto L_089D4DB0;
    case 192u: goto L_089D4DBC;
    case 193u: goto L_089D4E10;
    case 194u: goto L_089D4E1C;
    case 195u: goto L_089D4E24;
    case 196u: goto L_089D4E30;
    case 197u: goto L_089D4E84;
    case 198u: goto L_089D4E90;
    case 199u: goto L_089D4E98;
    case 200u: goto L_089D4EA4;
    case 201u: goto L_089D4EE8;
    case 202u: goto L_089D4EF4;
    case 203u: goto L_089D4EFC;
    case 204u: goto L_089D4F04;
    case 205u: goto L_089D4F0C;
    case 206u: goto L_089D4F14;
    case 207u: goto L_089D4F20;
    case 208u: goto L_089D4F44;
    case 209u: goto L_089D4F50;
    case 210u: goto L_089D4F58;
    case 211u: goto L_089D4F60;
    case 212u: goto L_089D4F6C;
    case 213u: goto L_089D4F74;
    case 214u: goto L_089D4F98;
    case 215u: goto L_089D4FA8;
    case 216u: goto L_089D4FB0;
    case 217u: goto L_089D4FB8;
    case 218u: goto L_089D4FC8;
    case 219u: goto L_089D4FD8;
    case 220u: goto L_089D4FE8;
    case 221u: goto L_089D4FF8;
    case 222u: goto L_089D501C;
    case 223u: goto L_089D5028;
    case 224u: goto L_089D5030;
    case 225u: goto L_089D5034;
    case 226u: goto L_089D5040;
    case 227u: goto L_089D5048;
    case 228u: goto L_089D504C;
    case 229u: goto L_089D5058;
    case 230u: goto L_089D5060;
    case 231u: goto L_089D5064;
    case 232u: goto L_089D5070;
    case 233u: goto L_089D5078;
    case 234u: goto L_089D507C;
    case 235u: goto L_089D5088;
    case 236u: goto L_089D5094;
    case 237u: goto L_089D50A0;
    case 238u: goto L_089D50A8;
    case 239u: goto L_089D50B4;
    case 240u: goto L_089D50C8;
    case 241u: goto L_089D50D0;
    case 242u: goto L_089D510C;
    case 243u: goto L_089D5114;
    case 244u: goto L_089D5120;
    case 245u: goto L_089D5130;
    case 246u: goto L_089D513C;
    case 247u: goto L_089D5148;
    case 248u: goto L_089D5174;
    case 249u: goto L_089D5188;
    case 250u: goto L_089D51B8;
    case 251u: goto L_089D51C4;
    case 252u: goto L_089D51D0;
    case 253u: goto L_089D51FC;
    case 254u: goto L_089D5200;
    case 255u: goto L_089D5208;
    case 256u: goto L_089D5224;
    case 257u: goto L_089D5228;
    case 258u: goto L_089D5230;
    case 259u: goto L_089D524C;
    case 260u: goto L_089D5250;
    case 261u: goto L_089D5258;
    case 262u: goto L_089D5274;
    case 263u: goto L_089D5298;
    case 264u: goto L_089D52A4;
    case 265u: goto L_089D52AC;
    case 266u: goto L_089D52B0;
    case 267u: goto L_089D52D8;
    case 268u: goto L_089D52DC;
    case 269u: goto L_089D52E4;
    case 270u: goto L_089D5300;
    case 271u: goto L_089D5304;
    case 272u: goto L_089D530C;
    case 273u: goto L_089D5328;
    case 274u: goto L_089D5350;
    case 275u: goto L_089D535C;
    case 276u: goto L_089D5364;
    case 277u: goto L_089D5368;
    case 278u: goto L_089D537C;
    case 279u: goto L_089D5398;
    case 280u: goto L_089D539C;
    case 281u: goto L_089D53A4;
    case 282u: goto L_089D53B8;
    case 283u: goto L_089D53BC;
    case 284u: goto L_089D53DC;
    case 285u: goto L_089D5404;
    case 286u: goto L_089D5408;
    case 287u: goto L_089D541C;
    case 288u: goto L_089D5434;
    case 289u: goto L_089D5448;
    case 290u: goto L_089D5450;
    case 291u: goto L_089D5454;
    case 292u: goto L_089D5478;
    case 293u: goto L_089D54B4;
    case 294u: goto L_089D54F0;
    case 295u: goto L_089D5514;
    case 296u: goto L_089D5550;
    case 297u: goto L_089D558C;
    case 298u: goto L_089D55B0;
    case 299u: goto L_089D55D8;
    case 300u: goto L_089D5600;
    case 301u: goto L_089D5638;
    case 302u: goto L_089D5660;
    case 303u: goto L_089D568C;
    case 304u: goto L_089D569C;
    case 305u: goto L_089D56B4;
    case 306u: goto L_089D56CC;
    case 307u: goto L_089D56DC;
    case 308u: goto L_089D56F4;
    case 309u: goto L_089D570C;
    case 310u: goto L_089D571C;
    case 311u: goto L_089D5734;
    case 312u: goto L_089D574C;
    case 313u: goto L_089D575C;
    case 314u: goto L_089D5774;
    case 315u: goto L_089D5788;
    case 316u: goto L_089D57BC;
    case 317u: goto L_089D57F0;
    case 318u: goto L_089D5814;
    case 319u: goto L_089D5828;
    case 320u: goto L_089D5830;
    case 321u: goto L_089D5838;
    case 322u: goto L_089D5860;
    case 323u: goto L_089D5870;
    case 324u: goto L_089D5884;
    case 325u: goto L_089D588C;
    case 326u: goto L_089D5894;
    case 327u: goto L_089D58BC;
    case 328u: goto L_089D58CC;
    case 329u: goto L_089D58E0;
    case 330u: goto L_089D58E8;
    case 331u: goto L_089D58F8;
    case 332u: goto L_089D590C;
    case 333u: goto L_089D5914;
    case 334u: goto L_089D591C;
    case 335u: goto L_089D5920;
    case 336u: goto L_089D5930;
    case 337u: goto L_089D5968;
    case 338u: goto L_089D59A0;
    case 339u: goto L_089D59C0;
    case 340u: goto L_089D59F8;
    case 341u: goto L_089D5A30;
    case 342u: goto L_089D5A50;
    case 343u: goto L_089D5A74;
    case 344u: goto L_089D5A84;
    case 345u: goto L_089D5AA4;
    case 346u: goto L_089D5AC0;
    case 347u: goto L_089D5AEC;
    case 348u: goto L_089D5B18;
    case 349u: goto L_089D5B44;
    case 350u: goto L_089D5B50;
    case 351u: goto L_089D5B7C;
    case 352u: goto L_089D5B98;
    case 353u: goto L_089D5BCC;
    case 354u: goto L_089D5BF8;
    case 355u: goto L_089D5C24;
    case 356u: goto L_089D5C50;
    case 357u: goto L_089D5C78;
    case 358u: goto L_089D5C88;
    case 359u: goto L_089D5C9C;
    case 360u: goto L_089D5CC0;
    case 361u: goto L_089D5CD8;
    case 362u: goto L_089D5CF0;
    case 363u: goto L_089D5CF8;
    case 364u: goto L_089D5D08;
    case 365u: goto L_089D5D44;
    case 366u: goto L_089D5D50;
    case 367u: goto L_089D5D5C;
    case 368u: goto L_089D5D68;
    case 369u: goto L_089D5D78;
    case 370u: goto L_089D5D94;
    case 371u: goto L_089D5D98;
    case 372u: goto L_089D5DF8;
    case 373u: goto L_089D5E00;
    case 374u: goto L_089D5E08;
    case 375u: goto L_089D5E1C;
    case 376u: goto L_089D5E2C;
    case 377u: goto L_089D5E3C;
    case 378u: goto L_089D5E64;
    case 379u: goto L_089D5E8C;
    case 380u: goto L_089D5E90;
    case 381u: goto L_089D5E9C;
    case 382u: goto L_089D5EAC;
    case 383u: goto L_089D5ED4;
    case 384u: goto L_089D5EFC;
    case 385u: goto L_089D5F00;
    case 386u: goto L_089D5F0C;
    case 387u: goto L_089D5F1C;
    case 388u: goto L_089D5F44;
    case 389u: goto L_089D5F64;
    case 390u: goto L_089D5F68;
    case 391u: goto L_089D5F74;
    case 392u: goto L_089D5F7C;
    case 393u: goto L_089D5FA0;
    case 394u: goto L_089D5FC4;
    case 395u: goto L_089D5FC8;
    case 396u: goto L_089D5FD4;
    case 397u: goto L_089D5FE0;
    case 398u: goto L_089D5FEC;
    case 399u: goto L_089D6008;
    case 400u: goto L_089D6014;
    case 401u: goto L_089D6018;
    case 402u: goto L_089D6028;
    case 403u: goto L_089D6040;
    case 404u: goto L_089D6068;
    case 405u: goto L_089D6088;
    case 406u: goto L_089D608C;
    case 407u: goto L_089D6098;
    case 408u: goto L_089D60A4;
    case 409u: goto L_089D60D8;
    case 410u: goto L_089D6100;
    case 411u: goto L_089D6104;
    case 412u: goto L_089D6110;
    case 413u: goto L_089D6114;
    case 414u: goto L_089D6120;
    case 415u: goto L_089D612C;
    case 416u: goto L_089D613C;
    case 417u: goto L_089D6144;
    case 418u: goto L_089D6148;
    case 419u: goto L_089D614C;
    case 420u: goto L_089D6180;
    case 421u: goto L_089D61B8;
    case 422u: goto L_089D61C8;
    case 423u: goto L_089D61D8;
    case 424u: goto L_089D61F8;
    case 425u: goto L_089D6224;
    case 426u: goto L_089D6228;
    case 427u: goto L_089D6230;
    case 428u: goto L_089D624C;
    case 429u: goto L_089D6250;
    case 430u: goto L_089D6258;
    case 431u: goto L_089D6274;
    case 432u: goto L_089D6278;
    case 433u: goto L_089D6280;
    case 434u: goto L_089D629C;
    case 435u: goto L_089D62C0;
    case 436u: goto L_089D62CC;
    case 437u: goto L_089D62D4;
    case 438u: goto L_089D62D8;
    case 439u: goto L_089D6300;
    case 440u: goto L_089D6304;
    case 441u: goto L_089D630C;
    case 442u: goto L_089D6328;
    case 443u: goto L_089D632C;
    case 444u: goto L_089D6334;
    case 445u: goto L_089D6350;
    case 446u: goto L_089D6378;
    case 447u: goto L_089D6384;
    case 448u: goto L_089D638C;
    case 449u: goto L_089D6390;
    case 450u: goto L_089D63A4;
    case 451u: goto L_089D63C0;
    case 452u: goto L_089D63C4;
    case 453u: goto L_089D63CC;
    case 454u: goto L_089D63E0;
    case 455u: goto L_089D63E4;
    case 456u: goto L_089D63F4;
    case 457u: goto L_089D63FC;
    case 458u: goto L_089D6408;
    case 459u: goto L_089D6418;
    case 460u: goto L_089D643C;
    case 461u: goto L_089D6450;
    case 462u: goto L_089D6478;
    case 463u: goto L_089D64A0;
    case 464u: goto L_089D64A4;
    case 465u: goto L_089D64B0;
    case 466u: goto L_089D64C0;
    case 467u: goto L_089D64E8;
    case 468u: goto L_089D6510;
    case 469u: goto L_089D6514;
    case 470u: goto L_089D6520;
    case 471u: goto L_089D6530;
    case 472u: goto L_089D6558;
    case 473u: goto L_089D6578;
    case 474u: goto L_089D657C;
    case 475u: goto L_089D6588;
    case 476u: goto L_089D6594;
    case 477u: goto L_089D65C8;
    case 478u: goto L_089D65E8;
    case 479u: goto L_089D65EC;
    case 480u: goto L_089D65F8;
    case 481u: goto L_089D65FC;
    case 482u: goto L_089D6618;
    case 483u: goto L_089D6628;
    case 484u: goto L_089D6634;
    case 485u: goto L_089D6640;
    case 486u: goto L_089D664C;
    case 487u: goto L_089D6670;
    case 488u: goto L_089D6680;
    case 489u: goto L_089D669C;
    case 490u: goto L_089D66A0;
    case 491u: goto L_089D66AC;
    case 492u: goto L_089D66B8;
    case 493u: goto L_089D66D4;
    case 494u: goto L_089D66F4;
    case 495u: goto L_089D6708;
    case 496u: goto L_089D6728;
    case 497u: goto L_089D672C;
    case 498u: goto L_089D6744;
    case 499u: goto L_089D6748;
    case 500u: goto L_089D6758;
    case 501u: goto L_089D6764;
    case 502u: goto L_089D6774;
    case 503u: goto L_089D6778;
    case 504u: goto L_089D6788;
    case 505u: goto L_089D679C;
    case 506u: goto L_089D67A8;
    case 507u: goto L_089D67B0;
    case 508u: goto L_089D67B8;
    case 509u: goto L_089D67C8;
    case 510u: goto L_089D67DC;
    case 511u: goto L_089D67E8;
    case 512u: goto L_089D67F0;
    case 513u: goto L_089D67F8;
    case 514u: goto L_089D6808;
    case 515u: goto L_089D681C;
    case 516u: goto L_089D6824;
    case 517u: goto L_089D682C;
    case 518u: goto L_089D6838;
    case 519u: goto L_089D6858;
    case 520u: goto L_089D6860;
    case 521u: goto L_089D686C;
    case 522u: goto L_089D6870;
    case 523u: goto L_089D688C;
    case 524u: goto L_089D68BC;
    case 525u: goto L_089D6900;
    case 526u: goto L_089D690C;
    case 527u: goto L_089D6918;
    case 528u: goto L_089D6920;
    case 529u: goto L_089D692C;
    case 530u: goto L_089D6940;
    case 531u: goto L_089D694C;
    case 532u: goto L_089D6954;
    case 533u: goto L_089D6964;
    case 534u: goto L_089D6970;
    case 535u: goto L_089D697C;
    case 536u: goto L_089D6988;
    case 537u: goto L_089D6998;
    case 538u: goto L_089D69A4;
    case 539u: goto L_089D69B8;
    case 540u: goto L_089D69C4;
    case 541u: goto L_089D69CC;
    case 542u: goto L_089D69D4;
    case 543u: goto L_089D69E4;
    case 544u: goto L_089D69F0;
    case 545u: goto L_089D69FC;
    case 546u: goto L_089D6A08;
    case 547u: goto L_089D6A14;
    case 548u: goto L_089D6A1C;
    case 549u: goto L_089D6A28;
    case 550u: goto L_089D6A34;
    case 551u: goto L_089D6A38;
    case 552u: goto L_089D6A58;
    case 553u: goto L_089D6A68;
    case 554u: goto L_089D6A88;
    case 555u: goto L_089D6A90;
    case 556u: goto L_089D6AA8;
    case 557u: goto L_089D6ABC;
    case 558u: goto L_089D6AC4;
    case 559u: goto L_089D6ACC;
    case 560u: goto L_089D6AD0;
    case 561u: goto L_089D6ADC;
    case 562u: goto L_089D6AE8;
    case 563u: goto L_089D6AF4;
    case 564u: goto L_089D6B04;
    case 565u: goto L_089D6B10;
    case 566u: goto L_089D6B20;
    case 567u: goto L_089D6B2C;
    case 568u: goto L_089D6B3C;
    case 569u: goto L_089D6B48;
    case 570u: goto L_089D6B50;
    case 571u: goto L_089D6B54;
    case 572u: goto L_089D6B60;
    case 573u: goto L_089D6B68;
    case 574u: goto L_089D6B70;
    case 575u: goto L_089D6B74;
    case 576u: goto L_089D6B88;
    case 577u: goto L_089D6B98;
    case 578u: goto L_089D6BA4;
    case 579u: goto L_089D6BC8;
    case 580u: goto L_089D6BD8;
    case 581u: goto L_089D6BE0;
    case 582u: goto L_089D6BEC;
    case 583u: goto L_089D6BFC;
    case 584u: goto L_089D6C0C;
    case 585u: goto L_089D6C1C;
    case 586u: goto L_089D6C28;
    case 587u: goto L_089D6C38;
    case 588u: goto L_089D6C44;
    case 589u: goto L_089D6C4C;
    case 590u: goto L_089D6C68;
    case 591u: goto L_089D6C70;
    case 592u: goto L_089D6C80;
    case 593u: goto L_089D6C94;
    case 594u: goto L_089D6CA4;
    case 595u: goto L_089D6CAC;
    case 596u: goto L_089D6CB0;
    case 597u: goto L_089D6CE0;
    case 598u: goto L_089D6CF8;
    case 599u: goto L_089D6D08;
    case 600u: goto L_089D6D1C;
    case 601u: goto L_089D6D2C;
    case 602u: goto L_089D6D3C;
    case 603u: goto L_089D6D64;
    case 604u: goto L_089D6D70;
    case 605u: goto L_089D6D7C;
    case 606u: goto L_089D6D88;
    case 607u: goto L_089D6D9C;
    case 608u: goto L_089D6DB4;
    case 609u: goto L_089D6DBC;
    case 610u: goto L_089D6DD8;
    case 611u: goto L_089D6DE4;
    case 612u: goto L_089D6DEC;
    case 613u: goto L_089D6E2C;
    case 614u: goto L_089D6E30;
    case 615u: goto L_089D6E38;
    case 616u: goto L_089D6E54;
    case 617u: goto L_089D6E58;
    case 618u: goto L_089D6E60;
    case 619u: goto L_089D6E7C;
    case 620u: goto L_089D6E80;
    case 621u: goto L_089D6E88;
    case 622u: goto L_089D6EB0;
    case 623u: goto L_089D6EB4;
    case 624u: goto L_089D6EBC;
    case 625u: goto L_089D6ED8;
    case 626u: goto L_089D6EDC;
    case 627u: goto L_089D6EE4;
    case 628u: goto L_089D6F00;
    case 629u: goto L_089D6F04;
    case 630u: goto L_089D6F0C;
    case 631u: goto L_089D6F10;
    case 632u: goto L_089D6F30;
    case 633u: goto L_089D6F38;
    case 634u: goto L_089D6F50;
    case 635u: goto L_089D6F60;
    case 636u: goto L_089D6F70;
    case 637u: goto L_089D6F80;
    case 638u: goto L_089D6FBC;
    case 639u: goto L_089D6FC8;
    case 640u: goto L_089D6FD8;
    case 641u: goto L_089D7000;
    case 642u: goto L_089D7018;
    case 643u: goto L_089D702C;
    case 644u: goto L_089D7034;
    case 645u: goto L_089D705C;
    case 646u: goto L_089D7074;
    case 647u: goto L_089D7084;
    case 648u: goto L_089D70A0;
    case 649u: goto L_089D7104;
    case 650u: goto L_089D7118;
    case 651u: goto L_089D714C;
    case 652u: goto L_089D7158;
    case 653u: goto L_089D717C;
    case 654u: goto L_089D7190;
    case 655u: goto L_089D71AC;
    case 656u: goto L_089D71BC;
    case 657u: goto L_089D71C8;
    case 658u: goto L_089D71D8;
    case 659u: goto L_089D71E4;
    case 660u: goto L_089D71EC;
    case 661u: goto L_089D7208;
    case 662u: goto L_089D720C;
    case 663u: goto L_089D7214;
    case 664u: goto L_089D7230;
    case 665u: goto L_089D7234;
    case 666u: goto L_089D723C;
    case 667u: goto L_089D7258;
    case 668u: goto L_089D725C;
    case 669u: goto L_089D7264;
    case 670u: goto L_089D7280;
    case 671u: goto L_089D7284;
    case 672u: goto L_089D728C;
    case 673u: goto L_089D72A8;
    case 674u: goto L_089D72AC;
    case 675u: goto L_089D72B4;
    case 676u: goto L_089D72D0;
    case 677u: goto L_089D72D4;
    case 678u: goto L_089D72DC;
    case 679u: goto L_089D72E8;
    case 680u: goto L_089D7304;
    case 681u: goto L_089D7318;
    case 682u: goto L_089D7328;
    case 683u: goto L_089D7334;
    case 684u: goto L_089D733C;
    case 685u: goto L_089D7340;
    case 686u: goto L_089D735C;
    case 687u: goto L_089D7360;
    case 688u: goto L_089D7368;
    case 689u: goto L_089D7384;
    case 690u: goto L_089D7388;
    case 691u: goto L_089D7390;
    case 692u: goto L_089D73AC;
    case 693u: goto L_089D73B0;
    case 694u: goto L_089D73B8;
    case 695u: goto L_089D73D4;
    case 696u: goto L_089D73D8;
    case 697u: goto L_089D73E0;
    case 698u: goto L_089D73E8;
    case 699u: goto L_089D73F4;
    case 700u: goto L_089D7410;
    case 701u: goto L_089D743C;
    case 702u: goto L_089D7460;
    case 703u: goto L_089D746C;
    case 704u: goto L_089D7474;
    case 705u: goto L_089D7478;
    case 706u: goto L_089D7498;
    case 707u: goto L_089D74B0;
    case 708u: goto L_089D74C0;
    case 709u: goto L_089D74D0;
    case 710u: goto L_089D74DC;
    case 711u: goto L_089D74E8;
    case 712u: goto L_089D74F4;
    case 713u: goto L_089D7500;
    case 714u: goto L_089D750C;
    case 715u: goto L_089D7518;
    case 716u: goto L_089D7524;
    case 717u: goto L_089D752C;
    case 718u: goto L_089D7538;
    case 719u: goto L_089D7540;
    case 720u: goto L_089D7548;
    case 721u: goto L_089D7550;
    case 722u: goto L_089D7564;
    case 723u: goto L_089D7578;
    case 724u: goto L_089D7588;
    case 725u: goto L_089D7590;
    case 726u: goto L_089D75A4;
    case 727u: goto L_089D75B8;
    case 728u: goto L_089D75C8;
    case 729u: goto L_089D75D0;
    case 730u: goto L_089D75D4;
    case 731u: goto L_089D75D8;
    case 732u: goto L_089D75F4;
    case 733u: goto L_089D7604;
    case 734u: goto L_089D7608;
    case 735u: goto L_089D7618;
    case 736u: goto L_089D761C;
    case 737u: goto L_089D762C;
    case 738u: goto L_089D7634;
    case 739u: goto L_089D763C;
    case 740u: goto L_089D7644;
    case 741u: goto L_089D7650;
    case 742u: goto L_089D765C;
    case 743u: goto L_089D7670;
    case 744u: goto L_089D7680;
    case 745u: goto L_089D7698;
    case 746u: goto L_089D76B8;
    case 747u: goto L_089D76CC;
    case 748u: goto L_089D76D4;
    case 749u: goto L_089D76EC;
    case 750u: goto L_089D76F4;
    case 751u: goto L_089D76F8;
    case 752u: goto L_089D7720;
    case 753u: goto L_089D772C;
    case 754u: goto L_089D7738;
    case 755u: goto L_089D7744;
    case 756u: goto L_089D7750;
    case 757u: goto L_089D775C;
    case 758u: goto L_089D7768;
    case 759u: goto L_089D7774;
    case 760u: goto L_089D7780;
    case 761u: goto L_089D7788;
    case 762u: goto L_089D7794;
    case 763u: goto L_089D779C;
    case 764u: goto L_089D77A4;
    case 765u: goto L_089D77B0;
    case 766u: goto L_089D77B8;
    case 767u: goto L_089D77C4;
    case 768u: goto L_089D77D0;
    case 769u: goto L_089D77E0;
    case 770u: goto L_089D77EC;
    case 771u: goto L_089D77F4;
    case 772u: goto L_089D77F8;
    case 773u: goto L_089D7804;
    case 774u: goto L_089D782C;
    case 775u: goto L_089D7834;
    case 776u: goto L_089D7854;
    case 777u: goto L_089D7860;
    case 778u: goto L_089D786C;
    case 779u: goto L_089D7878;
    case 780u: goto L_089D78DC;
    case 781u: goto L_089D78FC;
    case 782u: goto L_089D794C;
    case 783u: goto L_089D796C;
    case 784u: goto L_089D7984;
    case 785u: goto L_089D79BC;
    case 786u: goto L_089D79C8;
    case 787u: goto L_089D79D4;
    case 788u: goto L_089D79E0;
    case 789u: goto L_089D79EC;
    case 790u: goto L_089D79F4;
    case 791u: goto L_089D7A68;
    case 792u: goto L_089D7B04;
    case 793u: goto L_089D7B9C;
    case 794u: goto L_089D7C04;
    case 795u: goto L_089D7CA4;
    case 796u: goto L_089D7CD0;
    case 797u: goto L_089D7CDC;
    case 798u: goto L_089D7CE4;
    case 799u: goto L_089D7D00;
    case 800u: goto L_089D7D20;
    case 801u: goto L_089D7D2C;
    case 802u: goto L_089D7D38;
    case 803u: goto L_089D7D44;
    case 804u: goto L_089D7D4C;
    case 805u: goto L_089D7D58;
    case 806u: goto L_089D7D60;
    case 807u: goto L_089D7D70;
    case 808u: goto L_089D7D90;
    case 809u: goto L_089D7DA0;
    case 810u: goto L_089D7DA8;
    case 811u: goto L_089D7DB4;
    case 812u: goto L_089D7DCC;
    case 813u: goto L_089D7DD4;
    case 814u: goto L_089D7DE0;
    case 815u: goto L_089D7DEC;
    case 816u: goto L_089D7E08;
    case 817u: goto L_089D7E20;
    case 818u: goto L_089D7E28;
    case 819u: goto L_089D7E34;
    case 820u: goto L_089D7E40;
    case 821u: goto L_089D7E48;
    case 822u: goto L_089D7E4C;
    case 823u: goto L_089D7E58;
    case 824u: goto L_089D7E60;
    case 825u: goto L_089D7E64;
    case 826u: goto L_089D7E70;
    case 827u: goto L_089D7E78;
    case 828u: goto L_089D7E7C;
    case 829u: goto L_089D7E88;
    case 830u: goto L_089D7EA0;
    case 831u: goto L_089D7EC0;
    case 832u: goto L_089D7ED0;
    case 833u: goto L_089D7F1C;
    case 834u: goto L_089D7F28;
    case 835u: goto L_089D7F4C;
    case 836u: goto L_089D7F68;
    case 837u: goto L_089D7F74;
    case 838u: goto L_089D7F80;
    case 839u: goto L_089D7F8C;
    case 840u: goto L_089D7F98;
    case 841u: goto L_089D7FA4;
    case 842u: goto L_089D7FB0;
    case 843u: goto L_089D7FBC;
    case 844u: goto L_089D7FC4;
    case 845u: goto L_089D7FD0;
    case 846u: goto L_089D7FD8;
    case 847u: goto L_089D7FE4;
    case 848u: goto L_089D7FF0;
    case 849u: goto L_089D7FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089D4000:
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(2, ctx.gpr[6] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_089D4078;
L_089D4078:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 672u, 0x089D3FA8u>(ctx, &aot_mem); return;
      }
      goto L_089D4080;
    }
L_089D4080:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089D408Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 366u, 0x089D20A8u>(ctx, &aot_mem) && ctx.pc == 0x089D408Cu) goto L_089D408C;
    return;
L_089D408C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(3, 61439u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 65535u);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444), ctx.gpr[4]);
    goto L_089D40A8;
L_089D40A8:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(3, 16384u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4154;
      }
      goto L_089D40C0;
    }
L_089D40C0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089D40CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 369u, 0x089D20E0u>(ctx, &aot_mem) && ctx.pc == 0x089D40CCu) goto L_089D40CC;
    return;
L_089D40CC:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28224)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(800)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4120;
      }
      goto L_089D4100;
    }
L_089D4100:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[2] >> 8u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089D4120;
L_089D4120:
    ctx.set_gpr(2, ctx.gpr[4] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D4100;
      }
      goto L_089D412C;
    }
L_089D412C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089D4138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 366u, 0x089D20A8u>(ctx, &aot_mem) && ctx.pc == 0x089D4138u) goto L_089D4138;
    return;
L_089D4138:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(3, 49151u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 65535u);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444), ctx.gpr[4]);
    goto L_089D4154;
L_089D4154:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4444;
      }
      goto L_089D4168;
    }
L_089D4168:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(732)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D425C;
      }
      goto L_089D4174;
    }
L_089D4174:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D4214;
      }
      goto L_089D4180;
    }
L_089D4180:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D4214;
      }
      goto L_089D418C;
    }
L_089D418C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D41A0;
      }
      goto L_089D4198;
    }
L_089D4198:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4308;
      }
      goto L_089D41A0;
    }
L_089D41A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(804)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x089D41C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x089D41C4u) goto L_089D41C4;
    return;
L_089D41C4:
    ctx.set_gpr(2, 16128u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(31, 0x089D41E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 756u, 0x089FFFCCu>(ctx, &aot_mem) && ctx.pc == 0x089D41E4u) goto L_089D41E4;
    return;
L_089D41E4:
    ctx.set_gpr(2, 16128u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x089D4208u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 749u, 0x089FFD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089D4208u) goto L_089D4208;
    return;
L_089D4208:
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4320;
      }
      goto L_089D4214;
    }
L_089D4214:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(808)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(804)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x089D4250u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x089D4250u) goto L_089D4250;
    return;
L_089D4250:
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4320;
      }
      goto L_089D425C;
    }
L_089D425C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(828)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D42E8;
      }
      goto L_089D426C;
    }
L_089D426C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(788)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D42B0;
      }
      goto L_089D4278;
    }
L_089D4278:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(808)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x089D429Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x089D429Cu) goto L_089D429C;
    return;
L_089D429C:
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4320;
      }
      goto L_089D42B0;
    }
L_089D42B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(808)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x089D42D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x089D42D4u) goto L_089D42D4;
    return;
L_089D42D4:
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4320;
      }
      goto L_089D42E8;
    }
L_089D42E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(808)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4320;
      }
      goto L_089D4308;
    }
L_089D4308:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(808)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    goto L_089D4320;
L_089D4320:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089D432Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 369u, 0x089D20E0u>(ctx, &aot_mem) && ctx.pc == 0x089D432Cu) goto L_089D432C;
    return;
L_089D432C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28216)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4418;
      }
      goto L_089D4348;
    }
L_089D4348:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] >> 8u);
    ctx.set_gpr(2, 16640u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_089D4418;
L_089D4418:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089D4348;
      }
      goto L_089D4420;
    }
L_089D4420:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089D442Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 366u, 0x089D20A8u>(ctx, &aot_mem) && ctx.pc == 0x089D442Cu) goto L_089D442C;
    return;
L_089D442C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440), ctx.gpr[4]);
    goto L_089D4444;
L_089D4444:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D4464:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D44A8;
      }
      goto L_089D449C;
    }
L_089D449C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(856)));
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_089D44A8;
L_089D44A8:
    ctx.set_gpr(20, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D44C4;
      }
      goto L_089D44B8;
    }
L_089D44B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(836)));
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089D44C4;
L_089D44C4:
    ctx.set_gpr(19, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D459C;
      }
      goto L_089D44D0;
    }
L_089D44D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(836)));
    ctx.set_gpr(2, ctx.gpr[4] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(6, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D44F8;
      }
      goto L_089D44F0;
    }
L_089D44F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D44FC;
      }
      goto L_089D44F8;
    }
L_089D44F8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    goto L_089D44FC;
L_089D44FC:
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(2, 1024u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4538;
      }
      goto L_089D452C;
    }
L_089D452C:
    ctx.set_gpr(3, ctx.gpr[6] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D453C;
      }
      goto L_089D4538;
    }
L_089D4538:
    ctx.set_gpr(3, 0u + 0u);
    goto L_089D453C;
L_089D453C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4558;
      }
      goto L_089D4550;
    }
L_089D4550:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D455C;
      }
      goto L_089D4558;
    }
L_089D4558:
    ctx.set_gpr(6, 0u + 0u);
    goto L_089D455C;
L_089D455C:
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[4] & 1024u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4578;
      }
      goto L_089D4570;
    }
L_089D4570:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    goto L_089D4578;
L_089D4578:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4588;
      }
      goto L_089D4580;
    }
L_089D4580:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D458C;
      }
      goto L_089D4588;
    }
L_089D4588:
    ctx.set_gpr(5, 0u + 0u);
    goto L_089D458C;
L_089D458C:
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089D459Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 358u, 0x089D2024u>(ctx, &aot_mem) && ctx.pc == 0x089D459Cu) goto L_089D459C;
    return;
L_089D459C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089D45A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 369u, 0x089D20E0u>(ctx, &aot_mem) && ctx.pc == 0x089D45A8u) goto L_089D45A8;
    return;
L_089D45A8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D45D4;
      }
      goto L_089D45B8;
    }
L_089D45B8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089D45C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 573u, 0x089D3330u>(ctx, &aot_mem) && ctx.pc == 0x089D45C8u) goto L_089D45C8;
    return;
L_089D45C8:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D45E0;
      }
      goto L_089D45D4;
    }
L_089D45D4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089D45E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 620u, 0x089D3890u>(ctx, &aot_mem) && ctx.pc == 0x089D45E0u) goto L_089D45E0;
    return;
L_089D45E0:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D4684;
      }
      goto L_089D45E8;
    }
L_089D45E8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4684;
      }
      goto L_089D45F0;
    }
L_089D45F0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(436)));
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4640;
      }
      goto L_089D462C;
    }
L_089D462C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4654;
      }
      goto L_089D4640;
    }
L_089D4640:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089D4654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089D4654u) goto L_089D4654;
    return;
L_089D4654:
    ctx.set_gpr(4, ctx.gpr[16] << 4u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[21]);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_089D4684;
L_089D4684:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4718;
      }
      goto L_089D4690;
    }
L_089D4690:
    ctx.set_gpr(4, ctx.gpr[19] << 2u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-27448));
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4714;
      }
      goto L_089D46AC;
    }
L_089D46AC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089D46B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 369u, 0x089D20E0u>(ctx, &aot_mem) && ctx.pc == 0x089D46B8u) goto L_089D46B8;
    return;
L_089D46B8:
    ctx.set_gpr(5, [](std::uint32_t value) { value = ((value >> 1u) & 0x55555555u) | ((value & 0x55555555u) << 1u); value = ((value >> 2u) & 0x33333333u) | ((value & 0x33333333u) << 2u); value = ((value >> 4u) & 0x0F0F0F0Fu) | ((value & 0x0F0F0F0Fu) << 4u); value = ((value >> 8u) & 0x00FF00FFu) | ((value & 0x00FF00FFu) << 8u); return (value >> 16u) | (value << 16u); }(ctx.gpr[20]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D46F8;
      }
      goto L_089D46C4;
    }
L_089D46C4:
    ctx.set_gpr(4, static_cast<std::uint32_t>(std::countl_zero(ctx.gpr[5])));
    ctx.set_gpr(3, 32768u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] >> (ctx.gpr[4] & 31u));
    ctx.set_gpr(5, ctx.gpr[5] ^ ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[19] << 5u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-28472));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    goto L_089D46F8;
L_089D46F8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D46C4;
      }
      goto L_089D4700;
    }
L_089D4700:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089D4710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 366u, 0x089D20A8u>(ctx, &aot_mem) && ctx.pc == 0x089D4710u) goto L_089D4710;
    return;
L_089D4710:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    goto L_089D4714;
L_089D4714:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089D4718;
L_089D4718:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D4690;
      }
      goto L_089D4724;
    }
L_089D4724:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D475C;
      }
      goto L_089D472C;
    }
L_089D472C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(816)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D475C;
      }
      goto L_089D4738;
    }
L_089D4738:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089D4744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 369u, 0x089D20E0u>(ctx, &aot_mem) && ctx.pc == 0x089D4744u) goto L_089D4744;
    return;
L_089D4744:
    ctx.set_gpr(3, 2816u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089D475Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 366u, 0x089D20A8u>(ctx, &aot_mem) && ctx.pc == 0x089D475Cu) goto L_089D475C;
    return;
L_089D475C:
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
L_089D4784:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089D4794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 434u, 0x08945EECu>(ctx, &aot_mem) && ctx.pc == 0x089D4794u) goto L_089D4794;
    return;
L_089D4794:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D47A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x089D47BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 396u, 0x089DB35Cu>(ctx, &aot_mem) && ctx.pc == 0x089D47BCu) goto L_089D47BC;
    return;
L_089D47BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D47CC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D47E4;
      }
      goto L_089D47D4;
    }
L_089D47D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D47E4;
      }
      goto L_089D47E0;
    }
L_089D47E0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    goto L_089D47E4;
L_089D47E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D47EC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D47F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089D4828;
      }
      goto L_089D4818;
    }
L_089D4818:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4840;
      }
      goto L_089D4828;
    }
L_089D4828:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[12];
    goto L_089D4840;
L_089D4840:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x089D484Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 513u, 0x089DBB30u>(ctx, &aot_mem) && ctx.pc == 0x089D484Cu) goto L_089D484C;
    return;
L_089D484C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D485C:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D4868:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D48ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D48ACu) goto L_089D48AC;
    return;
L_089D48AC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D48C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D48C4u) goto L_089D48C4;
    return;
L_089D48C4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D48DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D48DCu) goto L_089D48DC;
    return;
L_089D48DC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D48F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D48F4u) goto L_089D48F4;
    return;
L_089D48F4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D4908u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D4908u) goto L_089D4908;
    return;
L_089D4908:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089D491Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089D491Cu) goto L_089D491C;
    return;
L_089D491C:
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
L_089D4940:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(100));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089D4964;
      }
      goto L_089D4954;
    }
L_089D4954:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(104));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4980;
      }
      goto L_089D4964;
    }
L_089D4964:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(104));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D497C;
      }
      goto L_089D4970;
    }
L_089D4970:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4980;
      }
      goto L_089D497C;
    }
L_089D497C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D4980;
L_089D4980:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D4988:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D4B60;
      }
      goto L_089D4994;
    }
L_089D4994:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D4B38;
      }
      goto L_089D49A0;
    }
L_089D49A0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D4B10;
      }
      goto L_089D49AC;
    }
L_089D49AC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4AE8;
      }
      goto L_089D49B4;
    }
L_089D49B4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D4B60;
      }
      goto L_089D49C0;
    }
L_089D49C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D4AC0;
      }
      goto L_089D49CC;
    }
L_089D49CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(11));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D4B60;
      }
      goto L_089D49D8;
    }
L_089D49D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D4B60;
      }
      goto L_089D49E4;
    }
L_089D49E4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D4B60;
      }
      goto L_089D49F0;
    }
L_089D49F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D4B60;
      }
      goto L_089D49FC;
    }
L_089D49FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D4B60;
      }
      goto L_089D4A08;
    }
L_089D4A08:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D4B60;
      }
      goto L_089D4A14;
    }
L_089D4A14:
    ctx.set_gpr(3, 1u << 16u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D4A78;
      }
      goto L_089D4A20;
    }
L_089D4A20:
    ctx.set_gpr(2, ctx.gpr[3] | 1u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D4A34;
      }
      goto L_089D4A2C;
    }
L_089D4A2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4B60;
      }
      goto L_089D4A34;
    }
L_089D4A34:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D4B60;
      }
      goto L_089D4A3C;
    }
L_089D4A3C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(43));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D4A68;
      }
      goto L_089D4A48;
    }
L_089D4A48:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D4A58;
      }
      goto L_089D4A50;
    }
L_089D4A50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4B60;
      }
      goto L_089D4A58;
    }
L_089D4A58:
    ctx.set_gpr(2, 2203u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3744));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4B64;
      }
      goto L_089D4A68;
    }
L_089D4A68:
    ctx.set_gpr(2, 2203u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3808));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4B64;
      }
      goto L_089D4A78;
    }
L_089D4A78:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D4B60;
      }
      goto L_089D4A80;
    }
L_089D4A80:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(42));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D4AB0;
      }
      goto L_089D4A8C;
    }
L_089D4A8C:
    ctx.set_gpr(2, ctx.gpr[3] | 1u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D4AA0;
      }
      goto L_089D4A98;
    }
L_089D4A98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4B60;
      }
      goto L_089D4AA0;
    }
L_089D4AA0:
    ctx.set_gpr(2, 2203u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4028));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4B64;
      }
      goto L_089D4AB0;
    }
L_089D4AB0:
    ctx.set_gpr(2, 2203u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3848));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4B64;
      }
      goto L_089D4AC0;
    }
L_089D4AC0:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D4B60;
      }
      goto L_089D4AC8;
    }
L_089D4AC8:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D4AD8;
      }
      goto L_089D4AD0;
    }
L_089D4AD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4B60;
      }
      goto L_089D4AD8;
    }
L_089D4AD8:
    ctx.set_gpr(2, 2205u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(19384));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4B64;
      }
      goto L_089D4AE8;
    }
L_089D4AE8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4B60;
      }
      goto L_089D4AF0;
    }
L_089D4AF0:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D4B00;
      }
      goto L_089D4AF8;
    }
L_089D4AF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4B60;
      }
      goto L_089D4B00;
    }
L_089D4B00:
    ctx.set_gpr(2, 2203u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3888));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4B64;
      }
      goto L_089D4B10;
    }
L_089D4B10:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D4B60;
      }
      goto L_089D4B18;
    }
L_089D4B18:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4B28;
      }
      goto L_089D4B20;
    }
L_089D4B20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4B60;
      }
      goto L_089D4B28;
    }
L_089D4B28:
    ctx.set_gpr(2, 2203u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3928));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4B64;
      }
      goto L_089D4B38;
    }
L_089D4B38:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D4B60;
      }
      goto L_089D4B40;
    }
L_089D4B40:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D4B50;
      }
      goto L_089D4B48;
    }
L_089D4B48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4B60;
      }
      goto L_089D4B50;
    }
L_089D4B50:
    ctx.set_gpr(2, 2205u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(19512));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4B64;
      }
      goto L_089D4B60;
    }
L_089D4B60:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D4B64;
L_089D4B64:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D4B6C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 1u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D4B84;
      }
      goto L_089D4B7C;
    }
L_089D4B7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4BAC;
      }
      goto L_089D4B84;
    }
L_089D4B84:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4B9C;
      }
      goto L_089D4B8C;
    }
L_089D4B8C:
    ctx.set_gpr(2, 2203u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3744));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4BA4;
      }
      goto L_089D4B9C;
    }
L_089D4B9C:
    ctx.set_gpr(2, 2203u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4028));
    goto L_089D4BA4;
L_089D4BA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4BB0;
      }
      goto L_089D4BAC;
    }
L_089D4BAC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D4BB0;
L_089D4BB0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D4BB8:
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(10, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(9, ctx.gpr[3] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(8, 65280u << 16u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4BE8;
      }
      goto L_089D4BE0;
    }
L_089D4BE0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[3] << 24u);
    goto L_089D4BE8;
L_089D4BE8:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4C24;
      }
      goto L_089D4BF4;
    }
L_089D4BF4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(4, ctx.gpr[3] << 8u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(3, ctx.gpr[8] | ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-4));
    goto L_089D4C24;
L_089D4C24:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D4BF4;
      }
      goto L_089D4C30;
    }
L_089D4C30:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D4C38:
    ctx.set_gpr(9, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4C6C;
      }
      goto L_089D4C44;
    }
L_089D4C44:
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[8] & 61440u);
    ctx.set_gpr(7, ctx.gpr[3] >> 8u);
    ctx.set_gpr(3, ctx.gpr[8] & 240u);
    ctx.set_gpr(3, ctx.gpr[3] >> 4u);
    ctx.set_gpr(3, ctx.gpr[7] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089D4C6C;
L_089D4C6C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D4C44;
      }
      goto L_089D4C78;
    }
L_089D4C78:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D4C80:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D4C88:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D4C90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(100));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D4D28;
      }
      goto L_089D4CA0;
    }
L_089D4CA0:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4D14;
      }
      goto L_089D4CAC;
    }
L_089D4CAC:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(4, ctx.gpr[4] << 8u);
    ctx.set_gpr(8, ctx.gpr[7] | ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[8] & 63488u);
    ctx.set_gpr(7, ctx.gpr[4] >> 11u);
    ctx.set_gpr(4, ctx.gpr[8] & 1984u);
    ctx.set_gpr(4, ctx.gpr[4] >> 1u);
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[8] & 62u);
    ctx.set_gpr(4, ctx.gpr[4] << 9u);
    ctx.set_gpr(7, ctx.gpr[4] | ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[8] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4CF4;
      }
      goto L_089D4CE8;
    }
L_089D4CE8:
    ctx.set_gpr(4, 0u | 32768u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4CF8;
      }
      goto L_089D4CF4;
    }
L_089D4CF4:
    ctx.set_gpr(4, 0u + 0u);
    goto L_089D4CF8;
L_089D4CF8:
    ctx.set_gpr(4, ctx.gpr[7] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, ctx.gpr[4] & 65280u);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    goto L_089D4D14;
L_089D4D14:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D4CAC;
      }
      goto L_089D4D20;
    }
L_089D4D20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4D98;
      }
      goto L_089D4D28;
    }
L_089D4D28:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4D8C;
      }
      goto L_089D4D34;
    }
L_089D4D34:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(4, ctx.gpr[4] << 8u);
    ctx.set_gpr(8, ctx.gpr[7] | ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[8] & 31744u);
    ctx.set_gpr(7, ctx.gpr[4] >> 9u);
    ctx.set_gpr(4, ctx.gpr[8] & 992u);
    ctx.set_gpr(4, ctx.gpr[4] << 1u);
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[8] & 31u);
    ctx.set_gpr(4, ctx.gpr[4] << 11u);
    ctx.set_gpr(7, ctx.gpr[4] | ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[8] & 32768u);
    ctx.set_gpr(4, 0u < ctx.gpr[4] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[4] & 255u);
    ctx.set_gpr(4, ctx.gpr[7] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, ctx.gpr[4] & 65280u);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    goto L_089D4D8C;
L_089D4D8C:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D4D34;
      }
      goto L_089D4D98;
    }
L_089D4D98:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D4DA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(100));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D4E24;
      }
      goto L_089D4DB0;
    }
L_089D4DB0:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4E10;
      }
      goto L_089D4DBC;
    }
L_089D4DBC:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(4, ctx.gpr[4] << 8u);
    ctx.set_gpr(8, ctx.gpr[7] | ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[8] & 15u);
    ctx.set_gpr(7, ctx.gpr[4] << 12u);
    ctx.set_gpr(4, ctx.gpr[8] & 240u);
    ctx.set_gpr(4, ctx.gpr[4] << 4u);
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[8] & 3840u);
    ctx.set_gpr(4, ctx.gpr[4] >> 4u);
    ctx.set_gpr(7, ctx.gpr[4] | ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[8] & 61440u);
    ctx.set_gpr(4, ctx.gpr[4] >> 12u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, ctx.gpr[4] & 65280u);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    goto L_089D4E10;
L_089D4E10:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D4DBC;
      }
      goto L_089D4E1C;
    }
L_089D4E1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4E90;
      }
      goto L_089D4E24;
    }
L_089D4E24:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4E84;
      }
      goto L_089D4E30;
    }
L_089D4E30:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(4, ctx.gpr[4] << 8u);
    ctx.set_gpr(8, ctx.gpr[7] | ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[8] & 61440u);
    ctx.set_gpr(7, ctx.gpr[4] >> 12u);
    ctx.set_gpr(4, ctx.gpr[8] & 3840u);
    ctx.set_gpr(4, ctx.gpr[4] >> 4u);
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[8] & 240u);
    ctx.set_gpr(4, ctx.gpr[4] << 4u);
    ctx.set_gpr(7, ctx.gpr[4] | ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[8] & 15u);
    ctx.set_gpr(4, ctx.gpr[4] << 12u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, ctx.gpr[4] & 65280u);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    goto L_089D4E84;
L_089D4E84:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D4E30;
      }
      goto L_089D4E90;
    }
L_089D4E90:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D4E98:
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4EE8;
      }
      goto L_089D4EA4;
    }
L_089D4EA4:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, ctx.gpr[3] << 8u);
    ctx.set_gpr(7, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[7] & 63488u);
    ctx.set_gpr(4, ctx.gpr[3] >> 11u);
    ctx.set_gpr(3, ctx.gpr[7] & 2016u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[7] & 31u);
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, ctx.gpr[3] & 65280u);
    ctx.set_gpr(3, ctx.gpr[3] >> 8u);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    goto L_089D4EE8;
L_089D4EE8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D4EA4;
      }
      goto L_089D4EF4;
    }
L_089D4EF4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D4EFC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D4F04:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D4F0C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D4F14:
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D4F44;
      }
      goto L_089D4F20;
    }
L_089D4F20:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[7] & 240u);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 4u));
    ctx.set_gpr(3, ctx.gpr[7] & 15u);
    ctx.set_gpr(3, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089D4F44;
L_089D4F44:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D4F20;
      }
      goto L_089D4F50;
    }
L_089D4F50:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D4F58:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D4F60:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D4F6C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D4F74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(608)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D4F98u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D4F98u) goto L_089D4F98;
    return;
L_089D4F98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D4FA8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D4FB0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D4FB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089D4FC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 466u, 0x0899E914u>(ctx, &aot_mem) && ctx.pc == 0x089D4FC8u) goto L_089D4FC8;
    return;
L_089D4FC8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D4FD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089D4FE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 434u, 0x08945EECu>(ctx, &aot_mem) && ctx.pc == 0x089D4FE8u) goto L_089D4FE8;
    return;
L_089D4FE8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D4FF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28632)));
    ctx.set_gpr(31, 0x089D501Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 312u, 0x089CA1B8u>(ctx, &aot_mem) && ctx.pc == 0x089D501Cu) goto L_089D501C;
    return;
L_089D501C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D5034;
      }
      goto L_089D5028;
    }
L_089D5028:
    ctx.set_gpr(31, 0x089D5030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089D5030u) goto L_089D5030;
    return;
L_089D5030:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
    goto L_089D5034;
L_089D5034:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D504C;
      }
      goto L_089D5040;
    }
L_089D5040:
    ctx.set_gpr(31, 0x089D5048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089D5048u) goto L_089D5048;
    return;
L_089D5048:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    goto L_089D504C;
L_089D504C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D5064;
      }
      goto L_089D5058;
    }
L_089D5058:
    ctx.set_gpr(31, 0x089D5060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089D5060u) goto L_089D5060;
    return;
L_089D5060:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), 0u);
    goto L_089D5064;
L_089D5064:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D507C;
      }
      goto L_089D5070;
    }
L_089D5070:
    ctx.set_gpr(31, 0x089D5078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089D5078u) goto L_089D5078;
    return;
L_089D5078:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), 0u);
    goto L_089D507C;
L_089D507C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D50A8;
      }
      goto L_089D5088;
    }
L_089D5088:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089D5094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 65u, 0x089B85C8u>(ctx, &aot_mem) && ctx.pc == 0x089D5094u) goto L_089D5094;
    return;
L_089D5094:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x089D50A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089D50A0u) goto L_089D50A0;
    return;
L_089D50A0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    goto L_089D50A8;
L_089D50A8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089D50B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 435u, 0x08945EF4u>(ctx, &aot_mem) && ctx.pc == 0x089D50B4u) goto L_089D50B4;
    return;
L_089D50B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D50C8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D50D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D5130;
      }
      goto L_089D510C;
    }
L_089D510C:
    ctx.set_gpr(31, 0x089D5114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 224u, 0x0893CE5Cu>(ctx, &aot_mem) && ctx.pc == 0x089D5114u) goto L_089D5114;
    return;
L_089D5114:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089D5120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089D5120u) goto L_089D5120;
    return;
L_089D5120:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089D5130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089D5130u) goto L_089D5130;
    return;
L_089D5130:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D5148;
      }
      goto L_089D513C;
    }
L_089D513C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D5454;
      }
      goto L_089D5148;
    }
L_089D5148:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(7, ctx.gpr[20] + static_cast<std::uint32_t>(54));
    ctx.set_gpr(8, ctx.gpr[20] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x089D5174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 386u, 0x089CA764u>(ctx, &aot_mem) && ctx.pc == 0x089D5174u) goto L_089D5174;
    return;
L_089D5174:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(21));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089D5188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 9u, 0x089480C0u>(ctx, &aot_mem) && ctx.pc == 0x089D5188u) goto L_089D5188;
    return;
L_089D5188:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(16, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D51B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D51B8u) goto L_089D51B8;
    return;
L_089D51B8:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D51D0;
      }
      goto L_089D51C4;
    }
L_089D51C4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D5454;
      }
      goto L_089D51D0;
    }
L_089D51D0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27764)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D5200;
      }
      goto L_089D51FC;
    }
L_089D51FC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D5200;
L_089D5200:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D5228;
      }
      goto L_089D5208;
    }
L_089D5208:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27760)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D5228;
      }
      goto L_089D5224;
    }
L_089D5224:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D5228;
L_089D5228:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D5250;
      }
      goto L_089D5230;
    }
L_089D5230:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27756)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D5250;
      }
      goto L_089D524C;
    }
L_089D524C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D5250;
L_089D5250:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D52B0;
      }
      goto L_089D5258;
    }
L_089D5258:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D5274u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D5274u) goto L_089D5274;
    return;
L_089D5274:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x089D5298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 752u, 0x089FFE94u>(ctx, &aot_mem) && ctx.pc == 0x089D5298u) goto L_089D5298;
    return;
L_089D5298:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D52AC;
      }
      goto L_089D52A4;
    }
L_089D52A4:
    ctx.set_gpr(31, 0x089D52ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089D52ACu) goto L_089D52AC;
    return;
L_089D52AC:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    goto L_089D52B0;
L_089D52B0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27920)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D52DC;
      }
      goto L_089D52D8;
    }
L_089D52D8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D52DC;
L_089D52DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D5304;
      }
      goto L_089D52E4;
    }
L_089D52E4:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27916)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D5304;
      }
      goto L_089D5300;
    }
L_089D5300:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D5304;
L_089D5304:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D5368;
      }
      goto L_089D530C;
    }
L_089D530C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D5328u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D5328u) goto L_089D5328;
    return;
L_089D5328:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x089D5350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 752u, 0x089FFE94u>(ctx, &aot_mem) && ctx.pc == 0x089D5350u) goto L_089D5350;
    return;
L_089D5350:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D5364;
      }
      goto L_089D535C;
    }
L_089D535C:
    ctx.set_gpr(31, 0x089D5364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089D5364u) goto L_089D5364;
    return;
L_089D5364:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    goto L_089D5368;
L_089D5368:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[3] & 1536u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D5398;
      }
      goto L_089D537C;
    }
L_089D537C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 49152u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 14u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D539C;
      }
      goto L_089D5398;
    }
L_089D5398:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D539C;
L_089D539C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D53BC;
      }
      goto L_089D53A4;
    }
L_089D53A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 240u);
    ctx.set_gpr(2, (ctx.gpr[2] >> 4u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D53BC;
      }
      goto L_089D53B8;
    }
L_089D53B8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089D53BC;
L_089D53BC:
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 15u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, (ctx.gpr[2] >> 16u) & 0x000000FFu);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D5408;
      }
      goto L_089D53DC;
    }
L_089D53DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D5404u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D5404u) goto L_089D5404;
    return;
L_089D5404:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    goto L_089D5408;
L_089D5408:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D541Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D541Cu) goto L_089D541C;
    return;
L_089D541C:
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(256)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D5434u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D5434u) goto L_089D5434;
    return;
L_089D5434:
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D5450;
      }
      goto L_089D5448;
    }
L_089D5448:
    ctx.set_gpr(31, 0x089D5450u);
    // nop
    ctx.pc = 0x08B0DEB4u;
    return;
L_089D5450:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_089D5454;
L_089D5454:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_089D5478:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(62)));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D54B4:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(62)));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D54F0:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(62)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D5514:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D5550:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D558C:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D55B0:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(58)));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D55D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089D5600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089D5600u) goto L_089D5600;
    return;
L_089D5600:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(58)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
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
L_089D5638:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(58)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D5660:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(58)));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[5] >> 24u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089D569C;
      }
      goto L_089D568C;
    }
L_089D568C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D56B4;
      }
      goto L_089D569C;
    }
L_089D569C:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089D56B4;
L_089D56B4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32492)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, (ctx.gpr[5] >> 16u) & 0x000000FFu);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089D56DC;
      }
      goto L_089D56CC;
    }
L_089D56CC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D56F4;
      }
      goto L_089D56DC;
    }
L_089D56DC:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089D56F4;
L_089D56F4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32492)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, (ctx.gpr[5] >> 8u) & 0x000000FFu);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089D571C;
      }
      goto L_089D570C;
    }
L_089D570C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D5734;
      }
      goto L_089D571C;
    }
L_089D571C:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089D5734;
L_089D5734:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32492)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, ctx.gpr[5] & 255u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089D575C;
      }
      goto L_089D574C;
    }
L_089D574C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D5774;
      }
      goto L_089D575C;
    }
L_089D575C:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089D5774;
L_089D5774:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32492)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D5788:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D57BC:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D57F0:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D5814:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D5838;
      }
      goto L_089D5828;
    }
L_089D5828:
    ctx.set_gpr(31, 0x089D5830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 93u, 0x089B8774u>(ctx, &aot_mem) && ctx.pc == 0x089D5830u) goto L_089D5830;
    return;
L_089D5830:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D5860;
      }
      goto L_089D5838;
    }
L_089D5838:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(54)));
    ctx.set_gpr(4, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089D5860;
L_089D5860:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D5870:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D5894;
      }
      goto L_089D5884;
    }
L_089D5884:
    ctx.set_gpr(31, 0x089D588Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 95u, 0x089B87F0u>(ctx, &aot_mem) && ctx.pc == 0x089D588Cu) goto L_089D588C;
    return;
L_089D588C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D58BC;
      }
      goto L_089D5894;
    }
L_089D5894:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(54)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_089D58BC;
L_089D58BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D58CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D58E8;
      }
      goto L_089D58E0;
    }
L_089D58E0:
    ctx.set_gpr(31, 0x089D58E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 108u, 0x089B8944u>(ctx, &aot_mem) && ctx.pc == 0x089D58E8u) goto L_089D58E8;
    return;
L_089D58E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D58F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D591C;
      }
      goto L_089D590C;
    }
L_089D590C:
    ctx.set_gpr(31, 0x089D5914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 110u, 0x089B89BCu>(ctx, &aot_mem) && ctx.pc == 0x089D5914u) goto L_089D5914;
    return;
L_089D5914:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D5920;
      }
      goto L_089D591C;
    }
L_089D591C:
    ctx.set_gpr(2, ctx.gpr[6] & 255u);
    goto L_089D5920;
L_089D5920:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D5930:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D5968:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D59A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D59C0:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D59F8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D5A30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D5A50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D5A84;
      }
      goto L_089D5A74;
    }
L_089D5A74:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    goto L_089D5A84;
L_089D5A84:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(1, ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D5C88;
      }
      goto L_089D5AA4;
    }
L_089D5AA4:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-28936));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D5AC0:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(62)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D5C88;
      }
      goto L_089D5AEC;
    }
L_089D5AEC:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D5C88;
      }
      goto L_089D5B18;
    }
L_089D5B18:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(58)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D5C88;
      }
      goto L_089D5B44;
    }
L_089D5B44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D5B98;
      }
      goto L_089D5B50;
    }
L_089D5B50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D5B7Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D5B7Cu) goto L_089D5B7C;
    return;
L_089D5B7C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 3840u);
    ctx.set_gpr(3, (ctx.gpr[3] >> 8u) & 0x000000FFu);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D5C88;
      }
      goto L_089D5B98;
    }
L_089D5B98:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(54)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D5C88;
      }
      goto L_089D5BCC;
    }
L_089D5BCC:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D5C88;
      }
      goto L_089D5BF8;
    }
L_089D5BF8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D5C88;
      }
      goto L_089D5C24;
    }
L_089D5C24:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D5C88;
      }
      goto L_089D5C50;
    }
L_089D5C50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D5C78u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D5C78u) goto L_089D5C78;
    return;
L_089D5C78:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 3840u);
    ctx.set_gpr(3, (ctx.gpr[3] >> 8u) & 0x000000FFu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    goto L_089D5C88;
L_089D5C88:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D5CC0;
      }
      goto L_089D5C9C;
    }
L_089D5C9C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 16384u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28632)));
    ctx.set_gpr(31, 0x089D5CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 312u, 0x089CA1B8u>(ctx, &aot_mem) && ctx.pc == 0x089D5CC0u) goto L_089D5CC0;
    return;
L_089D5CC0:
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
L_089D5CD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D5CF8;
      }
      goto L_089D5CF0;
    }
L_089D5CF0:
    ctx.set_gpr(31, 0x089D5CF8u);
    // nop
    ctx.pc = 0x08B0DEB4u;
    return;
L_089D5CF8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D5D08:
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
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x089D5D44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x089D5D44u) goto L_089D5D44;
    return;
L_089D5D44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D5D68;
      }
      goto L_089D5D50;
    }
L_089D5D50:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D5D68;
      }
      goto L_089D5D5C;
    }
L_089D5D5C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D614C;
      }
      goto L_089D5D68;
    }
L_089D5D68:
    ctx.set_gpr(19, ctx.gpr[21] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(2, ctx.gpr[4] & 1536u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D5D94;
      }
      goto L_089D5D78;
    }
L_089D5D78:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 49152u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 14u));
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D5D98;
      }
      goto L_089D5D94;
    }
L_089D5D94:
    ctx.set_gpr(18, 0u + 0u);
    goto L_089D5D98;
L_089D5D98:
    ctx.set_gpr(17, ctx.gpr[21] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(68), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(72), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-241));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[18] & 255u);
    ctx.set_gpr(2, ctx.gpr[4] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3841));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[4] << 8u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089D5DF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 32u, 0x089B830Cu>(ctx, &aot_mem) && ctx.pc == 0x089D5DF8u) goto L_089D5DF8;
    return;
L_089D5DF8:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D5E08;
      }
      goto L_089D5E00;
    }
L_089D5E00:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D5E2C;
      }
      goto L_089D5E08;
    }
L_089D5E08:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(252)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D5E1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D5E1Cu) goto L_089D5E1C;
    return;
L_089D5E1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    goto L_089D5E2C;
L_089D5E2C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D5E9C;
      }
      goto L_089D5E3C;
    }
L_089D5E3C:
    ctx.set_gpr(16, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(62)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(23, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D5E90;
      }
      goto L_089D5E64;
    }
L_089D5E64:
    ctx.set_gpr(2, ctx.gpr[20] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, ctx.gpr[30] + ctx.gpr[2]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[23] + ctx.gpr[2]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x089D5E8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089D5E8Cu) goto L_089D5E8C;
    return;
L_089D5E8C:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089D5E90;
L_089D5E90:
    ctx.set_gpr(2, ctx.gpr[20] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D5E64;
      }
      goto L_089D5E9C;
    }
L_089D5E9C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D5F0C;
      }
      goto L_089D5EAC;
    }
L_089D5EAC:
    ctx.set_gpr(16, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(23, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D5F00;
      }
      goto L_089D5ED4;
    }
L_089D5ED4:
    ctx.set_gpr(2, ctx.gpr[20] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, ctx.gpr[30] + ctx.gpr[2]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[23] + ctx.gpr[2]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x089D5EFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089D5EFCu) goto L_089D5EFC;
    return;
L_089D5EFC:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089D5F00;
L_089D5F00:
    ctx.set_gpr(2, ctx.gpr[20] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D5ED4;
      }
      goto L_089D5F0C;
    }
L_089D5F0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D5F74;
      }
      goto L_089D5F1C;
    }
L_089D5F1C:
    ctx.set_gpr(16, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(58)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(23, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D5F68;
      }
      goto L_089D5F44;
    }
L_089D5F44:
    ctx.set_gpr(2, ctx.gpr[20] << 2u);
    ctx.set_gpr(4, ctx.gpr[30] + ctx.gpr[2]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[23] + ctx.gpr[2]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089D5F64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089D5F64u) goto L_089D5F64;
    return;
L_089D5F64:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089D5F68;
L_089D5F68:
    ctx.set_gpr(2, ctx.gpr[20] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D5F44;
      }
      goto L_089D5F74;
    }
L_089D5F74:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6028;
      }
      goto L_089D5F7C;
    }
L_089D5F7C:
    ctx.set_gpr(16, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(54)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(23, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D5FC8;
      }
      goto L_089D5FA0;
    }
L_089D5FA0:
    ctx.set_gpr(6, ctx.gpr[18] << 2u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[30] + ctx.gpr[2]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[23] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x089D5FC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089D5FC4u) goto L_089D5FC4;
    return;
L_089D5FC4:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089D5FC8;
L_089D5FC8:
    ctx.set_gpr(2, ctx.gpr[20] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D5FA0;
      }
      goto L_089D5FD4;
    }
L_089D5FD4:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6018;
      }
      goto L_089D5FE0;
    }
L_089D5FE0:
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6008;
      }
      goto L_089D5FEC;
    }
L_089D5FEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[4]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089D6008;
L_089D6008:
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D5FEC;
      }
      goto L_089D6014;
    }
L_089D6014:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089D6018;
L_089D6018:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D5FE0;
      }
      goto L_089D6028;
    }
L_089D6028:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 15u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(19, (ctx.gpr[2] >> 16u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6120;
      }
      goto L_089D6040;
    }
L_089D6040:
    ctx.set_gpr(18, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(22, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D608C;
      }
      goto L_089D6068;
    }
L_089D6068:
    ctx.set_gpr(2, ctx.gpr[20] << 3u);
    ctx.set_gpr(4, ctx.gpr[23] + ctx.gpr[2]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[22] + ctx.gpr[2]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089D6088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089D6088u) goto L_089D6088;
    return;
L_089D6088:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089D608C;
L_089D608C:
    ctx.set_gpr(2, ctx.gpr[20] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D6068;
      }
      goto L_089D6098;
    }
L_089D6098:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6114;
      }
      goto L_089D60A4;
    }
L_089D60A4:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(22, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6104;
      }
      goto L_089D60D8;
    }
L_089D60D8:
    ctx.set_gpr(2, ctx.gpr[20] << 3u);
    ctx.set_gpr(4, ctx.gpr[23] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[22] + ctx.gpr[2]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089D6100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089D6100u) goto L_089D6100;
    return;
L_089D6100:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089D6104;
L_089D6104:
    ctx.set_gpr(2, ctx.gpr[20] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D60D8;
      }
      goto L_089D6110;
    }
L_089D6110:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089D6114;
L_089D6114:
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D60A4;
      }
      goto L_089D6120;
    }
L_089D6120:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x089D612Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089D612Cu) goto L_089D612C;
    return;
L_089D612C:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(72), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6148;
      }
      goto L_089D613C;
    }
L_089D613C:
    ctx.set_gpr(31, 0x089D6144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089D6144u) goto L_089D6144;
    return;
L_089D6144:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(76), 0u);
    goto L_089D6148;
L_089D6148:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), 0u);
    goto L_089D614C;
L_089D614C:
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
L_089D6180:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
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
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089D61B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 675u, 0x089B7E80u>(ctx, &aot_mem) && ctx.pc == 0x089D61B8u) goto L_089D61B8;
    return;
L_089D61B8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32764)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089D61D8;
      }
      goto L_089D61C8;
    }
L_089D61C8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089D61D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 7u, 0x089B80E4u>(ctx, &aot_mem) && ctx.pc == 0x089D61D8u) goto L_089D61D8;
    return;
L_089D61D8:
    ctx.set_gpr(19, ctx.gpr[21] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(7, ctx.gpr[21] + static_cast<std::uint32_t>(54));
    ctx.set_gpr(8, ctx.gpr[21] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x089D61F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 386u, 0x089CA764u>(ctx, &aot_mem) && ctx.pc == 0x089D61F8u) goto L_089D61F8;
    return;
L_089D61F8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27764)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D6228;
      }
      goto L_089D6224;
    }
L_089D6224:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D6228;
L_089D6228:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D6250;
      }
      goto L_089D6230;
    }
L_089D6230:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27760)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D6250;
      }
      goto L_089D624C;
    }
L_089D624C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D6250;
L_089D6250:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D6278;
      }
      goto L_089D6258;
    }
L_089D6258:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27756)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D6278;
      }
      goto L_089D6274;
    }
L_089D6274:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D6278;
L_089D6278:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D62D8;
      }
      goto L_089D6280;
    }
L_089D6280:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D629Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D629Cu) goto L_089D629C;
    return;
L_089D629C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(31, 0x089D62C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 752u, 0x089FFE94u>(ctx, &aot_mem) && ctx.pc == 0x089D62C0u) goto L_089D62C0;
    return;
L_089D62C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D62D4;
      }
      goto L_089D62CC;
    }
L_089D62CC:
    ctx.set_gpr(31, 0x089D62D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089D62D4u) goto L_089D62D4;
    return;
L_089D62D4:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    goto L_089D62D8;
L_089D62D8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27920)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D6304;
      }
      goto L_089D6300;
    }
L_089D6300:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D6304;
L_089D6304:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D632C;
      }
      goto L_089D630C;
    }
L_089D630C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27916)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D632C;
      }
      goto L_089D6328;
    }
L_089D6328:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D632C;
L_089D632C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6390;
      }
      goto L_089D6334;
    }
L_089D6334:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D6350u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D6350u) goto L_089D6350;
    return;
L_089D6350:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x089D6378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 752u, 0x089FFE94u>(ctx, &aot_mem) && ctx.pc == 0x089D6378u) goto L_089D6378;
    return;
L_089D6378:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D638C;
      }
      goto L_089D6384;
    }
L_089D6384:
    ctx.set_gpr(31, 0x089D638Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089D638Cu) goto L_089D638C;
    return;
L_089D638C:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(92), ctx.gpr[16]);
    goto L_089D6390;
L_089D6390:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[3] & 1536u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D63C0;
      }
      goto L_089D63A4;
    }
L_089D63A4:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 49152u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 14u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D63C4;
      }
      goto L_089D63C0;
    }
L_089D63C0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D63C4;
L_089D63C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D63E4;
      }
      goto L_089D63CC;
    }
L_089D63CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 240u);
    ctx.set_gpr(2, (ctx.gpr[2] >> 4u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D63E4;
      }
      goto L_089D63E0;
    }
L_089D63E0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089D63E4;
L_089D63E4:
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D6418;
      }
      goto L_089D63F4;
    }
L_089D63F4:
    ctx.set_gpr(31, 0x089D63FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 224u, 0x0893CE5Cu>(ctx, &aot_mem) && ctx.pc == 0x089D63FCu) goto L_089D63FC;
    return;
L_089D63FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089D6408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089D6408u) goto L_089D6408;
    return;
L_089D6408:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089D6418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089D6418u) goto L_089D6418;
    return;
L_089D6418:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D643Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D643Cu) goto L_089D643C;
    return;
L_089D643C:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D64B0;
      }
      goto L_089D6450;
    }
L_089D6450:
    ctx.set_gpr(18, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(62)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(22, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D64A4;
      }
      goto L_089D6478;
    }
L_089D6478:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[22] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[20] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x089D64A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089D64A0u) goto L_089D64A0;
    return;
L_089D64A0:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089D64A4;
L_089D64A4:
    ctx.set_gpr(3, ctx.gpr[20] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D6478;
      }
      goto L_089D64B0;
    }
L_089D64B0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6520;
      }
      goto L_089D64C0;
    }
L_089D64C0:
    ctx.set_gpr(18, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(22, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6514;
      }
      goto L_089D64E8;
    }
L_089D64E8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[22] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[20] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x089D6510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089D6510u) goto L_089D6510;
    return;
L_089D6510:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089D6514;
L_089D6514:
    ctx.set_gpr(3, ctx.gpr[20] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D64E8;
      }
      goto L_089D6520;
    }
L_089D6520:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6588;
      }
      goto L_089D6530;
    }
L_089D6530:
    ctx.set_gpr(18, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(58)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(22, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D657C;
      }
      goto L_089D6558;
    }
L_089D6558:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[22] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[20] << 2u);
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089D6578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089D6578u) goto L_089D6578;
    return;
L_089D6578:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089D657C;
L_089D657C:
    ctx.set_gpr(3, ctx.gpr[20] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D6558;
      }
      goto L_089D6588;
    }
L_089D6588:
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D65FC;
      }
      goto L_089D6594;
    }
L_089D6594:
    ctx.set_gpr(17, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[20] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(23, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D65EC;
      }
      goto L_089D65C8;
    }
L_089D65C8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[23] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[18] << 3u);
    ctx.set_gpr(5, ctx.gpr[22] + ctx.gpr[2]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089D65E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089D65E8u) goto L_089D65E8;
    return;
L_089D65E8:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089D65EC;
L_089D65EC:
    ctx.set_gpr(3, ctx.gpr[18] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D65C8;
      }
      goto L_089D65F8;
    }
L_089D65F8:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089D65FC;
L_089D65FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 15u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, (ctx.gpr[3] >> 16u) & 0x000000FFu);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D6594;
      }
      goto L_089D6618;
    }
L_089D6618:
    ctx.set_gpr(3, ctx.gpr[4] & 240u);
    ctx.set_gpr(3, (ctx.gpr[3] >> 4u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6778;
      }
      goto L_089D6628;
    }
L_089D6628:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D6778;
      }
      goto L_089D6634;
    }
L_089D6634:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6748;
      }
      goto L_089D6640;
    }
L_089D6640:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6670;
      }
      goto L_089D664C;
    }
L_089D664C:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089D6670;
L_089D6670:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[3] & 1536u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D669C;
      }
      goto L_089D6680;
    }
L_089D6680:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 49152u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 14u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D66A0;
      }
      goto L_089D669C;
    }
L_089D669C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D66A0;
L_089D66A0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D664C;
      }
      goto L_089D66AC;
    }
L_089D66AC:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D672C;
      }
      goto L_089D66B8;
    }
L_089D66B8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D66D4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D66D4u) goto L_089D66D4;
    return;
L_089D66D4:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D66F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D66F4u) goto L_089D66F4;
    return;
L_089D66F4:
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D6728;
      }
      goto L_089D6708;
    }
L_089D6708:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089D6728;
L_089D6728:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089D672C;
L_089D672C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 240u);
    ctx.set_gpr(2, (ctx.gpr[2] >> 4u) & 0x000000FFu);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D66B8;
      }
      goto L_089D6744;
    }
L_089D6744:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089D6748;
L_089D6748:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[18] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D6640;
      }
      goto L_089D6758;
    }
L_089D6758:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x089D6764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089D6764u) goto L_089D6764;
    return;
L_089D6764:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x089D6774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089D6774u) goto L_089D6774;
    return;
L_089D6774:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(36), 0u);
    goto L_089D6778;
L_089D6778:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D67B8;
      }
      goto L_089D6788;
    }
L_089D6788:
    ctx.set_gpr(16, ctx.gpr[21] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D67B8;
      }
      goto L_089D679C;
    }
L_089D679C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D67B8;
      }
      goto L_089D67A8;
    }
L_089D67A8:
    ctx.set_gpr(31, 0x089D67B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089D67B0u) goto L_089D67B0;
    return;
L_089D67B0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    goto L_089D67B8;
L_089D67B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D67F8;
      }
      goto L_089D67C8;
    }
L_089D67C8:
    ctx.set_gpr(16, ctx.gpr[21] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D67F8;
      }
      goto L_089D67DC;
    }
L_089D67DC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D67F8;
      }
      goto L_089D67E8;
    }
L_089D67E8:
    ctx.set_gpr(31, 0x089D67F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089D67F0u) goto L_089D67F0;
    return;
L_089D67F0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), 0u);
    goto L_089D67F8;
L_089D67F8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D682C;
      }
      goto L_089D6808;
    }
L_089D6808:
    ctx.set_gpr(16, ctx.gpr[21] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D682C;
      }
      goto L_089D681C;
    }
L_089D681C:
    ctx.set_gpr(31, 0x089D6824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089D6824u) goto L_089D6824;
    return;
L_089D6824:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), 0u);
    goto L_089D682C;
L_089D682C:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6870;
      }
      goto L_089D6838;
    }
L_089D6838:
    ctx.set_gpr(17, ctx.gpr[21] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[18] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(16, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D686C;
      }
      goto L_089D6858;
    }
L_089D6858:
    ctx.set_gpr(31, 0x089D6860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089D6860u) goto L_089D6860;
    return;
L_089D6860:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    goto L_089D686C;
L_089D686C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089D6870;
L_089D6870:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 15u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, (ctx.gpr[3] >> 16u) & 0x000000FFu);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D6838;
      }
      goto L_089D688C;
    }
L_089D688C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D68BC:
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(23, ctx.gpr[6] + 0u);
    ctx.set_gpr(22, ctx.gpr[7] + 0u);
    ctx.set_gpr(20, ctx.gpr[8] + 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D690C;
      }
      goto L_089D6900;
    }
L_089D6900:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6CB0;
      }
      goto L_089D690C;
    }
L_089D690C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D6954;
      }
      goto L_089D6918;
    }
L_089D6918:
    ctx.set_gpr(31, 0x089D6920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089D6920u) goto L_089D6920;
    return;
L_089D6920:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089D692Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 281u, 0x0898D880u>(ctx, &aot_mem) && ctx.pc == 0x089D692Cu) goto L_089D692C;
    return;
L_089D692C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089D6940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089D6940u) goto L_089D6940;
    return;
L_089D6940:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6954;
      }
      goto L_089D694C;
    }
L_089D694C:
    ctx.set_gpr(31, 0x089D6954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089D6954u) goto L_089D6954;
    return;
L_089D6954:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6970;
      }
      goto L_089D6964;
    }
L_089D6964:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6CB0;
      }
      goto L_089D6970;
    }
L_089D6970:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089D697Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089D697Cu) goto L_089D697C;
    return;
L_089D697C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089D6988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 258u, 0x0898D69Cu>(ctx, &aot_mem) && ctx.pc == 0x089D6988u) goto L_089D6988;
    return;
L_089D6988:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D69A4;
      }
      goto L_089D6998;
    }
L_089D6998:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_089D69A4;
L_089D69A4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x089D69B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 274u, 0x089B98C4u>(ctx, &aot_mem) && ctx.pc == 0x089D69B8u) goto L_089D69B8;
    return;
L_089D69B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D69CC;
      }
      goto L_089D69C4;
    }
L_089D69C4:
    ctx.set_gpr(31, 0x089D69CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089D69CCu) goto L_089D69CC;
    return;
L_089D69CC:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6A38;
      }
      goto L_089D69D4;
    }
L_089D69D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D6A38;
      }
      goto L_089D69E4;
    }
L_089D69E4:
    ctx.set_gpr(2, ctx.gpr[16] & 8192u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D6A38;
      }
      goto L_089D69F0;
    }
L_089D69F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D6A34;
      }
      goto L_089D69FC;
    }
L_089D69FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D6A28;
      }
      goto L_089D6A08;
    }
L_089D6A08:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D6A1C;
      }
      goto L_089D6A14;
    }
L_089D6A14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6A38;
      }
      goto L_089D6A1C;
    }
L_089D6A1C:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(8193));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6A38;
      }
      goto L_089D6A28;
    }
L_089D6A28:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(8192));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6A38;
      }
      goto L_089D6A34;
    }
L_089D6A34:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(8194));
    goto L_089D6A38;
L_089D6A38:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(1132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D6A58u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D6A58u) goto L_089D6A58;
    return;
L_089D6A58:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6B74;
      }
      goto L_089D6A68;
    }
L_089D6A68:
    ctx.set_gpr(16, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26908)));
    ctx.set_gpr(31, 0x089D6A88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x089D6A88u) goto L_089D6A88;
    return;
L_089D6A88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6B70;
      }
      goto L_089D6A90;
    }
L_089D6A90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6ACC;
      }
      goto L_089D6AA8;
    }
L_089D6AA8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26908)));
    ctx.set_gpr(31, 0x089D6ABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x089D6ABCu) goto L_089D6ABC;
    return;
L_089D6ABC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6ACC;
      }
      goto L_089D6AC4;
    }
L_089D6AC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6AD0;
      }
      goto L_089D6ACC;
    }
L_089D6ACC:
    ctx.set_gpr(16, 0u + 0u);
    goto L_089D6AD0;
L_089D6AD0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6AE8;
      }
      goto L_089D6ADC;
    }
L_089D6ADC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089D6AE8;
L_089D6AE8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6B54;
      }
      goto L_089D6AF4;
    }
L_089D6AF4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D6B54;
      }
      goto L_089D6B04;
    }
L_089D6B04:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(31, 0x089D6B10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089D6B10u) goto L_089D6B10;
    return;
L_089D6B10:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6B2C;
      }
      goto L_089D6B20;
    }
L_089D6B20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089D6B2C;
L_089D6B2C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x089D6B3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 19u, 0x089C81F0u>(ctx, &aot_mem) && ctx.pc == 0x089D6B3Cu) goto L_089D6B3C;
    return;
L_089D6B3C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6B50;
      }
      goto L_089D6B48;
    }
L_089D6B48:
    ctx.set_gpr(31, 0x089D6B50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089D6B50u) goto L_089D6B50;
    return;
L_089D6B50:
    ctx.set_gpr(18, ctx.gpr[17] + 0u);
    goto L_089D6B54;
L_089D6B54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6B88;
      }
      goto L_089D6B60;
    }
L_089D6B60:
    ctx.set_gpr(31, 0x089D6B68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089D6B68u) goto L_089D6B68;
    return;
L_089D6B68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6B88;
      }
      goto L_089D6B70;
    }
L_089D6B70:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089D6B74;
L_089D6B74:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D6A68;
      }
      goto L_089D6B88;
    }
L_089D6B88:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6BA4;
      }
      goto L_089D6B98;
    }
L_089D6B98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089D6BA4;
L_089D6BA4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(7, ctx.gpr[22] + 0u);
    ctx.set_gpr(8, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D6BC8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D6BC8u) goto L_089D6BC8;
    return;
L_089D6BC8:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6BE0;
      }
      goto L_089D6BD8;
    }
L_089D6BD8:
    ctx.set_gpr(31, 0x089D6BE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089D6BE0u) goto L_089D6BE0;
    return;
L_089D6BE0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D6C94;
      }
      goto L_089D6BEC;
    }
L_089D6BEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D6C94;
      }
      goto L_089D6BFC;
    }
L_089D6BFC:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089D6C0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089D6C0Cu) goto L_089D6C0C;
    return;
L_089D6C0C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6C28;
      }
      goto L_089D6C1C;
    }
L_089D6C1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089D6C28;
L_089D6C28:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x089D6C38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 19u, 0x089C81F0u>(ctx, &aot_mem) && ctx.pc == 0x089D6C38u) goto L_089D6C38;
    return;
L_089D6C38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6C4C;
      }
      goto L_089D6C44;
    }
L_089D6C44:
    ctx.set_gpr(31, 0x089D6C4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089D6C4Cu) goto L_089D6C4C;
    return;
L_089D6C4C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6C70;
      }
      goto L_089D6C68;
    }
L_089D6C68:
    ctx.set_gpr(31, 0x089D6C70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089D6C70u) goto L_089D6C70;
    return;
L_089D6C70:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089D6C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x089D6C80u) goto L_089D6C80;
    return;
L_089D6C80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    goto L_089D6C94;
L_089D6C94:
    ctx.set_gpr(16, ctx.gpr[16] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6CAC;
      }
      goto L_089D6CA4;
    }
L_089D6CA4:
    ctx.set_gpr(31, 0x089D6CACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089D6CACu) goto L_089D6CAC;
    return;
L_089D6CAC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_089D6CB0;
L_089D6CB0:
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
L_089D6CE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D6CF8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D6CF8u) goto L_089D6CF8;
    return;
L_089D6CF8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D6D08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6D2C;
      }
      goto L_089D6D1C;
    }
L_089D6D1C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D6D2Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D6D2Cu) goto L_089D6D2C;
    return;
L_089D6D2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D6D3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6D88;
      }
      goto L_089D6D64;
    }
L_089D6D64:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6D88;
      }
      goto L_089D6D70;
    }
L_089D6D70:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6F10;
      }
      goto L_089D6D7C;
    }
L_089D6D7C:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6F10;
      }
      goto L_089D6D88;
    }
L_089D6D88:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089D6D9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 250u, 0x089B96A0u>(ctx, &aot_mem) && ctx.pc == 0x089D6D9Cu) goto L_089D6D9C;
    return;
L_089D6D9C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089D6DB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 250u, 0x089B96A0u>(ctx, &aot_mem) && ctx.pc == 0x089D6DB4u) goto L_089D6DB4;
    return;
L_089D6DB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6DE4;
      }
      goto L_089D6DBC;
    }
L_089D6DBC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[2] & 384u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(384));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D6F10;
      }
      goto L_089D6DD8;
    }
L_089D6DD8:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6F10;
      }
      goto L_089D6DE4;
    }
L_089D6DE4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6F10;
      }
      goto L_089D6DEC;
    }
L_089D6DEC:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27776)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[2]) || std::isnan(ctx.fpr[0])) && ctx.fpr[2] == ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D6E30;
      }
      goto L_089D6E2C;
    }
L_089D6E2C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D6E30;
L_089D6E30:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D6E58;
      }
      goto L_089D6E38;
    }
L_089D6E38:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27772)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D6E58;
      }
      goto L_089D6E54;
    }
L_089D6E54:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D6E58;
L_089D6E58:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D6E80;
      }
      goto L_089D6E60;
    }
L_089D6E60:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27768)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D6E80;
      }
      goto L_089D6E7C;
    }
L_089D6E7C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D6E80;
L_089D6E80:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D6F0C;
      }
      goto L_089D6E88;
    }
L_089D6E88:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27764)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[5]) || std::isnan(ctx.fpr[0])) && ctx.fpr[5] == ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D6EB4;
      }
      goto L_089D6EB0;
    }
L_089D6EB0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D6EB4;
L_089D6EB4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D6EDC;
      }
      goto L_089D6EBC;
    }
L_089D6EBC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27760)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D6EDC;
      }
      goto L_089D6ED8;
    }
L_089D6ED8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D6EDC;
L_089D6EDC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D6F04;
      }
      goto L_089D6EE4;
    }
L_089D6EE4:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27756)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D6F04;
      }
      goto L_089D6F00;
    }
L_089D6F00:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D6F04;
L_089D6F04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D6F10;
      }
      goto L_089D6F0C;
    }
L_089D6F0C:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_089D6F10;
L_089D6F10:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_089D6F30:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D6F38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D6F50u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D6F50u) goto L_089D6F50;
    return;
L_089D6F50:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D6F60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089D6F70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 438u, 0x08945F0Cu>(ctx, &aot_mem) && ctx.pc == 0x089D6F70u) goto L_089D6F70;
    return;
L_089D6F70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D6F80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D6FC8;
      }
      goto L_089D6FBC;
    }
L_089D6FBC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D76F8;
      }
      goto L_089D6FC8;
    }
L_089D6FC8:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089D6FD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089D6FD8u) goto L_089D6FD8;
    return;
L_089D6FD8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(224)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D7000u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D7000u) goto L_089D7000;
    return;
L_089D7000:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(244)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D7018u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D7018u) goto L_089D7018;
    return;
L_089D7018:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089D702Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 215u, 0x089B9378u>(ctx, &aot_mem) && ctx.pc == 0x089D702Cu) goto L_089D702C;
    return;
L_089D702C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D7104;
      }
      goto L_089D7034;
    }
L_089D7034:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D7074;
      }
      goto L_089D705C;
    }
L_089D705C:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    // nop
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D705C;
      }
      goto L_089D7074;
    }
L_089D7074:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x089D7084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 344u, 0x089CA40Cu>(ctx, &aot_mem) && ctx.pc == 0x089D7084u) goto L_089D7084;
    return;
L_089D7084:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(7, ctx.gpr[20] + static_cast<std::uint32_t>(54));
    ctx.set_gpr(8, ctx.gpr[20] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x089D70A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 345u, 0x089CA4A4u>(ctx, &aot_mem) && ctx.pc == 0x089D70A0u) goto L_089D70A0;
    return;
L_089D70A0:
    ctx.set_gpr(2, ctx.gpr[21] + static_cast<std::uint32_t>(48));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D71EC;
      }
      goto L_089D7104;
    }
L_089D7104:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089D7118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 215u, 0x089B9378u>(ctx, &aot_mem) && ctx.pc == 0x089D7118u) goto L_089D7118;
    return;
L_089D7118:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(7, ctx.gpr[20] + static_cast<std::uint32_t>(54));
    ctx.set_gpr(8, ctx.gpr[20] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x089D714Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 386u, 0x089CA764u>(ctx, &aot_mem) && ctx.pc == 0x089D714Cu) goto L_089D714C;
    return;
L_089D714C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089D7158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089D7158u) goto L_089D7158;
    return;
L_089D7158:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D717Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D717Cu) goto L_089D717C;
    return;
L_089D717C:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089D7190u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 569u, 0x089CB520u>(ctx, &aot_mem) && ctx.pc == 0x089D7190u) goto L_089D7190;
    return;
L_089D7190:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(7, ctx.gpr[20] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(8, ctx.gpr[20] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x089D71ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 322u, 0x089CA264u>(ctx, &aot_mem) && ctx.pc == 0x089D71ACu) goto L_089D71AC;
    return;
L_089D71AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D71C8;
      }
      goto L_089D71BC;
    }
L_089D71BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089D71C8;
L_089D71C8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x089D71D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 572u, 0x089CB580u>(ctx, &aot_mem) && ctx.pc == 0x089D71D8u) goto L_089D71D8;
    return;
L_089D71D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D71EC;
      }
      goto L_089D71E4;
    }
L_089D71E4:
    ctx.set_gpr(31, 0x089D71ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089D71ECu) goto L_089D71EC;
    return;
L_089D71EC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27764)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D720C;
      }
      goto L_089D7208;
    }
L_089D7208:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D720C;
L_089D720C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D7234;
      }
      goto L_089D7214;
    }
L_089D7214:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27760)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D7234;
      }
      goto L_089D7230;
    }
L_089D7230:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D7234;
L_089D7234:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D725C;
      }
      goto L_089D723C;
    }
L_089D723C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27756)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D725C;
      }
      goto L_089D7258;
    }
L_089D7258:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D725C;
L_089D725C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D72DC;
      }
      goto L_089D7264;
    }
L_089D7264:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27776)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D7284;
      }
      goto L_089D7280;
    }
L_089D7280:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D7284;
L_089D7284:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D72AC;
      }
      goto L_089D728C;
    }
L_089D728C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27772)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D72AC;
      }
      goto L_089D72A8;
    }
L_089D72A8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D72AC;
L_089D72AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D72D4;
      }
      goto L_089D72B4;
    }
L_089D72B4:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27768)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D72D4;
      }
      goto L_089D72D0;
    }
L_089D72D0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D72D4;
L_089D72D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D7340;
      }
      goto L_089D72DC;
    }
L_089D72DC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089D72E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089D72E8u) goto L_089D72E8;
    return;
L_089D72E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D7304u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D7304u) goto L_089D7304;
    return;
L_089D7304:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x089D7318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 752u, 0x089FFE94u>(ctx, &aot_mem) && ctx.pc == 0x089D7318u) goto L_089D7318;
    return;
L_089D7318:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x089D7328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 751u, 0x089FFD6Cu>(ctx, &aot_mem) && ctx.pc == 0x089D7328u) goto L_089D7328;
    return;
L_089D7328:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D733C;
      }
      goto L_089D7334;
    }
L_089D7334:
    ctx.set_gpr(31, 0x089D733Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089D733Cu) goto L_089D733C;
    return;
L_089D733C:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(128), ctx.gpr[21]);
    goto L_089D7340;
L_089D7340:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27920)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D7360;
      }
      goto L_089D735C;
    }
L_089D735C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D7360;
L_089D7360:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D7388;
      }
      goto L_089D7368;
    }
L_089D7368:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27916)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D7388;
      }
      goto L_089D7384;
    }
L_089D7384:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D7388;
L_089D7388:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D73E0;
      }
      goto L_089D7390;
    }
L_089D7390:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27928)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D73B0;
      }
      goto L_089D73AC;
    }
L_089D73AC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D73B0;
L_089D73B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D73D8;
      }
      goto L_089D73B8;
    }
L_089D73B8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27924)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D73D8;
      }
      goto L_089D73D4;
    }
L_089D73D4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D73D8;
L_089D73D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D7478;
      }
      goto L_089D73E0;
    }
L_089D73E0:
    ctx.set_gpr(31, 0x089D73E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 224u, 0x0893CE5Cu>(ctx, &aot_mem) && ctx.pc == 0x089D73E8u) goto L_089D73E8;
    return;
L_089D73E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089D73F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089D73F4u) goto L_089D73F4;
    return;
L_089D73F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D7410u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D7410u) goto L_089D7410;
    return;
L_089D7410:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x089D743Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 752u, 0x089FFE94u>(ctx, &aot_mem) && ctx.pc == 0x089D743Cu) goto L_089D743C;
    return;
L_089D743C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x089D7460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 751u, 0x089FFD6Cu>(ctx, &aot_mem) && ctx.pc == 0x089D7460u) goto L_089D7460;
    return;
L_089D7460:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D7474;
      }
      goto L_089D746C;
    }
L_089D746C:
    ctx.set_gpr(31, 0x089D7474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089D7474u) goto L_089D7474;
    return;
L_089D7474:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(132), ctx.gpr[21]);
    goto L_089D7478;
L_089D7478:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(620)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D7498u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D7498u) goto L_089D7498;
    return;
L_089D7498:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D74C0;
      }
      goto L_089D74B0;
    }
L_089D74B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(120), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D75D8;
      }
      goto L_089D74C0;
    }
L_089D74C0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8193));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D7590;
      }
      goto L_089D74D0;
    }
L_089D74D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8194));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D7590;
      }
      goto L_089D74DC;
    }
L_089D74DC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8192));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D7550;
      }
      goto L_089D74E8;
    }
L_089D74E8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D7540;
      }
      goto L_089D74F4;
    }
L_089D74F4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D7540;
      }
      goto L_089D7500;
    }
L_089D7500:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D7540;
      }
      goto L_089D750C;
    }
L_089D750C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D7540;
      }
      goto L_089D7518;
    }
L_089D7518:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D7540;
      }
      goto L_089D7524;
    }
L_089D7524:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D7540;
      }
      goto L_089D752C;
    }
L_089D752C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4102));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D7540;
      }
      goto L_089D7538;
    }
L_089D7538:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D75D0;
      }
      goto L_089D7540;
    }
L_089D7540:
    ctx.set_gpr(31, 0x089D7548u);
    // nop
    goto L_089D7720;
L_089D7548:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D75D4;
      }
      goto L_089D7550;
    }
L_089D7550:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D7578;
      }
      goto L_089D7564;
    }
L_089D7564:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089D7578;
L_089D7578:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D7564;
      }
      goto L_089D7588;
    }
L_089D7588:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D75D4;
      }
      goto L_089D7590;
    }
L_089D7590:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D75B8;
      }
      goto L_089D75A4;
    }
L_089D75A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089D75B8;
L_089D75B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D75A4;
      }
      goto L_089D75C8;
    }
L_089D75C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D75D4;
      }
      goto L_089D75D0;
    }
L_089D75D0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D75D4;
L_089D75D4:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(120), ctx.gpr[2]);
    goto L_089D75D8;
L_089D75D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(17, (ctx.gpr[2] >> 9u) & 0x00000003u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089D75F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 215u, 0x089B9378u>(ctx, &aot_mem) && ctx.pc == 0x089D75F4u) goto L_089D75F4;
    return;
L_089D75F4:
    ctx.set_gpr(3, ctx.gpr[17] ^ 0u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D7608;
      }
      goto L_089D7604;
    }
L_089D7604:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    goto L_089D7608;
L_089D7608:
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(124), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D761C;
      }
      goto L_089D7618;
    }
L_089D7618:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24), 0u);
    goto L_089D761C;
L_089D761C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D7650;
      }
      goto L_089D762C;
    }
L_089D762C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D7650;
      }
      goto L_089D7634;
    }
L_089D7634:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D7650;
      }
      goto L_089D763C;
    }
L_089D763C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D765C;
      }
      goto L_089D7644;
    }
L_089D7644:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D765C;
      }
      goto L_089D7650;
    }
L_089D7650:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D76F8;
      }
      goto L_089D765C;
    }
L_089D765C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(792)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D7670u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D7670u) goto L_089D7670;
    return;
L_089D7670:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D76F4;
      }
      goto L_089D7680;
    }
L_089D7680:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(800)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D7698u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D7698u) goto L_089D7698;
    return;
L_089D7698:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089D76B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 258u, 0x089D16A0u>(ctx, &aot_mem) && ctx.pc == 0x089D76B8u) goto L_089D76B8;
    return;
L_089D76B8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(804)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D76CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D76CCu) goto L_089D76CC;
    return;
L_089D76CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D76F4;
      }
      goto L_089D76D4;
    }
L_089D76D4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(796)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D76ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D76ECu) goto L_089D76EC;
    return;
L_089D76EC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    goto L_089D76F4;
L_089D76F4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089D76F8;
L_089D76F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D7720:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8193));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D77EC;
      }
      goto L_089D772C;
    }
L_089D772C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8194));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D77EC;
      }
      goto L_089D7738;
    }
L_089D7738:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8192));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D77EC;
      }
      goto L_089D7744;
    }
L_089D7744:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D77E0;
      }
      goto L_089D7750;
    }
L_089D7750:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D77E0;
      }
      goto L_089D775C;
    }
L_089D775C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D77D0;
      }
      goto L_089D7768;
    }
L_089D7768:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D77C4;
      }
      goto L_089D7774;
    }
L_089D7774:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D77A4;
      }
      goto L_089D7780;
    }
L_089D7780:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D779C;
      }
      goto L_089D7788;
    }
L_089D7788:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4102));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D779C;
      }
      goto L_089D7794;
    }
L_089D7794:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D77F4;
      }
      goto L_089D779C;
    }
L_089D779C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D77F8;
      }
      goto L_089D77A4;
    }
L_089D77A4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089D77B8;
      }
      goto L_089D77B0;
    }
L_089D77B0:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    goto L_089D77B8;
L_089D77B8:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D77F8;
      }
      goto L_089D77C4;
    }
L_089D77C4:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D77F8;
      }
      goto L_089D77D0;
    }
L_089D77D0:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(5, ctx.lo);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D77F8;
      }
      goto L_089D77E0;
    }
L_089D77E0:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D77F8;
      }
      goto L_089D77EC;
    }
L_089D77EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D77F8;
      }
      goto L_089D77F4;
    }
L_089D77F4:
    ctx.set_gpr(5, 0u + 0u);
    goto L_089D77F8;
L_089D77F8:
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D7804:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D7834;
      }
      goto L_089D782C;
    }
L_089D782C:
    ctx.set_gpr(31, 0x089D7834u);
    // nop
    goto L_089D7EA0;
L_089D7834:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x089D7854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 215u, 0x089B9378u>(ctx, &aot_mem) && ctx.pc == 0x089D7854u) goto L_089D7854;
    return;
L_089D7854:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D786C;
      }
      goto L_089D7860;
    }
L_089D7860:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_089D786C;
L_089D786C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D794C;
      }
      goto L_089D7878;
    }
L_089D7878:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D78DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D78DCu) goto L_089D78DC;
    return;
L_089D78DC:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D78FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D78FCu) goto L_089D78FC;
    return;
L_089D78FC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D7CD0;
      }
      goto L_089D794C;
    }
L_089D794C:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(20));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D7984;
      }
      goto L_089D796C;
    }
L_089D796C:
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    // nop
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D796C;
      }
      goto L_089D7984;
    }
L_089D7984:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(10, (ctx.gpr[4] >> 9u) & 0x00000003u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    ctx.set_gpr(9, ctx.gpr[4] & 3u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[9]);
    ctx.set_gpr(8, (ctx.gpr[4] >> 2u) & 0x00000007u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.set_gpr(7, (ctx.gpr[4] >> 5u) & 0x00000003u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.set_gpr(6, (ctx.gpr[4] >> 7u) & 0x00000003u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089D7C04;
      }
      goto L_089D79BC;
    }
L_089D79BC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089D7B9C;
      }
      goto L_089D79C8;
    }
L_089D79C8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089D7B04;
      }
      goto L_089D79D4;
    }
L_089D79D4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089D7A68;
      }
      goto L_089D79E0;
    }
L_089D79E0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089D79F4;
      }
      goto L_089D79EC;
    }
L_089D79EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D7CA4;
      }
      goto L_089D79F4;
    }
L_089D79F4:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(62)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-29308));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), 0u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D7CA4;
      }
      goto L_089D7A68;
    }
L_089D7A68:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-29316));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27480)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27476)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27472)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27468)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27496)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27492)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27488)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27484)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D7CA4;
      }
      goto L_089D7B04;
    }
L_089D7B04:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(58)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-29324));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27480)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27476)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27472)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27468)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27496)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27492)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27488)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27484)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D7CA4;
      }
      goto L_089D7B9C;
    }
L_089D7B9C:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-29332));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[9]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), 0u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D7CA4;
      }
      goto L_089D7C04;
    }
L_089D7C04:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(54)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-29340));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[10]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, (ctx.gpr[3] >> 13u) & 0x00000007u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27480)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27476)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27472)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27468)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27496)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27492)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27488)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27484)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089D7CA4;
L_089D7CA4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[4] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_089D7CD0;
L_089D7CD0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D7CE4;
      }
      goto L_089D7CDC;
    }
L_089D7CDC:
    ctx.set_gpr(31, 0x089D7CE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089D7CE4u) goto L_089D7CE4;
    return;
L_089D7CE4:
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
L_089D7D00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x089D7D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 215u, 0x089B9378u>(ctx, &aot_mem) && ctx.pc == 0x089D7D20u) goto L_089D7D20;
    return;
L_089D7D20:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D7D38;
      }
      goto L_089D7D2C;
    }
L_089D7D2C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_089D7D38;
L_089D7D38:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D7D4C;
      }
      goto L_089D7D44;
    }
L_089D7D44:
    ctx.set_gpr(31, 0x089D7D4Cu);
    // nop
    ctx.pc = 0x08B0DEB4u;
    return;
L_089D7D4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D7D60;
      }
      goto L_089D7D58;
    }
L_089D7D58:
    ctx.set_gpr(31, 0x089D7D60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089D7D60u) goto L_089D7D60;
    return;
L_089D7D60:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D7D70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D7DD4;
      }
      goto L_089D7D90;
    }
L_089D7D90:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D7DA0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D7DA0u) goto L_089D7DA0;
    return;
L_089D7DA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D7DD4;
      }
      goto L_089D7DA8;
    }
L_089D7DA8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_089D7DEC;
      }
      goto L_089D7DB4;
    }
L_089D7DB4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28632)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(796)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D7DCCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D7DCCu) goto L_089D7DCC;
    return;
L_089D7DCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D7DEC;
      }
      goto L_089D7DD4;
    }
L_089D7DD4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D7DEC;
      }
      goto L_089D7DE0;
    }
L_089D7DE0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089D7DECu);
    // nop
    goto L_089D7EA0;
L_089D7DEC:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(124), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D7E4C;
      }
      goto L_089D7E08;
    }
L_089D7E08:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089D7E20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 215u, 0x089B9378u>(ctx, &aot_mem) && ctx.pc == 0x089D7E20u) goto L_089D7E20;
    return;
L_089D7E20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D7E34;
      }
      goto L_089D7E28;
    }
L_089D7E28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(48));
    goto L_089D7E34;
L_089D7E34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089D7E48;
      }
      goto L_089D7E40;
    }
L_089D7E40:
    ctx.set_gpr(31, 0x089D7E48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089D7E48u) goto L_089D7E48;
    return;
L_089D7E48:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    goto L_089D7E4C;
L_089D7E4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D7E64;
      }
      goto L_089D7E58;
    }
L_089D7E58:
    ctx.set_gpr(31, 0x089D7E60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089D7E60u) goto L_089D7E60;
    return;
L_089D7E60:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), 0u);
    goto L_089D7E64;
L_089D7E64:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D7E7C;
      }
      goto L_089D7E70;
    }
L_089D7E70:
    ctx.set_gpr(31, 0x089D7E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089D7E78u) goto L_089D7E78;
    return;
L_089D7E78:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), 0u);
    goto L_089D7E7C;
L_089D7E7C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089D7E88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 395u, 0x089BA0D0u>(ctx, &aot_mem) && ctx.pc == 0x089D7E88u) goto L_089D7E88;
    return;
L_089D7E88:
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
L_089D7EA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28632)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x089D7EC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 312u, 0x089CA1B8u>(ctx, &aot_mem) && ctx.pc == 0x089D7EC0u) goto L_089D7EC0;
    return;
L_089D7EC0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D7ED0:
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
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(22, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(272)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D7F28;
      }
      goto L_089D7F1C;
    }
L_089D7F1C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D7F4C;
      }
      goto L_089D7F28;
    }
L_089D7F28:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(408)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(412)));
    ctx.set_gpr(8, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D7F4Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D7F4Cu) goto L_089D7F4C;
    return;
L_089D7F4C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8193));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 3u, 0x089D8018u>(ctx, &aot_mem); return;
      }
      goto L_089D7F68;
    }
L_089D7F68:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8194));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 3u, 0x089D8018u>(ctx, &aot_mem); return;
      }
      goto L_089D7F74;
    }
L_089D7F74:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8192));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 3u, 0x089D8018u>(ctx, &aot_mem); return;
      }
      goto L_089D7F80;
    }
L_089D7F80:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 2u, 0x089D800Cu>(ctx, &aot_mem); return;
      }
      goto L_089D7F8C;
    }
L_089D7F8C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 2u, 0x089D800Cu>(ctx, &aot_mem); return;
      }
      goto L_089D7F98;
    }
L_089D7F98:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D7FFC;
      }
      goto L_089D7FA4;
    }
L_089D7FA4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D7FF0;
      }
      goto L_089D7FB0;
    }
L_089D7FB0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D7FE4;
      }
      goto L_089D7FBC;
    }
L_089D7FBC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D7FD8;
      }
      goto L_089D7FC4;
    }
L_089D7FC4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4102));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D7FD8;
      }
      goto L_089D7FD0;
    }
L_089D7FD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 4u, 0x089D8024u>(ctx, &aot_mem); return;
      }
      goto L_089D7FD8;
    }
L_089D7FD8:
    ctx.set_gpr(17, ctx.gpr[19] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 5u, 0x089D8028u>(ctx, &aot_mem); return;
      }
      goto L_089D7FE4;
    }
L_089D7FE4:
    ctx.set_gpr(17, ctx.gpr[19] << 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 5u, 0x089D8028u>(ctx, &aot_mem); return;
      }
      goto L_089D7FF0;
    }
L_089D7FF0:
    ctx.set_gpr(17, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 5u, 0x089D8028u>(ctx, &aot_mem); return;
      }
      goto L_089D7FFC;
    }
L_089D7FFC:
    ctx.set_gpr(3, ctx.gpr[19] << 1u);
    ctx.pc = 0x089D8000u; return;
}

void recomp_unit_0116(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0116_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_116(Runtime &runtime) {
    runtime.register_generated_unit(116u, 0x089D4000u, 16384u, &recomp_unit_0116, &recomp_unit_0116_entry);
    runtime.register_function(0x089D4000u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4078u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4080u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D408Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D40A8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D40C0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D40CCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4100u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4120u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D412Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4138u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4154u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4168u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4174u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4180u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D418Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4198u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D41A0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D41C4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D41E4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4208u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4214u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4250u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D425Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D426Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4278u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D429Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D42B0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D42D4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D42E8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4308u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4320u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D432Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4348u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4418u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4420u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D442Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4444u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4464u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D449Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D44A8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D44B8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D44C4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D44D0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D44F0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D44F8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D44FCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D452Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4538u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D453Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4550u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4558u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D455Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4570u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4578u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4580u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4588u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D458Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D459Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D45A8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D45B8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D45C8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D45D4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D45E0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D45E8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D45F0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D462Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4640u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4654u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4684u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4690u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D46ACu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D46B8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D46C4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D46F8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4700u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4710u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4714u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4718u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4724u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D472Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4738u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4744u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D475Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4784u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4794u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D47A4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D47BCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D47CCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D47D4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D47E0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D47E4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D47ECu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D47F8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4818u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4828u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4840u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D484Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D485Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4868u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D48ACu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D48C4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D48DCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D48F4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4908u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D491Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4940u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4954u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4964u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4970u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D497Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4980u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4988u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4994u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D49A0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D49ACu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D49B4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D49C0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D49CCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D49D8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D49E4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D49F0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D49FCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4A08u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4A14u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4A20u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4A2Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4A34u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4A3Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4A48u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4A50u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4A58u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4A68u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4A78u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4A80u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4A8Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4A98u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4AA0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4AB0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4AC0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4AC8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4AD0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4AD8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4AE8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4AF0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4AF8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4B00u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4B10u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4B18u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4B20u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4B28u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4B38u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4B40u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4B48u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4B50u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4B60u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4B64u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4B6Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4B7Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4B84u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4B8Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4B9Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4BA4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4BACu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4BB0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4BB8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4BE0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4BE8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4BF4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4C24u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4C30u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4C38u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4C44u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4C6Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4C78u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4C80u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4C88u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4C90u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4CA0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4CACu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4CE8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4CF4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4CF8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4D14u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4D20u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4D28u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4D34u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4D8Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4D98u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4DA0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4DB0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4DBCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4E10u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4E1Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4E24u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4E30u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4E84u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4E90u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4E98u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4EA4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4EE8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4EF4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4EFCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4F04u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4F0Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4F14u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4F20u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4F44u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4F50u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4F58u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4F60u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4F6Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4F74u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4F98u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4FA8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4FB0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4FB8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4FC8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4FD8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4FE8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D4FF8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D501Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5028u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5030u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5034u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5040u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5048u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D504Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5058u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5060u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5064u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5070u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5078u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D507Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5088u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5094u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D50A0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D50A8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D50B4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D50C8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D50D0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D510Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5114u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5120u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5130u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D513Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5148u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5174u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5188u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D51B8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D51C4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D51D0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D51FCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5200u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5208u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5224u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5228u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5230u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D524Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5250u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5258u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5274u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5298u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D52A4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D52ACu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D52B0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D52D8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D52DCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D52E4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5300u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5304u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D530Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5328u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5350u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D535Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5364u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5368u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D537Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5398u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D539Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D53A4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D53B8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D53BCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D53DCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5404u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5408u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D541Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5434u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5448u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5450u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5454u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5478u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D54B4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D54F0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5514u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5550u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D558Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D55B0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D55D8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5600u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5638u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5660u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D568Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D569Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D56B4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D56CCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D56DCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D56F4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D570Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D571Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5734u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D574Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D575Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5774u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5788u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D57BCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D57F0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5814u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5828u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5830u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5838u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5860u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5870u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5884u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D588Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5894u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D58BCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D58CCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D58E0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D58E8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D58F8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D590Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5914u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D591Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5920u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5930u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5968u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D59A0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D59C0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D59F8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5A30u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5A50u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5A74u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5A84u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5AA4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5AC0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5AECu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5B18u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5B44u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5B50u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5B7Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5B98u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5BCCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5BF8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5C24u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5C50u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5C78u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5C88u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5C9Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5CC0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5CD8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5CF0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5CF8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5D08u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5D44u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5D50u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5D5Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5D68u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5D78u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5D94u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5D98u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5DF8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5E00u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5E08u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5E1Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5E2Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5E3Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5E64u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5E8Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5E90u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5E9Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5EACu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5ED4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5EFCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5F00u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5F0Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5F1Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5F44u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5F64u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5F68u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5F74u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5F7Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5FA0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5FC4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5FC8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5FD4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5FE0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D5FECu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6008u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6014u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6018u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6028u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6040u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6068u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6088u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D608Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6098u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D60A4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D60D8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6100u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6104u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6110u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6114u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6120u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D612Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D613Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6144u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6148u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D614Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6180u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D61B8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D61C8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D61D8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D61F8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6224u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6228u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6230u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D624Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6250u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6258u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6274u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6278u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6280u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D629Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D62C0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D62CCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D62D4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D62D8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6300u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6304u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D630Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6328u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D632Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6334u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6350u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6378u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6384u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D638Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6390u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D63A4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D63C0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D63C4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D63CCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D63E0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D63E4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D63F4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D63FCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6408u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6418u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D643Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6450u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6478u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D64A0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D64A4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D64B0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D64C0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D64E8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6510u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6514u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6520u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6530u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6558u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6578u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D657Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6588u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6594u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D65C8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D65E8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D65ECu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D65F8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D65FCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6618u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6628u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6634u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6640u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D664Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6670u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6680u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D669Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D66A0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D66ACu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D66B8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D66D4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D66F4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6708u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6728u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D672Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6744u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6748u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6758u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6764u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6774u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6778u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6788u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D679Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D67A8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D67B0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D67B8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D67C8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D67DCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D67E8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D67F0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D67F8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6808u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D681Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6824u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D682Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6838u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6858u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6860u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D686Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6870u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D688Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D68BCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6900u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D690Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6918u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6920u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D692Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6940u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D694Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6954u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6964u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6970u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D697Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6988u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6998u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D69A4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D69B8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D69C4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D69CCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D69D4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D69E4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D69F0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D69FCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6A08u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6A14u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6A1Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6A28u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6A34u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6A38u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6A58u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6A68u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6A88u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6A90u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6AA8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6ABCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6AC4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6ACCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6AD0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6ADCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6AE8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6AF4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6B04u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6B10u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6B20u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6B2Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6B3Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6B48u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6B50u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6B54u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6B60u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6B68u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6B70u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6B74u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6B88u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6B98u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6BA4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6BC8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6BD8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6BE0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6BECu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6BFCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6C0Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6C1Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6C28u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6C38u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6C44u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6C4Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6C68u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6C70u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6C80u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6C94u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6CA4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6CACu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6CB0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6CE0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6CF8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6D08u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6D1Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6D2Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6D3Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6D64u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6D70u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6D7Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6D88u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6D9Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6DB4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6DBCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6DD8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6DE4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6DECu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6E2Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6E30u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6E38u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6E54u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6E58u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6E60u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6E7Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6E80u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6E88u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6EB0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6EB4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6EBCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6ED8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6EDCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6EE4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6F00u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6F04u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6F0Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6F10u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6F30u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6F38u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6F50u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6F60u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6F70u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6F80u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6FBCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6FC8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D6FD8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7000u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7018u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D702Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7034u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D705Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7074u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7084u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D70A0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7104u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7118u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D714Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7158u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D717Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7190u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D71ACu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D71BCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D71C8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D71D8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D71E4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D71ECu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7208u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D720Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7214u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7230u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7234u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D723Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7258u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D725Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7264u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7280u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7284u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D728Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D72A8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D72ACu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D72B4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D72D0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D72D4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D72DCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D72E8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7304u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7318u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7328u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7334u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D733Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7340u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D735Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7360u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7368u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7384u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7388u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7390u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D73ACu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D73B0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D73B8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D73D4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D73D8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D73E0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D73E8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D73F4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7410u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D743Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7460u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D746Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7474u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7478u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7498u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D74B0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D74C0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D74D0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D74DCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D74E8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D74F4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7500u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D750Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7518u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7524u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D752Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7538u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7540u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7548u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7550u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7564u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7578u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7588u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7590u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D75A4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D75B8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D75C8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D75D0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D75D4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D75D8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D75F4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7604u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7608u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7618u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D761Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D762Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7634u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D763Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7644u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7650u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D765Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7670u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7680u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7698u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D76B8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D76CCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D76D4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D76ECu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D76F4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D76F8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7720u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D772Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7738u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7744u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7750u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D775Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7768u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7774u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7780u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7788u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7794u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D779Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D77A4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D77B0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D77B8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D77C4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D77D0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D77E0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D77ECu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D77F4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D77F8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7804u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D782Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7834u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7854u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7860u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D786Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7878u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D78DCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D78FCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D794Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D796Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7984u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D79BCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D79C8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D79D4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D79E0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D79ECu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D79F4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7A68u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7B04u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7B9Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7C04u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7CA4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7CD0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7CDCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7CE4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7D00u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7D20u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7D2Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7D38u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7D44u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7D4Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7D58u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7D60u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7D70u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7D90u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7DA0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7DA8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7DB4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7DCCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7DD4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7DE0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7DECu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7E08u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7E20u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7E28u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7E34u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7E40u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7E48u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7E4Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7E58u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7E60u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7E64u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7E70u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7E78u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7E7Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7E88u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7EA0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7EC0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7ED0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7F1Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7F28u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7F4Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7F68u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7F74u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7F80u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7F8Cu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7F98u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7FA4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7FB0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7FBCu, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7FC4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7FD0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7FD8u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7FE4u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7FF0u, &recomp_unit_0116, "recomp_unit_0116");
    runtime.register_function(0x089D7FFCu, &recomp_unit_0116, "recomp_unit_0116");
}
} // namespace psprecomp
