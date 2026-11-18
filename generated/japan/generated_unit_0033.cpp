#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0033[4062] = {
    1, 2, 0, 3, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0,
    0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 13, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 16, 0,
    0, 17, 0, 0, 18, 0, 0, 0, 19, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0,
    0, 24, 0, 0, 0, 0, 0, 25, 0, 26, 0, 27, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 32, 0, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 38, 39, 0, 40, 0, 0, 41,
    0, 0, 0, 0, 0, 42, 0, 0, 43, 44, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0,
    49, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 52, 0, 53, 0, 0, 0, 0, 54, 0, 55, 0, 56, 0, 57, 0, 0, 58, 0, 0, 59, 0,
    60, 0, 61, 0, 62, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0,
    0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 73, 0, 74, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0,
    78, 0, 0, 0, 79, 0, 80, 0, 0, 0, 81, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 89, 0, 0, 90, 0, 91, 92, 0, 0, 0, 0, 0, 0,
    0, 93, 0, 94, 0, 95, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 98, 0, 99, 0, 100, 0, 101, 0, 0, 102, 0, 0, 103, 0, 0, 104,
    0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 108, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 113, 0, 114, 0,
    0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 118, 0, 119, 0, 0, 0, 120, 0, 0, 121, 0,
    0, 0, 122, 123, 0, 0, 124, 0, 125, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 0, 131, 0, 0, 132, 0, 0,
    133, 0, 0, 0, 134, 0, 0, 135, 0, 136, 0, 137, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 142, 0, 0, 143, 0, 144, 0, 0,
    145, 146, 0, 0, 147, 0, 0, 148, 0, 149, 0, 0, 0, 150, 0, 151, 0, 152, 0, 0, 153, 0, 154, 0, 155, 0, 156, 0, 0, 157, 0, 0,
    158, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 162, 0, 0, 163, 0, 164, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0,
    0, 168, 0, 0, 169, 0, 170, 0, 171, 0, 0, 172, 0, 0, 173, 174, 0, 0, 0, 0, 175, 0, 176, 0, 0, 177, 0, 178, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 182, 0, 183, 0, 0, 184, 0, 0, 185, 186, 0, 187, 0,
    0, 188, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 194, 0, 0, 0, 0, 0, 0, 0,
    0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 198, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0,
    0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 207, 0, 208, 0, 209, 0,
    210, 0, 0, 0, 0, 211, 0, 212, 0, 0, 213, 0, 214, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0,
    219, 0, 0, 220, 221, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0,
    228, 0, 0, 0, 229, 230, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0,
    235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 239, 0, 240, 0, 0, 241, 0, 242, 0, 243, 0, 244, 0, 0,
    0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0, 251, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254,
    0, 0, 0, 0, 0, 255, 256, 257, 0, 258, 0, 259, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 263, 0, 0, 264, 0, 265,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 268, 0, 0, 269, 0, 270, 0, 0, 271, 0, 272, 0, 273, 0, 0, 274, 275,
    0, 276, 0, 277, 0, 0, 0, 0, 278, 0, 279, 0, 0, 280, 0, 0, 0, 281, 0, 282, 0, 0, 283, 0, 0, 0, 0, 284, 0, 285, 0, 0,
    0, 286, 0, 287, 0, 0, 288, 0, 0, 289, 0, 0, 290, 0, 291, 0, 292, 0, 293, 0, 294, 0, 295, 0, 296, 0, 0, 297, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0,
    0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 305, 0,
    0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 313, 0, 0,
    0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0,
    318, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0,
    323, 0, 0, 0, 0, 324, 0, 325, 0, 0, 0, 0, 326, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 331, 0, 0,
    0, 0, 0, 0, 332, 0, 333, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 336, 0, 0, 337, 0, 338, 0, 339, 0, 0, 0, 340, 0, 0,
    0, 341, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 352,
    0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 356, 0, 0, 0, 357, 0, 0, 358, 0, 359,
    0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 364, 0, 0, 365, 366, 0, 367, 0, 368, 0, 0, 0,
    369, 370, 0, 0, 0, 371, 0, 0, 0, 372, 373, 0, 374, 375, 0, 376, 377, 0, 0, 378, 0, 379, 380, 0, 0, 0, 0, 381, 0, 382, 0, 383,
    0, 0, 0, 384, 0, 385, 0, 0, 0, 0, 386, 0, 387, 0, 388, 0, 389, 0, 0, 0, 390, 0, 391, 0, 392, 0, 0, 393, 0, 394, 0, 0,
    0, 0, 395, 0, 396, 0, 0, 397, 0, 398, 0, 0, 399, 400, 0, 0, 401, 402, 0, 0, 403, 404, 0, 0, 405, 0, 406, 0, 0, 0, 407, 0,
    408, 0, 409, 0, 410, 0, 411, 0, 412, 0, 0, 413, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 417,
    0, 0, 418, 0, 0, 419, 0, 0, 0, 420, 421, 0, 0, 422, 0, 423, 0, 424, 0, 425, 0, 0, 0, 426, 0, 427, 0, 0, 428, 0, 429, 0,
    430, 0, 431, 0, 432, 0, 433, 0, 434, 0, 435, 0, 436, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0,
    0, 0, 440, 0, 0, 0, 441, 0, 0, 442, 0, 443, 0, 0, 0, 0, 444, 0, 445, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 447, 0, 0, 448, 0, 0, 0, 0, 0, 0, 449, 0, 450, 0, 0, 451, 0, 452, 0, 453, 0, 0, 454, 0, 455, 0, 0, 0, 0, 456, 0,
    457, 0, 458, 0, 459, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 462, 0, 463, 0, 0, 464, 465, 0, 466, 0, 467, 0, 0,
    0, 468, 0, 469, 0, 0, 0, 470, 0, 471, 0, 0, 0, 472, 0, 473, 0, 0, 0, 474, 0, 475, 0, 476, 0, 477, 0, 478, 0, 479, 0, 480,
    481, 0, 482, 0, 483, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 486, 0, 487, 0, 0, 0, 0, 488, 0, 489, 0, 0, 0,
    0, 490, 0, 0, 491, 0, 0, 0, 0, 492, 0, 493, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 496, 0, 0, 0, 0, 0, 497, 0,
    0, 0, 0, 498, 0, 499, 0, 0, 0, 0, 500, 0, 0, 501, 0, 0, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0, 0, 0,
    0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 509, 0, 0, 510, 0, 0, 0, 0, 0, 511, 0, 512, 0, 513, 0, 0, 514, 0,
    515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 518, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 521, 0, 0, 522, 0, 0,
    0, 0, 0, 0, 0, 0, 523, 0, 524, 0, 0, 525, 0, 0, 0, 0, 0, 526, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 528, 0, 0, 0, 529, 0, 530, 531, 0, 0, 0, 532, 0, 533, 0, 534, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 536, 0, 0, 0,
    0, 0, 0, 537, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 542, 0, 543, 0, 544, 0, 545, 0, 546, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0,
    548, 0, 0, 0, 549, 0, 0, 0, 0, 0, 550, 0, 0, 0, 551, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 553, 0, 0, 0, 0, 554, 0, 0, 555, 0, 556, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 558, 0, 0, 559, 560, 0, 561, 0, 0,
    0, 0, 562, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 565, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 568, 0, 0,
    0, 569, 0, 0, 0, 570, 0, 0, 0, 0, 0, 571, 0, 572, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 575, 0, 0, 576, 0, 0,
    0, 577, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 580, 0, 0, 0, 0, 581, 0, 0, 0, 582, 0,
    0, 0, 0, 0, 0, 583, 0, 584, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 587, 0, 588, 0, 0, 0, 589, 590, 0, 0,
    0, 0, 0, 591, 0, 0, 592, 0, 0, 0, 0, 0, 593, 0, 0, 594, 0, 0, 595, 0, 0, 596, 0, 0, 0, 0, 597, 0, 0, 598, 599, 0,
    0, 0, 0, 0, 0, 600, 0, 601, 0, 602, 0, 603, 604, 0, 0, 0, 0, 0, 605, 0, 606, 0, 0, 607, 0, 608, 0, 0, 609, 0, 610, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 612, 0, 0, 0, 613, 0, 0, 0, 614, 0, 0, 615, 0, 0, 0, 616, 0, 0, 0, 617,
    0, 0, 0, 618, 0, 0, 0, 619, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 621, 0, 622, 0, 623, 0, 624, 0, 0, 0, 625, 0, 626, 0,
    0, 627, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 630, 0, 0, 0, 0, 0, 0, 631, 0, 632, 0, 633, 0, 634,
    635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 637, 0, 638, 0, 639, 0, 640, 0, 0, 641, 0, 642, 0, 643, 0, 0, 644, 0,
    645, 0, 646, 0, 0, 647, 0, 648, 0, 649, 0, 0, 0, 650, 0, 651, 0, 652, 0, 653, 0, 654, 0, 655, 0, 656, 0, 657, 0, 658, 0, 659,
    0, 660, 0, 661, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 664, 0, 665, 0, 0, 0, 0, 0, 666, 0, 0, 667, 0, 668, 0,
    669, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 671, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0,
    0, 0, 0, 674, 0, 675, 0, 0, 0, 676, 677, 0, 0, 0, 678, 679, 0, 680, 681, 0, 682, 683, 0, 684, 685, 0, 0, 686, 0, 687, 0, 688,
    0, 689, 0, 0, 0, 0, 0, 0, 0, 690, 0, 691, 0, 692, 0, 0, 693, 0, 694, 0, 695, 0, 0, 696, 0, 0, 697, 0, 698, 0, 699, 0,
    0, 700, 0, 0, 701, 0, 702, 0, 703, 0, 0, 704, 0, 0, 705, 0, 706, 0, 707, 0, 0, 708, 0, 709, 0, 710, 0, 0, 0, 711, 0, 712,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0,
    0, 715, 0, 716, 0, 717, 0, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 721, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 723, 0, 0, 0, 724, 0, 725, 0, 726, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0, 728,
    0, 729, 0, 730, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 731, 0, 0, 0,
    0, 0, 0, 0, 0, 732, 0, 0, 0, 733, 0, 734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 736, 0, 737, 0, 738, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 740, 0, 0, 741, 742,
    0, 743, 0, 0, 0, 0, 0, 744, 0, 745, 0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 747, 0, 0, 0, 748, 0, 749, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0, 751, 0, 752, 0, 0, 753, 0, 0, 0, 0, 0, 754, 0, 755, 0, 756, 0, 757,
    0, 0, 0, 0, 758, 0, 759, 0, 760, 0, 0, 0, 0, 0, 0, 761, 0, 0, 762, 763, 0, 764, 0, 0, 0, 0, 0, 765, 0, 766,
};
void recomp_unit_0033_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08888004u;
        entry_id = (entry_delta < 16248u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0033[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08888004;
    case 2u: goto L_08888008;
    case 3u: goto L_08888010;
    case 4u: goto L_08888018;
    case 5u: goto L_08888024;
    case 6u: goto L_08888058;
    case 7u: goto L_08888064;
    case 8u: goto L_08888070;
    case 9u: goto L_08888094;
    case 10u: goto L_088880A0;
    case 11u: goto L_088880B0;
    case 12u: goto L_088880C8;
    case 13u: goto L_088880CC;
    case 14u: goto L_088880E0;
    case 15u: goto L_088880EC;
    case 16u: goto L_088880FC;
    case 17u: goto L_08888108;
    case 18u: goto L_08888114;
    case 19u: goto L_08888124;
    case 20u: goto L_0888812C;
    case 21u: goto L_0888813C;
    case 22u: goto L_0888815C;
    case 23u: goto L_0888816C;
    case 24u: goto L_08888188;
    case 25u: goto L_088881A0;
    case 26u: goto L_088881A8;
    case 27u: goto L_088881B0;
    case 28u: goto L_088881B8;
    case 29u: goto L_088881C0;
    case 30u: goto L_088882A4;
    case 31u: goto L_088882DC;
    case 32u: goto L_088882E0;
    case 33u: goto L_08888304;
    case 34u: goto L_08888318;
    case 35u: goto L_08888338;
    case 36u: goto L_08888358;
    case 37u: goto L_08888360;
    case 38u: goto L_08888368;
    case 39u: goto L_0888836C;
    case 40u: goto L_08888374;
    case 41u: goto L_08888380;
    case 42u: goto L_08888398;
    case 43u: goto L_088883A4;
    case 44u: goto L_088883A8;
    case 45u: goto L_088883C0;
    case 46u: goto L_088883C8;
    case 47u: goto L_088883E4;
    case 48u: goto L_088883F8;
    case 49u: goto L_08888404;
    case 50u: goto L_08888410;
    case 51u: goto L_08888428;
    case 52u: goto L_08888430;
    case 53u: goto L_08888438;
    case 54u: goto L_0888844C;
    case 55u: goto L_08888454;
    case 56u: goto L_0888845C;
    case 57u: goto L_08888464;
    case 58u: goto L_08888470;
    case 59u: goto L_0888847C;
    case 60u: goto L_08888484;
    case 61u: goto L_0888848C;
    case 62u: goto L_08888494;
    case 63u: goto L_088884A0;
    case 64u: goto L_088884AC;
    case 65u: goto L_088884B8;
    case 66u: goto L_088884C0;
    case 67u: goto L_088884D8;
    case 68u: goto L_088884EC;
    case 69u: goto L_088884FC;
    case 70u: goto L_08888514;
    case 71u: goto L_0888852C;
    case 72u: goto L_08888538;
    case 73u: goto L_08888540;
    case 74u: goto L_08888548;
    case 75u: goto L_08888558;
    case 76u: goto L_08888560;
    case 77u: goto L_08888578;
    case 78u: goto L_08888584;
    case 79u: goto L_08888594;
    case 80u: goto L_0888859C;
    case 81u: goto L_088885AC;
    case 82u: goto L_088885B4;
    case 83u: goto L_088885C0;
    case 84u: goto L_088885D8;
    case 85u: goto L_088885F0;
    case 86u: goto L_088885F8;
    case 87u: goto L_08888638;
    case 88u: goto L_08888648;
    case 89u: goto L_08888650;
    case 90u: goto L_0888865C;
    case 91u: goto L_08888664;
    case 92u: goto L_08888668;
    case 93u: goto L_08888688;
    case 94u: goto L_08888690;
    case 95u: goto L_08888698;
    case 96u: goto L_088886A8;
    case 97u: goto L_088886B4;
    case 98u: goto L_088886C4;
    case 99u: goto L_088886CC;
    case 100u: goto L_088886D4;
    case 101u: goto L_088886DC;
    case 102u: goto L_088886E8;
    case 103u: goto L_088886F4;
    case 104u: goto L_08888700;
    case 105u: goto L_08888708;
    case 106u: goto L_08888718;
    case 107u: goto L_08888728;
    case 108u: goto L_08888730;
    case 109u: goto L_08888738;
    case 110u: goto L_08888740;
    case 111u: goto L_08888760;
    case 112u: goto L_08888768;
    case 113u: goto L_08888774;
    case 114u: goto L_0888877C;
    case 115u: goto L_0888878C;
    case 116u: goto L_088887C0;
    case 117u: goto L_088887D0;
    case 118u: goto L_088887D8;
    case 119u: goto L_088887E0;
    case 120u: goto L_088887F0;
    case 121u: goto L_088887FC;
    case 122u: goto L_0888880C;
    case 123u: goto L_08888810;
    case 124u: goto L_0888881C;
    case 125u: goto L_08888824;
    case 126u: goto L_08888830;
    case 127u: goto L_0888883C;
    case 128u: goto L_08888848;
    case 129u: goto L_08888854;
    case 130u: goto L_08888860;
    case 131u: goto L_0888886C;
    case 132u: goto L_08888878;
    case 133u: goto L_08888884;
    case 134u: goto L_08888894;
    case 135u: goto L_088888A0;
    case 136u: goto L_088888A8;
    case 137u: goto L_088888B0;
    case 138u: goto L_088888B8;
    case 139u: goto L_088888C4;
    case 140u: goto L_088888D0;
    case 141u: goto L_088888DC;
    case 142u: goto L_088888E4;
    case 143u: goto L_088888F0;
    case 144u: goto L_088888F8;
    case 145u: goto L_08888904;
    case 146u: goto L_08888908;
    case 147u: goto L_08888914;
    case 148u: goto L_08888920;
    case 149u: goto L_08888928;
    case 150u: goto L_08888938;
    case 151u: goto L_08888940;
    case 152u: goto L_08888948;
    case 153u: goto L_08888954;
    case 154u: goto L_0888895C;
    case 155u: goto L_08888964;
    case 156u: goto L_0888896C;
    case 157u: goto L_08888978;
    case 158u: goto L_08888984;
    case 159u: goto L_0888898C;
    case 160u: goto L_08888998;
    case 161u: goto L_088889A4;
    case 162u: goto L_088889B0;
    case 163u: goto L_088889BC;
    case 164u: goto L_088889C4;
    case 165u: goto L_088889CC;
    case 166u: goto L_088889D8;
    case 167u: goto L_088889F8;
    case 168u: goto L_08888A08;
    case 169u: goto L_08888A14;
    case 170u: goto L_08888A1C;
    case 171u: goto L_08888A24;
    case 172u: goto L_08888A30;
    case 173u: goto L_08888A3C;
    case 174u: goto L_08888A40;
    case 175u: goto L_08888A54;
    case 176u: goto L_08888A5C;
    case 177u: goto L_08888A68;
    case 178u: goto L_08888A70;
    case 179u: goto L_08888AA4;
    case 180u: goto L_08888AB0;
    case 181u: goto L_08888ACC;
    case 182u: goto L_08888AD0;
    case 183u: goto L_08888AD8;
    case 184u: goto L_08888AE4;
    case 185u: goto L_08888AF0;
    case 186u: goto L_08888AF4;
    case 187u: goto L_08888AFC;
    case 188u: goto L_08888B08;
    case 189u: goto L_08888B0C;
    case 190u: goto L_08888B2C;
    case 191u: goto L_08888B34;
    case 192u: goto L_08888B50;
    case 193u: goto L_08888B60;
    case 194u: goto L_08888B64;
    case 195u: goto L_08888B88;
    case 196u: goto L_08888B9C;
    case 197u: goto L_08888BB4;
    case 198u: goto L_08888BBC;
    case 199u: goto L_08888BC0;
    case 200u: goto L_08888BE4;
    case 201u: goto L_08888BF4;
    case 202u: goto L_08888C0C;
    case 203u: goto L_08888C30;
    case 204u: goto L_08888C40;
    case 205u: goto L_08888C58;
    case 206u: goto L_08888C64;
    case 207u: goto L_08888C6C;
    case 208u: goto L_08888C74;
    case 209u: goto L_08888C7C;
    case 210u: goto L_08888C84;
    case 211u: goto L_08888C98;
    case 212u: goto L_08888CA0;
    case 213u: goto L_08888CAC;
    case 214u: goto L_08888CB4;
    case 215u: goto L_08888CC0;
    case 216u: goto L_08888CC8;
    case 217u: goto L_08888CF0;
    case 218u: goto L_08888CFC;
    case 219u: goto L_08888D04;
    case 220u: goto L_08888D10;
    case 221u: goto L_08888D14;
    case 222u: goto L_08888D30;
    case 223u: goto L_08888D38;
    case 224u: goto L_08888D4C;
    case 225u: goto L_08888D54;
    case 226u: goto L_08888D64;
    case 227u: goto L_08888D78;
    case 228u: goto L_08888D84;
    case 229u: goto L_08888D94;
    case 230u: goto L_08888D98;
    case 231u: goto L_08888DAC;
    case 232u: goto L_08888DBC;
    case 233u: goto L_08888DD8;
    case 234u: goto L_08888DE8;
    case 235u: goto L_08888E04;
    case 236u: goto L_08888E14;
    case 237u: goto L_08888E30;
    case 238u: goto L_08888E3C;
    case 239u: goto L_08888E4C;
    case 240u: goto L_08888E54;
    case 241u: goto L_08888E60;
    case 242u: goto L_08888E68;
    case 243u: goto L_08888E70;
    case 244u: goto L_08888E78;
    case 245u: goto L_08888E8C;
    case 246u: goto L_08888E98;
    case 247u: goto L_08888EA4;
    case 248u: goto L_08888EB4;
    case 249u: goto L_08888EC0;
    case 250u: goto L_08888ECC;
    case 251u: goto L_08888ED4;
    case 252u: goto L_08888EE4;
    case 253u: goto L_08888EF0;
    case 254u: goto L_08889300;
    case 255u: goto L_08889318;
    case 256u: goto L_0888931C;
    case 257u: goto L_08889320;
    case 258u: goto L_08889328;
    case 259u: goto L_08889330;
    case 260u: goto L_08889338;
    case 261u: goto L_08889348;
    case 262u: goto L_08889364;
    case 263u: goto L_0888936C;
    case 264u: goto L_08889378;
    case 265u: goto L_08889380;
    case 266u: goto L_088896A0;
    case 267u: goto L_088896B8;
    case 268u: goto L_088896C0;
    case 269u: goto L_088896CC;
    case 270u: goto L_088896D4;
    case 271u: goto L_088896E0;
    case 272u: goto L_088896E8;
    case 273u: goto L_088896F0;
    case 274u: goto L_088896FC;
    case 275u: goto L_08889700;
    case 276u: goto L_08889708;
    case 277u: goto L_08889710;
    case 278u: goto L_08889724;
    case 279u: goto L_0888972C;
    case 280u: goto L_08889738;
    case 281u: goto L_08889748;
    case 282u: goto L_08889750;
    case 283u: goto L_0888975C;
    case 284u: goto L_08889770;
    case 285u: goto L_08889778;
    case 286u: goto L_08889788;
    case 287u: goto L_08889790;
    case 288u: goto L_0888979C;
    case 289u: goto L_088897A8;
    case 290u: goto L_088897B4;
    case 291u: goto L_088897BC;
    case 292u: goto L_088897C4;
    case 293u: goto L_088897CC;
    case 294u: goto L_088897D4;
    case 295u: goto L_088897DC;
    case 296u: goto L_088897E4;
    case 297u: goto L_088897F0;
    case 298u: goto L_08889870;
    case 299u: goto L_0888988C;
    case 300u: goto L_08889898;
    case 301u: goto L_088898B4;
    case 302u: goto L_088898C0;
    case 303u: goto L_088898E4;
    case 304u: goto L_088898EC;
    case 305u: goto L_088898FC;
    case 306u: goto L_0888990C;
    case 307u: goto L_0888991C;
    case 308u: goto L_0888992C;
    case 309u: goto L_0888993C;
    case 310u: goto L_0888994C;
    case 311u: goto L_0888995C;
    case 312u: goto L_0888996C;
    case 313u: goto L_08889978;
    case 314u: goto L_08889998;
    case 315u: goto L_088899C0;
    case 316u: goto L_088899CC;
    case 317u: goto L_088899E4;
    case 318u: goto L_08889A04;
    case 319u: goto L_08889A10;
    case 320u: goto L_08889A34;
    case 321u: goto L_08889A58;
    case 322u: goto L_08889A68;
    case 323u: goto L_08889A84;
    case 324u: goto L_08889A98;
    case 325u: goto L_08889AA0;
    case 326u: goto L_08889AB4;
    case 327u: goto L_08889ABC;
    case 328u: goto L_08889AC8;
    case 329u: goto L_08889AE4;
    case 330u: goto L_08889AEC;
    case 331u: goto L_08889AF8;
    case 332u: goto L_08889B14;
    case 333u: goto L_08889B1C;
    case 334u: goto L_08889B28;
    case 335u: goto L_08889B44;
    case 336u: goto L_08889B4C;
    case 337u: goto L_08889B58;
    case 338u: goto L_08889B60;
    case 339u: goto L_08889B68;
    case 340u: goto L_08889B78;
    case 341u: goto L_08889B88;
    case 342u: goto L_08889B90;
    case 343u: goto L_08889BA8;
    case 344u: goto L_08889BC8;
    case 345u: goto L_08889BD4;
    case 346u: goto L_08889BE8;
    case 347u: goto L_08889BFC;
    case 348u: goto L_08889C2C;
    case 349u: goto L_08889C44;
    case 350u: goto L_08889C50;
    case 351u: goto L_08889C5C;
    case 352u: goto L_08889C80;
    case 353u: goto L_08889C88;
    case 354u: goto L_08889DC0;
    case 355u: goto L_08889DD0;
    case 356u: goto L_08889DDC;
    case 357u: goto L_08889DEC;
    case 358u: goto L_08889DF8;
    case 359u: goto L_08889E00;
    case 360u: goto L_08889E08;
    case 361u: goto L_08889E18;
    case 362u: goto L_08889FB0;
    case 363u: goto L_08889FCC;
    case 364u: goto L_08889FD4;
    case 365u: goto L_08889FE0;
    case 366u: goto L_08889FE4;
    case 367u: goto L_08889FEC;
    case 368u: goto L_08889FF4;
    case 369u: goto L_0888A004;
    case 370u: goto L_0888A008;
    case 371u: goto L_0888A018;
    case 372u: goto L_0888A028;
    case 373u: goto L_0888A02C;
    case 374u: goto L_0888A034;
    case 375u: goto L_0888A038;
    case 376u: goto L_0888A040;
    case 377u: goto L_0888A044;
    case 378u: goto L_0888A050;
    case 379u: goto L_0888A058;
    case 380u: goto L_0888A05C;
    case 381u: goto L_0888A070;
    case 382u: goto L_0888A078;
    case 383u: goto L_0888A080;
    case 384u: goto L_0888A090;
    case 385u: goto L_0888A098;
    case 386u: goto L_0888A0AC;
    case 387u: goto L_0888A0B4;
    case 388u: goto L_0888A0BC;
    case 389u: goto L_0888A0C4;
    case 390u: goto L_0888A0D4;
    case 391u: goto L_0888A0DC;
    case 392u: goto L_0888A0E4;
    case 393u: goto L_0888A0F0;
    case 394u: goto L_0888A0F8;
    case 395u: goto L_0888A10C;
    case 396u: goto L_0888A114;
    case 397u: goto L_0888A120;
    case 398u: goto L_0888A128;
    case 399u: goto L_0888A134;
    case 400u: goto L_0888A138;
    case 401u: goto L_0888A144;
    case 402u: goto L_0888A148;
    case 403u: goto L_0888A154;
    case 404u: goto L_0888A158;
    case 405u: goto L_0888A164;
    case 406u: goto L_0888A16C;
    case 407u: goto L_0888A17C;
    case 408u: goto L_0888A184;
    case 409u: goto L_0888A18C;
    case 410u: goto L_0888A194;
    case 411u: goto L_0888A19C;
    case 412u: goto L_0888A1A4;
    case 413u: goto L_0888A1B0;
    case 414u: goto L_0888A1B8;
    case 415u: goto L_0888A1E0;
    case 416u: goto L_0888A1EC;
    case 417u: goto L_0888A200;
    case 418u: goto L_0888A20C;
    case 419u: goto L_0888A218;
    case 420u: goto L_0888A228;
    case 421u: goto L_0888A22C;
    case 422u: goto L_0888A238;
    case 423u: goto L_0888A240;
    case 424u: goto L_0888A248;
    case 425u: goto L_0888A250;
    case 426u: goto L_0888A260;
    case 427u: goto L_0888A268;
    case 428u: goto L_0888A274;
    case 429u: goto L_0888A27C;
    case 430u: goto L_0888A284;
    case 431u: goto L_0888A28C;
    case 432u: goto L_0888A294;
    case 433u: goto L_0888A29C;
    case 434u: goto L_0888A2A4;
    case 435u: goto L_0888A2AC;
    case 436u: goto L_0888A2B4;
    case 437u: goto L_0888A2BC;
    case 438u: goto L_0888A2CC;
    case 439u: goto L_0888A2E8;
    case 440u: goto L_0888A30C;
    case 441u: goto L_0888A31C;
    case 442u: goto L_0888A328;
    case 443u: goto L_0888A330;
    case 444u: goto L_0888A344;
    case 445u: goto L_0888A34C;
    case 446u: goto L_0888A358;
    case 447u: goto L_0888A388;
    case 448u: goto L_0888A394;
    case 449u: goto L_0888A3B0;
    case 450u: goto L_0888A3B8;
    case 451u: goto L_0888A3C4;
    case 452u: goto L_0888A3CC;
    case 453u: goto L_0888A3D4;
    case 454u: goto L_0888A3E0;
    case 455u: goto L_0888A3E8;
    case 456u: goto L_0888A3FC;
    case 457u: goto L_0888A404;
    case 458u: goto L_0888A40C;
    case 459u: goto L_0888A414;
    case 460u: goto L_0888A420;
    case 461u: goto L_0888A430;
    case 462u: goto L_0888A450;
    case 463u: goto L_0888A458;
    case 464u: goto L_0888A464;
    case 465u: goto L_0888A468;
    case 466u: goto L_0888A470;
    case 467u: goto L_0888A478;
    case 468u: goto L_0888A488;
    case 469u: goto L_0888A490;
    case 470u: goto L_0888A4A0;
    case 471u: goto L_0888A4A8;
    case 472u: goto L_0888A4B8;
    case 473u: goto L_0888A4C0;
    case 474u: goto L_0888A4D0;
    case 475u: goto L_0888A4D8;
    case 476u: goto L_0888A4E0;
    case 477u: goto L_0888A4E8;
    case 478u: goto L_0888A4F0;
    case 479u: goto L_0888A4F8;
    case 480u: goto L_0888A500;
    case 481u: goto L_0888A504;
    case 482u: goto L_0888A50C;
    case 483u: goto L_0888A514;
    case 484u: goto L_0888A51C;
    case 485u: goto L_0888A548;
    case 486u: goto L_0888A550;
    case 487u: goto L_0888A558;
    case 488u: goto L_0888A56C;
    case 489u: goto L_0888A574;
    case 490u: goto L_0888A588;
    case 491u: goto L_0888A594;
    case 492u: goto L_0888A5A8;
    case 493u: goto L_0888A5B0;
    case 494u: goto L_0888A5B8;
    case 495u: goto L_0888A5DC;
    case 496u: goto L_0888A5E4;
    case 497u: goto L_0888A5FC;
    case 498u: goto L_0888A610;
    case 499u: goto L_0888A618;
    case 500u: goto L_0888A62C;
    case 501u: goto L_0888A638;
    case 502u: goto L_0888A64C;
    case 503u: goto L_0888A660;
    case 504u: goto L_0888A674;
    case 505u: goto L_0888A688;
    case 506u: goto L_0888A6B8;
    case 507u: goto L_0888A6F8;
    case 508u: goto L_0888A728;
    case 509u: goto L_0888A73C;
    case 510u: goto L_0888A748;
    case 511u: goto L_0888A760;
    case 512u: goto L_0888A768;
    case 513u: goto L_0888A770;
    case 514u: goto L_0888A77C;
    case 515u: goto L_0888A784;
    case 516u: goto L_0888A7C0;
    case 517u: goto L_0888A7D8;
    case 518u: goto L_0888A818;
    case 519u: goto L_0888A824;
    case 520u: goto L_0888A858;
    case 521u: goto L_0888A86C;
    case 522u: goto L_0888A878;
    case 523u: goto L_0888A89C;
    case 524u: goto L_0888A8A4;
    case 525u: goto L_0888A8B0;
    case 526u: goto L_0888A8C8;
    case 527u: goto L_0888A8D4;
    case 528u: goto L_0888A90C;
    case 529u: goto L_0888A91C;
    case 530u: goto L_0888A924;
    case 531u: goto L_0888A928;
    case 532u: goto L_0888A938;
    case 533u: goto L_0888A940;
    case 534u: goto L_0888A948;
    case 535u: goto L_0888A960;
    case 536u: goto L_0888A974;
    case 537u: goto L_0888A990;
    case 538u: goto L_0888A9A4;
    case 539u: goto L_0888A9CC;
    case 540u: goto L_0888A9F4;
    case 541u: goto L_0888AA1C;
    case 542u: goto L_0888AA38;
    case 543u: goto L_0888AA40;
    case 544u: goto L_0888AA48;
    case 545u: goto L_0888AA50;
    case 546u: goto L_0888AA58;
    case 547u: goto L_0888AA6C;
    case 548u: goto L_0888AA84;
    case 549u: goto L_0888AA94;
    case 550u: goto L_0888AAAC;
    case 551u: goto L_0888AABC;
    case 552u: goto L_0888AAC4;
    case 553u: goto L_0888AB0C;
    case 554u: goto L_0888AB20;
    case 555u: goto L_0888AB2C;
    case 556u: goto L_0888AB34;
    case 557u: goto L_0888AB54;
    case 558u: goto L_0888AB60;
    case 559u: goto L_0888AB6C;
    case 560u: goto L_0888AB70;
    case 561u: goto L_0888AB78;
    case 562u: goto L_0888AB8C;
    case 563u: goto L_0888AB90;
    case 564u: goto L_0888ABBC;
    case 565u: goto L_0888ABC4;
    case 566u: goto L_0888ABCC;
    case 567u: goto L_0888ABF4;
    case 568u: goto L_0888ABF8;
    case 569u: goto L_0888AC08;
    case 570u: goto L_0888AC18;
    case 571u: goto L_0888AC30;
    case 572u: goto L_0888AC38;
    case 573u: goto L_0888AC40;
    case 574u: goto L_0888AC64;
    case 575u: goto L_0888AC6C;
    case 576u: goto L_0888AC78;
    case 577u: goto L_0888AC88;
    case 578u: goto L_0888ACA0;
    case 579u: goto L_0888ACD0;
    case 580u: goto L_0888ACD8;
    case 581u: goto L_0888ACEC;
    case 582u: goto L_0888ACFC;
    case 583u: goto L_0888AD18;
    case 584u: goto L_0888AD20;
    case 585u: goto L_0888AD28;
    case 586u: goto L_0888AD4C;
    case 587u: goto L_0888AD5C;
    case 588u: goto L_0888AD64;
    case 589u: goto L_0888AD74;
    case 590u: goto L_0888AD78;
    case 591u: goto L_0888AD90;
    case 592u: goto L_0888AD9C;
    case 593u: goto L_0888ADB4;
    case 594u: goto L_0888ADC0;
    case 595u: goto L_0888ADCC;
    case 596u: goto L_0888ADD8;
    case 597u: goto L_0888ADEC;
    case 598u: goto L_0888ADF8;
    case 599u: goto L_0888ADFC;
    case 600u: goto L_0888AE18;
    case 601u: goto L_0888AE20;
    case 602u: goto L_0888AE28;
    case 603u: goto L_0888AE30;
    case 604u: goto L_0888AE34;
    case 605u: goto L_0888AE4C;
    case 606u: goto L_0888AE54;
    case 607u: goto L_0888AE60;
    case 608u: goto L_0888AE68;
    case 609u: goto L_0888AE74;
    case 610u: goto L_0888AE7C;
    case 611u: goto L_0888AEAC;
    case 612u: goto L_0888AEB4;
    case 613u: goto L_0888AEC4;
    case 614u: goto L_0888AED4;
    case 615u: goto L_0888AEE0;
    case 616u: goto L_0888AEF0;
    case 617u: goto L_0888AF00;
    case 618u: goto L_0888AF10;
    case 619u: goto L_0888AF20;
    case 620u: goto L_0888AF2C;
    case 621u: goto L_0888AF4C;
    case 622u: goto L_0888AF54;
    case 623u: goto L_0888AF5C;
    case 624u: goto L_0888AF64;
    case 625u: goto L_0888AF74;
    case 626u: goto L_0888AF7C;
    case 627u: goto L_0888AF88;
    case 628u: goto L_0888AF90;
    case 629u: goto L_0888AFC4;
    case 630u: goto L_0888AFCC;
    case 631u: goto L_0888AFE8;
    case 632u: goto L_0888AFF0;
    case 633u: goto L_0888AFF8;
    case 634u: goto L_0888B000;
    case 635u: goto L_0888B004;
    case 636u: goto L_0888B030;
    case 637u: goto L_0888B03C;
    case 638u: goto L_0888B044;
    case 639u: goto L_0888B04C;
    case 640u: goto L_0888B054;
    case 641u: goto L_0888B060;
    case 642u: goto L_0888B068;
    case 643u: goto L_0888B070;
    case 644u: goto L_0888B07C;
    case 645u: goto L_0888B084;
    case 646u: goto L_0888B08C;
    case 647u: goto L_0888B098;
    case 648u: goto L_0888B0A0;
    case 649u: goto L_0888B0A8;
    case 650u: goto L_0888B0B8;
    case 651u: goto L_0888B0C0;
    case 652u: goto L_0888B0C8;
    case 653u: goto L_0888B0D0;
    case 654u: goto L_0888B0D8;
    case 655u: goto L_0888B0E0;
    case 656u: goto L_0888B0E8;
    case 657u: goto L_0888B0F0;
    case 658u: goto L_0888B0F8;
    case 659u: goto L_0888B100;
    case 660u: goto L_0888B108;
    case 661u: goto L_0888B110;
    case 662u: goto L_0888B11C;
    case 663u: goto L_0888B13C;
    case 664u: goto L_0888B148;
    case 665u: goto L_0888B150;
    case 666u: goto L_0888B168;
    case 667u: goto L_0888B174;
    case 668u: goto L_0888B17C;
    case 669u: goto L_0888B184;
    case 670u: goto L_0888B19C;
    case 671u: goto L_0888B1B0;
    case 672u: goto L_0888B1BC;
    case 673u: goto L_0888B1F4;
    case 674u: goto L_0888B210;
    case 675u: goto L_0888B218;
    case 676u: goto L_0888B228;
    case 677u: goto L_0888B22C;
    case 678u: goto L_0888B23C;
    case 679u: goto L_0888B240;
    case 680u: goto L_0888B248;
    case 681u: goto L_0888B24C;
    case 682u: goto L_0888B254;
    case 683u: goto L_0888B258;
    case 684u: goto L_0888B260;
    case 685u: goto L_0888B264;
    case 686u: goto L_0888B270;
    case 687u: goto L_0888B278;
    case 688u: goto L_0888B280;
    case 689u: goto L_0888B288;
    case 690u: goto L_0888B2A8;
    case 691u: goto L_0888B2B0;
    case 692u: goto L_0888B2B8;
    case 693u: goto L_0888B2C4;
    case 694u: goto L_0888B2CC;
    case 695u: goto L_0888B2D4;
    case 696u: goto L_0888B2E0;
    case 697u: goto L_0888B2EC;
    case 698u: goto L_0888B2F4;
    case 699u: goto L_0888B2FC;
    case 700u: goto L_0888B308;
    case 701u: goto L_0888B314;
    case 702u: goto L_0888B31C;
    case 703u: goto L_0888B324;
    case 704u: goto L_0888B330;
    case 705u: goto L_0888B33C;
    case 706u: goto L_0888B344;
    case 707u: goto L_0888B34C;
    case 708u: goto L_0888B358;
    case 709u: goto L_0888B360;
    case 710u: goto L_0888B368;
    case 711u: goto L_0888B378;
    case 712u: goto L_0888B380;
    case 713u: goto L_0888B3D0;
    case 714u: goto L_0888B3F0;
    case 715u: goto L_0888B408;
    case 716u: goto L_0888B410;
    case 717u: goto L_0888B418;
    case 718u: goto L_0888B42C;
    case 719u: goto L_0888B44C;
    case 720u: goto L_0888B468;
    case 721u: goto L_0888B478;
    case 722u: goto L_0888B4A4;
    case 723u: goto L_0888B4B4;
    case 724u: goto L_0888B4C4;
    case 725u: goto L_0888B4CC;
    case 726u: goto L_0888B4D4;
    case 727u: goto L_0888B56C;
    case 728u: goto L_0888B580;
    case 729u: goto L_0888B588;
    case 730u: goto L_0888B590;
    case 731u: goto L_0888B774;
    case 732u: goto L_0888B798;
    case 733u: goto L_0888B7A8;
    case 734u: goto L_0888B7B0;
    case 735u: goto L_0888B920;
    case 736u: goto L_0888B934;
    case 737u: goto L_0888B93C;
    case 738u: goto L_0888B944;
    case 739u: goto L_0888B954;
    case 740u: goto L_0888B970;
    case 741u: goto L_0888B97C;
    case 742u: goto L_0888B980;
    case 743u: goto L_0888B988;
    case 744u: goto L_0888B9A0;
    case 745u: goto L_0888B9A8;
    case 746u: goto L_0888B9B0;
    case 747u: goto L_0888B9D4;
    case 748u: goto L_0888B9E4;
    case 749u: goto L_0888B9EC;
    case 750u: goto L_0888BEA0;
    case 751u: goto L_0888BEBC;
    case 752u: goto L_0888BEC4;
    case 753u: goto L_0888BED0;
    case 754u: goto L_0888BEE8;
    case 755u: goto L_0888BEF0;
    case 756u: goto L_0888BEF8;
    case 757u: goto L_0888BF00;
    case 758u: goto L_0888BF14;
    case 759u: goto L_0888BF1C;
    case 760u: goto L_0888BF24;
    case 761u: goto L_0888BF40;
    case 762u: goto L_0888BF4C;
    case 763u: goto L_0888BF50;
    case 764u: goto L_0888BF58;
    case 765u: goto L_0888BF70;
    case 766u: goto L_0888BF78;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08888004:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(17720));
    goto L_08888008;
L_08888008:
    ctx.set_gpr(31, 0x08888010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x08888010u) goto L_08888010;
    return;
L_08888010:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    (void)rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 553u, 0x08887F6Cu>(ctx, &aot_mem); return;
L_08888018:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(17768));
    goto L_08888008;
L_08888024:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x08888058u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 344u, 0x0888148Cu>(ctx, &aot_mem) && ctx.pc == 0x08888058u) goto L_08888058;
    return;
L_08888058:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08888064u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 346u, 0x088814A8u>(ctx, &aot_mem) && ctx.pc == 0x08888064u) goto L_08888064;
    return;
L_08888064:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08888070u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 349u, 0x088814CCu>(ctx, &aot_mem) && ctx.pc == 0x08888070u) goto L_08888070;
    return;
L_08888070:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    ctx.set_gpr(3, ctx.gpr[8] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, ctx.gpr[6] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088880A0;
      }
      goto L_08888094;
    }
L_08888094:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(108))))));
    if (ctx.gpr[9] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_088881B8;
    }
    goto L_088880A0;
L_088880A0:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[10];
    ctx.set_gpr(31, 0x088880B0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088880B0u) goto L_088880B0;
    return;
L_088880B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(7, 2225u << 16u);
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(4, ctx.gpr[7] + static_cast<std::uint32_t>(17812));
      if (branch_taken) {
          goto L_088881A8;
      }
      goto L_088880C8;
    }
L_088880C8:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_088880CC;
L_088880CC:
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[14];
    ctx.set_gpr(31, 0x088880E0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088880E0u) goto L_088880E0;
    return;
L_088880E0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088880ECu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 332u, 0x0888138Cu>(ctx, &aot_mem) && ctx.pc == 0x088880ECu) goto L_088880EC;
    return;
L_088880EC:
    ctx.set_gpr(5, ctx.gpr[19] - ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
    ctx.set_gpr(31, 0x088880FCu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 331u, 0x0888137Cu>(ctx, &aot_mem) && ctx.pc == 0x088880FCu) goto L_088880FC;
    return;
L_088880FC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08888108u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 333u, 0x0888139Cu>(ctx, &aot_mem) && ctx.pc == 0x08888108u) goto L_08888108;
    return;
L_08888108:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08888114u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 313u, 0x0888122Cu>(ctx, &aot_mem) && ctx.pc == 0x08888114u) goto L_08888114;
    return;
L_08888114:
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[12];
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_0888815C;
      }
      goto L_08888124;
    }
L_08888124:
    ctx.set_gpr(31, 0x0888812Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 381u, 0x08881680u>(ctx, &aot_mem) && ctx.pc == 0x0888812Cu) goto L_0888812C;
    return;
L_0888812C:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(17, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_0888813C;
L_0888813C:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888815C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0888816Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888816Cu) goto L_0888816C;
    return;
L_0888816C:
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[20];
    ctx.set_gpr(31, 0x08888188u);
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08888188u) goto L_08888188;
    return;
L_08888188:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[18];
    ctx.set_gpr(31, 0x088881A0u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088881A0u) goto L_088881A0;
    return;
L_088881A0:
    // nop
    goto L_08888124;
L_088881A8:
    ctx.set_gpr(31, 0x088881B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x088881B0u) goto L_088881B0;
    return;
L_088881B0:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_088880CC;
L_088881B8:
    ctx.set_gpr(31, 0x088881C0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 331u, 0x0888137Cu>(ctx, &aot_mem) && ctx.pc == 0x088881C0u) goto L_088881C0;
    return;
L_088881C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_0888813C;
L_088882A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(152))))));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08888304;
      }
      goto L_088882DC;
    }
L_088882DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    goto L_088882E0;
L_088882E0:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888304:
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(66), static_cast<std::uint16_t>(0u));
    ctx.set_gpr(22, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08888318u);
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 616u, 0x08877B90u>(ctx, &aot_mem) && ctx.pc == 0x08888318u) goto L_08888318;
    return;
L_08888318:
    ctx.set_gpr(7, 32767u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[7] | 65535u);
    jump_target = ctx.gpr[9];
    ctx.set_gpr(31, 0x08888338u);
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08888338u) goto L_08888338;
    return;
L_08888338:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 32767u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[3] | 65535u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    jump_target = ctx.gpr[8];
    ctx.set_gpr(31, 0x08888358u);
    ctx.set_gpr(7, ctx.gpr[22] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08888358u) goto L_08888358;
    return;
L_08888358:
    ctx.set_gpr(31, 0x08888360u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 334u, 0x088813ACu>(ctx, &aot_mem) && ctx.pc == 0x08888360u) goto L_08888360;
    return;
L_08888360:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0888859C;
      }
      goto L_08888368;
    }
L_08888368:
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    goto L_0888836C;
L_0888836C:
    ctx.set_gpr(31, 0x08888374u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 334u, 0x088813ACu>(ctx, &aot_mem) && ctx.pc == 0x08888374u) goto L_08888374;
    return;
L_08888374:
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[12];
    ctx.set_gpr(21, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_08888560;
      }
      goto L_08888380;
    }
L_08888380:
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[15] - ctx.gpr[17]);
    ctx.set_gpr(31, 0x08888398u);
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 622u, 0x08877BD8u>(ctx, &aot_mem) && ctx.pc == 0x08888398u) goto L_08888398;
    return;
L_08888398:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08888548;
      }
      goto L_088883A4;
    }
L_088883A4:
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    goto L_088883A8;
L_088883A8:
    ctx.set_gpr(17, 0u < ctx.gpr[16] ? 1u : 0u);
    ctx.set_gpr(8, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(24, ctx.gpr[17] & ctx.gpr[8]);
    ctx.set_gpr(17, ctx.gpr[21] + ctx.gpr[25]);
    { const bool branch_taken = ctx.gpr[24] != 0u;
    ctx.set_gpr(21, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(66))))));
      if (branch_taken) {
          goto L_088884FC;
      }
      goto L_088883C0;
    }
L_088883C0:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_088884C0;
    }
    goto L_088883C8;
L_088883C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[22];
    ctx.set_gpr(31, 0x088883E4u);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088883E4u) goto L_088883E4;
    return;
L_088883E4:
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088883F8u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 412u, 0x088A1D1Cu>(ctx, &aot_mem) && ctx.pc == 0x088883F8u) goto L_088883F8;
    return;
L_088883F8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    goto L_08888404;
L_08888404:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[13];
    ctx.set_gpr(31, 0x08888410u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08888410u) goto L_08888410;
    return;
L_08888410:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[12];
    ctx.set_gpr(31, 0x08888428u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08888428u) goto L_08888428;
    return;
L_08888428:
    ctx.set_gpr(31, 0x08888430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x08888430u) goto L_08888430;
    return;
L_08888430:
    ctx.set_gpr(31, 0x08888438u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 310u, 0x08881208u>(ctx, &aot_mem) && ctx.pc == 0x08888438u) goto L_08888438;
    return;
L_08888438:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(10, ctx.gpr[11] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0888844Cu);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(164), ctx.gpr[10]);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 230u, 0x08880E34u>(ctx, &aot_mem) && ctx.pc == 0x0888844Cu) goto L_0888844C;
    return;
L_0888844C:
    ctx.set_gpr(31, 0x08888454u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 229u, 0x08880DF0u>(ctx, &aot_mem) && ctx.pc == 0x08888454u) goto L_08888454;
    return;
L_08888454:
    ctx.set_gpr(31, 0x0888845Cu);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 242u, 0x08880F78u>(ctx, &aot_mem) && ctx.pc == 0x0888845Cu) goto L_0888845C;
    return;
L_0888845C:
    ctx.set_gpr(31, 0x08888464u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 222u, 0x08880D7Cu>(ctx, &aot_mem) && ctx.pc == 0x08888464u) goto L_08888464;
    return;
L_08888464:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[4]) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
        goto L_08888484;
    }
    goto L_08888470;
L_08888470:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0888847Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 298u, 0x08886764u>(ctx, &aot_mem) && ctx.pc == 0x0888847Cu) goto L_0888847C;
    return;
L_0888847C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    goto L_088882E0;
L_08888484:
    ctx.set_gpr(31, 0x0888848Cu);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 225u, 0x08880DB4u>(ctx, &aot_mem) && ctx.pc == 0x0888848Cu) goto L_0888848C;
    return;
L_0888848C:
    ctx.set_gpr(31, 0x08888494u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 197u, 0x08880BE0u>(ctx, &aot_mem) && ctx.pc == 0x08888494u) goto L_08888494;
    return;
L_08888494:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088884A0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 331u, 0x0888137Cu>(ctx, &aot_mem) && ctx.pc == 0x088884A0u) goto L_088884A0;
    return;
L_088884A0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x088884ACu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 333u, 0x0888139Cu>(ctx, &aot_mem) && ctx.pc == 0x088884ACu) goto L_088884AC;
    return;
L_088884AC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x088884B8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 332u, 0x0888138Cu>(ctx, &aot_mem) && ctx.pc == 0x088884B8u) goto L_088884B8;
    return;
L_088884B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    goto L_088882E0;
L_088884C0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[7];
    ctx.set_gpr(31, 0x088884D8u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088884D8u) goto L_088884D8;
    return;
L_088884D8:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x088884ECu);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 412u, 0x088A1D1Cu>(ctx, &aot_mem) && ctx.pc == 0x088884ECu) goto L_088884EC;
    return;
L_088884EC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08888404;
L_088884FC:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[21];
    ctx.set_gpr(31, 0x08888514u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08888514u) goto L_08888514;
    return;
L_08888514:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[18];
    ctx.set_gpr(31, 0x0888852Cu);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888852Cu) goto L_0888852C;
    return;
L_0888852C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08888538u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 298u, 0x08886764u>(ctx, &aot_mem) && ctx.pc == 0x08888538u) goto L_08888538;
    return;
L_08888538:
    ctx.set_gpr(31, 0x08888540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x08888540u) goto L_08888540;
    return;
L_08888540:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    goto L_088882E0;
L_08888548:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x08888558u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(66));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 622u, 0x08877BD8u>(ctx, &aot_mem) && ctx.pc == 0x08888558u) goto L_08888558;
    return;
L_08888558:
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    goto L_088883A8;
L_08888560:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[14] + ctx.gpr[17]);
    ctx.set_gpr(31, 0x08888578u);
    ctx.set_gpr(5, ctx.gpr[13] - ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 580u, 0x088779B4u>(ctx, &aot_mem) && ctx.pc == 0x08888578u) goto L_08888578;
    return;
L_08888578:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088883A4;
      }
      goto L_08888584;
    }
L_08888584:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x08888594u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(66));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 580u, 0x088779B4u>(ctx, &aot_mem) && ctx.pc == 0x08888594u) goto L_08888594;
    return;
L_08888594:
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    goto L_088883A8;
L_0888859C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x088885ACu);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 24u, 0x08878604u>(ctx, &aot_mem) && ctx.pc == 0x088885ACu) goto L_088885AC;
    return;
L_088885AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
      if (branch_taken) {
          goto L_0888836C;
      }
      goto L_088885B4;
    }
L_088885B4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088885C0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 298u, 0x08886764u>(ctx, &aot_mem) && ctx.pc == 0x088885C0u) goto L_088885C0;
    return;
L_088885C0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[11];
    ctx.set_gpr(31, 0x088885D8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088885D8u) goto L_088885D8;
    return;
L_088885D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[10];
    ctx.set_gpr(31, 0x088885F0u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088885F0u) goto L_088885F0;
    return;
L_088885F0:
    // nop
    goto L_08888538;
L_088885F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(2048));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(3, ctx.gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
      if (branch_taken) {
          goto L_08888648;
      }
      goto L_08888638;
    }
L_08888638:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(168))))));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08888A1C;
      }
      goto L_08888648;
    }
L_08888648:
    ctx.set_gpr(31, 0x08888650u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 222u, 0x08880D7Cu>(ctx, &aot_mem) && ctx.pc == 0x08888650u) goto L_08888650;
    return;
L_08888650:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[9];
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08888690;
      }
      goto L_0888865C;
    }
L_0888865C:
    if (ctx.gpr[2] == ctx.gpr[5]) {
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(6));
        goto L_08888688;
    }
    goto L_08888664;
L_08888664:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    goto L_08888668;
L_08888668:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888688:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08888664;
L_08888690:
    ctx.set_gpr(31, 0x08888698u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 338u, 0x088813E4u>(ctx, &aot_mem) && ctx.pc == 0x08888698u) goto L_08888698;
    return;
L_08888698:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_088886D4;
      }
      goto L_088886A8;
    }
L_088886A8:
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.set_gpr(31, 0x088886B4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 95u, 0x0887935Cu>(ctx, &aot_mem) && ctx.pc == 0x088886B4u) goto L_088886B4;
    return;
L_088886B4:
    ctx.set_gpr(10, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[10] + static_cast<std::uint32_t>(17856));
    ctx.set_gpr(31, 0x088886C4u);
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 85u, 0x08879084u>(ctx, &aot_mem) && ctx.pc == 0x088886C4u) goto L_088886C4;
    return;
L_088886C4:
    ctx.set_gpr(31, 0x088886CCu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 226u, 0x08884E90u>(ctx, &aot_mem) && ctx.pc == 0x088886CCu) goto L_088886CC;
    return;
L_088886CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    goto L_08888668;
L_088886D4:
    ctx.set_gpr(31, 0x088886DCu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 336u, 0x088813C8u>(ctx, &aot_mem) && ctx.pc == 0x088886DCu) goto L_088886DC;
    return;
L_088886DC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088886E8u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 342u, 0x08881454u>(ctx, &aot_mem) && ctx.pc == 0x088886E8u) goto L_088886E8;
    return;
L_088886E8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088886F4u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 334u, 0x088813ACu>(ctx, &aot_mem) && ctx.pc == 0x088886F4u) goto L_088886F4;
    return;
L_088886F4:
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(10));
    if (ctx.gpr[2] == ctx.gpr[11]) {
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
        goto L_088889F8;
    }
    goto L_08888700;
L_08888700:
    if (static_cast<std::int32_t>(ctx.gpr[19]) <= 0) {
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
        goto L_088889CC;
    }
    goto L_08888708;
L_08888708:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[20]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[21]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    if (ctx.gpr[21] == 0u) {
    ctx.pc = 0x08888714u; rt.stop("Allegrex BREAK code 7 at 0x08888714"); return;
        goto L_08888718;
    }
    goto L_08888718;
L_08888718:
    ctx.set_gpr(20, ctx.lo);
    ctx.set_gpr(15, ctx.gpr[20] << 1u);
    ctx.set_gpr(14, ctx.gpr[15] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[14]);
    goto L_08888728;
L_08888728:
    ctx.set_gpr(31, 0x08888730u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 195u, 0x08880BC4u>(ctx, &aot_mem) && ctx.pc == 0x08888730u) goto L_08888730;
    return;
L_08888730:
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    goto L_08888738;
L_08888738:
    if (ctx.gpr[2] == 0u) {
    ctx.pc = 0x0888873Cu; rt.stop("Allegrex BREAK code 7 at 0x0888873C"); return;
        goto L_08888740;
    }
    goto L_08888740;
L_08888740:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(9, ctx.gpr[3] + ctx.gpr[2]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[9]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(8, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(31, 0x08888760u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 225u, 0x08880DB4u>(ctx, &aot_mem) && ctx.pc == 0x08888760u) goto L_08888760;
    return;
L_08888760:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08888978;
      }
      goto L_08888768;
    }
L_08888768:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    if (ctx.gpr[10] == ctx.gpr[19]) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
        goto L_088887D0;
    }
    goto L_08888774;
L_08888774:
    ctx.set_gpr(31, 0x0888877Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 351u, 0x088814E8u>(ctx, &aot_mem) && ctx.pc == 0x0888877Cu) goto L_0888877C;
    return;
L_0888877C:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(14, ctx.gpr[2] + static_cast<std::uint32_t>(2047));
    if (ctx.gpr[18] == 0u) {
    ctx.pc = 0x08888788u; rt.stop("Allegrex BREAK code 7 at 0x08888788"); return;
        goto L_0888878C;
    }
    goto L_0888878C;
L_0888878C:
    ctx.set_gpr(15, ctx.hi);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[14]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(13, ctx.gpr[18] - ctx.gpr[15]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[13]);
    ctx.set_gpr(11, ctx.lo);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[13]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(5, ctx.gpr[11] + 0u);
    ctx.set_gpr(12, ctx.hi);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[12]);
    ctx.set_gpr(18, 2185u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x088887C0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), ctx.gpr[11]);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 775u, 0x08882D18u>(ctx, &aot_mem) && ctx.pc == 0x088887C0u) goto L_088887C0;
    return;
L_088887C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(-32312));
    ctx.set_gpr(31, 0x088887D0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 772u, 0x08882CD0u>(ctx, &aot_mem) && ctx.pc == 0x088887D0u) goto L_088887D0;
    return;
L_088887D0:
    ctx.set_gpr(31, 0x088887D8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 349u, 0x088814CCu>(ctx, &aot_mem) && ctx.pc == 0x088887D8u) goto L_088887D8;
    return;
L_088887D8:
    ctx.set_gpr(31, 0x088887E0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 344u, 0x0888148Cu>(ctx, &aot_mem) && ctx.pc == 0x088887E0u) goto L_088887E0;
    return;
L_088887E0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088887F0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 331u, 0x0888137Cu>(ctx, &aot_mem) && ctx.pc == 0x088887F0u) goto L_088887F0;
    return;
L_088887F0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088887FCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 333u, 0x0888139Cu>(ctx, &aot_mem) && ctx.pc == 0x088887FCu) goto L_088887FC;
    return;
L_088887FC:
    ctx.set_gpr(20, 2185u << 16u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0888880Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 332u, 0x0888138Cu>(ctx, &aot_mem) && ctx.pc == 0x0888880Cu) goto L_0888880C;
    return;
L_0888880C:
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(-27768));
    goto L_08888810;
L_08888810:
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0888881Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 330u, 0x08881370u>(ctx, &aot_mem) && ctx.pc == 0x0888881Cu) goto L_0888881C;
    return;
L_0888881C:
    ctx.set_gpr(31, 0x08888824u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 336u, 0x088813C8u>(ctx, &aot_mem) && ctx.pc == 0x08888824u) goto L_08888824;
    return;
L_08888824:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08888830u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 338u, 0x088813E4u>(ctx, &aot_mem) && ctx.pc == 0x08888830u) goto L_08888830;
    return;
L_08888830:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0888883Cu);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 197u, 0x08880BE0u>(ctx, &aot_mem) && ctx.pc == 0x0888883Cu) goto L_0888883C;
    return;
L_0888883C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08888848u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 340u, 0x08881400u>(ctx, &aot_mem) && ctx.pc == 0x08888848u) goto L_08888848;
    return;
L_08888848:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08888854u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 577u, 0x0887FE48u>(ctx, &aot_mem) && ctx.pc == 0x08888854u) goto L_08888854;
    return;
L_08888854:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08888860u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 569u, 0x0887FDBCu>(ctx, &aot_mem) && ctx.pc == 0x08888860u) goto L_08888860;
    return;
L_08888860:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x0888886Cu);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 567u, 0x0887FDA0u>(ctx, &aot_mem) && ctx.pc == 0x0888886Cu) goto L_0888886C;
    return;
L_0888886C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08888878u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 589u, 0x0887FF64u>(ctx, &aot_mem) && ctx.pc == 0x08888878u) goto L_08888878;
    return;
L_08888878:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    ctx.set_gpr(31, 0x08888884u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 263u, 0x08885644u>(ctx, &aot_mem) && ctx.pc == 0x08888884u) goto L_08888884;
    return;
L_08888884:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08888894u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 295u, 0x08886454u>(ctx, &aot_mem) && ctx.pc == 0x08888894u) goto L_08888894;
    return;
L_08888894:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_088888A8;
      }
      goto L_088888A0;
    }
L_088888A0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088888B0;
      }
      goto L_088888A8;
    }
L_088888A8:
    ctx.set_gpr(31, 0x088888B0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 292u, 0x08886430u>(ctx, &aot_mem) && ctx.pc == 0x088888B0u) goto L_088888B0;
    return;
L_088888B0:
    ctx.set_gpr(31, 0x088888B8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 338u, 0x088813E4u>(ctx, &aot_mem) && ctx.pc == 0x088888B8u) goto L_088888B8;
    return;
L_088888B8:
    ctx.set_gpr(25, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[25];
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(66))))));
      if (branch_taken) {
          goto L_0888896C;
      }
      goto L_088888C4;
    }
L_088888C4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088888D0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 259u, 0x08885490u>(ctx, &aot_mem) && ctx.pc == 0x088888D0u) goto L_088888D0;
    return;
L_088888D0:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(68))))));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_088888DC;
L_088888DC:
    ctx.set_gpr(31, 0x088888E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 259u, 0x08885490u>(ctx, &aot_mem) && ctx.pc == 0x088888E4u) goto L_088888E4;
    return;
L_088888E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888895C;
      }
      goto L_088888F0;
    }
L_088888F0:
    ctx.set_gpr(31, 0x088888F8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 334u, 0x088813ACu>(ctx, &aot_mem) && ctx.pc == 0x088888F8u) goto L_088888F8;
    return;
L_088888F8:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08888940;
      }
      goto L_08888904;
    }
L_08888904:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08888908;
L_08888908:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08888914u);
    ctx.set_gpr(17, 2245u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 553u, 0x0887FCB4u>(ctx, &aot_mem) && ctx.pc == 0x08888914u) goto L_08888914;
    return;
L_08888914:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26336)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
      if (branch_taken) {
          goto L_08888928;
      }
      goto L_08888920;
    }
L_08888920:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_08888664;
L_08888928:
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08888938u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08888938u) goto L_08888938;
    return;
L_08888938:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_08888664;
L_08888940:
    ctx.set_gpr(31, 0x08888948u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 378u, 0x0888165Cu>(ctx, &aot_mem) && ctx.pc == 0x08888948u) goto L_08888948;
    return;
L_08888948:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08888954u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 590u, 0x0887FF74u>(ctx, &aot_mem) && ctx.pc == 0x08888954u) goto L_08888954;
    return;
L_08888954:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08888908;
L_0888895C:
    ctx.set_gpr(31, 0x08888964u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 633u, 0x088726A0u>(ctx, &aot_mem) && ctx.pc == 0x08888964u) goto L_08888964;
    return;
L_08888964:
    // nop
    goto L_088888F0;
L_0888896C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_088888DC;
L_08888978:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(21, 32767u << 16u);
      if (branch_taken) {
          goto L_088889BC;
      }
      goto L_08888984;
    }
L_08888984:
    ctx.set_gpr(31, 0x0888898Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 197u, 0x08880BE0u>(ctx, &aot_mem) && ctx.pc == 0x0888898Cu) goto L_0888898C;
    return;
L_0888898C:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08888998u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 331u, 0x0888137Cu>(ctx, &aot_mem) && ctx.pc == 0x08888998u) goto L_08888998;
    return;
L_08888998:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088889A4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 333u, 0x0888139Cu>(ctx, &aot_mem) && ctx.pc == 0x088889A4u) goto L_088889A4;
    return;
L_088889A4:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088889B0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 332u, 0x0888138Cu>(ctx, &aot_mem) && ctx.pc == 0x088889B0u) goto L_088889B0;
    return;
L_088889B0:
    ctx.set_gpr(24, 2185u << 16u);
    ctx.set_gpr(5, ctx.gpr[24] + static_cast<std::uint32_t>(-32092));
    goto L_08888810;
L_088889BC:
    ctx.set_gpr(31, 0x088889C4u);
    ctx.set_gpr(5, ctx.gpr[21] | 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 775u, 0x08882D18u>(ctx, &aot_mem) && ctx.pc == 0x088889C4u) goto L_088889C4;
    return;
L_088889C4:
    // nop
    goto L_08888984;
L_088889CC:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[20]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    if (ctx.gpr[7] == 0u) {
    ctx.pc = 0x088889D4u; rt.stop("Allegrex BREAK code 7 at 0x088889D4"); return;
        goto L_088889D8;
    }
    goto L_088889D8;
L_088889D8:
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(6, ctx.gpr[2] << 1u);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[5] >> 31u);
    ctx.set_gpr(25, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[25]) >> 1u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[24]);
    goto L_08888728;
L_088889F8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[20]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[13]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    if (ctx.gpr[13] == 0u) {
    ctx.pc = 0x08888A04u; rt.stop("Allegrex BREAK code 7 at 0x08888A04"); return;
        goto L_08888A08;
    }
    goto L_08888A08;
L_08888A08:
    ctx.set_gpr(12, ctx.lo);
    ctx.set_gpr(31, 0x08888A14u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[12]);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 195u, 0x08880BC4u>(ctx, &aot_mem) && ctx.pc == 0x08888A14u) goto L_08888A14;
    return;
L_08888A14:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    goto L_08888738;
L_08888A1C:
    ctx.set_gpr(31, 0x08888A24u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 719u, 0x08882988u>(ctx, &aot_mem) && ctx.pc == 0x08888A24u) goto L_08888A24;
    return;
L_08888A24:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[6];
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08888668;
      }
      goto L_08888A30;
    }
L_08888A30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08888A5C;
    }
    goto L_08888A3C;
L_08888A3C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    goto L_08888A40;
L_08888A40:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(31, 0x08888A54u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 188u, 0x08884C50u>(ctx, &aot_mem) && ctx.pc == 0x08888A54u) goto L_08888A54;
    return;
L_08888A54:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(168), static_cast<std::uint8_t>(0u));
    goto L_08888648;
L_08888A5C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[7];
    ctx.set_gpr(31, 0x08888A68u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08888A68u) goto L_08888A68;
    return;
L_08888A68:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    goto L_08888A40;
L_08888A70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08888AA4u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 560u, 0x0887FD28u>(ctx, &aot_mem) && ctx.pc == 0x08888AA4u) goto L_08888AA4;
    return;
L_08888AA4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08888AB0u);
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 562u, 0x0887FD44u>(ctx, &aot_mem) && ctx.pc == 0x08888AB0u) goto L_08888AB0;
    return;
L_08888AB0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8192));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? ctx.gpr[5] : ctx.gpr[2]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888C98;
      }
      goto L_08888ACC;
    }
L_08888ACC:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(112))))));
    goto L_08888AD0;
L_08888AD0:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08888AF0;
      }
      goto L_08888AD8;
    }
L_08888AD8:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(114))))));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_08888C7C;
      }
      goto L_08888AE4;
    }
L_08888AE4:
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(1));
    goto L_08888AF0;
L_08888AF0:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[12]));
    goto L_08888AF4;
L_08888AF4:
    ctx.set_gpr(31, 0x08888AFCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 222u, 0x08880D7Cu>(ctx, &aot_mem) && ctx.pc == 0x08888AFCu) goto L_08888AFC;
    return;
L_08888AFC:
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[13];
    // nop
      if (branch_taken) {
          goto L_08888B2C;
      }
      goto L_08888B08;
    }
L_08888B08:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08888B0C;
L_08888B0C:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888B2C:
    ctx.set_gpr(31, 0x08888B34u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 250u, 0x08885328u>(ctx, &aot_mem) && ctx.pc == 0x08888B34u) goto L_08888B34;
    return;
L_08888B34:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(21, 0u + 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[15])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(14, ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(19, ctx.gpr[14] << 1u);
      if (branch_taken) {
          goto L_08888B08;
      }
      goto L_08888B50;
    }
L_08888B50:
    ctx.set_gpr(16, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    ctx.set_gpr(18, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(3, ctx.gpr[2] & 1u);
      if (branch_taken) {
          goto L_08888C6C;
      }
      goto L_08888B60;
    }
L_08888B60:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    goto L_08888B64;
L_08888B64:
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[8];
    ctx.set_gpr(31, 0x08888B88u);
    ctx.set_gpr(18, ctx.gpr[17] + static_cast<std::uint32_t>(28));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08888B88u) goto L_08888B88;
    return;
L_08888B88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08888B9Cu);
    ctx.set_gpr(17, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08888B9Cu) goto L_08888B9C;
    return;
L_08888B9C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[24];
    ctx.set_gpr(31, 0x08888BB4u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08888BB4u) goto L_08888BB4;
    return;
L_08888BB4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08888B0C;
      }
      goto L_08888BBC;
    }
L_08888BBC:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08888BC0;
L_08888BC0:
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[12];
    ctx.set_gpr(31, 0x08888BE4u);
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(2));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08888BE4u) goto L_08888BE4;
    return;
L_08888BE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08888BF4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08888BF4u) goto L_08888BF4;
    return;
L_08888BF4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[11];
    ctx.set_gpr(31, 0x08888C0Cu);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08888C0Cu) goto L_08888C0C;
    return;
L_08888C0C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[9];
    ctx.set_gpr(31, 0x08888C30u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08888C30u) goto L_08888C30;
    return;
L_08888C30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08888C40u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08888C40u) goto L_08888C40;
    return;
L_08888C40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[7];
    ctx.set_gpr(31, 0x08888C58u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08888C58u) goto L_08888C58;
    return;
L_08888C58:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08888BC0;
    }
    goto L_08888C64;
L_08888C64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08888B0C;
L_08888C6C:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08888BC0;
    }
    goto L_08888C74;
L_08888C74:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    goto L_08888B64;
L_08888C7C:
    ctx.set_gpr(31, 0x08888C84u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 555u, 0x0887FCD0u>(ctx, &aot_mem) && ctx.pc == 0x08888C84u) goto L_08888C84;
    return;
L_08888C84:
    ctx.set_gpr(10, 2245u << 16u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-26620)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(156), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(160), ctx.gpr[9]);
    goto L_08888AE4;
L_08888C98:
    ctx.set_gpr(31, 0x08888CA0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 195u, 0x08880BC4u>(ctx, &aot_mem) && ctx.pc == 0x08888CA0u) goto L_08888CA0;
    return;
L_08888CA0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(112))))));
        goto L_08888AD0;
    }
    goto L_08888CAC;
L_08888CAC:
    ctx.set_gpr(31, 0x08888CB4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 222u, 0x08880D7Cu>(ctx, &aot_mem) && ctx.pc == 0x08888CB4u) goto L_08888CB4;
    return;
L_08888CB4:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08888AF4;
      }
      goto L_08888CC0;
    }
L_08888CC0:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(112))))));
    goto L_08888AD0;
L_08888CC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(108))))));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08888CFC;
      }
      goto L_08888CF0;
    }
L_08888CF0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888ECC;
      }
      goto L_08888CFC;
    }
L_08888CFC:
    ctx.set_gpr(31, 0x08888D04u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 222u, 0x08880D7Cu>(ctx, &aot_mem) && ctx.pc == 0x08888D04u) goto L_08888D04;
    return;
L_08888D04:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[2] == ctx.gpr[6]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08888D30;
    }
    goto L_08888D10;
L_08888D10:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08888D14;
L_08888D14:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888D30:
    ctx.set_gpr(31, 0x08888D38u);
    ctx.set_gpr(18, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 338u, 0x088813E4u>(ctx, &aot_mem) && ctx.pc == 0x08888D38u) goto L_08888D38;
    return;
L_08888D38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, 2247u << 16u);
    ctx.set_gpr(31, 0x08888D4Cu);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(2536), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 580u, 0x0887FEDCu>(ctx, &aot_mem) && ctx.pc == 0x08888D4Cu) goto L_08888D4C;
    return;
L_08888D4C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08888E4C;
      }
      goto L_08888D54;
    }
L_08888D54:
    ctx.set_gpr(20, 2247u << 16u);
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(3, ctx.gpr[19] & 3u);
      if (branch_taken) {
          goto L_08888E60;
      }
      goto L_08888D64;
    }
L_08888D64:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08888D78u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08888D78u) goto L_08888D78;
    return;
L_08888D78:
    ctx.set_gpr(14, static_cast<std::int32_t>(ctx.gpr[2]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[14] == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(2540), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08888E4C;
      }
      goto L_08888D84;
    }
L_08888D84:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(24, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08888E4C;
      }
      goto L_08888D94;
    }
L_08888D94:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08888D98;
L_08888D98:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08888DACu);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08888DACu) goto L_08888DAC;
    return;
L_08888DAC:
    ctx.set_gpr(25, static_cast<std::int32_t>(ctx.gpr[2]) < 64 ? 1u : 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[25] == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(2540), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08888E4C;
      }
      goto L_08888DBC;
    }
L_08888DBC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08888DD8u);
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08888DD8u) goto L_08888DD8;
    return;
L_08888DD8:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[2]) < 64 ? 1u : 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(2540), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08888E4C;
      }
      goto L_08888DE8;
    }
L_08888DE8:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08888E04u);
    ctx.set_gpr(4, ctx.gpr[10] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08888E04u) goto L_08888E04;
    return;
L_08888E04:
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[2]) < 64 ? 1u : 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(2540), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08888E4C;
      }
      goto L_08888E14;
    }
L_08888E14:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08888E30u);
    ctx.set_gpr(4, ctx.gpr[12] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08888E30u) goto L_08888E30;
    return;
L_08888E30:
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[2]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(2540), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08888E4C;
      }
      goto L_08888E3C;
    }
L_08888E3C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[13] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08888D98;
    }
    goto L_08888E4C;
L_08888E4C:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[19];
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08888D14;
      }
      goto L_08888E54;
    }
L_08888E54:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_08888D14;
L_08888E60:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08888D94;
      }
      goto L_08888E68;
    }
L_08888E68:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08888D64;
      }
      goto L_08888E70;
    }
L_08888E70:
    if (ctx.gpr[10] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08888EA4;
    }
    goto L_08888E78;
L_08888E78:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[16];
    ctx.set_gpr(31, 0x08888E8Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08888E8Cu) goto L_08888E8C;
    return;
L_08888E8C:
    ctx.set_gpr(11, static_cast<std::int32_t>(ctx.gpr[2]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(2540), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08888E4C;
      }
      goto L_08888E98;
    }
L_08888E98:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08888EA4;
L_08888EA4:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08888EB4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08888EB4u) goto L_08888EB4;
    return;
L_08888EB4:
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[2]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(2540), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08888E4C;
      }
      goto L_08888EC0;
    }
L_08888EC0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_08888D64;
L_08888ECC:
    ctx.set_gpr(31, 0x08888ED4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 309u, 0x08881200u>(ctx, &aot_mem) && ctx.pc == 0x08888ED4u) goto L_08888ED4;
    return;
L_08888ED4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08888CFC;
      }
      goto L_08888EE4;
    }
L_08888EE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08888EF0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 331u, 0x0888137Cu>(ctx, &aot_mem) && ctx.pc == 0x08888EF0u) goto L_08888EF0;
    return;
L_08888EF0:
    // nop
    goto L_08888CFC;
L_08889300:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08889328;
      }
      goto L_08889318;
    }
L_08889318:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_0888931C;
L_0888931C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08889320;
L_08889320:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889328:
    ctx.set_gpr(31, 0x08889330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 230u, 0x08884EC4u>(ctx, &aot_mem) && ctx.pc == 0x08889330u) goto L_08889330;
    return;
L_08889330:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0888931C;
      }
      goto L_08889338;
    }
L_08889338:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(5, ctx.gpr[3] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_08889320;
    }
    goto L_08889348;
L_08889348:
    ctx.set_gpr(8, 2225u << 16u);
    ctx.set_gpr(7, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[8] + static_cast<std::uint32_t>(17920));
    ctx.set_gpr(6, ctx.gpr[7] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889364:
    ctx.set_gpr(31, 0x0888936Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 719u, 0x08882988u>(ctx, &aot_mem) && ctx.pc == 0x0888936Cu) goto L_0888936C;
    return;
L_0888936C:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[2] != ctx.gpr[9]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
        goto L_0888931C;
    }
    goto L_08889378;
L_08889378:
    ctx.set_gpr(31, 0x08889380u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 227u, 0x08880DD4u>(ctx, &aot_mem) && ctx.pc == 0x08889380u) goto L_08889380;
    return;
L_08889380:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_0888931C;
L_088896A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088896B8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 620u, 0x08877BC8u>(ctx, &aot_mem) && ctx.pc == 0x088896B8u) goto L_088896B8;
    return;
L_088896B8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088897E4;
      }
      goto L_088896C0;
    }
L_088896C0:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088897D4;
      }
      goto L_088896CC;
    }
L_088896CC:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088897C4;
      }
      goto L_088896D4;
    }
L_088896D4:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[17];
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088897B4;
      }
      goto L_088896E0;
    }
L_088896E0:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08889770;
      }
      goto L_088896E8;
    }
L_088896E8:
    ctx.set_gpr(31, 0x088896F0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08889300;
L_088896F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889748;
      }
      goto L_088896FC;
    }
L_088896FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    goto L_08889700;
L_08889700:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08889724;
      }
      goto L_08889708;
    }
L_08889708:
    ctx.set_gpr(31, 0x08889710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 621u, 0x08877BD0u>(ctx, &aot_mem) && ctx.pc == 0x08889710u) goto L_08889710;
    return;
L_08889710:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889724:
    ctx.set_gpr(31, 0x0888972Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 233u, 0x08894EA0u>(ctx, &aot_mem) && ctx.pc == 0x0888972Cu) goto L_0888972C;
    return;
L_0888972C:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[10];
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_08889708;
      }
      goto L_08889738;
    }
L_08889738:
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[12]));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(ctx.gpr[11]));
    goto L_08889708;
L_08889748:
    ctx.set_gpr(31, 0x08889750u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 719u, 0x08882988u>(ctx, &aot_mem) && ctx.pc == 0x08889750u) goto L_08889750;
    return;
L_08889750:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[2] != ctx.gpr[8]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
        goto L_08889700;
    }
    goto L_0888975C;
L_0888975C:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(ctx.gpr[9]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_088896FC;
L_08889770:
    ctx.set_gpr(31, 0x08889778u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 560u, 0x0887FD28u>(ctx, &aot_mem) && ctx.pc == 0x08889778u) goto L_08889778;
    return;
L_08889778:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(7, 2247u << 16u);
    ctx.set_gpr(31, 0x08889788u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(2544), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 564u, 0x0887FD60u>(ctx, &aot_mem) && ctx.pc == 0x08889788u) goto L_08889788;
    return;
L_08889788:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088896E8;
      }
      goto L_08889790;
    }
L_08889790:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x0888979Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 553u, 0x0887FCB4u>(ctx, &aot_mem) && ctx.pc == 0x0888979Cu) goto L_0888979C;
    return;
L_0888979C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x088897A8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 555u, 0x0887FCD0u>(ctx, &aot_mem) && ctx.pc == 0x088897A8u) goto L_088897A8;
    return;
L_088897A8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_088896E8;
L_088897B4:
    ctx.set_gpr(31, 0x088897BCu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08888A70;
L_088897BC:
    // nop
    goto L_088896E8;
L_088897C4:
    ctx.set_gpr(31, 0x088897CCu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_088885F8;
L_088897CC:
    // nop
    goto L_088896E8;
L_088897D4:
    ctx.set_gpr(31, 0x088897DCu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08888CC8;
L_088897DC:
    // nop
    goto L_088896E8;
L_088897E4:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(31, 0x088897F0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(17940));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x088897F0u) goto L_088897F0;
    return;
L_088897F0:
    // nop
    goto L_08889708;
L_08889870:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(2548));
    ctx.set_gpr(5, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0888988Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(960));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0888988Cu) goto L_0888988C;
    return;
L_0888988C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889898:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(2548));
    ctx.set_gpr(5, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088898B4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(960));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x088898B4u) goto L_088898B4;
    return;
L_088898B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088898C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(2548));
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    goto L_088898E4;
L_088898E4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_0888996C;
      }
      goto L_088898EC;
    }
L_088898EC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_0888996C;
      }
      goto L_088898FC;
    }
L_088898FC:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_0888996C;
      }
      goto L_0888990C;
    }
L_0888990C:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_0888996C;
      }
      goto L_0888991C;
    }
L_0888991C:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_0888996C;
      }
      goto L_0888992C;
    }
L_0888992C:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_0888996C;
      }
      goto L_0888993C;
    }
L_0888993C:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_0888996C;
      }
      goto L_0888994C;
    }
L_0888994C:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_0888996C;
      }
      goto L_0888995C;
    }
L_0888995C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[17]) < 16 ? 1u : 0u);
    if (ctx.gpr[13] != 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
        goto L_088898E4;
    }
    goto L_0888996C;
L_0888996C:
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[14];
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_088899CC;
      }
      goto L_08889978;
    }
L_08889978:
    ctx.set_gpr(24, ctx.gpr[17] << 4u);
    ctx.set_gpr(15, ctx.gpr[24] - ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[15] << 2u);
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08889998u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08889998u) goto L_08889998;
    return;
L_08889998:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(50));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(500));
    ctx.set_gpr(5, 0u | 44100u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(31, 0x088899C0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 12u, 0x088782E0u>(ctx, &aot_mem) && ctx.pc == 0x088899C0u) goto L_088899C0;
    return;
L_088899C0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(3, ctx.gpr[16] + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    goto L_088899CC;
L_088899CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088899E4:
    ctx.set_gpr(8, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[8] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(7, ctx.gpr[8] + static_cast<std::uint32_t>(50));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08889A04u);
    ctx.set_gpr(6, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 12u, 0x088782E0u>(ctx, &aot_mem) && ctx.pc == 0x08889A04u) goto L_08889A04;
    return;
L_08889A04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889A10:
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889A34:
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42)));
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(46)));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889A58:
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(ctx.gpr[7]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[6]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889A68:
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(54)));
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889A84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_08889AA0;
      }
      goto L_08889A98;
    }
L_08889A98:
    ctx.set_gpr(31, 0x08889AA0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08889AA0u) goto L_08889AA0;
    return;
L_08889AA0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889AB4:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889ABC:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08889AE4;
      }
      goto L_08889AC8;
    }
L_08889AC8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[8]);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    goto L_08889AE4;
L_08889AE4:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889AEC:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08889B14;
      }
      goto L_08889AF8;
    }
L_08889AF8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[8]);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    goto L_08889B14;
L_08889B14:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889B1C:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08889B44;
      }
      goto L_08889B28;
    }
L_08889B28:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[8]);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    goto L_08889B44;
L_08889B44:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889B4C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08889B60;
      }
      goto L_08889B58;
    }
L_08889B58:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    goto L_08889B60;
L_08889B60:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889B68:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889B78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[2] == ctx.gpr[5]) {
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
        goto L_08889B88;
    }
    goto L_08889B88;
L_08889B88:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889B90:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889BA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[17];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08889C88;
      }
      goto L_08889BC8;
    }
L_08889BC8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[4]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_08889BE8;
    }
    goto L_08889BD4;
L_08889BD4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889BE8:
    ctx.set_gpr(12, ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(9, ctx.gpr[16] + static_cast<std::uint32_t>(44));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[17];
    ctx.set_gpr(10, ctx.gpr[12] + 0u);
      if (branch_taken) {
          goto L_08889C5C;
      }
      goto L_08889BFC;
    }
L_08889BFC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(48))))));
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(50))))));
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(54))))));
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(56))))));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[14]);
    ctx.set_gpr(31, 0x08889C2Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[13]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 64u, 0x08878F08u>(ctx, &aot_mem) && ctx.pc == 0x08889C2Cu) goto L_08889C2C;
    return;
L_08889C2C:
    ctx.set_gpr(6, ctx.gpr[2] >> 31u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(5, (ctx.gpr[5] & ~0x00000001u) | ((0u & 0x00000001u) << 0u));
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[17];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08889C50;
      }
      goto L_08889C44;
    }
L_08889C44:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    goto L_08889BD4;
L_08889C50:
    ctx.set_gpr(7, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-26332), ctx.gpr[3]);
    goto L_08889C44;
L_08889C5C:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(48))))));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(50))))));
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(54))))));
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(56))))));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08889C80u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[12]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 28u, 0x088786A8u>(ctx, &aot_mem) && ctx.pc == 0x08889C80u) goto L_08889C80;
    return;
L_08889C80:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    goto L_08889C44;
L_08889C88:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    goto L_08889BC8;
L_08889DC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08889DD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 424u, 0x088A2324u>(ctx, &aot_mem) && ctx.pc == 0x08889DD0u) goto L_08889DD0;
    return;
L_08889DD0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889DDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08889DECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 431u, 0x088A237Cu>(ctx, &aot_mem) && ctx.pc == 0x08889DECu) goto L_08889DEC;
    return;
L_08889DEC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889DF8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889E00:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889E08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08889E18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x08889E18u) goto L_08889E18;
    return;
L_08889E18:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08889FB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0888A0E4;
      }
      goto L_08889FCC;
    }
L_08889FCC:
    ctx.set_gpr(31, 0x08889FD4u);
    // nop
    goto L_0888A0F8;
L_08889FD4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[16] != 0u) {
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), 0u);
        goto L_0888A0C4;
    }
    goto L_08889FE0;
L_08889FE0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    goto L_08889FE4;
L_08889FE4:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888A0B4;
      }
      goto L_08889FEC;
    }
L_08889FEC:
    ctx.set_gpr(31, 0x08889FF4u);
    ctx.set_gpr(17, 0u + 0u);
    goto L_08889DC0;
L_08889FF4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
        goto L_0888A02C;
    }
    goto L_0888A004;
L_0888A004:
    ctx.set_gpr(16, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    goto L_0888A008;
L_0888A008:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_0888A098;
      }
      goto L_0888A018;
    }
L_0888A018:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888A008;
      }
      goto L_0888A028;
    }
L_0888A028:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    goto L_0888A02C;
L_0888A02C:
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(144), 0u);
        goto L_0888A080;
    }
    goto L_0888A034;
L_0888A034:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    goto L_0888A038;
L_0888A038:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888A070;
      }
      goto L_0888A040;
    }
L_0888A040:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_0888A044;
L_0888A044:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0888A050u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(664));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0888A050u) goto L_0888A050;
    return;
L_0888A050:
    ctx.set_gpr(31, 0x0888A058u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08889DDC;
L_0888A058:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0888A05C;
L_0888A05C:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888A070:
    ctx.set_gpr(31, 0x0888A078u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 295u, 0x0888D944u>(ctx, &aot_mem) && ctx.pc == 0x0888A078u) goto L_0888A078;
    return;
L_0888A078:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_0888A044;
L_0888A080:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[9];
    ctx.set_gpr(31, 0x0888A090u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888A090u) goto L_0888A090;
    return;
L_0888A090:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    goto L_0888A038;
L_0888A098:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[5];
    ctx.set_gpr(31, 0x0888A0ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888A0ACu) goto L_0888A0AC;
    return;
L_0888A0AC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    goto L_0888A018;
L_0888A0B4:
    ctx.set_gpr(31, 0x0888A0BCu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_0888ABCC;
L_0888A0BC:
    // nop
    goto L_08889FEC;
L_0888A0C4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0888A0D4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 772u, 0x08882CD0u>(ctx, &aot_mem) && ctx.pc == 0x0888A0D4u) goto L_0888A0D4;
    return;
L_0888A0D4:
    ctx.set_gpr(31, 0x0888A0DCu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 591u, 0x08882310u>(ctx, &aot_mem) && ctx.pc == 0x0888A0DCu) goto L_0888A0DC;
    return;
L_0888A0DC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    goto L_08889FE4;
L_0888A0E4:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(31, 0x0888A0F0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(18076));
    goto L_08889E08;
L_0888A0F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0888A05C;
L_0888A0F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
      if (branch_taken) {
          goto L_0888A1A4;
      }
      goto L_0888A10C;
    }
L_0888A10C:
    ctx.set_gpr(31, 0x0888A114u);
    // nop
    goto L_0888AC40;
L_0888A114:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888A194;
      }
      goto L_0888A120;
    }
L_0888A120:
    ctx.set_gpr(31, 0x0888A128u);
    // nop
    goto L_08889DC0;
L_0888A128:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888A184;
      }
      goto L_0888A134;
    }
L_0888A134:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(484)));
    goto L_0888A138;
L_0888A138:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[4]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
        goto L_0888A164;
    }
    goto L_0888A144;
L_0888A144:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(432), 0u);
    goto L_0888A148;
L_0888A148:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), 0u);
    ctx.set_gpr(31, 0x0888A154u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    goto L_08889DDC;
L_0888A154:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_0888A158;
L_0888A158:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888A164:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), 0u);
      if (branch_taken) {
          goto L_0888A144;
      }
      goto L_0888A16C;
    }
L_0888A16C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[5];
    ctx.set_gpr(31, 0x0888A17Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888A17Cu) goto L_0888A17C;
    return;
L_0888A17C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(432), 0u);
    goto L_0888A148;
L_0888A184:
    ctx.set_gpr(31, 0x0888A18Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 307u, 0x0888DA20u>(ctx, &aot_mem) && ctx.pc == 0x0888A18Cu) goto L_0888A18C;
    return;
L_0888A18C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(484)));
    goto L_0888A138;
L_0888A194:
    ctx.set_gpr(31, 0x0888A19Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 745u, 0x08882B80u>(ctx, &aot_mem) && ctx.pc == 0x0888A19Cu) goto L_0888A19C;
    return;
L_0888A19C:
    // nop
    goto L_0888A120;
L_0888A1A4:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(31, 0x0888A1B0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(18116));
    goto L_08889E08;
L_0888A1B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_0888A158;
L_0888A1B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(432)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0888A200;
      }
      goto L_0888A1E0;
    }
L_0888A1E0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_0888A200;
      }
      goto L_0888A1EC;
    }
L_0888A1EC:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888A200:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(656)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888A328;
      }
      goto L_0888A20C;
    }
L_0888A20C:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(448)));
    ctx.set_gpr(6, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(448), ctx.gpr[6]);
    goto L_0888A218;
L_0888A218:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(436))))));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[10] == ctx.gpr[9]) {
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(448)));
        goto L_0888A30C;
    }
    goto L_0888A228;
L_0888A228:
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(437))))));
    goto L_0888A22C;
L_0888A22C:
    ctx.set_gpr(15, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[15];
    // nop
      if (branch_taken) {
          goto L_0888A248;
      }
      goto L_0888A238;
    }
L_0888A238:
    ctx.set_gpr(31, 0x0888A240u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 378u, 0x0888DE30u>(ctx, &aot_mem) && ctx.pc == 0x0888A240u) goto L_0888A240;
    return;
L_0888A240:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0888A1EC;
L_0888A248:
    ctx.set_gpr(31, 0x0888A250u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 317u, 0x0888DA8Cu>(ctx, &aot_mem) && ctx.pc == 0x0888A250u) goto L_0888A250;
    return;
L_0888A250:
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(448)));
    ctx.set_gpr(18, static_cast<std::int32_t>(ctx.gpr[24]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A238;
      }
      goto L_0888A260;
    }
L_0888A260:
    ctx.set_gpr(31, 0x0888A268u);
    // nop
    goto L_08889DC0;
L_0888A268:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x0888A274u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(448)));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 339u, 0x0888DC34u>(ctx, &aot_mem) && ctx.pc == 0x0888A274u) goto L_0888A274;
    return;
L_0888A274:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_0888A2BC;
    }
    goto L_0888A27C;
L_0888A27C:
    if (ctx.gpr[2] == ctx.gpr[17]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_0888A294;
    }
    goto L_0888A284;
L_0888A284:
    ctx.set_gpr(31, 0x0888A28Cu);
    // nop
    goto L_08889DDC;
L_0888A28C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0888A1EC;
L_0888A294:
    ctx.set_gpr(31, 0x0888A29Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 722u, 0x088829C0u>(ctx, &aot_mem) && ctx.pc == 0x0888A29Cu) goto L_0888A29C;
    return;
L_0888A29C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0888A2A4;
L_0888A2A4:
    ctx.set_gpr(31, 0x0888A2ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 775u, 0x08882D18u>(ctx, &aot_mem) && ctx.pc == 0x0888A2ACu) goto L_0888A2AC;
    return;
L_0888A2AC:
    ctx.set_gpr(31, 0x0888A2B4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 731u, 0x08882A8Cu>(ctx, &aot_mem) && ctx.pc == 0x0888A2B4u) goto L_0888A2B4;
    return;
L_0888A2B4:
    // nop
    goto L_0888A284;
L_0888A2BC:
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0888A2CCu);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 323u, 0x0888DAD0u>(ctx, &aot_mem) && ctx.pc == 0x0888A2CCu) goto L_0888A2CC;
    return;
L_0888A2CC:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 31u));
    ctx.set_gpr(9, ctx.gpr[10] >> 21u);
    ctx.set_gpr(6, ctx.gpr[8] + ctx.gpr[9]);
    ctx.set_gpr(31, 0x0888A2E8u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 11u));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 722u, 0x088829C0u>(ctx, &aot_mem) && ctx.pc == 0x0888A2E8u) goto L_0888A2E8;
    return;
L_0888A2E8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 31u));
    ctx.set_gpr(3, ctx.gpr[7] >> 21u);
    ctx.set_gpr(25, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[25]) >> 11u));
    goto L_0888A2A4;
L_0888A30C:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.set_gpr(11, static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    if (ctx.gpr[11] != 0u) {
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(437))))));
        goto L_0888A22C;
    }
    goto L_0888A31C;
L_0888A31C:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(448), ctx.gpr[14]);
    goto L_0888A228;
L_0888A328:
    ctx.set_gpr(31, 0x0888A330u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 317u, 0x0888DA8Cu>(ctx, &aot_mem) && ctx.pc == 0x0888A330u) goto L_0888A330;
    return;
L_0888A330:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(656)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(660)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[17];
    ctx.set_gpr(31, 0x0888A344u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888A344u) goto L_0888A344;
    return;
L_0888A344:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(448), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0888A218;
      }
      goto L_0888A34C;
    }
L_0888A34C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(436), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(437), static_cast<std::uint8_t>(0u));
    goto L_0888A218;
L_0888A358:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(484)));
    ctx.set_gpr(3, ctx.gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_0888A394;
      }
      goto L_0888A388;
    }
L_0888A388:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888A3B0;
      }
      goto L_0888A394;
    }
L_0888A394:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888A3B0:
    ctx.set_gpr(31, 0x0888A3B8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 303u, 0x0888D9D0u>(ctx, &aot_mem) && ctx.pc == 0x0888A3B8u) goto L_0888A3B8;
    return;
L_0888A3B8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_0888A394;
      }
      goto L_0888A3C4;
    }
L_0888A3C4:
    ctx.set_gpr(31, 0x0888A3CCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 339u, 0x0888DC34u>(ctx, &aot_mem) && ctx.pc == 0x0888A3CCu) goto L_0888A3CC;
    return;
L_0888A3CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_0888A394;
      }
      goto L_0888A3D4;
    }
L_0888A3D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x0888A3E0u);
    ctx.set_gpr(18, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 312u, 0x0888DA50u>(ctx, &aot_mem) && ctx.pc == 0x0888A3E0u) goto L_0888A3E0;
    return;
L_0888A3E0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_0888A40C;
      }
      goto L_0888A3E8;
    }
L_0888A3E8:
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_0888A4D8;
      }
      goto L_0888A3FC;
    }
L_0888A3FC:
    ctx.set_gpr(31, 0x0888A404u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 230u, 0x08884EC4u>(ctx, &aot_mem) && ctx.pc == 0x0888A404u) goto L_0888A404;
    return;
L_0888A404:
    if (ctx.gpr[2] == ctx.gpr[20]) {
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_0888A458;
    }
    goto L_0888A40C;
L_0888A40C:
    if (ctx.gpr[18] != ctx.gpr[19]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_0888A394;
    }
    goto L_0888A414;
L_0888A414:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(31, 0x0888A420u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(18156));
    goto L_08889E08;
L_0888A420:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0888A430u);
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 237u, 0x0888517Cu>(ctx, &aot_mem) && ctx.pc == 0x0888A430u) goto L_0888A430;
    return;
L_0888A430:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(632)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(18, ctx.gpr[19] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(632), ctx.gpr[18]);
    ctx.set_gpr(31, 0x0888A450u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(636), ctx.gpr[17]);
    goto L_0888AD28;
L_0888A450:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_0888A394;
L_0888A458:
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888A40C;
      }
      goto L_0888A464;
    }
L_0888A464:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_0888A468;
L_0888A468:
    ctx.set_gpr(31, 0x0888A470u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 230u, 0x08884EC4u>(ctx, &aot_mem) && ctx.pc == 0x0888A470u) goto L_0888A470;
    return;
L_0888A470:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0888A40C;
      }
      goto L_0888A478;
    }
L_0888A478:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0888A488u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 230u, 0x08884EC4u>(ctx, &aot_mem) && ctx.pc == 0x0888A488u) goto L_0888A488;
    return;
L_0888A488:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0888A40C;
      }
      goto L_0888A490;
    }
L_0888A490:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0888A4A0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 230u, 0x08884EC4u>(ctx, &aot_mem) && ctx.pc == 0x0888A4A0u) goto L_0888A4A0;
    return;
L_0888A4A0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0888A40C;
      }
      goto L_0888A4A8;
    }
L_0888A4A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0888A4B8u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 230u, 0x08884EC4u>(ctx, &aot_mem) && ctx.pc == 0x0888A4B8u) goto L_0888A4B8;
    return;
L_0888A4B8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0888A40C;
      }
      goto L_0888A4C0;
    }
L_0888A4C0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_0888A468;
    }
    goto L_0888A4D0;
L_0888A4D0:
    // nop
    goto L_0888A40C;
L_0888A4D8:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888A464;
      }
      goto L_0888A4E0;
    }
L_0888A4E0:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888A3FC;
      }
      goto L_0888A4E8;
    }
L_0888A4E8:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888A504;
      }
      goto L_0888A4F0;
    }
L_0888A4F0:
    ctx.set_gpr(31, 0x0888A4F8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 230u, 0x08884EC4u>(ctx, &aot_mem) && ctx.pc == 0x0888A4F8u) goto L_0888A4F8;
    return;
L_0888A4F8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_0888A40C;
      }
      goto L_0888A500;
    }
L_0888A500:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    goto L_0888A504;
L_0888A504:
    ctx.set_gpr(31, 0x0888A50Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 230u, 0x08884EC4u>(ctx, &aot_mem) && ctx.pc == 0x0888A50Cu) goto L_0888A50C;
    return;
L_0888A50C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888A40C;
      }
      goto L_0888A514;
    }
L_0888A514:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0888A3FC;
L_0888A51C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(644)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0888A5E4;
      }
      goto L_0888A548;
    }
L_0888A548:
    ctx.set_gpr(17, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(640), ctx.gpr[2]);
    goto L_0888A550;
L_0888A550:
    ctx.set_gpr(31, 0x0888A558u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 317u, 0x0888DA8Cu>(ctx, &aot_mem) && ctx.pc == 0x0888A558u) goto L_0888A558;
    return;
L_0888A558:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0888A5DC;
      }
      goto L_0888A56C;
    }
L_0888A56C:
    ctx.set_gpr(31, 0x0888A574u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 318u, 0x0888DA94u>(ctx, &aot_mem) && ctx.pc == 0x0888A574u) goto L_0888A574;
    return;
L_0888A574:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[6]);
      if (branch_taken) {
          goto L_0888A594;
      }
      goto L_0888A588;
    }
L_0888A588:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(640), ctx.gpr[3]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0888A550;
L_0888A594:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(652)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(644)));
    ctx.set_gpr(19, ctx.gpr[17] + 0u);
    ctx.set_gpr(12, ctx.gpr[13] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(652), ctx.gpr[12]);
    goto L_0888A5A8;
L_0888A5A8:
    if (ctx.gpr[4] == 0u) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
        goto L_0888A5B8;
    }
    goto L_0888A5B0;
L_0888A5B0:
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[14]));
    goto L_0888A5B8;
L_0888A5B8:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888A5DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    goto L_0888A5A8;
L_0888A5E4:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(648)));
    ctx.fpr[3] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[3])) && ctx.fpr[1] == ctx.fpr[3]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(452)));
        goto L_0888A5DC;
    }
    goto L_0888A5FC;
L_0888A5FC:
    ctx.set_gpr(9, 2225u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20192)));
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_0888A610;
L_0888A610:
    ctx.set_gpr(31, 0x0888A618u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 317u, 0x0888DA8Cu>(ctx, &aot_mem) && ctx.pc == 0x0888A618u) goto L_0888A618;
    return;
L_0888A618:
    ctx.set_gpr(11, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0888A5DC;
      }
      goto L_0888A62C;
    }
L_0888A62C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x0888A638u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 318u, 0x0888DA94u>(ctx, &aot_mem) && ctx.pc == 0x0888A638u) goto L_0888A638;
    return;
L_0888A638:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[5] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(5)));
      if (branch_taken) {
          goto L_0888A660;
      }
      goto L_0888A64C;
    }
L_0888A64C:
    ctx.fpr[8] = ctx.fpr[20] / ctx.fpr[0];
    ctx.fpr[9] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[7] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(9)));
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(6, 0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    goto L_0888A660;
L_0888A660:
    ctx.fpr[10] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[3] < ctx.fpr[10]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[1] = ctx.fpr[3] - ctx.fpr[10];
      if (branch_taken) {
          goto L_0888A688;
      }
      goto L_0888A674;
    }
L_0888A674:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[10]);
    goto L_0888A610;
L_0888A688:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(652)));
    ctx.set_gpr(19, ctx.gpr[17] + 0u);
    ctx.fpr[4] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.set_fpr_bits(1, ctx.fpu_float_to_word(ctx.fpr[2], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(640), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(8, ctx.gpr[18] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[7] + ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(652), ctx.gpr[4]);
    goto L_0888A5DC;
L_0888A6B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6))))));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[4]) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(452)));
        goto L_0888A728;
    }
    goto L_0888A6F8;
L_0888A6F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888A728:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0888A73Cu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 323u, 0x0888DAD0u>(ctx, &aot_mem) && ctx.pc == 0x0888A73Cu) goto L_0888A73C;
    return;
L_0888A73C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(437))))));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(22, 0u + 0u);
      if (branch_taken) {
          goto L_0888A8B0;
      }
      goto L_0888A748;
    }
L_0888A748:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(448), ctx.gpr[16]);
    ctx.set_gpr(16, 2225u << 16u);
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x0888A760u);
    ctx.set_gpr(19, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 311u, 0x0888DA48u>(ctx, &aot_mem) && ctx.pc == 0x0888A760u) goto L_0888A760;
    return;
L_0888A760:
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20196)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0888A768;
L_0888A768:
    ctx.set_gpr(31, 0x0888A770u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 312u, 0x0888DA50u>(ctx, &aot_mem) && ctx.pc == 0x0888A770u) goto L_0888A770;
    return;
L_0888A770:
    ctx.set_gpr(11, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
      if (branch_taken) {
          goto L_0888A824;
      }
      goto L_0888A77C;
    }
L_0888A77C:
    ctx.set_gpr(31, 0x0888A784u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 313u, 0x0888DA58u>(ctx, &aot_mem) && ctx.pc == 0x0888A784u) goto L_0888A784;
    return;
L_0888A784:
    ctx.fpr[10] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[11] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[9] = ctx.fpr[20] / ctx.fpr[10];
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.fpr[8] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(11)));
    { const float fs = ctx.fpr[8]; const float ft = ctx.fpr[9]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(7, 0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    ctx.set_fpr_bits(6, ctx.fpu_float_to_word(ctx.fpr[7], 1u));
    ctx.set_gpr(10, std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    ctx.set_gpr(3, ctx.gpr[10] + static_cast<std::uint32_t>(31));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.set_gpr(7, ctx.gpr[9] >> 27u);
    ctx.set_gpr(31, 0x0888A7C0u);
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 316u, 0x0888DA7Cu>(ctx, &aot_mem) && ctx.pc == 0x0888A7C0u) goto L_0888A7C0;
    return;
L_0888A7C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(640)));
    ctx.set_gpr(16, (ctx.gpr[16] & ~0x0000001Fu) | ((0u & 0x0000001Fu) << 0u));
    ctx.set_gpr(22, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 5u));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[16]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    if (ctx.gpr[16] == 0u) {
    ctx.pc = 0x0888A7D4u; rt.stop("Allegrex BREAK code 7 at 0x0888A7D4"); return;
        goto L_0888A7D8;
    }
    goto L_0888A7D8;
L_0888A7D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, ctx.hi);
    ctx.set_gpr(15, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(22, ctx.gpr[8] + 0u);
    ctx.set_gpr(2, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[15])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.gpr[2] << 3u);
    ctx.set_gpr(25, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(24, ctx.gpr[25] << 1u);
    ctx.set_gpr(5, ctx.gpr[24] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(23, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[15])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(21, ctx.lo);
    ctx.set_gpr(31, 0x0888A818u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(640), ctx.gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 340u, 0x0888DC3Cu>(ctx, &aot_mem) && ctx.pc == 0x0888A818u) goto L_0888A818;
    return;
L_0888A818:
    ctx.set_gpr(17, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(20, ctx.gpr[20] + ctx.gpr[17]);
    goto L_0888A768;
L_0888A824:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(652)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(24, ctx.gpr[16] + ctx.gpr[20]);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 31u));
    ctx.set_gpr(3, ctx.gpr[7] >> 21u);
    ctx.set_gpr(2, ctx.gpr[24] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[8] - ctx.gpr[22]);
    ctx.set_gpr(21, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 11u));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(652), ctx.gpr[6]);
    ctx.set_gpr(25, ctx.gpr[21] << 11u);
    ctx.set_gpr(31, 0x0888A858u);
    ctx.set_gpr(5, ctx.gpr[24] - ctx.gpr[25]);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 341u, 0x0888DC44u>(ctx, &aot_mem) && ctx.pc == 0x0888A858u) goto L_0888A858;
    return;
L_0888A858:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[23];
    ctx.set_gpr(31, 0x0888A86Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888A86Cu) goto L_0888A86C;
    return;
L_0888A86C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x0888A878u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 722u, 0x088829C0u>(ctx, &aot_mem) && ctx.pc == 0x0888A878u) goto L_0888A878;
    return;
L_0888A878:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(20, ctx.gpr[14] + ctx.gpr[17]);
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 31u));
    ctx.set_gpr(12, ctx.gpr[13] >> 21u);
    ctx.set_gpr(19, ctx.gpr[20] + ctx.gpr[12]);
    ctx.set_gpr(31, 0x0888A89Cu);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 11u));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 775u, 0x08882D18u>(ctx, &aot_mem) && ctx.pc == 0x0888A89Cu) goto L_0888A89C;
    return;
L_0888A89C:
    ctx.set_gpr(31, 0x0888A8A4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 731u, 0x08882A8Cu>(ctx, &aot_mem) && ctx.pc == 0x0888A8A4u) goto L_0888A8A4;
    return;
L_0888A8A4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(640), 0u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    goto L_0888A6F8;
L_0888A8B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0888A8C8u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(444)));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 318u, 0x0888DA94u>(ctx, &aot_mem) && ctx.pc == 0x0888A8C8u) goto L_0888A8C8;
    return;
L_0888A8C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(21, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0888A90C;
      }
      goto L_0888A8D4;
    }
L_0888A8D4:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(640)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[5] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[6] - ctx.gpr[7]);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(5)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20196)));
    ctx.fpr[4] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(2)));
    ctx.fpr[0] = ctx.fpr[4] / ctx.fpr[1];
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[3]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(21, ctx.gpr[17] + 0u);
        goto L_0888A90C;
    }
    goto L_0888A90C;
L_0888A90C:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(436))))));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[9] == ctx.gpr[8]) {
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(460)));
        goto L_0888AAAC;
    }
    goto L_0888A91C;
L_0888A91C:
    ctx.set_gpr(31, 0x0888A924u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 317u, 0x0888DA8Cu>(ctx, &aot_mem) && ctx.pc == 0x0888A924u) goto L_0888A924;
    return;
L_0888A924:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0888A928;
L_0888A928:
    ctx.set_gpr(23, ctx.gpr[16] + ctx.gpr[21]);
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888A940;
      }
      goto L_0888A938;
    }
L_0888A938:
    ctx.set_gpr(21, ctx.gpr[4] - ctx.gpr[16]);
    ctx.set_gpr(23, ctx.gpr[16] + ctx.gpr[21]);
    goto L_0888A940;
L_0888A940:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888AA38;
      }
      goto L_0888A948;
    }
L_0888A948:
    ctx.set_gpr(15, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(14, static_cast<std::int32_t>(ctx.gpr[15]) < 3 ? 1u : 0u);
    ctx.set_gpr(20, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.set_gpr(3, ctx.gpr[21] & 3u);
      if (branch_taken) {
          goto L_0888AA40;
      }
      goto L_0888A960;
    }
L_0888A960:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[19]);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0888A974u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 323u, 0x0888DAD0u>(ctx, &aot_mem) && ctx.pc == 0x0888A974u) goto L_0888A974;
    return;
L_0888A974:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    ctx.set_gpr(10, ctx.gpr[11] + ctx.gpr[12]);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
      if (branch_taken) {
          goto L_0888AA38;
      }
      goto L_0888A990;
    }
L_0888A990:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[19]);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0888A9A4u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 323u, 0x0888DAD0u>(ctx, &aot_mem) && ctx.pc == 0x0888A9A4u) goto L_0888A9A4;
    return;
L_0888A9A4:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(14, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[14]);
    ctx.set_gpr(11, ctx.gpr[12] + ctx.gpr[13]);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0888A9CCu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 323u, 0x0888DAD0u>(ctx, &aot_mem) && ctx.pc == 0x0888A9CCu) goto L_0888A9CC;
    return;
L_0888A9CC:
    ctx.set_gpr(10, ctx.gpr[19] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[10]);
    ctx.set_gpr(8, ctx.gpr[7] + ctx.gpr[9]);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0888A9F4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 323u, 0x0888DAD0u>(ctx, &aot_mem) && ctx.pc == 0x0888A9F4u) goto L_0888A9F4;
    return;
L_0888A9F4:
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(25, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0888AA1Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[25]);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 323u, 0x0888DAD0u>(ctx, &aot_mem) && ctx.pc == 0x0888AA1Cu) goto L_0888AA1C;
    return;
L_0888AA1C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    ctx.set_gpr(14, ctx.gpr[15] + ctx.gpr[24]);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[14]);
      if (branch_taken) {
          goto L_0888A990;
      }
      goto L_0888AA38;
    }
L_0888AA38:
    ctx.set_gpr(16, ctx.gpr[23] + 0u);
    goto L_0888A748;
L_0888AA40:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(24, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888A990;
      }
      goto L_0888AA48;
    }
L_0888AA48:
    { const bool branch_taken = ctx.gpr[24] != 0u;
    ctx.set_gpr(25, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888A960;
      }
      goto L_0888AA50;
    }
L_0888AA50:
    if (ctx.gpr[25] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
        goto L_0888AA84;
    }
    goto L_0888AA58;
L_0888AA58:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[19]);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0888AA6Cu);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 323u, 0x0888DAD0u>(ctx, &aot_mem) && ctx.pc == 0x0888AA6Cu) goto L_0888AA6C;
    return;
L_0888AA6C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[7] + ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    goto L_0888A960;
L_0888AA84:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0888AA94u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 323u, 0x0888DAD0u>(ctx, &aot_mem) && ctx.pc == 0x0888AA94u) goto L_0888AA94;
    return;
L_0888AA94:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_0888AA58;
L_0888AAAC:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(452)));
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[12]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(4, ctx.gpr[11] + 0u);
      if (branch_taken) {
          goto L_0888A928;
      }
      goto L_0888AABC;
    }
L_0888AABC:
    // nop
    goto L_0888A91C;
L_0888AAC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(16640));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[5] + static_cast<std::uint32_t>(63));
    ctx.set_gpr(19, (ctx.gpr[19] & ~0x0000003Fu) | ((0u & 0x0000003Fu) << 0u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[19] - ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(628)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.set_gpr(18, ctx.gpr[6] - ctx.gpr[3]);
      if (branch_taken) {
          goto L_0888AB20;
      }
      goto L_0888AB0C;
    }
L_0888AB0C:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16576));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(20, ctx.gpr[4] + static_cast<std::uint32_t>(64));
    goto L_0888AB20;
L_0888AB20:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.set_gpr(21, 0u + 0u);
      if (branch_taken) {
          goto L_0888AB8C;
      }
      goto L_0888AB2C;
    }
L_0888AB2C:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_0888AB34;
L_0888AB34:
    ctx.set_gpr(18, ctx.gpr[18] - ctx.gpr[20]);
    ctx.set_gpr(3, ctx.gpr[19] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[20]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0888AB90;
      }
      goto L_0888AB54;
    }
L_0888AB54:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_0888ABBC;
      }
      goto L_0888AB60;
    }
L_0888AB60:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(31, 0x0888AB6Cu);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 122u, 0x088847C4u>(ctx, &aot_mem) && ctx.pc == 0x0888AB6Cu) goto L_0888AB6C;
    return;
L_0888AB6C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_0888AB70;
L_0888AB70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0888AB90;
      }
      goto L_0888AB78;
    }
L_0888AB78:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888AB34;
      }
      goto L_0888AB8C;
    }
L_0888AB8C:
    ctx.set_gpr(7, 0u + 0u);
    goto L_0888AB90;
L_0888AB90:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888ABBC:
    ctx.set_gpr(31, 0x0888ABC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 126u, 0x0888481Cu>(ctx, &aot_mem) && ctx.pc == 0x0888ABC4u) goto L_0888ABC4;
    return;
L_0888ABC4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_0888AB70;
L_0888ABCC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_0888AC18;
      }
      goto L_0888ABF4;
    }
L_0888ABF4:
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
    goto L_0888ABF8;
L_0888ABF8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0888AC30;
      }
      goto L_0888AC08;
    }
L_0888AC08:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888ABF8;
      }
      goto L_0888AC18;
    }
L_0888AC18:
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
L_0888AC30:
    ctx.set_gpr(31, 0x0888AC38u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 130u, 0x08884898u>(ctx, &aot_mem) && ctx.pc == 0x0888AC38u) goto L_0888AC38;
    return;
L_0888AC38:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    goto L_0888AC08;
L_0888AC40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_0888AC88;
      }
      goto L_0888AC64;
    }
L_0888AC64:
    ctx.set_gpr(16, ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0888AC6C;
L_0888AC6C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0888AC78u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 226u, 0x08884E90u>(ctx, &aot_mem) && ctx.pc == 0x0888AC78u) goto L_0888AC78;
    return;
L_0888AC78:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0888AC6C;
    }
    goto L_0888AC88;
L_0888AC88:
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
L_0888ACA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_0888ACFC;
      }
      goto L_0888ACD0;
    }
L_0888ACD0:
    ctx.set_gpr(16, ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0888ACD8;
L_0888ACD8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
      if (branch_taken) {
          goto L_0888AD18;
      }
      goto L_0888ACEC;
    }
L_0888ACEC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0888ACD8;
    }
    goto L_0888ACFC;
L_0888ACFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888AD18:
    ctx.set_gpr(31, 0x0888AD20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 280u, 0x08886320u>(ctx, &aot_mem) && ctx.pc == 0x0888AD20u) goto L_0888AD20;
    return;
L_0888AD20:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    goto L_0888ACEC;
L_0888AD28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(31, 0x0888AD4Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 312u, 0x0888DA50u>(ctx, &aot_mem) && ctx.pc == 0x0888AD4Cu) goto L_0888AD4C;
    return;
L_0888AD4C:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_0888AE68;
      }
      goto L_0888AD5C;
    }
L_0888AD5C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_0888ADF8;
      }
      goto L_0888AD64;
    }
L_0888AD64:
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_0888AE18;
      }
      goto L_0888AD74;
    }
L_0888AD74:
    ctx.set_gpr(13, ctx.gpr[18] << 2u);
    goto L_0888AD78;
L_0888AD78:
    ctx.set_gpr(11, ctx.gpr[13] + ctx.gpr[17]);
    ctx.set_gpr(12, ctx.gpr[13] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(31, 0x0888AD90u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 198u, 0x08884D44u>(ctx, &aot_mem) && ctx.pc == 0x0888AD90u) goto L_0888AD90;
    return;
L_0888AD90:
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888ADFC;
      }
      goto L_0888AD9C;
    }
L_0888AD9C:
    ctx.set_gpr(24, ctx.gpr[18] << 2u);
    ctx.set_gpr(14, ctx.gpr[24] + ctx.gpr[16]);
    ctx.set_gpr(15, ctx.gpr[24] + ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[15] + static_cast<std::uint32_t>(156));
    ctx.set_gpr(16, ctx.gpr[14] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-12)));
    goto L_0888ADB4;
L_0888ADB4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-12)));
    ctx.set_gpr(31, 0x0888ADC0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 198u, 0x08884D44u>(ctx, &aot_mem) && ctx.pc == 0x0888ADC0u) goto L_0888ADC0;
    return;
L_0888ADC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-8)));
    ctx.set_gpr(31, 0x0888ADCCu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 198u, 0x08884D44u>(ctx, &aot_mem) && ctx.pc == 0x0888ADCCu) goto L_0888ADCC;
    return;
L_0888ADCC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(31, 0x0888ADD8u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 198u, 0x08884D44u>(ctx, &aot_mem) && ctx.pc == 0x0888ADD8u) goto L_0888ADD8;
    return;
L_0888ADD8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0888ADECu);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 198u, 0x08884D44u>(ctx, &aot_mem) && ctx.pc == 0x0888ADECu) goto L_0888ADEC;
    return;
L_0888ADEC:
    ctx.set_gpr(25, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[25] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-12)));
        goto L_0888ADB4;
    }
    goto L_0888ADF8;
L_0888ADF8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0888ADFC;
L_0888ADFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888AE18:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888AD9C;
      }
      goto L_0888AE20;
    }
L_0888AE20:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888AD74;
      }
      goto L_0888AE28;
    }
L_0888AE28:
    if (ctx.gpr[7] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_0888AE54;
    }
    goto L_0888AE30;
L_0888AE30:
    ctx.set_gpr(9, ctx.gpr[18] << 2u);
    goto L_0888AE34;
L_0888AE34:
    ctx.set_gpr(8, ctx.gpr[9] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(31, 0x0888AE4Cu);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 198u, 0x08884D44u>(ctx, &aot_mem) && ctx.pc == 0x0888AE4Cu) goto L_0888AE4C;
    return;
L_0888AE4C:
    ctx.set_gpr(13, ctx.gpr[18] << 2u);
    goto L_0888AD78;
L_0888AE54:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(31, 0x0888AE60u);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 198u, 0x08884D44u>(ctx, &aot_mem) && ctx.pc == 0x0888AE60u) goto L_0888AE60;
    return;
L_0888AE60:
    ctx.set_gpr(9, ctx.gpr[18] << 2u);
    goto L_0888AE34;
L_0888AE68:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(31, 0x0888AE74u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(18220));
    goto L_08889E08;
L_0888AE74:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0888ADFC;
L_0888AE7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0888AEACu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 312u, 0x0888DA50u>(ctx, &aot_mem) && ctx.pc == 0x0888AEACu) goto L_0888AEAC;
    return;
L_0888AEAC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_0888AF2C;
      }
      goto L_0888AEB4;
    }
L_0888AEB4:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    ctx.set_gpr(16, ctx.gpr[20] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_0888AF4C;
      }
      goto L_0888AEC4;
    }
L_0888AEC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0888AED4u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 298u, 0x08886764u>(ctx, &aot_mem) && ctx.pc == 0x0888AED4u) goto L_0888AED4;
    return;
L_0888AED4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888AF2C;
      }
      goto L_0888AEE0;
    }
L_0888AEE0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(20, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0888AEF0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 298u, 0x08886764u>(ctx, &aot_mem) && ctx.pc == 0x0888AEF0u) goto L_0888AEF0;
    return;
L_0888AEF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0888AF00u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 298u, 0x08886764u>(ctx, &aot_mem) && ctx.pc == 0x0888AF00u) goto L_0888AF00;
    return;
L_0888AF00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0888AF10u);
    ctx.set_gpr(20, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 298u, 0x08886764u>(ctx, &aot_mem) && ctx.pc == 0x0888AF10u) goto L_0888AF10;
    return;
L_0888AF10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0888AF20u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 298u, 0x08886764u>(ctx, &aot_mem) && ctx.pc == 0x0888AF20u) goto L_0888AF20;
    return;
L_0888AF20:
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(16, ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888AEE0;
      }
      goto L_0888AF2C;
    }
L_0888AF2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888AF4C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888AEE0;
      }
      goto L_0888AF54;
    }
L_0888AF54:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888AEC4;
      }
      goto L_0888AF5C;
    }
L_0888AF5C:
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
        goto L_0888AF7C;
    }
    goto L_0888AF64;
L_0888AF64:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0888AF74u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 298u, 0x08886764u>(ctx, &aot_mem) && ctx.pc == 0x0888AF74u) goto L_0888AF74;
    return;
L_0888AF74:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_0888AEC4;
L_0888AF7C:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0888AF88u);
    ctx.set_gpr(16, ctx.gpr[20] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 298u, 0x08886764u>(ctx, &aot_mem) && ctx.pc == 0x0888AF88u) goto L_0888AF88;
    return;
L_0888AF88:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    goto L_0888AF64;
L_0888AF90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0888AFC4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 312u, 0x0888DA50u>(ctx, &aot_mem) && ctx.pc == 0x0888AFC4u) goto L_0888AFC4;
    return;
L_0888AFC4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_0888B000;
      }
      goto L_0888AFCC;
    }
L_0888AFCC:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(16, ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_0888B0C0;
      }
      goto L_0888AFE8;
    }
L_0888AFE8:
    ctx.set_gpr(31, 0x0888AFF0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 230u, 0x08884EC4u>(ctx, &aot_mem) && ctx.pc == 0x0888AFF0u) goto L_0888AFF0;
    return;
L_0888AFF0:
    if (ctx.gpr[2] == ctx.gpr[21]) {
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[22]));
        goto L_0888AFF8;
    }
    goto L_0888AFF8;
L_0888AFF8:
    if (ctx.gpr[2] == ctx.gpr[20]) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_0888B030;
    }
    goto L_0888B000;
L_0888B000:
    ctx.set_gpr(7, ctx.gpr[17] ^ ctx.gpr[19]);
    goto L_0888B004;
L_0888B004:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B030:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888B000;
      }
      goto L_0888B03C;
    }
L_0888B03C:
    ctx.set_gpr(31, 0x0888B044u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 230u, 0x08884EC4u>(ctx, &aot_mem) && ctx.pc == 0x0888B044u) goto L_0888B044;
    return;
L_0888B044:
    if (ctx.gpr[2] == ctx.gpr[21]) {
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[22]));
        goto L_0888B04C;
    }
    goto L_0888B04C;
L_0888B04C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888B000;
      }
      goto L_0888B054;
    }
L_0888B054:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0888B060u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 230u, 0x08884EC4u>(ctx, &aot_mem) && ctx.pc == 0x0888B060u) goto L_0888B060;
    return;
L_0888B060:
    if (ctx.gpr[2] == ctx.gpr[21]) {
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[22]));
        goto L_0888B068;
    }
    goto L_0888B068;
L_0888B068:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888B000;
      }
      goto L_0888B070;
    }
L_0888B070:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0888B07Cu);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 230u, 0x08884EC4u>(ctx, &aot_mem) && ctx.pc == 0x0888B07Cu) goto L_0888B07C;
    return;
L_0888B07C:
    if (ctx.gpr[2] == ctx.gpr[21]) {
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[22]));
        goto L_0888B084;
    }
    goto L_0888B084;
L_0888B084:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888B000;
      }
      goto L_0888B08C;
    }
L_0888B08C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0888B098u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 230u, 0x08884EC4u>(ctx, &aot_mem) && ctx.pc == 0x0888B098u) goto L_0888B098;
    return;
L_0888B098:
    if (ctx.gpr[2] == ctx.gpr[21]) {
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[22]));
        goto L_0888B0A0;
    }
    goto L_0888B0A0;
L_0888B0A0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    ctx.set_gpr(7, ctx.gpr[17] ^ ctx.gpr[19]);
      if (branch_taken) {
          goto L_0888B004;
      }
      goto L_0888B0A8;
    }
L_0888B0A8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888B03C;
      }
      goto L_0888B0B8;
    }
L_0888B0B8:
    ctx.set_gpr(7, ctx.gpr[17] ^ ctx.gpr[19]);
    goto L_0888B004;
L_0888B0C0:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888B03C;
      }
      goto L_0888B0C8;
    }
L_0888B0C8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888AFE8;
      }
      goto L_0888B0D0;
    }
L_0888B0D0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888B0F8;
      }
      goto L_0888B0D8;
    }
L_0888B0D8:
    ctx.set_gpr(31, 0x0888B0E0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 230u, 0x08884EC4u>(ctx, &aot_mem) && ctx.pc == 0x0888B0E0u) goto L_0888B0E0;
    return;
L_0888B0E0:
    if (ctx.gpr[2] == ctx.gpr[21]) {
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[22]));
        goto L_0888B0E8;
    }
    goto L_0888B0E8;
L_0888B0E8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    ctx.set_gpr(7, ctx.gpr[17] ^ ctx.gpr[19]);
      if (branch_taken) {
          goto L_0888B004;
      }
      goto L_0888B0F0;
    }
L_0888B0F0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_0888B0F8;
L_0888B0F8:
    ctx.set_gpr(31, 0x0888B100u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 230u, 0x08884EC4u>(ctx, &aot_mem) && ctx.pc == 0x0888B100u) goto L_0888B100;
    return;
L_0888B100:
    if (ctx.gpr[2] == ctx.gpr[21]) {
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[22]));
        goto L_0888B108;
    }
    goto L_0888B108;
L_0888B108:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    ctx.set_gpr(7, ctx.gpr[17] ^ ctx.gpr[19]);
      if (branch_taken) {
          goto L_0888B004;
      }
      goto L_0888B110;
    }
L_0888B110:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_0888AFE8;
L_0888B11C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0888B13Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 303u, 0x0888D9D0u>(ctx, &aot_mem) && ctx.pc == 0x0888B13Cu) goto L_0888B13C;
    return;
L_0888B13C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[2] == ctx.gpr[4]) {
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
        goto L_0888B168;
    }
    goto L_0888B148;
L_0888B148:
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0888B150;
L_0888B150:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B168:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_0888B1B0;
      }
      goto L_0888B174;
    }
L_0888B174:
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0888B17C;
L_0888B17C:
    ctx.set_gpr(31, 0x0888B184u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 230u, 0x08884EC4u>(ctx, &aot_mem) && ctx.pc == 0x0888B184u) goto L_0888B184;
    return;
L_0888B184:
    ctx.set_gpr(3, ctx.gpr[2] ^ 5u);
    ctx.set_gpr(7, 0u < ctx.gpr[3] ? 1u : 0u);
    ctx.set_gpr(8, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[7] & ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
      if (branch_taken) {
          goto L_0888B1B0;
      }
      goto L_0888B19C;
    }
L_0888B19C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    if (ctx.gpr[10] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0888B17C;
    }
    goto L_0888B1B0;
L_0888B1B0:
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[12];
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888B148;
      }
      goto L_0888B1BC;
    }
L_0888B1BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0888B150;
L_0888B1F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(31, 0x0888B210u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08889DF8;
L_0888B210:
    ctx.set_gpr(31, 0x0888B218u);
    // nop
    goto L_08889DF8;
L_0888B218:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26312)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, 2245u << 16u);
      if (branch_taken) {
          goto L_0888B358;
      }
      goto L_0888B228;
    }
L_0888B228:
    ctx.set_gpr(3, 2247u << 16u);
    goto L_0888B22C;
L_0888B22C:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(3508))))));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(3508));
      if (branch_taken) {
          goto L_0888B330;
      }
      goto L_0888B23C;
    }
L_0888B23C:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(664))))));
    goto L_0888B240;
L_0888B240:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[18];
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(664));
      if (branch_taken) {
          goto L_0888B308;
      }
      goto L_0888B248;
    }
L_0888B248:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1328))))));
    goto L_0888B24C;
L_0888B24C:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[18];
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(1328));
      if (branch_taken) {
          goto L_0888B2E0;
      }
      goto L_0888B254;
    }
L_0888B254:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1992))))));
    goto L_0888B258;
L_0888B258:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[18];
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(1992));
      if (branch_taken) {
          goto L_0888B2B8;
      }
      goto L_0888B260;
    }
L_0888B260:
    ctx.set_gpr(9, 2245u << 16u);
    goto L_0888B264;
L_0888B264:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-26304)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(10, 2245u << 16u);
      if (branch_taken) {
          goto L_0888B2A8;
      }
      goto L_0888B270;
    }
L_0888B270:
    ctx.set_gpr(31, 0x0888B278u);
    // nop
    goto L_08889E00;
L_0888B278:
    ctx.set_gpr(31, 0x0888B280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 343u, 0x0888DCE0u>(ctx, &aot_mem) && ctx.pc == 0x0888B280u) goto L_0888B280;
    return;
L_0888B280:
    ctx.set_gpr(31, 0x0888B288u);
    // nop
    goto L_08889E00;
L_0888B288:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B2A8:
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x0888B2B0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-26300)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888B2B0u) goto L_0888B2B0;
    return;
L_0888B2B0:
    // nop
    goto L_0888B270;
L_0888B2B8:
    ctx.set_gpr(16, 2245u << 16u);
    ctx.set_gpr(31, 0x0888B2C4u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(-26320));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 640u, 0x088A3CFCu>(ctx, &aot_mem) && ctx.pc == 0x0888B2C4u) goto L_0888B2C4;
    return;
L_0888B2C4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(9, 2245u << 16u);
        goto L_0888B264;
    }
    goto L_0888B2CC;
L_0888B2CC:
    ctx.set_gpr(31, 0x0888B2D4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 141u, 0x0888D1A0u>(ctx, &aot_mem) && ctx.pc == 0x0888B2D4u) goto L_0888B2D4;
    return;
L_0888B2D4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-26320), 0u);
    ctx.set_gpr(9, 2245u << 16u);
    goto L_0888B264;
L_0888B2E0:
    ctx.set_gpr(19, 2245u << 16u);
    ctx.set_gpr(31, 0x0888B2ECu);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(-26320));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 640u, 0x088A3CFCu>(ctx, &aot_mem) && ctx.pc == 0x0888B2ECu) goto L_0888B2EC;
    return;
L_0888B2EC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1992))))));
        goto L_0888B258;
    }
    goto L_0888B2F4;
L_0888B2F4:
    ctx.set_gpr(31, 0x0888B2FCu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 141u, 0x0888D1A0u>(ctx, &aot_mem) && ctx.pc == 0x0888B2FCu) goto L_0888B2FC;
    return;
L_0888B2FC:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-26320), 0u);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1992))))));
    goto L_0888B258;
L_0888B308:
    ctx.set_gpr(19, 2245u << 16u);
    ctx.set_gpr(31, 0x0888B314u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(-26320));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 640u, 0x088A3CFCu>(ctx, &aot_mem) && ctx.pc == 0x0888B314u) goto L_0888B314;
    return;
L_0888B314:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1328))))));
        goto L_0888B24C;
    }
    goto L_0888B31C;
L_0888B31C:
    ctx.set_gpr(31, 0x0888B324u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 141u, 0x0888D1A0u>(ctx, &aot_mem) && ctx.pc == 0x0888B324u) goto L_0888B324;
    return;
L_0888B324:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-26320), 0u);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1328))))));
    goto L_0888B24C;
L_0888B330:
    ctx.set_gpr(17, 2245u << 16u);
    ctx.set_gpr(31, 0x0888B33Cu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(-26320));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 640u, 0x088A3CFCu>(ctx, &aot_mem) && ctx.pc == 0x0888B33Cu) goto L_0888B33C;
    return;
L_0888B33C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(664))))));
        goto L_0888B240;
    }
    goto L_0888B344;
L_0888B344:
    ctx.set_gpr(31, 0x0888B34Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 141u, 0x0888D1A0u>(ctx, &aot_mem) && ctx.pc == 0x0888B34Cu) goto L_0888B34C;
    return;
L_0888B34C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-26320), 0u);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(664))))));
    goto L_0888B240;
L_0888B358:
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x0888B360u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26308)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888B360u) goto L_0888B360;
    return;
L_0888B360:
    ctx.set_gpr(3, 2247u << 16u);
    goto L_0888B22C;
L_0888B368:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0888B378u);
    // nop
    goto L_08889DF8;
L_0888B378:
    ctx.set_gpr(31, 0x0888B380u);
    // nop
    goto L_08889E00;
L_0888B380:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B3D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, 2245u << 16u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-26328)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(516)));
      if (branch_taken) {
          goto L_0888B408;
      }
      goto L_0888B3F0;
    }
L_0888B3F0:
    ctx.set_gpr(8, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-26328), ctx.gpr[8]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B408:
    ctx.set_gpr(31, 0x0888B410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 313u, 0x0887E518u>(ctx, &aot_mem) && ctx.pc == 0x0888B410u) goto L_0888B410;
    return;
L_0888B410:
    ctx.set_gpr(31, 0x0888B418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 279u, 0x0888D83Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B418u) goto L_0888B418;
    return;
L_0888B418:
    ctx.set_gpr(6, 2247u << 16u);
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(3508));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0888B42Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2656));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0888B42Cu) goto L_0888B42C;
    return;
L_0888B42C:
    ctx.set_gpr(7, 2185u << 16u);
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(-19980));
    ctx.set_gpr(8, ctx.gpr[5] + static_cast<std::uint32_t>(18292));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0888B44Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 501u, 0x088A2E10u>(ctx, &aot_mem) && ctx.pc == 0x0888B44Cu) goto L_0888B44C;
    return;
L_0888B44C:
    ctx.set_gpr(3, 2185u << 16u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-19608));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(18308));
    ctx.set_gpr(31, 0x0888B468u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 461u, 0x088A2A6Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B468u) goto L_0888B468;
    return;
L_0888B468:
    ctx.set_gpr(4, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26324), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-26328)));
    goto L_0888B3F0;
L_0888B478:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0888B4A4u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08889DF8;
L_0888B4A4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(31, 0x0888B4B4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    goto L_08889DC0;
L_0888B4B4:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0888B4C4u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 106u, 0x0888CEBCu>(ctx, &aot_mem) && ctx.pc == 0x0888B4C4u) goto L_0888B4C4;
    return;
L_0888B4C4:
    ctx.set_gpr(31, 0x0888B4CCu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_08889DDC;
L_0888B4CC:
    ctx.set_gpr(31, 0x0888B4D4u);
    // nop
    goto L_08889E00;
L_0888B4D4:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B56C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0888B580u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08889DF8;
L_0888B580:
    ctx.set_gpr(31, 0x0888B588u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08889FB0;
L_0888B588:
    ctx.set_gpr(31, 0x0888B590u);
    // nop
    goto L_08889E00;
L_0888B590:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B774:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0888B798u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08889DF8;
L_0888B798:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0888B7A8u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 47u, 0x0888CA24u>(ctx, &aot_mem) && ctx.pc == 0x0888B7A8u) goto L_0888B7A8;
    return;
L_0888B7A8:
    ctx.set_gpr(31, 0x0888B7B0u);
    // nop
    goto L_08889E00;
L_0888B7B0:
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
L_0888B920:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0888B934u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08889DF8;
L_0888B934:
    ctx.set_gpr(31, 0x0888B93Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0888A0F8;
L_0888B93C:
    ctx.set_gpr(31, 0x0888B944u);
    // nop
    goto L_08889E00;
L_0888B944:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B954:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0888B970u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08889DF8;
L_0888B970:
    ctx.set_gpr(2, 2225u << 16u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(18404));
      if (branch_taken) {
          goto L_0888B9A0;
      }
      goto L_0888B97C;
    }
L_0888B97C:
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    goto L_0888B980;
L_0888B980:
    ctx.set_gpr(31, 0x0888B988u);
    // nop
    goto L_08889E00;
L_0888B988:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888B9A0:
    ctx.set_gpr(31, 0x0888B9A8u);
    // nop
    goto L_08889E08;
L_0888B9A8:
    // nop
    goto L_0888B980;
L_0888B9B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0888B9D4u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08889DF8;
L_0888B9D4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0888B9E4u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 60u, 0x0888CB0Cu>(ctx, &aot_mem) && ctx.pc == 0x0888B9E4u) goto L_0888B9E4;
    return;
L_0888B9E4:
    ctx.set_gpr(31, 0x0888B9ECu);
    // nop
    goto L_08889E00;
L_0888B9EC:
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
L_0888BEA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0888BEBCu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08889DF8;
L_0888BEBC:
    ctx.set_gpr(31, 0x0888BEC4u);
    // nop
    goto L_08889DC0;
L_0888BEC4:
    ctx.set_gpr(2, 2225u << 16u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(18816));
      if (branch_taken) {
          goto L_0888BF14;
      }
      goto L_0888BED0;
    }
L_0888BED0:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[6];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(428), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0888BEF0;
      }
      goto L_0888BEE8;
    }
L_0888BEE8:
    ctx.set_gpr(31, 0x0888BEF0u);
    // nop
    goto L_0888ACA0;
L_0888BEF0:
    ctx.set_gpr(31, 0x0888BEF8u);
    // nop
    goto L_08889DDC;
L_0888BEF8:
    ctx.set_gpr(31, 0x0888BF00u);
    // nop
    goto L_08889E00;
L_0888BF00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888BF14:
    ctx.set_gpr(31, 0x0888BF1Cu);
    // nop
    goto L_08889E08;
L_0888BF1C:
    // nop
    goto L_0888BEF0;
L_0888BF24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0888BF40u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08889DF8;
L_0888BF40:
    ctx.set_gpr(2, 2225u << 16u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(18856));
      if (branch_taken) {
          goto L_0888BF70;
      }
      goto L_0888BF4C;
    }
L_0888BF4C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    goto L_0888BF50;
L_0888BF50:
    ctx.set_gpr(31, 0x0888BF58u);
    // nop
    goto L_08889E00;
L_0888BF58:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888BF70:
    ctx.set_gpr(31, 0x0888BF78u);
    // nop
    goto L_08889E08;
L_0888BF78:
    // nop
    goto L_0888BF50;
}

void recomp_unit_0033(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0033_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_33(Runtime &runtime) {
    runtime.register_generated_unit(33u, 0x08888000u, 16384u, &recomp_unit_0033, &recomp_unit_0033_entry);
    runtime.register_function(0x08888004u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888008u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888010u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888018u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888024u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888058u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888064u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888070u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888094u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088880A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088880B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088880C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088880CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088880E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088880ECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088880FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888108u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888114u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888124u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888812Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888813Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888815Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888816Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888188u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088881A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088881A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088881B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088881B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088881C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088882A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088882DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088882E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888304u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888318u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888338u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888358u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888360u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888368u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888836Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888374u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888380u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888398u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088883A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088883A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088883C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088883C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088883E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088883F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888404u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888410u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888428u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888430u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888438u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888844Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888454u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888845Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888464u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888470u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888847Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888484u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888848Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888494u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088884A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088884ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088884B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088884C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088884D8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088884ECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088884FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888514u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888852Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888538u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888540u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888548u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888558u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888560u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888578u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888584u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888594u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888859Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088885ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088885B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088885C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088885D8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088885F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088885F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888638u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888648u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888650u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888865Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888664u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888668u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888688u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888690u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888698u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088886A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088886B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088886C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088886CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088886D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088886DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088886E8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088886F4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888700u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888708u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888718u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888728u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888730u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888738u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888740u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888760u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888768u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888774u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888877Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888878Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088887C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088887D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088887D8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088887E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088887F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088887FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888880Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888810u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888881Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888824u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888830u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888883Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888848u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888854u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888860u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888886Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888878u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888884u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888894u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088888A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088888A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088888B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088888B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088888C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088888D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088888DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088888E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088888F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088888F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888904u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888908u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888914u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888920u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888928u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888938u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888940u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888948u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888954u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888895Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888964u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888896Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888978u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888984u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888898Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888998u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088889A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088889B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088889BCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088889C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088889CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088889D8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088889F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A08u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A14u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A1Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A24u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A30u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A3Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A40u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A54u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A5Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A68u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888A70u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888AA4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888AB0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888ACCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888AD0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888AD8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888AE4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888AF0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888AF4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888AFCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888B08u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888B0Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888B2Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888B34u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888B50u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888B60u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888B64u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888B88u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888B9Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888BB4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888BBCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888BC0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888BE4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888BF4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C0Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C30u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C40u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C58u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C64u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C6Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C74u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C7Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C84u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888C98u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888CA0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888CACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888CB4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888CC0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888CC8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888CF0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888CFCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D04u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D10u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D14u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D30u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D38u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D4Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D54u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D64u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D78u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D84u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D94u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888D98u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888DACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888DBCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888DD8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888DE8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E04u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E14u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E30u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E3Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E4Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E54u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E60u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E68u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E70u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E78u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E8Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888E98u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888EA4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888EB4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888EC0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888ECCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888ED4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888EE4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08888EF0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889300u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889318u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888931Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889320u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889328u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889330u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889338u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889348u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889364u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888936Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889378u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889380u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088896A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088896B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088896C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088896CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088896D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088896E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088896E8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088896F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088896FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889700u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889708u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889710u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889724u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888972Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889738u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889748u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889750u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888975Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889770u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889778u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889788u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889790u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888979Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088897A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088897B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088897BCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088897C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088897CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088897D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088897DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088897E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088897F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889870u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888988Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889898u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088898B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088898C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088898E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088898ECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088898FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888990Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888991Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888992Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888993Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888994Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888995Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888996Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889978u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889998u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088899C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088899CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x088899E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A04u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A10u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A34u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A58u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A68u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A84u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889A98u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889AA0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889AB4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889ABCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889AC8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889AE4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889AECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889AF8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B14u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B1Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B28u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B44u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B4Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B58u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B60u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B68u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B78u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B88u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889B90u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889BA8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889BC8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889BD4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889BE8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889BFCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C2Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C44u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C50u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C5Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C80u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889C88u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889DC0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889DD0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889DDCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889DECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889DF8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889E00u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889E08u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889E18u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889FB0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889FCCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889FD4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889FE0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889FE4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889FECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x08889FF4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A004u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A008u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A018u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A028u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A02Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A034u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A038u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A040u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A044u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A050u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A058u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A05Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A070u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A078u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A080u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A090u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A098u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A0ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A0B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A0BCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A0C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A0D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A0DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A0E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A0F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A0F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A10Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A114u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A120u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A128u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A134u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A138u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A144u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A148u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A154u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A158u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A164u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A16Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A17Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A184u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A18Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A194u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A19Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A1A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A1B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A1B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A1E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A1ECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A200u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A20Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A218u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A228u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A22Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A238u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A240u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A248u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A250u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A260u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A268u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A274u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A27Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A284u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A28Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A294u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A29Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A2A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A2ACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A2B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A2BCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A2CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A2E8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A30Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A31Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A328u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A330u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A344u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A34Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A358u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A388u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A394u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A3B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A3B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A3C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A3CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A3D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A3E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A3E8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A3FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A404u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A40Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A414u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A420u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A430u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A450u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A458u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A464u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A468u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A470u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A478u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A488u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A490u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A4A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A4A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A4B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A4C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A4D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A4D8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A4E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A4E8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A4F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A4F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A500u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A504u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A50Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A514u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A51Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A548u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A550u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A558u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A56Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A574u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A588u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A594u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A5A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A5B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A5B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A5DCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A5E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A5FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A610u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A618u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A62Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A638u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A64Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A660u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A674u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A688u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A6B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A6F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A728u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A73Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A748u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A760u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A768u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A770u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A77Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A784u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A7C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A7D8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A818u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A824u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A858u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A86Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A878u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A89Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A8A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A8B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A8C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A8D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A90Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A91Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A924u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A928u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A938u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A940u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A948u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A960u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A974u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A990u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A9A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A9CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888A9F4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AA1Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AA38u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AA40u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AA48u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AA50u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AA58u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AA6Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AA84u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AA94u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AAACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AABCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AAC4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AB0Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AB20u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AB2Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AB34u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AB54u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AB60u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AB6Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AB70u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AB78u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AB8Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AB90u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ABBCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ABC4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ABCCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ABF4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ABF8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC08u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC18u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC30u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC38u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC40u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC64u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC6Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC78u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AC88u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ACA0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ACD0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ACD8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ACECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ACFCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD18u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD20u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD28u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD4Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD5Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD64u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD74u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD78u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD90u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AD9Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ADB4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ADC0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ADCCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ADD8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ADECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ADF8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888ADFCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE18u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE20u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE28u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE30u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE34u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE4Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE54u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE60u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE68u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE74u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AE7Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AEACu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AEB4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AEC4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AED4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AEE0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AEF0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF00u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF10u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF20u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF2Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF4Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF54u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF5Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF64u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF74u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF7Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF88u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AF90u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AFC4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AFCCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AFE8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AFF0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888AFF8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B000u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B004u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B030u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B03Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B044u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B04Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B054u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B060u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B068u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B070u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B07Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B084u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B08Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B098u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B0A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B0A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B0B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B0C0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B0C8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B0D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B0D8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B0E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B0E8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B0F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B0F8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B100u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B108u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B110u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B11Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B13Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B148u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B150u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B168u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B174u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B17Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B184u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B19Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B1B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B1BCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B1F4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B210u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B218u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B228u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B22Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B23Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B240u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B248u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B24Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B254u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B258u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B260u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B264u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B270u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B278u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B280u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B288u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B2A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B2B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B2B8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B2C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B2CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B2D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B2E0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B2ECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B2F4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B2FCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B308u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B314u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B31Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B324u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B330u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B33Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B344u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B34Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B358u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B360u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B368u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B378u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B380u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B3D0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B3F0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B408u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B410u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B418u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B42Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B44Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B468u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B478u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B4A4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B4B4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B4C4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B4CCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B4D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B56Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B580u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B588u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B590u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B774u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B798u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B7A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B7B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B920u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B934u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B93Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B944u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B954u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B970u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B97Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B980u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B988u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B9A0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B9A8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B9B0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B9D4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B9E4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888B9ECu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BEA0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BEBCu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BEC4u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BED0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BEE8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BEF0u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BEF8u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF00u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF14u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF1Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF24u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF40u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF4Cu, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF50u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF58u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF70u, &recomp_unit_0033, "recomp_unit_0033");
    runtime.register_function(0x0888BF78u, &recomp_unit_0033, "recomp_unit_0033");
}
} // namespace psprecomp
