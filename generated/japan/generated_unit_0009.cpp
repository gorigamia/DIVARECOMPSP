#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0009[4094] = {
    1, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0,
    0, 0, 6, 7, 0, 8, 0, 0, 9, 0, 0, 0, 10, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0,
    0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 18, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0,
    0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 27, 0, 0, 28, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0,
    0, 34, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0,
    0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0,
    50, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55,
    0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0,
    0, 65, 0, 66, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 78,
    0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 85, 0, 0,
    0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91,
    0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98,
    0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0,
    0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0,
    0, 0, 112, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 117, 118, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0,
    121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0,
    0, 127, 0, 0, 0, 128, 0, 0, 129, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 132, 133, 0, 0, 0, 134, 0, 0, 135, 136, 0, 137, 0,
    0, 0, 138, 139, 0, 0, 0, 140, 0, 0, 141, 142, 0, 0, 143, 144, 0, 145, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0,
    0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154,
    0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161,
    0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167,
    0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 172, 0, 0, 173, 0, 174, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0,
    0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0,
    0, 190, 191, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0,
    0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0,
    0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207,
    0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 210, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 215, 0, 0,
    0, 0, 0, 216, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0,
    0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 232, 233, 0, 0, 234,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0,
    0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 244, 0, 0, 245, 0, 246, 0, 0, 0, 0, 247, 0, 0,
    248, 0, 249, 0, 0, 0, 250, 0, 0, 0, 251, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 256, 0, 0, 257,
    258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 262, 0, 0, 0, 263, 264, 0,
    0, 0, 0, 265, 0, 266, 0, 0, 267, 0, 0, 0, 0, 268, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 274, 0, 0, 275, 0,
    0, 276, 0, 0, 277, 0, 278, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0,
    0, 0, 0, 0, 284, 0, 285, 286, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 289, 0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0,
    0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298,
    0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 302, 0, 0, 303, 0, 0, 304, 0, 0, 305, 0, 0, 0,
    0, 0, 306, 0, 307, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0,
    0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 319, 320, 0, 0, 0, 0, 321, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0,
    324, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0,
    0, 0, 0, 331, 0, 0, 0, 332, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 336, 0, 0, 337, 0, 0, 338, 0, 0, 339, 0,
    0, 340, 0, 0, 0, 0, 341, 0, 342, 0, 0, 343, 0, 0, 344, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 347, 0, 0, 348, 0, 0, 349,
    0, 0, 350, 0, 0, 351, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 355, 0, 356, 0, 0, 0, 0, 357, 0, 358, 0,
    0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 361, 0, 0, 362, 0, 0, 363, 0, 364, 0, 365, 0, 0, 0, 366, 0, 0,
    0, 367, 0, 0, 0, 368, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0,
    374, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 377, 0, 378, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 382,
    0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 389,
    0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0,
    0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 400, 401, 0, 0, 0, 402, 0, 0,
    0, 0, 403, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 407, 0, 0, 0,
    0, 408, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 416, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 419, 0, 420, 0, 0, 421, 0, 0, 0, 422, 0,
    423, 0, 424, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 428, 0, 429, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 432,
    0, 433, 0, 0, 0, 434, 0, 0, 0, 435, 0, 436, 0, 0, 437, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0,
    0, 0, 442, 0, 443, 0, 0, 0, 0, 0, 444, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0,
    0, 448, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 452, 0,
    0, 453, 0, 0, 0, 454, 0, 0, 0, 455, 0, 456, 0, 0, 457, 0, 0, 0, 458, 0, 459, 0, 460, 0, 0, 0, 461, 0, 0, 0, 462, 0,
    0, 0, 463, 0, 464, 0, 0, 0, 465, 0, 466, 467, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 470, 0, 471, 0, 0, 0, 472, 0, 0, 0,
    473, 0, 474, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 478,
    0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    480, 0, 0, 0, 481, 0, 482, 0, 0, 483, 0, 0, 0, 484, 0, 0, 0, 485, 0, 486, 0, 0, 487, 0, 0, 0, 488, 0, 489, 0, 490, 0,
    0, 0, 491, 0, 0, 492, 0, 0, 0, 493, 0, 0, 0, 494, 0, 495, 0, 0, 496, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 499, 0, 0,
    0, 0, 500, 0, 0, 501, 0, 0, 0, 0, 0, 502, 0, 0, 503, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 506,
    0, 0, 0, 0, 507, 0, 0, 0, 508, 0, 509, 0, 0, 0, 0, 510, 0, 0, 511, 0, 0, 0, 0, 0, 512, 0, 0, 513, 0, 0, 0, 0,
    0, 514, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 517, 0, 0, 0, 518, 0, 519, 0, 0, 0, 0, 520, 0, 0, 521,
    0, 0, 0, 0, 0, 522, 0, 0, 523, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 527, 0,
    0, 0, 528, 0, 529, 0, 0, 0, 0, 530, 0, 0, 531, 0, 0, 0, 0, 0, 532, 0, 0, 533, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0,
    535, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 537, 0, 0, 0, 538, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 541, 542, 0, 0, 543, 0, 0, 0, 544, 545, 0,
    0, 546, 0, 0, 0, 547, 548, 0, 0, 549, 0, 0, 0, 550, 551, 0, 0, 552, 0, 0, 553, 554, 0, 0, 555, 0, 0, 0, 556, 557, 0, 0,
    558, 0, 0, 559, 560, 0, 0, 561, 0, 0, 0, 562, 563, 0, 0, 564, 0, 0, 0, 0, 565, 0, 566, 0, 0, 0, 567, 0, 0, 0, 0, 568,
    0, 0, 0, 0, 569, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 572, 0, 0, 0, 573, 0, 0, 0,
    0, 574, 0, 0, 0, 0, 575, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 578, 0, 579, 0,
    0, 580, 0, 0, 0, 0, 581, 0, 0, 0, 0, 582, 0, 0, 0, 0, 583, 0, 0, 0, 0, 584, 0, 0, 0, 0, 585, 0, 0, 0, 0, 586,
    0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 593, 0, 594, 0, 0, 595, 0, 0, 0, 596,
    0, 0, 0, 597, 0, 598, 0, 0, 599, 0, 0, 0, 600, 0, 601, 0, 602, 0, 0, 0, 603, 0, 0, 0, 604, 0, 0, 0, 605, 0, 606, 0,
    0, 607, 0, 0, 0, 0, 608, 0, 0, 0, 609, 0, 610, 0, 0, 0, 611, 0, 0, 0, 612, 0, 613, 0, 0, 0, 614, 0, 0, 0, 0, 615,
    0, 616, 0, 0, 0, 617, 0, 0, 0, 0, 618, 0, 0, 0, 619, 0, 0, 0, 0, 620, 0, 621, 0, 0, 0, 0, 0, 622, 0, 0, 0, 623,
    0, 0, 0, 624, 625, 0, 0, 626, 0, 0, 0, 0, 627, 628, 0, 0, 629, 0, 0, 0, 0, 630, 631, 0, 0, 632, 0, 0, 0, 0, 633, 634,
    0, 0, 635, 0, 0, 0, 636, 637, 0, 0, 638, 0, 0, 0, 0, 639, 640, 0, 0, 641, 0, 0, 0, 642, 643, 0, 0, 644, 0, 0, 0, 645,
    646, 0, 0, 647, 0, 0, 0, 0, 648, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 651, 0, 0, 0, 652, 0, 653, 0, 0, 654, 0, 0, 0, 655, 0, 0, 0, 656, 0, 657, 0, 0, 0, 658, 0, 0, 0, 0, 0,
    659, 0, 0, 0, 660, 0, 661, 0, 0, 0, 662, 0, 663, 0, 0, 0, 0, 664, 665, 0, 0, 666, 0, 0, 0, 667, 0, 0, 0, 668, 0, 0,
    0, 0, 669, 0, 670, 0, 0, 0, 0, 0, 0, 671, 0, 0, 672, 673, 0, 0, 0, 0, 0, 674, 0, 0, 0, 675, 0, 0, 0, 0, 676, 0,
    0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680,
    0, 0, 681, 0, 0, 0, 682, 0, 0, 0, 683, 0, 0, 0, 684, 0, 685, 0, 0, 686, 0, 0, 687, 0, 0, 0, 688, 0, 0, 0, 0, 0,
    0, 689, 0, 0, 0, 690, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693,
    0, 0, 0, 694, 0, 695, 0, 0, 696, 0, 0, 0, 697, 0, 0, 0, 698, 0, 699, 0, 700, 0, 0, 0, 701, 0, 0, 0, 702, 0, 0, 0,
    703, 0, 704, 0, 0, 0, 705, 0, 0, 0, 706, 0, 0, 0, 0, 707, 0, 708, 0, 0, 0, 709, 0, 0, 0, 0, 710, 0, 0, 0, 711, 0,
    712, 0, 713, 0, 0, 0, 0, 714, 0, 0, 0, 715, 0, 716, 0, 0, 0, 717, 0, 0, 0, 0, 0, 718, 0, 0, 719, 0, 0, 720, 0, 0,
    721, 0, 0, 0, 0, 722, 0, 0, 0, 723, 0, 724, 0, 0, 0, 0, 725, 0, 0, 0, 0, 726, 0, 0, 0, 727, 0, 0, 0, 728, 0, 0,
    729, 0, 730, 0, 731, 0, 0, 0, 0, 732, 0, 0, 0, 733, 0, 734, 0, 0, 0, 735, 0, 0, 0, 0, 736, 0, 0, 737, 0, 0, 0, 0,
    738, 0, 0, 0, 739, 0, 740, 0, 0, 0, 741, 0, 742, 0, 0, 0, 0, 0, 743, 0, 0, 0, 744, 0, 0, 745, 0, 0, 0, 0, 0, 0,
    746, 0, 0, 0, 0, 0, 0, 747, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 748, 0, 0, 0, 749, 0, 750, 0, 0, 751, 0, 0, 0,
    752, 0, 0, 0, 753, 0, 754, 0, 0, 0, 755, 0, 0, 756, 0, 0, 0, 757, 0, 0, 0, 758, 0, 759, 0, 760, 0, 0, 0, 761, 0, 0,
    0, 0, 762, 0, 0, 0, 763, 0, 764, 0, 0, 0, 765, 0, 0, 766, 0, 0, 767, 0, 0, 768, 769, 0, 770, 0, 0, 0, 0, 771, 0, 0,
    0, 772, 0, 773, 0, 0, 0, 774, 0, 0, 0, 775, 0, 776, 0, 0, 0, 777, 0, 0, 0, 0, 778, 0, 0, 0, 0, 779, 0, 0, 0, 0,
    780, 0, 0, 0, 781, 0, 782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 783, 0, 0, 784,
    0, 0, 785, 0, 0, 0, 0, 0, 786, 0, 0, 787, 0, 0, 0, 788, 0, 0, 0, 789, 790, 0, 0, 0, 0, 791, 0, 0, 0, 0, 0, 0,
    792, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 793, 0, 0, 0, 794, 0, 795, 0, 0, 796, 0, 0, 0, 797, 0, 0, 0, 798, 0,
    799, 0, 0, 800, 0, 0, 0, 801, 0, 0, 0, 802, 0, 803, 0, 804, 0, 0, 0, 805, 0, 0, 0, 806, 0, 0, 0, 807, 0, 808, 0, 0,
    0, 809, 0, 0, 0, 0, 810, 0, 0, 0, 811, 0, 812, 0, 0, 813, 0, 814, 0, 0, 0, 815, 0, 0, 0, 816, 0, 0, 0, 0, 817, 0,
    0, 818, 0, 0, 0, 0, 819, 0, 0, 820, 0, 0, 0, 821, 0, 822, 0, 0, 0, 0, 0, 823, 0, 0, 0, 0, 0, 0, 0, 824, 0, 0,
    0, 0, 0, 0, 0, 825, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 826, 0, 0, 0, 827, 0, 828, 0, 0, 829, 0, 0, 0, 830, 0,
    0, 0, 831, 0, 832, 0, 833, 0, 0, 0, 834, 0, 0, 0, 835, 0, 0, 0, 836, 0, 837, 0, 0, 838, 0, 0, 0, 0, 839, 0, 0, 0,
    840, 0, 841, 0, 0, 0, 842, 0, 0, 0, 843, 0, 844, 0, 0, 845, 0, 0, 0, 846, 0, 0, 0, 0, 0, 0, 847, 0, 0, 0, 0, 0,
    0, 848, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 849, 0, 0, 0, 850, 0, 851, 0, 0, 852, 0, 0, 0, 853, 0, 0, 0, 854, 0,
    855, 0, 856, 0, 0, 0, 857, 0, 0, 0, 858, 0, 0, 0, 859, 0, 860, 0, 0, 861, 0, 0, 0, 0, 862, 0, 0, 0, 863, 0, 864, 0,
    0, 0, 865, 0, 0, 0, 866, 0, 867, 0, 0, 868, 0, 0, 0, 869, 0, 0, 0, 0, 0, 0, 870, 0, 0, 0, 0, 0, 0, 871, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 872, 0, 0, 0, 873, 0, 874, 0, 0, 875, 0, 0, 0, 876, 0, 0, 0,
    877, 0, 878, 0, 879, 0, 0, 0, 880, 0, 0, 0, 881, 0, 0, 0, 882, 0, 883, 0, 0, 0, 884, 0, 0, 0, 0, 0, 885, 0, 0, 0,
    886, 0, 887, 0, 0, 0, 888, 0, 889, 0, 0, 0, 0, 890, 891, 0, 0, 892, 0, 0, 0, 893, 0, 0, 0, 0, 894, 0, 0, 0, 895, 0,
    896, 0, 0, 897, 0, 0, 0, 898, 0, 0, 0, 0, 0, 899, 0, 0, 0, 900, 0, 0, 901, 0, 0, 0, 902, 0, 0, 903, 0, 0, 0, 904,
    0, 0, 905, 0, 0, 0, 906, 0, 0, 0, 0, 907, 0, 0, 0, 908, 0, 909, 0, 0, 910, 0, 0, 0, 0, 911, 0, 0, 912, 913,
};
void recomp_unit_0009_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08828000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0009[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08828000;
    case 2u: goto L_08828008;
    case 3u: goto L_08828010;
    case 4u: goto L_08828054;
    case 5u: goto L_08828078;
    case 6u: goto L_08828088;
    case 7u: goto L_0882808C;
    case 8u: goto L_08828094;
    case 9u: goto L_088280A0;
    case 10u: goto L_088280B0;
    case 11u: goto L_088280B8;
    case 12u: goto L_088280C8;
    case 13u: goto L_088280E8;
    case 14u: goto L_088280F8;
    case 15u: goto L_08828108;
    case 16u: goto L_08828114;
    case 17u: goto L_08828128;
    case 18u: goto L_08828134;
    case 19u: goto L_0882813C;
    case 20u: goto L_08828148;
    case 21u: goto L_0882816C;
    case 22u: goto L_08828188;
    case 23u: goto L_0882819C;
    case 24u: goto L_088281AC;
    case 25u: goto L_088281C8;
    case 26u: goto L_088281D4;
    case 27u: goto L_0882820C;
    case 28u: goto L_08828218;
    case 29u: goto L_08828220;
    case 30u: goto L_08828230;
    case 31u: goto L_08828254;
    case 32u: goto L_08828264;
    case 33u: goto L_08828274;
    case 34u: goto L_08828284;
    case 35u: goto L_08828294;
    case 36u: goto L_088282A0;
    case 37u: goto L_088282C4;
    case 38u: goto L_088282D0;
    case 39u: goto L_088282D8;
    case 40u: goto L_088282E4;
    case 41u: goto L_08828308;
    case 42u: goto L_08828324;
    case 43u: goto L_08828340;
    case 44u: goto L_0882835C;
    case 45u: goto L_08828370;
    case 46u: goto L_08828380;
    case 47u: goto L_088283BC;
    case 48u: goto L_088283C8;
    case 49u: goto L_088283F8;
    case 50u: goto L_08828400;
    case 51u: goto L_08828414;
    case 52u: goto L_0882841C;
    case 53u: goto L_0882842C;
    case 54u: goto L_0882843C;
    case 55u: goto L_0882847C;
    case 56u: goto L_08828488;
    case 57u: goto L_088284C0;
    case 58u: goto L_088284CC;
    case 59u: goto L_088284D4;
    case 60u: goto L_088284E4;
    case 61u: goto L_088284F4;
    case 62u: goto L_08828534;
    case 63u: goto L_08828540;
    case 64u: goto L_08828578;
    case 65u: goto L_08828584;
    case 66u: goto L_0882858C;
    case 67u: goto L_0882859C;
    case 68u: goto L_088285A8;
    case 69u: goto L_088285C0;
    case 70u: goto L_088285CC;
    case 71u: goto L_088285D4;
    case 72u: goto L_0882861C;
    case 73u: goto L_08828634;
    case 74u: goto L_0882863C;
    case 75u: goto L_0882864C;
    case 76u: goto L_0882865C;
    case 77u: goto L_08828674;
    case 78u: goto L_0882867C;
    case 79u: goto L_08828690;
    case 80u: goto L_088286A8;
    case 81u: goto L_088286B8;
    case 82u: goto L_088286C8;
    case 83u: goto L_088286D8;
    case 84u: goto L_088286E8;
    case 85u: goto L_088286F4;
    case 86u: goto L_08828708;
    case 87u: goto L_08828720;
    case 88u: goto L_08828738;
    case 89u: goto L_0882874C;
    case 90u: goto L_08828764;
    case 91u: goto L_0882877C;
    case 92u: goto L_0882878C;
    case 93u: goto L_0882879C;
    case 94u: goto L_088287A8;
    case 95u: goto L_088287C0;
    case 96u: goto L_088287CC;
    case 97u: goto L_088287E4;
    case 98u: goto L_088287FC;
    case 99u: goto L_0882880C;
    case 100u: goto L_08828818;
    case 101u: goto L_0882882C;
    case 102u: goto L_08828844;
    case 103u: goto L_0882885C;
    case 104u: goto L_08828870;
    case 105u: goto L_08828888;
    case 106u: goto L_088288A0;
    case 107u: goto L_088288B0;
    case 108u: goto L_088288C0;
    case 109u: goto L_088288CC;
    case 110u: goto L_088288DC;
    case 111u: goto L_088288F0;
    case 112u: goto L_08828908;
    case 113u: goto L_08828910;
    case 114u: goto L_0882891C;
    case 115u: goto L_08828934;
    case 116u: goto L_08828940;
    case 117u: goto L_0882894C;
    case 118u: goto L_08828950;
    case 119u: goto L_08828960;
    case 120u: goto L_0882896C;
    case 121u: goto L_08828980;
    case 122u: goto L_08828998;
    case 123u: goto L_088289B0;
    case 124u: goto L_088289C4;
    case 125u: goto L_088289DC;
    case 126u: goto L_088289F4;
    case 127u: goto L_08828A04;
    case 128u: goto L_08828A14;
    case 129u: goto L_08828A20;
    case 130u: goto L_08828A28;
    case 131u: goto L_08828A38;
    case 132u: goto L_08828A4C;
    case 133u: goto L_08828A50;
    case 134u: goto L_08828A60;
    case 135u: goto L_08828A6C;
    case 136u: goto L_08828A70;
    case 137u: goto L_08828A78;
    case 138u: goto L_08828A88;
    case 139u: goto L_08828A8C;
    case 140u: goto L_08828A9C;
    case 141u: goto L_08828AA8;
    case 142u: goto L_08828AAC;
    case 143u: goto L_08828AB8;
    case 144u: goto L_08828ABC;
    case 145u: goto L_08828AC4;
    case 146u: goto L_08828AC8;
    case 147u: goto L_08828AF4;
    case 148u: goto L_08828B0C;
    case 149u: goto L_08828B14;
    case 150u: goto L_08828B2C;
    case 151u: goto L_08828B44;
    case 152u: goto L_08828B54;
    case 153u: goto L_08828B64;
    case 154u: goto L_08828B7C;
    case 155u: goto L_08828B90;
    case 156u: goto L_08828B9C;
    case 157u: goto L_08828BAC;
    case 158u: goto L_08828BC0;
    case 159u: goto L_08828BCC;
    case 160u: goto L_08828BE4;
    case 161u: goto L_08828BFC;
    case 162u: goto L_08828C08;
    case 163u: goto L_08828C20;
    case 164u: goto L_08828C38;
    case 165u: goto L_08828C50;
    case 166u: goto L_08828C64;
    case 167u: goto L_08828C7C;
    case 168u: goto L_08828C8C;
    case 169u: goto L_08828C94;
    case 170u: goto L_08828CD4;
    case 171u: goto L_08828CE0;
    case 172u: goto L_08828CE4;
    case 173u: goto L_08828CF0;
    case 174u: goto L_08828CF8;
    case 175u: goto L_08828D30;
    case 176u: goto L_08828D40;
    case 177u: goto L_08828D48;
    case 178u: goto L_08828D54;
    case 179u: goto L_08828D6C;
    case 180u: goto L_08828DAC;
    case 181u: goto L_08828DC0;
    case 182u: goto L_08828DD4;
    case 183u: goto L_08828DEC;
    case 184u: goto L_08828E04;
    case 185u: goto L_08828E18;
    case 186u: goto L_08828E30;
    case 187u: goto L_08828E48;
    case 188u: goto L_08828E58;
    case 189u: goto L_08828E78;
    case 190u: goto L_08828E84;
    case 191u: goto L_08828E88;
    case 192u: goto L_08828E94;
    case 193u: goto L_08828EAC;
    case 194u: goto L_08828EB8;
    case 195u: goto L_08828ED0;
    case 196u: goto L_08828EE8;
    case 197u: goto L_08828EF8;
    case 198u: goto L_08828F10;
    case 199u: goto L_08828F50;
    case 200u: goto L_08828F64;
    case 201u: goto L_08828F78;
    case 202u: goto L_08828F90;
    case 203u: goto L_08828FA8;
    case 204u: goto L_08828FBC;
    case 205u: goto L_08828FD4;
    case 206u: goto L_08828FEC;
    case 207u: goto L_08828FFC;
    case 208u: goto L_0882901C;
    case 209u: goto L_08829028;
    case 210u: goto L_0882902C;
    case 211u: goto L_08829038;
    case 212u: goto L_08829048;
    case 213u: goto L_08829060;
    case 214u: goto L_08829068;
    case 215u: goto L_08829074;
    case 216u: goto L_0882908C;
    case 217u: goto L_08829094;
    case 218u: goto L_088290A0;
    case 219u: goto L_088290B8;
    case 220u: goto L_088290C8;
    case 221u: goto L_088290DC;
    case 222u: goto L_08829118;
    case 223u: goto L_0882912C;
    case 224u: goto L_08829140;
    case 225u: goto L_08829158;
    case 226u: goto L_08829170;
    case 227u: goto L_08829184;
    case 228u: goto L_0882919C;
    case 229u: goto L_088291B4;
    case 230u: goto L_088291C4;
    case 231u: goto L_088291E0;
    case 232u: goto L_088291EC;
    case 233u: goto L_088291F0;
    case 234u: goto L_088291FC;
    case 235u: goto L_08829238;
    case 236u: goto L_08829268;
    case 237u: goto L_08829298;
    case 238u: goto L_088292B4;
    case 239u: goto L_088292DC;
    case 240u: goto L_088292F0;
    case 241u: goto L_0882930C;
    case 242u: goto L_08829334;
    case 243u: goto L_08829348;
    case 244u: goto L_0882934C;
    case 245u: goto L_08829358;
    case 246u: goto L_08829360;
    case 247u: goto L_08829374;
    case 248u: goto L_08829380;
    case 249u: goto L_08829388;
    case 250u: goto L_08829398;
    case 251u: goto L_088293A8;
    case 252u: goto L_088293B0;
    case 253u: goto L_088293C0;
    case 254u: goto L_088293D4;
    case 255u: goto L_088293DC;
    case 256u: goto L_088293F0;
    case 257u: goto L_088293FC;
    case 258u: goto L_08829400;
    case 259u: goto L_0882941C;
    case 260u: goto L_08829444;
    case 261u: goto L_08829458;
    case 262u: goto L_08829464;
    case 263u: goto L_08829474;
    case 264u: goto L_08829478;
    case 265u: goto L_0882948C;
    case 266u: goto L_08829494;
    case 267u: goto L_088294A0;
    case 268u: goto L_088294B4;
    case 269u: goto L_088294B8;
    case 270u: goto L_088294D0;
    case 271u: goto L_0882951C;
    case 272u: goto L_08829550;
    case 273u: goto L_08829560;
    case 274u: goto L_0882956C;
    case 275u: goto L_08829578;
    case 276u: goto L_08829584;
    case 277u: goto L_08829590;
    case 278u: goto L_08829598;
    case 279u: goto L_088295AC;
    case 280u: goto L_088295B8;
    case 281u: goto L_088295C4;
    case 282u: goto L_088295D8;
    case 283u: goto L_088295F0;
    case 284u: goto L_08829610;
    case 285u: goto L_08829618;
    case 286u: goto L_0882961C;
    case 287u: goto L_08829634;
    case 288u: goto L_0882963C;
    case 289u: goto L_08829648;
    case 290u: goto L_08829654;
    case 291u: goto L_0882965C;
    case 292u: goto L_08829678;
    case 293u: goto L_08829690;
    case 294u: goto L_088296A4;
    case 295u: goto L_088296B4;
    case 296u: goto L_088296D4;
    case 297u: goto L_088296EC;
    case 298u: goto L_088296FC;
    case 299u: goto L_08829718;
    case 300u: goto L_08829730;
    case 301u: goto L_0882973C;
    case 302u: goto L_0882974C;
    case 303u: goto L_08829758;
    case 304u: goto L_08829764;
    case 305u: goto L_08829770;
    case 306u: goto L_08829788;
    case 307u: goto L_08829790;
    case 308u: goto L_0882979C;
    case 309u: goto L_088297B4;
    case 310u: goto L_088297BC;
    case 311u: goto L_088297D4;
    case 312u: goto L_088297E4;
    case 313u: goto L_088297F0;
    case 314u: goto L_08829804;
    case 315u: goto L_08829814;
    case 316u: goto L_0882982C;
    case 317u: goto L_0882983C;
    case 318u: goto L_08829850;
    case 319u: goto L_08829858;
    case 320u: goto L_0882985C;
    case 321u: goto L_08829870;
    case 322u: goto L_088298A8;
    case 323u: goto L_088298F0;
    case 324u: goto L_08829900;
    case 325u: goto L_0882990C;
    case 326u: goto L_08829920;
    case 327u: goto L_08829940;
    case 328u: goto L_08829950;
    case 329u: goto L_0882995C;
    case 330u: goto L_0882996C;
    case 331u: goto L_0882998C;
    case 332u: goto L_0882999C;
    case 333u: goto L_088299A4;
    case 334u: goto L_088299B4;
    case 335u: goto L_088299C8;
    case 336u: goto L_088299D4;
    case 337u: goto L_088299E0;
    case 338u: goto L_088299EC;
    case 339u: goto L_088299F8;
    case 340u: goto L_08829A04;
    case 341u: goto L_08829A18;
    case 342u: goto L_08829A20;
    case 343u: goto L_08829A2C;
    case 344u: goto L_08829A38;
    case 345u: goto L_08829A44;
    case 346u: goto L_08829A58;
    case 347u: goto L_08829A64;
    case 348u: goto L_08829A70;
    case 349u: goto L_08829A7C;
    case 350u: goto L_08829A88;
    case 351u: goto L_08829A94;
    case 352u: goto L_08829AA0;
    case 353u: goto L_08829AB4;
    case 354u: goto L_08829AC0;
    case 355u: goto L_08829AD4;
    case 356u: goto L_08829ADC;
    case 357u: goto L_08829AF0;
    case 358u: goto L_08829AF8;
    case 359u: goto L_08829B0C;
    case 360u: goto L_08829B30;
    case 361u: goto L_08829B3C;
    case 362u: goto L_08829B48;
    case 363u: goto L_08829B54;
    case 364u: goto L_08829B5C;
    case 365u: goto L_08829B64;
    case 366u: goto L_08829B74;
    case 367u: goto L_08829B84;
    case 368u: goto L_08829B94;
    case 369u: goto L_08829B9C;
    case 370u: goto L_08829BF8;
    case 371u: goto L_08829C2C;
    case 372u: goto L_08829C68;
    case 373u: goto L_08829C78;
    case 374u: goto L_08829C80;
    case 375u: goto L_08829C8C;
    case 376u: goto L_08829C9C;
    case 377u: goto L_08829CAC;
    case 378u: goto L_08829CB4;
    case 379u: goto L_08829CC0;
    case 380u: goto L_08829CD0;
    case 381u: goto L_08829CE8;
    case 382u: goto L_08829CFC;
    case 383u: goto L_08829D0C;
    case 384u: goto L_08829D20;
    case 385u: goto L_08829D30;
    case 386u: goto L_08829D38;
    case 387u: goto L_08829D4C;
    case 388u: goto L_08829D68;
    case 389u: goto L_08829D7C;
    case 390u: goto L_08829D90;
    case 391u: goto L_08829DB0;
    case 392u: goto L_08829DBC;
    case 393u: goto L_08829DCC;
    case 394u: goto L_08829DEC;
    case 395u: goto L_08829E10;
    case 396u: goto L_08829E20;
    case 397u: goto L_08829E28;
    case 398u: goto L_08829E38;
    case 399u: goto L_08829E4C;
    case 400u: goto L_08829E60;
    case 401u: goto L_08829E64;
    case 402u: goto L_08829E74;
    case 403u: goto L_08829E88;
    case 404u: goto L_08829E8C;
    case 405u: goto L_08829EB4;
    case 406u: goto L_08829EE4;
    case 407u: goto L_08829EF0;
    case 408u: goto L_08829F04;
    case 409u: goto L_08829F0C;
    case 410u: goto L_08829F20;
    case 411u: goto L_08829F34;
    case 412u: goto L_08829F44;
    case 413u: goto L_08829F60;
    case 414u: goto L_08829F90;
    case 415u: goto L_08829FA0;
    case 416u: goto L_08829FA8;
    case 417u: goto L_08829FB4;
    case 418u: goto L_08829FC4;
    case 419u: goto L_08829FD4;
    case 420u: goto L_08829FDC;
    case 421u: goto L_08829FE8;
    case 422u: goto L_08829FF8;
    case 423u: goto L_0882A000;
    case 424u: goto L_0882A008;
    case 425u: goto L_0882A018;
    case 426u: goto L_0882A024;
    case 427u: goto L_0882A034;
    case 428u: goto L_0882A044;
    case 429u: goto L_0882A04C;
    case 430u: goto L_0882A058;
    case 431u: goto L_0882A06C;
    case 432u: goto L_0882A07C;
    case 433u: goto L_0882A084;
    case 434u: goto L_0882A094;
    case 435u: goto L_0882A0A4;
    case 436u: goto L_0882A0AC;
    case 437u: goto L_0882A0B8;
    case 438u: goto L_0882A0C4;
    case 439u: goto L_0882A0D4;
    case 440u: goto L_0882A0E4;
    case 441u: goto L_0882A0F4;
    case 442u: goto L_0882A108;
    case 443u: goto L_0882A110;
    case 444u: goto L_0882A128;
    case 445u: goto L_0882A130;
    case 446u: goto L_0882A158;
    case 447u: goto L_0882A170;
    case 448u: goto L_0882A184;
    case 449u: goto L_0882A1A0;
    case 450u: goto L_0882A1E0;
    case 451u: goto L_0882A1F0;
    case 452u: goto L_0882A1F8;
    case 453u: goto L_0882A204;
    case 454u: goto L_0882A214;
    case 455u: goto L_0882A224;
    case 456u: goto L_0882A22C;
    case 457u: goto L_0882A238;
    case 458u: goto L_0882A248;
    case 459u: goto L_0882A250;
    case 460u: goto L_0882A258;
    case 461u: goto L_0882A268;
    case 462u: goto L_0882A278;
    case 463u: goto L_0882A288;
    case 464u: goto L_0882A290;
    case 465u: goto L_0882A2A0;
    case 466u: goto L_0882A2A8;
    case 467u: goto L_0882A2AC;
    case 468u: goto L_0882A2B4;
    case 469u: goto L_0882A2C8;
    case 470u: goto L_0882A2D8;
    case 471u: goto L_0882A2E0;
    case 472u: goto L_0882A2F0;
    case 473u: goto L_0882A300;
    case 474u: goto L_0882A308;
    case 475u: goto L_0882A318;
    case 476u: goto L_0882A340;
    case 477u: goto L_0882A368;
    case 478u: goto L_0882A37C;
    case 479u: goto L_0882A398;
    case 480u: goto L_0882A400;
    case 481u: goto L_0882A410;
    case 482u: goto L_0882A418;
    case 483u: goto L_0882A424;
    case 484u: goto L_0882A434;
    case 485u: goto L_0882A444;
    case 486u: goto L_0882A44C;
    case 487u: goto L_0882A458;
    case 488u: goto L_0882A468;
    case 489u: goto L_0882A470;
    case 490u: goto L_0882A478;
    case 491u: goto L_0882A488;
    case 492u: goto L_0882A494;
    case 493u: goto L_0882A4A4;
    case 494u: goto L_0882A4B4;
    case 495u: goto L_0882A4BC;
    case 496u: goto L_0882A4C8;
    case 497u: goto L_0882A4DC;
    case 498u: goto L_0882A4EC;
    case 499u: goto L_0882A4F4;
    case 500u: goto L_0882A508;
    case 501u: goto L_0882A514;
    case 502u: goto L_0882A52C;
    case 503u: goto L_0882A538;
    case 504u: goto L_0882A550;
    case 505u: goto L_0882A564;
    case 506u: goto L_0882A57C;
    case 507u: goto L_0882A590;
    case 508u: goto L_0882A5A0;
    case 509u: goto L_0882A5A8;
    case 510u: goto L_0882A5BC;
    case 511u: goto L_0882A5C8;
    case 512u: goto L_0882A5E0;
    case 513u: goto L_0882A5EC;
    case 514u: goto L_0882A604;
    case 515u: goto L_0882A618;
    case 516u: goto L_0882A630;
    case 517u: goto L_0882A644;
    case 518u: goto L_0882A654;
    case 519u: goto L_0882A65C;
    case 520u: goto L_0882A670;
    case 521u: goto L_0882A67C;
    case 522u: goto L_0882A694;
    case 523u: goto L_0882A6A0;
    case 524u: goto L_0882A6B8;
    case 525u: goto L_0882A6CC;
    case 526u: goto L_0882A6E4;
    case 527u: goto L_0882A6F8;
    case 528u: goto L_0882A708;
    case 529u: goto L_0882A710;
    case 530u: goto L_0882A724;
    case 531u: goto L_0882A730;
    case 532u: goto L_0882A748;
    case 533u: goto L_0882A754;
    case 534u: goto L_0882A76C;
    case 535u: goto L_0882A780;
    case 536u: goto L_0882A798;
    case 537u: goto L_0882A7AC;
    case 538u: goto L_0882A7BC;
    case 539u: goto L_0882A7C4;
    case 540u: goto L_0882A848;
    case 541u: goto L_0882A854;
    case 542u: goto L_0882A858;
    case 543u: goto L_0882A864;
    case 544u: goto L_0882A874;
    case 545u: goto L_0882A878;
    case 546u: goto L_0882A884;
    case 547u: goto L_0882A894;
    case 548u: goto L_0882A898;
    case 549u: goto L_0882A8A4;
    case 550u: goto L_0882A8B4;
    case 551u: goto L_0882A8B8;
    case 552u: goto L_0882A8C4;
    case 553u: goto L_0882A8D0;
    case 554u: goto L_0882A8D4;
    case 555u: goto L_0882A8E0;
    case 556u: goto L_0882A8F0;
    case 557u: goto L_0882A8F4;
    case 558u: goto L_0882A900;
    case 559u: goto L_0882A90C;
    case 560u: goto L_0882A910;
    case 561u: goto L_0882A91C;
    case 562u: goto L_0882A92C;
    case 563u: goto L_0882A930;
    case 564u: goto L_0882A93C;
    case 565u: goto L_0882A950;
    case 566u: goto L_0882A958;
    case 567u: goto L_0882A968;
    case 568u: goto L_0882A97C;
    case 569u: goto L_0882A990;
    case 570u: goto L_0882A9A4;
    case 571u: goto L_0882A9D8;
    case 572u: goto L_0882A9E0;
    case 573u: goto L_0882A9F0;
    case 574u: goto L_0882AA04;
    case 575u: goto L_0882AA18;
    case 576u: goto L_0882AA2C;
    case 577u: goto L_0882AA60;
    case 578u: goto L_0882AA70;
    case 579u: goto L_0882AA78;
    case 580u: goto L_0882AA84;
    case 581u: goto L_0882AA98;
    case 582u: goto L_0882AAAC;
    case 583u: goto L_0882AAC0;
    case 584u: goto L_0882AAD4;
    case 585u: goto L_0882AAE8;
    case 586u: goto L_0882AAFC;
    case 587u: goto L_0882AB10;
    case 588u: goto L_0882AB80;
    case 589u: goto L_0882ABB4;
    case 590u: goto L_0882ABC4;
    case 591u: goto L_0882AC18;
    case 592u: goto L_0882AC48;
    case 593u: goto L_0882AC58;
    case 594u: goto L_0882AC60;
    case 595u: goto L_0882AC6C;
    case 596u: goto L_0882AC7C;
    case 597u: goto L_0882AC8C;
    case 598u: goto L_0882AC94;
    case 599u: goto L_0882ACA0;
    case 600u: goto L_0882ACB0;
    case 601u: goto L_0882ACB8;
    case 602u: goto L_0882ACC0;
    case 603u: goto L_0882ACD0;
    case 604u: goto L_0882ACE0;
    case 605u: goto L_0882ACF0;
    case 606u: goto L_0882ACF8;
    case 607u: goto L_0882AD04;
    case 608u: goto L_0882AD18;
    case 609u: goto L_0882AD28;
    case 610u: goto L_0882AD30;
    case 611u: goto L_0882AD40;
    case 612u: goto L_0882AD50;
    case 613u: goto L_0882AD58;
    case 614u: goto L_0882AD68;
    case 615u: goto L_0882AD7C;
    case 616u: goto L_0882AD84;
    case 617u: goto L_0882AD94;
    case 618u: goto L_0882ADA8;
    case 619u: goto L_0882ADB8;
    case 620u: goto L_0882ADCC;
    case 621u: goto L_0882ADD4;
    case 622u: goto L_0882ADEC;
    case 623u: goto L_0882ADFC;
    case 624u: goto L_0882AE0C;
    case 625u: goto L_0882AE10;
    case 626u: goto L_0882AE1C;
    case 627u: goto L_0882AE30;
    case 628u: goto L_0882AE34;
    case 629u: goto L_0882AE40;
    case 630u: goto L_0882AE54;
    case 631u: goto L_0882AE58;
    case 632u: goto L_0882AE64;
    case 633u: goto L_0882AE78;
    case 634u: goto L_0882AE7C;
    case 635u: goto L_0882AE88;
    case 636u: goto L_0882AE98;
    case 637u: goto L_0882AE9C;
    case 638u: goto L_0882AEA8;
    case 639u: goto L_0882AEBC;
    case 640u: goto L_0882AEC0;
    case 641u: goto L_0882AECC;
    case 642u: goto L_0882AEDC;
    case 643u: goto L_0882AEE0;
    case 644u: goto L_0882AEEC;
    case 645u: goto L_0882AEFC;
    case 646u: goto L_0882AF00;
    case 647u: goto L_0882AF0C;
    case 648u: goto L_0882AF20;
    case 649u: goto L_0882AF34;
    case 650u: goto L_0882AF50;
    case 651u: goto L_0882AF8C;
    case 652u: goto L_0882AF9C;
    case 653u: goto L_0882AFA4;
    case 654u: goto L_0882AFB0;
    case 655u: goto L_0882AFC0;
    case 656u: goto L_0882AFD0;
    case 657u: goto L_0882AFD8;
    case 658u: goto L_0882AFE8;
    case 659u: goto L_0882B000;
    case 660u: goto L_0882B010;
    case 661u: goto L_0882B018;
    case 662u: goto L_0882B028;
    case 663u: goto L_0882B030;
    case 664u: goto L_0882B044;
    case 665u: goto L_0882B048;
    case 666u: goto L_0882B054;
    case 667u: goto L_0882B064;
    case 668u: goto L_0882B074;
    case 669u: goto L_0882B088;
    case 670u: goto L_0882B090;
    case 671u: goto L_0882B0AC;
    case 672u: goto L_0882B0B8;
    case 673u: goto L_0882B0BC;
    case 674u: goto L_0882B0D4;
    case 675u: goto L_0882B0E4;
    case 676u: goto L_0882B0F8;
    case 677u: goto L_0882B11C;
    case 678u: goto L_0882B12C;
    case 679u: goto L_0882B150;
    case 680u: goto L_0882B17C;
    case 681u: goto L_0882B188;
    case 682u: goto L_0882B198;
    case 683u: goto L_0882B1A8;
    case 684u: goto L_0882B1B8;
    case 685u: goto L_0882B1C0;
    case 686u: goto L_0882B1CC;
    case 687u: goto L_0882B1D8;
    case 688u: goto L_0882B1E8;
    case 689u: goto L_0882B204;
    case 690u: goto L_0882B214;
    case 691u: goto L_0882B224;
    case 692u: goto L_0882B24C;
    case 693u: goto L_0882B27C;
    case 694u: goto L_0882B28C;
    case 695u: goto L_0882B294;
    case 696u: goto L_0882B2A0;
    case 697u: goto L_0882B2B0;
    case 698u: goto L_0882B2C0;
    case 699u: goto L_0882B2C8;
    case 700u: goto L_0882B2D0;
    case 701u: goto L_0882B2E0;
    case 702u: goto L_0882B2F0;
    case 703u: goto L_0882B300;
    case 704u: goto L_0882B308;
    case 705u: goto L_0882B318;
    case 706u: goto L_0882B328;
    case 707u: goto L_0882B33C;
    case 708u: goto L_0882B344;
    case 709u: goto L_0882B354;
    case 710u: goto L_0882B368;
    case 711u: goto L_0882B378;
    case 712u: goto L_0882B380;
    case 713u: goto L_0882B388;
    case 714u: goto L_0882B39C;
    case 715u: goto L_0882B3AC;
    case 716u: goto L_0882B3B4;
    case 717u: goto L_0882B3C4;
    case 718u: goto L_0882B3DC;
    case 719u: goto L_0882B3E8;
    case 720u: goto L_0882B3F4;
    case 721u: goto L_0882B400;
    case 722u: goto L_0882B414;
    case 723u: goto L_0882B424;
    case 724u: goto L_0882B42C;
    case 725u: goto L_0882B440;
    case 726u: goto L_0882B454;
    case 727u: goto L_0882B464;
    case 728u: goto L_0882B474;
    case 729u: goto L_0882B480;
    case 730u: goto L_0882B488;
    case 731u: goto L_0882B490;
    case 732u: goto L_0882B4A4;
    case 733u: goto L_0882B4B4;
    case 734u: goto L_0882B4BC;
    case 735u: goto L_0882B4CC;
    case 736u: goto L_0882B4E0;
    case 737u: goto L_0882B4EC;
    case 738u: goto L_0882B500;
    case 739u: goto L_0882B510;
    case 740u: goto L_0882B518;
    case 741u: goto L_0882B528;
    case 742u: goto L_0882B530;
    case 743u: goto L_0882B548;
    case 744u: goto L_0882B558;
    case 745u: goto L_0882B564;
    case 746u: goto L_0882B580;
    case 747u: goto L_0882B59C;
    case 748u: goto L_0882B5CC;
    case 749u: goto L_0882B5DC;
    case 750u: goto L_0882B5E4;
    case 751u: goto L_0882B5F0;
    case 752u: goto L_0882B600;
    case 753u: goto L_0882B610;
    case 754u: goto L_0882B618;
    case 755u: goto L_0882B628;
    case 756u: goto L_0882B634;
    case 757u: goto L_0882B644;
    case 758u: goto L_0882B654;
    case 759u: goto L_0882B65C;
    case 760u: goto L_0882B664;
    case 761u: goto L_0882B674;
    case 762u: goto L_0882B688;
    case 763u: goto L_0882B698;
    case 764u: goto L_0882B6A0;
    case 765u: goto L_0882B6B0;
    case 766u: goto L_0882B6BC;
    case 767u: goto L_0882B6C8;
    case 768u: goto L_0882B6D4;
    case 769u: goto L_0882B6D8;
    case 770u: goto L_0882B6E0;
    case 771u: goto L_0882B6F4;
    case 772u: goto L_0882B704;
    case 773u: goto L_0882B70C;
    case 774u: goto L_0882B71C;
    case 775u: goto L_0882B72C;
    case 776u: goto L_0882B734;
    case 777u: goto L_0882B744;
    case 778u: goto L_0882B758;
    case 779u: goto L_0882B76C;
    case 780u: goto L_0882B780;
    case 781u: goto L_0882B790;
    case 782u: goto L_0882B798;
    case 783u: goto L_0882B7F0;
    case 784u: goto L_0882B7FC;
    case 785u: goto L_0882B808;
    case 786u: goto L_0882B820;
    case 787u: goto L_0882B82C;
    case 788u: goto L_0882B83C;
    case 789u: goto L_0882B84C;
    case 790u: goto L_0882B850;
    case 791u: goto L_0882B864;
    case 792u: goto L_0882B880;
    case 793u: goto L_0882B8B4;
    case 794u: goto L_0882B8C4;
    case 795u: goto L_0882B8CC;
    case 796u: goto L_0882B8D8;
    case 797u: goto L_0882B8E8;
    case 798u: goto L_0882B8F8;
    case 799u: goto L_0882B900;
    case 800u: goto L_0882B90C;
    case 801u: goto L_0882B91C;
    case 802u: goto L_0882B92C;
    case 803u: goto L_0882B934;
    case 804u: goto L_0882B93C;
    case 805u: goto L_0882B94C;
    case 806u: goto L_0882B95C;
    case 807u: goto L_0882B96C;
    case 808u: goto L_0882B974;
    case 809u: goto L_0882B984;
    case 810u: goto L_0882B998;
    case 811u: goto L_0882B9A8;
    case 812u: goto L_0882B9B0;
    case 813u: goto L_0882B9BC;
    case 814u: goto L_0882B9C4;
    case 815u: goto L_0882B9D4;
    case 816u: goto L_0882B9E4;
    case 817u: goto L_0882B9F8;
    case 818u: goto L_0882BA04;
    case 819u: goto L_0882BA18;
    case 820u: goto L_0882BA24;
    case 821u: goto L_0882BA34;
    case 822u: goto L_0882BA3C;
    case 823u: goto L_0882BA54;
    case 824u: goto L_0882BA74;
    case 825u: goto L_0882BA94;
    case 826u: goto L_0882BAC4;
    case 827u: goto L_0882BAD4;
    case 828u: goto L_0882BADC;
    case 829u: goto L_0882BAE8;
    case 830u: goto L_0882BAF8;
    case 831u: goto L_0882BB08;
    case 832u: goto L_0882BB10;
    case 833u: goto L_0882BB18;
    case 834u: goto L_0882BB28;
    case 835u: goto L_0882BB38;
    case 836u: goto L_0882BB48;
    case 837u: goto L_0882BB50;
    case 838u: goto L_0882BB5C;
    case 839u: goto L_0882BB70;
    case 840u: goto L_0882BB80;
    case 841u: goto L_0882BB88;
    case 842u: goto L_0882BB98;
    case 843u: goto L_0882BBA8;
    case 844u: goto L_0882BBB0;
    case 845u: goto L_0882BBBC;
    case 846u: goto L_0882BBCC;
    case 847u: goto L_0882BBE8;
    case 848u: goto L_0882BC04;
    case 849u: goto L_0882BC34;
    case 850u: goto L_0882BC44;
    case 851u: goto L_0882BC4C;
    case 852u: goto L_0882BC58;
    case 853u: goto L_0882BC68;
    case 854u: goto L_0882BC78;
    case 855u: goto L_0882BC80;
    case 856u: goto L_0882BC88;
    case 857u: goto L_0882BC98;
    case 858u: goto L_0882BCA8;
    case 859u: goto L_0882BCB8;
    case 860u: goto L_0882BCC0;
    case 861u: goto L_0882BCCC;
    case 862u: goto L_0882BCE0;
    case 863u: goto L_0882BCF0;
    case 864u: goto L_0882BCF8;
    case 865u: goto L_0882BD08;
    case 866u: goto L_0882BD18;
    case 867u: goto L_0882BD20;
    case 868u: goto L_0882BD2C;
    case 869u: goto L_0882BD3C;
    case 870u: goto L_0882BD58;
    case 871u: goto L_0882BD74;
    case 872u: goto L_0882BDBC;
    case 873u: goto L_0882BDCC;
    case 874u: goto L_0882BDD4;
    case 875u: goto L_0882BDE0;
    case 876u: goto L_0882BDF0;
    case 877u: goto L_0882BE00;
    case 878u: goto L_0882BE08;
    case 879u: goto L_0882BE10;
    case 880u: goto L_0882BE20;
    case 881u: goto L_0882BE30;
    case 882u: goto L_0882BE40;
    case 883u: goto L_0882BE48;
    case 884u: goto L_0882BE58;
    case 885u: goto L_0882BE70;
    case 886u: goto L_0882BE80;
    case 887u: goto L_0882BE88;
    case 888u: goto L_0882BE98;
    case 889u: goto L_0882BEA0;
    case 890u: goto L_0882BEB4;
    case 891u: goto L_0882BEB8;
    case 892u: goto L_0882BEC4;
    case 893u: goto L_0882BED4;
    case 894u: goto L_0882BEE8;
    case 895u: goto L_0882BEF8;
    case 896u: goto L_0882BF00;
    case 897u: goto L_0882BF0C;
    case 898u: goto L_0882BF1C;
    case 899u: goto L_0882BF34;
    case 900u: goto L_0882BF44;
    case 901u: goto L_0882BF50;
    case 902u: goto L_0882BF60;
    case 903u: goto L_0882BF6C;
    case 904u: goto L_0882BF7C;
    case 905u: goto L_0882BF88;
    case 906u: goto L_0882BF98;
    case 907u: goto L_0882BFAC;
    case 908u: goto L_0882BFBC;
    case 909u: goto L_0882BFC4;
    case 910u: goto L_0882BFD0;
    case 911u: goto L_0882BFE4;
    case 912u: goto L_0882BFF0;
    case 913u: goto L_0882BFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08828000:
    { const bool branch_taken = ctx.gpr[12] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 709u, 0x08827FACu>(ctx, &aot_mem); return;
      }
      goto L_08828008;
    }
L_08828008:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088280A0;
      }
      goto L_08828010;
    }
L_08828010:
    ctx.set_gpr(8, ctx.gpr[7] & 65535u);
    ctx.set_gpr(7, ctx.gpr[8] << 4u);
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(7, ctx.gpr[7] & 65535u);
    ctx.set_gpr(8, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(8, ctx.gpr[8] >> 1u);
    ctx.set_gpr(10, ctx.gpr[5] + ctx.gpr[8]);
    ctx.set_gpr(8, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(9, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(8, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, ctx.gpr[8] & 1u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, ctx.gpr[8] - ctx.gpr[11]);
    ctx.set_gpr(11, ctx.gpr[8] << 2u);
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08828094;
      }
      goto L_08828054;
    }
L_08828054:
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> (ctx.gpr[11] & 31u)));
    ctx.set_gpr(13, ctx.gpr[12] & 15u);
    ctx.set_gpr(12, ctx.gpr[13] << 4u);
    ctx.set_gpr(12, ctx.gpr[13] | ctx.gpr[12]);
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[12];
    // nop
      if (branch_taken) {
          goto L_08828088;
      }
      goto L_08828078;
    }
L_08828078:
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882808C;
      }
      goto L_08828088;
    }
L_08828088:
    ctx.set_gpr(11, ctx.gpr[12] + 0u);
    goto L_0882808C;
L_0882808C:
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08828094;
L_08828094:
    ctx.set_gpr(12, ctx.gpr[8] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    // nop
      if (branch_taken) {
          goto L_08828054;
      }
      goto L_088280A0;
    }
L_088280A0:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[8]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[8]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_088280B0;
L_088280B0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088283F8;
      }
      goto L_088280B8;
    }
L_088280B8:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0882813C;
      }
      goto L_088280C8;
    }
L_088280C8:
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(10, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[3] << 1u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(9, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08828128;
      }
      goto L_088280E8;
    }
L_088280E8:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[7] & 65535u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08828108;
      }
      goto L_088280F8;
    }
L_088280F8:
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08828114;
      }
      goto L_08828108;
    }
L_08828108:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    goto L_08828114;
L_08828114:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08828128;
L_08828128:
    ctx.set_gpr(5, ctx.gpr[8] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088280E8;
      }
      goto L_08828134;
    }
L_08828134:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088281D4;
      }
      goto L_0882813C;
    }
L_0882813C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088281D4;
      }
      goto L_08828148;
    }
L_08828148:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[8]);
    ctx.set_gpr(10, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[8] << 1u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(9, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088281C8;
      }
      goto L_0882816C;
    }
L_0882816C:
    ctx.set_gpr(11, ctx.gpr[7] & 65535u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(6, ctx.gpr[5] << 8u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0882819C;
      }
      goto L_08828188;
    }
L_08828188:
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088281AC;
      }
      goto L_0882819C;
    }
L_0882819C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-2));
    goto L_088281AC;
L_088281AC:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(-1)));
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_088281C8;
L_088281C8:
    ctx.set_gpr(5, ctx.gpr[8] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882816C;
      }
      goto L_088281D4;
    }
L_088281D4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(5, ctx.gpr[5] << 1u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] >> 3u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088283F8;
      }
      goto L_0882820C;
    }
L_0882820C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088283F8;
      }
      goto L_08828218;
    }
L_08828218:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088283F8;
      }
      goto L_08828220;
    }
L_08828220:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088282D8;
      }
      goto L_08828230;
    }
L_08828230:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(7, ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_gpr(10, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_gpr(9, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088282C4;
      }
      goto L_08828254;
    }
L_08828254:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(-2)));
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08828294;
      }
      goto L_08828264;
    }
L_08828264:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08828294;
      }
      goto L_08828274;
    }
L_08828274:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08828294;
      }
      goto L_08828284;
    }
L_08828284:
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088282A0;
      }
      goto L_08828294;
    }
L_08828294:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    goto L_088282A0;
L_088282A0:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(-1)));
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(-2)));
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-2), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_088282C4;
L_088282C4:
    ctx.set_gpr(5, ctx.gpr[8] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08828254;
      }
      goto L_088282D0;
    }
L_088282D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088283C8;
      }
      goto L_088282D8;
    }
L_088282D8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088283C8;
      }
      goto L_088282E4;
    }
L_088282E4:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(7, ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_gpr(10, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[3] << 3u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_gpr(9, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088283BC;
      }
      goto L_08828308;
    }
L_08828308:
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(-5)));
    ctx.set_gpr(5, ctx.gpr[5] << 8u);
    ctx.set_gpr(5, ctx.gpr[7] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08828370;
      }
      goto L_08828324;
    }
L_08828324:
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(-2)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(-3)));
    ctx.set_gpr(5, ctx.gpr[5] << 8u);
    ctx.set_gpr(5, ctx.gpr[7] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08828370;
      }
      goto L_08828340;
    }
L_08828340:
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(7, ctx.gpr[5] << 8u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08828370;
      }
      goto L_0882835C;
    }
L_0882835C:
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08828380;
      }
      goto L_08828370;
    }
L_08828370:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-2));
    goto L_08828380;
L_08828380:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(-1)));
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(-2)));
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-2), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(-3)));
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(-4)));
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(-5)));
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-5), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-6));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-6));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_088283BC;
L_088283BC:
    ctx.set_gpr(5, ctx.gpr[8] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08828308;
      }
      goto L_088283C8;
    }
L_088283C8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] >> 3u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_088283F8;
L_088283F8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08828400:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088284C0;
      }
      goto L_08828414;
    }
L_08828414:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088284C0;
      }
      goto L_0882841C;
    }
L_0882841C:
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088284C0;
      }
      goto L_0882842C;
    }
L_0882842C:
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882847C;
      }
      goto L_0882843C;
    }
L_0882843C:
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(9, (ctx.gpr[9] >> 3u) & 0x0000001Fu);
    ctx.set_gpr(10, ctx.gpr[9] << 10u);
    ctx.set_gpr(9, (ctx.gpr[12] >> 3u) & 0x0000001Fu);
    ctx.set_gpr(9, ctx.gpr[9] << 5u);
    ctx.set_gpr(10, ctx.gpr[10] | ctx.gpr[9]);
    ctx.set_gpr(9, (ctx.gpr[11] >> 3u) & 0x0000001Fu);
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[10]);
    ctx.set_gpr(9, ctx.gpr[6] + ctx.gpr[9]);
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_0882847C;
L_0882847C:
    ctx.set_gpr(9, ctx.gpr[8] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882843C;
      }
      goto L_08828488;
    }
L_08828488:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, ctx.gpr[3] >> 3u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088285CC;
      }
      goto L_088284C0;
    }
L_088284C0:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08828578;
      }
      goto L_088284CC;
    }
L_088284CC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08828578;
      }
      goto L_088284D4;
    }
L_088284D4:
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08828578;
      }
      goto L_088284E4;
    }
L_088284E4:
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08828534;
      }
      goto L_088284F4;
    }
L_088284F4:
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(9, (ctx.gpr[9] >> 3u) & 0x0000001Fu);
    ctx.set_gpr(10, ctx.gpr[9] << 10u);
    ctx.set_gpr(9, (ctx.gpr[12] >> 3u) & 0x0000001Fu);
    ctx.set_gpr(9, ctx.gpr[9] << 5u);
    ctx.set_gpr(10, ctx.gpr[10] | ctx.gpr[9]);
    ctx.set_gpr(9, (ctx.gpr[11] >> 3u) & 0x0000001Fu);
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[10]);
    ctx.set_gpr(9, ctx.gpr[6] + ctx.gpr[9]);
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08828534;
L_08828534:
    ctx.set_gpr(9, ctx.gpr[8] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_088284F4;
      }
      goto L_08828540;
    }
L_08828540:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, ctx.gpr[3] >> 3u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088285CC;
      }
      goto L_08828578;
    }
L_08828578:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088285CC;
      }
      goto L_08828584;
    }
L_08828584:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088285CC;
      }
      goto L_0882858C;
    }
L_0882858C:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088285CC;
      }
      goto L_0882859C;
    }
L_0882859C:
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088285C0;
      }
      goto L_088285A8;
    }
L_088285A8:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[7] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_088285C0;
L_088285C0:
    ctx.set_gpr(4, ctx.gpr[8] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088285A8;
      }
      goto L_088285CC;
    }
L_088285CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088285D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(284)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x0882861Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882861Cu) goto L_0882861C;
    return;
L_0882861C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08828634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 100u, 0x0883CBF0u>(ctx, &aot_mem) && ctx.pc == 0x08828634u) goto L_08828634;
    return;
L_08828634:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088291FC;
      }
      goto L_0882863C;
    }
L_0882863C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(231)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08828A28;
      }
      goto L_0882864C;
    }
L_0882864C:
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(288)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x0882865Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882865Cu) goto L_0882865C;
    return;
L_0882865C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32552)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32544)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08828674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 106u, 0x0883CC54u>(ctx, &aot_mem) && ctx.pc == 0x08828674u) goto L_08828674;
    return;
L_08828674:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088286B8;
      }
      goto L_0882867C;
    }
L_0882867C:
    ctx.set_gpr(20, 16368u << 16u);
    ctx.set_gpr(21, 0u + 0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(31, 0x08828690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08828690u) goto L_08828690;
    return;
L_08828690:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088286A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x088286A8u) goto L_088286A8;
    return;
L_088286A8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088286C8;
      }
      goto L_088286B8;
    }
L_088286B8:
    ctx.set_gpr(20, 16368u << 16u);
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[20] + 0u);
    goto L_088286C8;
L_088286C8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(31, 0x088286D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x088286D8u) goto L_088286D8;
    return;
L_088286D8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(292), ctx.gpr[2]);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882879C;
      }
      goto L_088286E8;
    }
L_088286E8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088286F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x088286F4u) goto L_088286F4;
    return;
L_088286F4:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(31, 0x08828708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08828708u) goto L_08828708;
    return;
L_08828708:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08828720u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08828720u) goto L_08828720;
    return;
L_08828720:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08828738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x08828738u) goto L_08828738;
    return;
L_08828738:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(31, 0x0882874Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882874Cu) goto L_0882874C;
    return;
L_0882874C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08828764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08828764u) goto L_08828764;
    return;
L_08828764:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882877Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0882877Cu) goto L_0882877C;
    return;
L_0882877C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882878Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 144u, 0x0881CB2Cu>(ctx, &aot_mem) && ctx.pc == 0x0882878Cu) goto L_0882878C;
    return;
L_0882878C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(292)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[19]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0882879C;
L_0882879C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088286E8;
      }
      goto L_088287A8;
    }
L_088287A8:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 96u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 128u);
    ctx.set_gpr(3, ctx.gpr[8] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088291FC;
      }
      goto L_088287C0;
    }
L_088287C0:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(284)));
    ctx.set_gpr(31, 0x088287CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x088287CCu) goto L_088287CC;
    return;
L_088287CC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088287E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x088287E4u) goto L_088287E4;
    return;
L_088287E4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(31, 0x088287FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x088287FCu) goto L_088287FC;
    return;
L_088287FC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(300), ctx.gpr[2]);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088288C0;
      }
      goto L_0882880C;
    }
L_0882880C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08828818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08828818u) goto L_08828818;
    return;
L_08828818:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(31, 0x0882882Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882882Cu) goto L_0882882C;
    return;
L_0882882C:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08828844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08828844u) goto L_08828844;
    return;
L_08828844:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882885Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x0882885Cu) goto L_0882885C;
    return;
L_0882885C:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(31, 0x08828870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08828870u) goto L_08828870;
    return;
L_08828870:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08828888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08828888u) goto L_08828888;
    return;
L_08828888:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088288A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x088288A0u) goto L_088288A0;
    return;
L_088288A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088288B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 144u, 0x0881CB2Cu>(ctx, &aot_mem) && ctx.pc == 0x088288B0u) goto L_088288B0;
    return;
L_088288B0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[19]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_088288C0;
L_088288C0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882880C;
      }
      goto L_088288CC;
    }
L_088288CC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(31, 0x088288DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x088288DCu) goto L_088288DC;
    return;
L_088288DC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(296), ctx.gpr[2]);
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(288)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x088288F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x088288F0u) goto L_088288F0;
    return;
L_088288F0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32552)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32544)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08828908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 106u, 0x0883CC54u>(ctx, &aot_mem) && ctx.pc == 0x08828908u) goto L_08828908;
    return;
L_08828908:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08828940;
      }
      goto L_08828910;
    }
L_08828910:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x0882891Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882891Cu) goto L_0882891C;
    return;
L_0882891C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08828934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08828934u) goto L_08828934;
    return;
L_08828934:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08828950;
      }
      goto L_08828940;
    }
L_08828940:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(284)));
    ctx.set_gpr(31, 0x0882894Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882894Cu) goto L_0882894C;
    return;
L_0882894C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_08828950;
L_08828950:
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08828A14;
      }
      goto L_08828960;
    }
L_08828960:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0882896Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882896Cu) goto L_0882896C;
    return;
L_0882896C:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(20, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(31, 0x08828980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08828980u) goto L_08828980;
    return;
L_08828980:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08828998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08828998u) goto L_08828998;
    return;
L_08828998:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088289B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x088289B0u) goto L_088289B0;
    return;
L_088289B0:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(20, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(31, 0x088289C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x088289C4u) goto L_088289C4;
    return;
L_088289C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x088289DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x088289DCu) goto L_088289DC;
    return;
L_088289DC:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088289F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x088289F4u) goto L_088289F4;
    return;
L_088289F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08828A04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 144u, 0x0881CB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08828A04u) goto L_08828A04;
    return;
L_08828A04:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(296)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[19]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08828A14;
L_08828A14:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08828960;
      }
      goto L_08828A20;
    }
L_08828A20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088291FC;
      }
      goto L_08828A28;
    }
L_08828A28:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(230)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08828A6C;
      }
      goto L_08828A38;
    }
L_08828A38:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(316)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(317)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08828A50;
      }
      goto L_08828A4C;
    }
L_08828A4C:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_08828A50;
L_08828A50:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(318)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08828A70;
      }
      goto L_08828A60;
    }
L_08828A60:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08828A70;
      }
      goto L_08828A6C;
    }
L_08828A6C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(319)));
    goto L_08828A70;
L_08828A70:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08828A88;
      }
      goto L_08828A78;
    }
L_08828A78:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(20, ctx.gpr[2] - ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08828A8C;
      }
      goto L_08828A88;
    }
L_08828A88:
    ctx.set_gpr(20, 0u + 0u);
    goto L_08828A8C;
L_08828A8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[2] & 1024u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08828AAC;
      }
      goto L_08828A9C;
    }
L_08828A9C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08828AAC;
      }
      goto L_08828AA8;
    }
L_08828AA8:
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(5));
    goto L_08828AAC;
L_08828AAC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08828ABC;
      }
      goto L_08828AB8;
    }
L_08828AB8:
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(8));
    goto L_08828ABC;
L_08828ABC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08828AC8;
      }
      goto L_08828AC4;
    }
L_08828AC4:
    ctx.set_gpr(20, 0u + 0u);
    goto L_08828AC8;
L_08828AC8:
    ctx.set_gpr(2, ctx.gpr[20] & 255u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(280), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(22, ctx.gpr[3] << (ctx.gpr[2] & 31u));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(288)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08828AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08828AF4u) goto L_08828AF4;
    return;
L_08828AF4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32552)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32544)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08828B0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 106u, 0x0883CC54u>(ctx, &aot_mem) && ctx.pc == 0x08828B0Cu) goto L_08828B0C;
    return;
L_08828B0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08828B54;
      }
      goto L_08828B14;
    }
L_08828B14:
    ctx.set_gpr(23, 16368u << 16u);
    ctx.set_gpr(30, 0u + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(284)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(31, 0x08828B2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08828B2Cu) goto L_08828B2C;
    return;
L_08828B2C:
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08828B44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08828B44u) goto L_08828B44;
    return;
L_08828B44:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08828B64;
      }
      goto L_08828B54;
    }
L_08828B54:
    ctx.set_gpr(23, 16368u << 16u);
    ctx.set_gpr(30, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(21, ctx.gpr[23] + 0u);
    goto L_08828B64;
L_08828B64:
    ctx.set_gpr(2, ctx.gpr[22] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08828B7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x08828B7Cu) goto L_08828B7C;
    return;
L_08828B7C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(304), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] & 1152u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08828D48;
      }
      goto L_08828B90;
    }
L_08828B90:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08828BC0;
      }
      goto L_08828B9C;
    }
L_08828B9C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(512));
    ctx.set_gpr(31, 0x08828BACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x08828BACu) goto L_08828BAC;
    return;
L_08828BAC:
    ctx.set_gpr(4, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08828BC0;
L_08828BC0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08828B9C;
      }
      goto L_08828BCC;
    }
L_08828BCC:
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08828BE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08828BE4u) goto L_08828BE4;
    return;
L_08828BE4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08828CE4;
      }
      goto L_08828BFC;
    }
L_08828BFC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08828C08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08828C08u) goto L_08828C08;
    return;
L_08828C08:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08828C20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08828C20u) goto L_08828C20;
    return;
L_08828C20:
    ctx.set_gpr(7, 16496u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08828C38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08828C38u) goto L_08828C38;
    return;
L_08828C38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08828C50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x08828C50u) goto L_08828C50;
    return;
L_08828C50:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[22] << 8u);
    ctx.set_gpr(31, 0x08828C64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 97u, 0x0883CBC4u>(ctx, &aot_mem) && ctx.pc == 0x08828C64u) goto L_08828C64;
    return;
L_08828C64:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08828C7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08828C7Cu) goto L_08828C7C;
    return;
L_08828C7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08828C8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 144u, 0x0881CB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08828C8Cu) goto L_08828C8C;
    return;
L_08828C8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08828CD4;
      }
      goto L_08828C94;
    }
L_08828C94:
    ctx.set_gpr(8, ctx.gpr[16] & 65535u);
    ctx.set_gpr(3, ctx.gpr[8] << 8u);
    ctx.set_gpr(3, ctx.gpr[8] | ctx.gpr[3]);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> (ctx.gpr[20] & 31u)));
    ctx.set_gpr(8, ctx.gpr[19] & ctx.gpr[8]);
    ctx.set_gpr(9, ctx.gpr[8] << 2u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(10, ctx.gpr[8] + ctx.gpr[9]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(8, ctx.gpr[19] >> (ctx.gpr[8] & 31u));
    ctx.set_gpr(9, ctx.gpr[8] << 1u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[9]);
    rt.memory().aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08828CD4;
L_08828CD4:
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08828C94;
      }
      goto L_08828CE0;
    }
L_08828CE0:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08828CE4;
L_08828CE4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08828BFC;
      }
      goto L_08828CF0;
    }
L_08828CF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08828D30;
      }
      goto L_08828CF8;
    }
L_08828CF8:
    ctx.set_gpr(3, 0u | 65535u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> (ctx.gpr[20] & 31u)));
    ctx.set_gpr(8, ctx.gpr[19] & ctx.gpr[8]);
    ctx.set_gpr(9, ctx.gpr[8] << 2u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(10, ctx.gpr[8] + ctx.gpr[9]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(8, ctx.gpr[19] >> (ctx.gpr[8] & 31u));
    ctx.set_gpr(9, ctx.gpr[8] << 1u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[9]);
    rt.memory().aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08828D30;
L_08828D30:
    ctx.set_gpr(3, ctx.gpr[22] << 8u);
    ctx.set_gpr(3, ctx.gpr[19] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08828CF8;
      }
      goto L_08828D40;
    }
L_08828D40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08828E94;
      }
      goto L_08828D48;
    }
L_08828D48:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08828E88;
      }
      goto L_08828D54;
    }
L_08828D54:
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(512));
    ctx.set_gpr(31, 0x08828D6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x08828D6Cu) goto L_08828D6C;
    return;
L_08828D6C:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(3, ctx.gpr[8] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[20] << 2u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4936));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] >> 4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[3]);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08828E78;
      }
      goto L_08828DAC;
    }
L_08828DAC:
    ctx.set_gpr(3, ctx.gpr[19] << 8u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08828DC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 97u, 0x0883CBC4u>(ctx, &aot_mem) && ctx.pc == 0x08828DC0u) goto L_08828DC0;
    return;
L_08828DC0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[3]);
    ctx.set_gpr(4, 0u | 65535u);
    ctx.set_gpr(31, 0x08828DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08828DD4u) goto L_08828DD4;
    return;
L_08828DD4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08828DECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08828DECu) goto L_08828DEC;
    return;
L_08828DEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08828E04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x08828E04u) goto L_08828E04;
    return;
L_08828E04:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[3]);
    ctx.set_gpr(4, 0u | 65535u);
    ctx.set_gpr(31, 0x08828E18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08828E18u) goto L_08828E18;
    return;
L_08828E18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(31, 0x08828E30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08828E30u) goto L_08828E30;
    return;
L_08828E30:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08828E48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08828E48u) goto L_08828E48;
    return;
L_08828E48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08828E58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 144u, 0x0881CB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08828E58u) goto L_08828E58;
    return;
L_08828E58:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(3, ctx.gpr[8] + ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[19] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[8]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08828E78;
L_08828E78:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08828DAC;
      }
      goto L_08828E84;
    }
L_08828E84:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08828E88;
L_08828E88:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08828D54;
      }
      goto L_08828E94;
    }
L_08828E94:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 96u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 128u);
    ctx.set_gpr(3, ctx.gpr[8] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088291FC;
      }
      goto L_08828EAC;
    }
L_08828EAC:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(284)));
    ctx.set_gpr(31, 0x08828EB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08828EB8u) goto L_08828EB8;
    return;
L_08828EB8:
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08828ED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08828ED0u) goto L_08828ED0;
    return;
L_08828ED0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(31, 0x08828EE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x08828EE8u) goto L_08828EE8;
    return;
L_08828EE8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(312), ctx.gpr[2]);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882902C;
      }
      goto L_08828EF8;
    }
L_08828EF8:
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(512));
    ctx.set_gpr(31, 0x08828F10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x08828F10u) goto L_08828F10;
    return;
L_08828F10:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(312)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, ctx.gpr[8] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4936));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] >> 4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882901C;
      }
      goto L_08828F50;
    }
L_08828F50:
    ctx.set_gpr(3, ctx.gpr[19] << 8u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08828F64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 97u, 0x0883CBC4u>(ctx, &aot_mem) && ctx.pc == 0x08828F64u) goto L_08828F64;
    return;
L_08828F64:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[3]);
    ctx.set_gpr(4, 0u | 65535u);
    ctx.set_gpr(31, 0x08828F78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08828F78u) goto L_08828F78;
    return;
L_08828F78:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08828F90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08828F90u) goto L_08828F90;
    return;
L_08828F90:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08828FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x08828FA8u) goto L_08828FA8;
    return;
L_08828FA8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[3]);
    ctx.set_gpr(4, 0u | 65535u);
    ctx.set_gpr(31, 0x08828FBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08828FBCu) goto L_08828FBC;
    return;
L_08828FBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08828FD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08828FD4u) goto L_08828FD4;
    return;
L_08828FD4:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08828FECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08828FECu) goto L_08828FEC;
    return;
L_08828FEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08828FFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 144u, 0x0881CB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08828FFCu) goto L_08828FFC;
    return;
L_08828FFC:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(312)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, ctx.gpr[8] + ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[19] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[8]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0882901C;
L_0882901C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08828F50;
      }
      goto L_08829028;
    }
L_08829028:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0882902C;
L_0882902C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08828EF8;
      }
      goto L_08829038;
    }
L_08829038:
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(288)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08829048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08829048u) goto L_08829048;
    return;
L_08829048:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32552)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32544)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08829060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 106u, 0x0883CC54u>(ctx, &aot_mem) && ctx.pc == 0x08829060u) goto L_08829060;
    return;
L_08829060:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08829094;
      }
      goto L_08829068;
    }
L_08829068:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08829074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08829074u) goto L_08829074;
    return;
L_08829074:
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882908Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x0882908Cu) goto L_0882908C;
    return;
L_0882908C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088290A0;
      }
      goto L_08829094;
    }
L_08829094:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(284)));
    ctx.set_gpr(31, 0x088290A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x088290A0u) goto L_088290A0;
    return;
L_088290A0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(31, 0x088290B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x088290B8u) goto L_088290B8;
    return;
L_088290B8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(308), ctx.gpr[2]);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088291F0;
      }
      goto L_088290C8;
    }
L_088290C8:
    ctx.set_gpr(23, ctx.gpr[16] << 2u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(512));
    ctx.set_gpr(31, 0x088290DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x088290DCu) goto L_088290DC;
    return;
L_088290DC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(308)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] << 2u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4936));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] >> 4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[3]);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088291E0;
      }
      goto L_08829118;
    }
L_08829118:
    ctx.set_gpr(3, ctx.gpr[19] << 8u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x0882912Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 97u, 0x0883CBC4u>(ctx, &aot_mem) && ctx.pc == 0x0882912Cu) goto L_0882912C;
    return;
L_0882912C:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
    ctx.set_gpr(4, 0u | 65535u);
    ctx.set_gpr(31, 0x08829140u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08829140u) goto L_08829140;
    return;
L_08829140:
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08829158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08829158u) goto L_08829158;
    return;
L_08829158:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08829170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x08829170u) goto L_08829170;
    return;
L_08829170:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    ctx.set_gpr(4, 0u | 65535u);
    ctx.set_gpr(31, 0x08829184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08829184u) goto L_08829184;
    return;
L_08829184:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[30] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x0882919Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0882919Cu) goto L_0882919C;
    return;
L_0882919C:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088291B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x088291B4u) goto L_088291B4;
    return;
L_088291B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088291C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 144u, 0x0881CB2Cu>(ctx, &aot_mem) && ctx.pc == 0x088291C4u) goto L_088291C4;
    return;
L_088291C4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(308)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[23]);
    ctx.set_gpr(4, ctx.gpr[19] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_088291E0;
L_088291E0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08829118;
      }
      goto L_088291EC;
    }
L_088291EC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_088291F0;
L_088291F0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088290C8;
      }
      goto L_088291FC;
    }
L_088291FC:
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
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08829238:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, ctx.gpr[2] << 8u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08829268:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, ctx.gpr[2] << 8u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08829298:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[2] << 8u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088292B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x088292DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 683u, 0x08822C0Cu>(ctx, &aot_mem) && ctx.pc == 0x088292DCu) goto L_088292DC;
    return;
L_088292DC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088292F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 49u, 0x08820378u>(ctx, &aot_mem) && ctx.pc == 0x088292F0u) goto L_088292F0;
    return;
L_088292F0:
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
L_0882930C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882934C;
      }
      goto L_08829334;
    }
L_08829334:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(31, 0x08829348u);
    // nop
    goto L_088292B4;
L_08829348:
    ctx.set_gpr(18, ctx.gpr[18] - ctx.gpr[17]);
    goto L_0882934C;
L_0882934C:
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08829334;
      }
      goto L_08829358;
    }
L_08829358:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08829374;
      }
      goto L_08829360;
    }
L_08829360:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08829374u);
    // nop
    goto L_088292B4;
L_08829374:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08829380u);
    // nop
    goto L_0882941C;
L_08829380:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088293FC;
      }
      goto L_08829388;
    }
L_08829388:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(3, ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088293A8;
      }
      goto L_08829398;
    }
L_08829398:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] & 512u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088293C0;
      }
      goto L_088293A8;
    }
L_088293A8:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088293DC;
      }
      goto L_088293B0;
    }
L_088293B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] & 1024u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088293DC;
      }
      goto L_088293C0;
    }
L_088293C0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4968));
    ctx.set_gpr(31, 0x088293D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 194u, 0x08820D60u>(ctx, &aot_mem) && ctx.pc == 0x088293D4u) goto L_088293D4;
    return;
L_088293D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088293F0;
      }
      goto L_088293DC;
    }
L_088293DC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4968));
    ctx.set_gpr(31, 0x088293F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 191u, 0x08820D1Cu>(ctx, &aot_mem) && ctx.pc == 0x088293F0u) goto L_088293F0;
    return;
L_088293F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08829400;
      }
      goto L_088293FC;
    }
L_088293FC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08829400;
L_08829400:
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
L_0882941C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(2, ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08829464;
      }
      goto L_08829444;
    }
L_08829444:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[2] & 768u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(768));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08829478;
      }
      goto L_08829458;
    }
L_08829458:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08829478;
      }
      goto L_08829464;
    }
L_08829464:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] & 2048u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08829478;
      }
      goto L_08829474;
    }
L_08829474:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08829478;
L_08829478:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0882948Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 683u, 0x08822C0Cu>(ctx, &aot_mem) && ctx.pc == 0x0882948Cu) goto L_0882948C;
    return;
L_0882948C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088294B4;
      }
      goto L_08829494;
    }
L_08829494:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088294A0u);
    // nop
    goto L_08829238;
L_088294A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(2, ctx.gpr[2] ^ ctx.gpr[3]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088294B8;
      }
      goto L_088294B4;
    }
L_088294B4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_088294B8;
L_088294B8:
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
L_088294D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-160));
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
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(22, ctx.gpr[7] + 0u);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
    ctx.set_gpr(30, ctx.gpr[9] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08829814;
      }
      goto L_0882951C;
    }
L_0882951C:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[22] - ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882974C;
      }
      goto L_08829550;
    }
L_08829550:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08829560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 260u, 0x088395F8u>(ctx, &aot_mem) && ctx.pc == 0x08829560u) goto L_08829560;
    return;
L_08829560:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882963C;
      }
      goto L_0882956C;
    }
L_0882956C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0882963C;
      }
      goto L_08829578;
    }
L_08829578:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08829598;
      }
      goto L_08829584;
    }
L_08829584:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08829590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x08829590u) goto L_08829590;
    return;
L_08829590:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088295AC;
      }
      goto L_08829598;
    }
L_08829598:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4980));
    ctx.set_gpr(31, 0x088295ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x088295ACu) goto L_088295AC;
    return;
L_088295AC:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x088295B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 211u, 0x08839310u>(ctx, &aot_mem) && ctx.pc == 0x088295B8u) goto L_088295B8;
    return;
L_088295B8:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088295F0;
      }
      goto L_088295C4;
    }
L_088295C4:
    ctx.set_gpr(17, ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088295D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x088295D8u) goto L_088295D8;
    return;
L_088295D8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088295F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x088295F0u) goto L_088295F0;
    return;
L_088295F0:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[18]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[18] - ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[22] - ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, ctx.gpr[17] < static_cast<std::uint32_t>(31) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08829618;
      }
      goto L_08829610;
    }
L_08829610:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882961C;
      }
      goto L_08829618;
    }
L_08829618:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(31));
    goto L_0882961C;
L_0882961C:
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[19]);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4980));
    ctx.set_gpr(31, 0x08829634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08829634u) goto L_08829634;
    return;
L_08829634:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08829758;
      }
      goto L_0882963C;
    }
L_0882963C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08829654;
      }
      goto L_08829648;
    }
L_08829648:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0882974C;
      }
      goto L_08829654;
    }
L_08829654:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088296B4;
      }
      goto L_0882965C;
    }
L_0882965C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08829678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x08829678u) goto L_08829678;
    return;
L_08829678:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[19]);
    ctx.set_gpr(6, ctx.gpr[17] - ctx.gpr[19]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x08829690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08829690u) goto L_08829690;
    return;
L_08829690:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088296A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x088296A4u) goto L_088296A4;
    return;
L_088296A4:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[17]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08829730;
      }
      goto L_088296B4;
    }
L_088296B4:
    ctx.set_gpr(23, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x088296D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x088296D4u) goto L_088296D4;
    return;
L_088296D4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088296ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x088296ECu) goto L_088296EC;
    return;
L_088296EC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x088296FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x088296FCu) goto L_088296FC;
    return;
L_088296FC:
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[17]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(6, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x08829718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08829718u) goto L_08829718;
    return;
L_08829718:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[17]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08829730;
L_08829730:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08829758;
      }
      goto L_0882973C;
    }
L_0882973C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    goto L_0882974C;
L_0882974C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08829550;
      }
      goto L_08829758;
    }
L_08829758:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088297E4;
      }
      goto L_08829764;
    }
L_08829764:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-5));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08829790;
      }
      goto L_08829770;
    }
L_08829770:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5012));
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(31, 0x08829788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08829788u) goto L_08829788;
    return;
L_08829788:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088297D4;
      }
      goto L_08829790;
    }
L_08829790:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088297BC;
      }
      goto L_0882979C;
    }
L_0882979C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5064));
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(31, 0x088297B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x088297B4u) goto L_088297B4;
    return;
L_088297B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088297D4;
      }
      goto L_088297BC;
    }
L_088297BC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5112));
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(31, 0x088297D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x088297D4u) goto L_088297D4;
    return;
L_088297D4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(31, 0x088297E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x088297E4u) goto L_088297E4;
    return;
L_088297E4:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x088297F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 211u, 0x08839310u>(ctx, &aot_mem) && ctx.pc == 0x088297F0u) goto L_088297F0;
    return;
L_088297F0:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08829804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x08829804u) goto L_08829804;
    return;
L_08829804:
    ctx.set_gpr(20, ctx.gpr[18] + 0u);
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08829870;
      }
      goto L_08829814;
    }
L_08829814:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5160));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0882982Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0882982Cu) goto L_0882982C;
    return;
L_0882982C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x0882983Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882983Cu) goto L_0882983C;
    return;
L_0882983C:
    ctx.set_gpr(2, 0u - ctx.gpr[20]);
    ctx.set_gpr(6, ctx.gpr[22] - ctx.gpr[2]);
    ctx.set_gpr(1, ctx.gpr[6] < static_cast<std::uint32_t>(31) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08829858;
      }
      goto L_08829850;
    }
L_08829850:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882985C;
      }
      goto L_08829858;
    }
L_08829858:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(31));
    goto L_0882985C;
L_0882985C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4980));
    ctx.set_gpr(31, 0x08829870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08829870u) goto L_08829870;
    return;
L_08829870:
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088298A8:
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
    ctx.set_gpr(30, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08829900;
      }
      goto L_088298F0;
    }
L_088298F0:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5196));
    ctx.set_gpr(31, 0x08829900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x08829900u) goto L_08829900;
    return;
L_08829900:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(13));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08829920;
      }
      goto L_0882990C;
    }
L_0882990C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5216));
    ctx.set_gpr(31, 0x08829920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x08829920u) goto L_08829920;
    return;
L_08829920:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[2] | 1u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(31, 0x08829940u);
    // nop
    goto L_088292B4;
L_08829940:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08829950u);
    // nop
    goto L_0882930C;
L_08829950:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x0882995Cu);
    // nop
    goto L_08829238;
L_0882995C:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x0882996Cu);
    // nop
    goto L_08829238;
L_0882996C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(17, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(73)));
    ctx.set_gpr(22, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(74)));
    ctx.set_gpr(23, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(75)));
    ctx.set_gpr(16, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088299B4;
      }
      goto L_0882998C;
    }
L_0882998C:
    ctx.set_gpr(1, 32768u << 16u);
    ctx.set_gpr(1, ctx.gpr[20] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088299B4;
      }
      goto L_0882999C;
    }
L_0882999C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088299B4;
      }
      goto L_088299A4;
    }
L_088299A4:
    ctx.set_gpr(1, 32768u << 16u);
    ctx.set_gpr(1, ctx.gpr[19] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_088299C8;
      }
      goto L_088299B4;
    }
L_088299B4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5236));
    ctx.set_gpr(31, 0x088299C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x088299C8u) goto L_088299C8;
    return;
L_088299C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08829A18;
      }
      goto L_088299D4;
    }
L_088299D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08829A18;
      }
      goto L_088299E0;
    }
L_088299E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08829A18;
      }
      goto L_088299EC;
    }
L_088299EC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08829A18;
      }
      goto L_088299F8;
    }
L_088299F8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08829A18;
      }
      goto L_08829A04;
    }
L_08829A04:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5264));
    ctx.set_gpr(31, 0x08829A18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x08829A18u) goto L_08829A18;
    return;
L_08829A18:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08829A44;
      }
      goto L_08829A20;
    }
L_08829A20:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08829A44;
      }
      goto L_08829A2C;
    }
L_08829A2C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08829A44;
      }
      goto L_08829A38;
    }
L_08829A38:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08829A58;
      }
      goto L_08829A44;
    }
L_08829A44:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5292));
    ctx.set_gpr(31, 0x08829A58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x08829A58u) goto L_08829A58;
    return;
L_08829A58:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08829A70;
      }
      goto L_08829A64;
    }
L_08829A64:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08829AA0;
      }
      goto L_08829A70;
    }
L_08829A70:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08829A94;
      }
      goto L_08829A7C;
    }
L_08829A7C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08829A94;
      }
      goto L_08829A88;
    }
L_08829A88:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08829AB4;
      }
      goto L_08829A94;
    }
L_08829A94:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08829AB4;
      }
      goto L_08829AA0;
    }
L_08829AA0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5320));
    ctx.set_gpr(31, 0x08829AB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x08829AB4u) goto L_08829AB4;
    return;
L_08829AB4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08829AD4;
      }
      goto L_08829AC0;
    }
L_08829AC0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5372));
    ctx.set_gpr(31, 0x08829AD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x08829AD4u) goto L_08829AD4;
    return;
L_08829AD4:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08829AF0;
      }
      goto L_08829ADC;
    }
L_08829ADC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5408));
    ctx.set_gpr(31, 0x08829AF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x08829AF0u) goto L_08829AF0;
    return;
L_08829AF0:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08829B0C;
      }
      goto L_08829AF8;
    }
L_08829AF8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5444));
    ctx.set_gpr(31, 0x08829B0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x08829B0Cu) goto L_08829B0C;
    return;
L_08829B0C:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(136), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(231), static_cast<std::uint8_t>(ctx.gpr[18]));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(227), static_cast<std::uint8_t>(ctx.gpr[16]));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(230), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(230)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08829B94;
      }
      goto L_08829B30;
    }
L_08829B30:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08829B84;
      }
      goto L_08829B3C;
    }
L_08829B3C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08829B74;
      }
      goto L_08829B48;
    }
L_08829B48:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08829B64;
      }
      goto L_08829B54;
    }
L_08829B54:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08829B64;
      }
      goto L_08829B5C;
    }
L_08829B5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08829B9C;
      }
      goto L_08829B64;
    }
L_08829B64:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(234), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08829B9C;
      }
      goto L_08829B74;
    }
L_08829B74:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(234), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08829B9C;
      }
      goto L_08829B84;
    }
L_08829B84:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(234), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08829B9C;
      }
      goto L_08829B94;
    }
L_08829B94:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(234), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08829B9C;
L_08829B9C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(231)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(234)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(233), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(233)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(136)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, ctx.gpr[2] >> 3u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(152), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, ctx.gpr[17] + 0u);
    ctx.set_gpr(10, ctx.gpr[16] + 0u);
    ctx.set_gpr(11, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08829BF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 495u, 0x0882E2B8u>(ctx, &aot_mem) && ctx.pc == 0x08829BF8u) goto L_08829BF8;
    return;
L_08829BF8:
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
L_08829C2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08829C80;
      }
      goto L_08829C68;
    }
L_08829C68:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5476));
    ctx.set_gpr(31, 0x08829C78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x08829C78u) goto L_08829C78;
    return;
L_08829C78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08829CD0;
      }
      goto L_08829C80;
    }
L_08829C80:
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08829CB4;
      }
      goto L_08829C8C;
    }
L_08829C8C:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5504));
    ctx.set_gpr(31, 0x08829C9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x08829C9Cu) goto L_08829C9C;
    return;
L_08829C9C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08829CACu);
    // nop
    goto L_0882930C;
L_08829CAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08829E8C;
      }
      goto L_08829CB4;
    }
L_08829CB4:
    ctx.set_gpr(2, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08829CD0;
      }
      goto L_08829CC0;
    }
L_08829CC0:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5528));
    ctx.set_gpr(31, 0x08829CD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x08829CD0u) goto L_08829CD0;
    return;
L_08829CD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[2] | 2u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(1, ctx.gpr[18] < static_cast<std::uint32_t>(769) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08829CFC;
      }
      goto L_08829CE8;
    }
L_08829CE8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const std::uint32_t dividend = ctx.gpr[18]; const std::uint32_t divisor = ctx.gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.hi);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08829D4C;
      }
      goto L_08829CFC;
    }
L_08829CFC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(230)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08829D38;
      }
      goto L_08829D0C;
    }
L_08829D0C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5552));
    ctx.set_gpr(31, 0x08829D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x08829D20u) goto L_08829D20;
    return;
L_08829D20:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08829D30u);
    // nop
    goto L_0882930C;
L_08829D30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08829E8C;
      }
      goto L_08829D38;
    }
L_08829D38:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5552));
    ctx.set_gpr(31, 0x08829D4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x08829D4Cu) goto L_08829D4C;
    return;
L_08829D4C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[18]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(20, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08829D68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 38u, 0x08820280u>(ctx, &aot_mem) && ctx.pc == 0x08829D68u) goto L_08829D68;
    return;
L_08829D68:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[21] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08829DB0;
      }
      goto L_08829D7C;
    }
L_08829D7C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08829D90u);
    // nop
    goto L_088292B4;
L_08829D90:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(45)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(46)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    goto L_08829DB0;
L_08829DB0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08829D7C;
      }
      goto L_08829DBC;
    }
L_08829DBC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08829DCCu);
    // nop
    goto L_0882930C;
L_08829DCC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), ctx.gpr[21]);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(216), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4096));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08829DECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 74u, 0x088204FCu>(ctx, &aot_mem) && ctx.pc == 0x08829DECu) goto L_08829DEC;
    return;
L_08829DEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.set_gpr(2, ctx.gpr[2] | 4096u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08829E10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 543u, 0x0882E654u>(ctx, &aot_mem) && ctx.pc == 0x08829E10u) goto L_08829E10;
    return;
L_08829E10:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(230)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08829E8C;
      }
      goto L_08829E20;
    }
L_08829E20:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08829E8C;
      }
      goto L_08829E28;
    }
L_08829E28:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 16u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08829E8C;
      }
      goto L_08829E38;
    }
L_08829E38:
    ctx.set_gpr(18, ctx.gpr[20] & 65535u);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(218)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08829E64;
      }
      goto L_08829E4C;
    }
L_08829E4C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5576));
    ctx.set_gpr(31, 0x08829E60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x08829E60u) goto L_08829E60;
    return;
L_08829E60:
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(218), static_cast<std::uint16_t>(ctx.gpr[20]));
    goto L_08829E64;
L_08829E64:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(22)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08829E8C;
      }
      goto L_08829E74;
    }
L_08829E74:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5616));
    ctx.set_gpr(31, 0x08829E88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x08829E88u) goto L_08829E88;
    return;
L_08829E88:
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[20]));
    goto L_08829E8C;
L_08829E8C:
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
L_08829EB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08829EF0;
      }
      goto L_08829EE4;
    }
L_08829EE4:
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08829F0C;
      }
      goto L_08829EF0;
    }
L_08829EF0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5660));
    ctx.set_gpr(31, 0x08829F04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x08829F04u) goto L_08829F04;
    return;
L_08829F04:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08829F44;
      }
      goto L_08829F0C;
    }
L_08829F0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[2] | 24u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08829F34;
      }
      goto L_08829F20;
    }
L_08829F20:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5680));
    ctx.set_gpr(31, 0x08829F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x08829F34u) goto L_08829F34;
    return;
L_08829F34:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08829F44u);
    // nop
    goto L_0882930C;
L_08829F44:
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
L_08829F60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08829FA8;
      }
      goto L_08829F90;
    }
L_08829F90:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5708));
    ctx.set_gpr(31, 0x08829FA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x08829FA0u) goto L_08829FA0;
    return;
L_08829FA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A04C;
      }
      goto L_08829FA8;
    }
L_08829FA8:
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08829FDC;
      }
      goto L_08829FB4;
    }
L_08829FB4:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    ctx.set_gpr(31, 0x08829FC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x08829FC4u) goto L_08829FC4;
    return;
L_08829FC4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08829FD4u);
    // nop
    goto L_0882930C;
L_08829FD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A184;
      }
      goto L_08829FDC;
    }
L_08829FDC:
    ctx.set_gpr(2, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A000;
      }
      goto L_08829FE8;
    }
L_08829FE8:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5760));
    ctx.set_gpr(31, 0x08829FF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x08829FF8u) goto L_08829FF8;
    return;
L_08829FF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A04C;
      }
      goto L_0882A000;
    }
L_0882A000:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A04C;
      }
      goto L_0882A008;
    }
L_0882A008:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A04C;
      }
      goto L_0882A018;
    }
L_0882A018:
    ctx.set_gpr(2, ctx.gpr[3] & 2048u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882A04C;
      }
      goto L_0882A024;
    }
L_0882A024:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5784));
    ctx.set_gpr(31, 0x0882A034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882A034u) goto L_0882A034;
    return;
L_0882A034:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882A044u);
    // nop
    goto L_0882930C;
L_0882A044:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A184;
      }
      goto L_0882A04C;
    }
L_0882A04C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0882A084;
      }
      goto L_0882A058;
    }
L_0882A058:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5808));
    ctx.set_gpr(31, 0x0882A06Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882A06Cu) goto L_0882A06C;
    return;
L_0882A06C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882A07Cu);
    // nop
    goto L_0882930C;
L_0882A07C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A184;
      }
      goto L_0882A084;
    }
L_0882A084:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0882A094u);
    // nop
    goto L_088292B4;
L_0882A094:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0882A0A4u);
    // nop
    goto L_0882930C;
L_0882A0A4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882A184;
      }
      goto L_0882A0AC;
    }
L_0882A0AC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0882A0B8u);
    // nop
    goto L_08829238;
L_0882A0B8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A184;
      }
      goto L_0882A0C4;
    }
L_0882A0C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 2048u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A130;
      }
      goto L_0882A0D4;
    }
L_0882A0D4:
    ctx.set_gpr(2, 0u | 45000u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882A0F4;
      }
      goto L_0882A0E4;
    }
L_0882A0E4:
    ctx.set_gpr(1, 0u | 46001u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882A130;
      }
      goto L_0882A0F4;
    }
L_0882A0F4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5836));
    ctx.set_gpr(31, 0x0882A108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882A108u) goto L_0882A108;
    return;
L_0882A108:
    ctx.set_gpr(31, 0x0882A110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x0882A110u) goto L_0882A110;
    return;
L_0882A110:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5892));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882A128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 255u, 0x08811004u>(ctx, &aot_mem) && ctx.pc == 0x0882A128u) goto L_0882A128;
    return;
L_0882A128:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A184;
      }
      goto L_0882A130;
    }
L_0882A130:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 34464u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[12] = ctx.fpr[1] / ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(31, 0x0882A158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882A158u) goto L_0882A158;
    return;
L_0882A158:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882A170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 471u, 0x0882E108u>(ctx, &aot_mem) && ctx.pc == 0x0882A170u) goto L_0882A170;
    return;
L_0882A170:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882A184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 481u, 0x0882E1D0u>(ctx, &aot_mem) && ctx.pc == 0x0882A184u) goto L_0882A184;
    return;
L_0882A184:
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
L_0882A1A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882A1F8;
      }
      goto L_0882A1E0;
    }
L_0882A1E0:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5916));
    ctx.set_gpr(31, 0x0882A1F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x0882A1F0u) goto L_0882A1F0;
    return;
L_0882A1F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A290;
      }
      goto L_0882A1F8;
    }
L_0882A1F8:
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A22C;
      }
      goto L_0882A204;
    }
L_0882A204:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5944));
    ctx.set_gpr(31, 0x0882A214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882A214u) goto L_0882A214;
    return;
L_0882A214:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882A224u);
    // nop
    goto L_0882930C;
L_0882A224:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A37C;
      }
      goto L_0882A22C;
    }
L_0882A22C:
    ctx.set_gpr(2, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A250;
      }
      goto L_0882A238;
    }
L_0882A238:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5968));
    ctx.set_gpr(31, 0x0882A248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882A248u) goto L_0882A248;
    return;
L_0882A248:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A290;
      }
      goto L_0882A250;
    }
L_0882A250:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A290;
      }
      goto L_0882A258;
    }
L_0882A258:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A290;
      }
      goto L_0882A268;
    }
L_0882A268:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.set_gpr(31, 0x0882A278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882A278u) goto L_0882A278;
    return;
L_0882A278:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882A288u);
    // nop
    goto L_0882930C;
L_0882A288:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A37C;
      }
      goto L_0882A290;
    }
L_0882A290:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(230)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0882A2A8;
      }
      goto L_0882A2A0;
    }
L_0882A2A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A2AC;
      }
      goto L_0882A2A8;
    }
L_0882A2A8:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(234)));
    goto L_0882A2AC;
L_0882A2AC:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0882A2E0;
      }
      goto L_0882A2B4;
    }
L_0882A2B4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6016));
    ctx.set_gpr(31, 0x0882A2C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882A2C8u) goto L_0882A2C8;
    return;
L_0882A2C8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882A2D8u);
    // nop
    goto L_0882930C;
L_0882A2D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A37C;
      }
      goto L_0882A2E0;
    }
L_0882A2E0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0882A2F0u);
    // nop
    goto L_088292B4;
L_0882A2F0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0882A300u);
    // nop
    goto L_0882930C;
L_0882A300:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882A37C;
      }
      goto L_0882A308;
    }
L_0882A308:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(230)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A340;
      }
      goto L_0882A318;
    }
L_0882A318:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(316), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(317), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(30)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(318), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(320), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A368;
      }
      goto L_0882A340;
    }
L_0882A340:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(319), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(316), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(317), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(318), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(320), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0882A368;
L_0882A368:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(316));
    ctx.set_gpr(31, 0x0882A37Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 548u, 0x0882E688u>(ctx, &aot_mem) && ctx.pc == 0x0882A37Cu) goto L_0882A37C;
    return;
L_0882A37C:
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
L_0882A398:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[27]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[25]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882A418;
      }
      goto L_0882A400;
    }
L_0882A400:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6044));
    ctx.set_gpr(31, 0x0882A410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x0882A410u) goto L_0882A410;
    return;
L_0882A410:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A4BC;
      }
      goto L_0882A418;
    }
L_0882A418:
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A44C;
      }
      goto L_0882A424;
    }
L_0882A424:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6072));
    ctx.set_gpr(31, 0x0882A434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882A434u) goto L_0882A434;
    return;
L_0882A434:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882A444u);
    // nop
    goto L_0882930C;
L_0882A444:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882ABC4;
      }
      goto L_0882A44C;
    }
L_0882A44C:
    ctx.set_gpr(2, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A470;
      }
      goto L_0882A458;
    }
L_0882A458:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6096));
    ctx.set_gpr(31, 0x0882A468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882A468u) goto L_0882A468;
    return;
L_0882A468:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A4BC;
      }
      goto L_0882A470;
    }
L_0882A470:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A4BC;
      }
      goto L_0882A478;
    }
L_0882A478:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A4BC;
      }
      goto L_0882A488;
    }
L_0882A488:
    ctx.set_gpr(2, ctx.gpr[3] & 2048u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882A4BC;
      }
      goto L_0882A494;
    }
L_0882A494:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6124));
    ctx.set_gpr(31, 0x0882A4A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882A4A4u) goto L_0882A4A4;
    return;
L_0882A4A4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882A4B4u);
    // nop
    goto L_0882930C;
L_0882A4B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882ABC4;
      }
      goto L_0882A4BC;
    }
L_0882A4BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0882A4F4;
      }
      goto L_0882A4C8;
    }
L_0882A4C8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6148));
    ctx.set_gpr(31, 0x0882A4DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882A4DCu) goto L_0882A4DC;
    return;
L_0882A4DC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882A4ECu);
    // nop
    goto L_0882930C;
L_0882A4EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882ABC4;
      }
      goto L_0882A4F4;
    }
L_0882A4F4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0882A508u);
    // nop
    goto L_088292B4;
L_0882A508:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(31, 0x0882A514u);
    // nop
    goto L_08829238;
L_0882A514:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0882A52Cu);
    // nop
    goto L_088292B4;
L_0882A52C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(31, 0x0882A538u);
    // nop
    goto L_08829238;
L_0882A538:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 14465u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A57C;
      }
      goto L_0882A550;
    }
L_0882A550:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 14465u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A57C;
      }
      goto L_0882A564;
    }
L_0882A564:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[18]);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 34465u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882A5A8;
      }
      goto L_0882A57C;
    }
L_0882A57C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6176));
    ctx.set_gpr(31, 0x0882A590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882A590u) goto L_0882A590;
    return;
L_0882A590:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0882A5A0u);
    // nop
    goto L_0882930C;
L_0882A5A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882ABC4;
      }
      goto L_0882A5A8;
    }
L_0882A5A8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0882A5BCu);
    // nop
    goto L_088292B4;
L_0882A5BC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(31, 0x0882A5C8u);
    // nop
    goto L_08829238;
L_0882A5C8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0882A5E0u);
    // nop
    goto L_088292B4;
L_0882A5E0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(31, 0x0882A5ECu);
    // nop
    goto L_08829238;
L_0882A5EC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 14465u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A630;
      }
      goto L_0882A604;
    }
L_0882A604:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 14465u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A630;
      }
      goto L_0882A618;
    }
L_0882A618:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[16]);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 34465u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882A65C;
      }
      goto L_0882A630;
    }
L_0882A630:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6204));
    ctx.set_gpr(31, 0x0882A644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882A644u) goto L_0882A644;
    return;
L_0882A644:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0882A654u);
    // nop
    goto L_0882930C;
L_0882A654:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882ABC4;
      }
      goto L_0882A65C;
    }
L_0882A65C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0882A670u);
    // nop
    goto L_088292B4;
L_0882A670:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(31, 0x0882A67Cu);
    // nop
    goto L_08829238;
L_0882A67C:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0882A694u);
    // nop
    goto L_088292B4;
L_0882A694:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(31, 0x0882A6A0u);
    // nop
    goto L_08829238;
L_0882A6A0:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 14465u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A6E4;
      }
      goto L_0882A6B8;
    }
L_0882A6B8:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 14465u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A6E4;
      }
      goto L_0882A6CC;
    }
L_0882A6CC:
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[23]);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 34465u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882A710;
      }
      goto L_0882A6E4;
    }
L_0882A6E4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6228));
    ctx.set_gpr(31, 0x0882A6F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882A6F8u) goto L_0882A6F8;
    return;
L_0882A6F8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0882A708u);
    // nop
    goto L_0882930C;
L_0882A708:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882ABC4;
      }
      goto L_0882A710;
    }
L_0882A710:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0882A724u);
    // nop
    goto L_088292B4;
L_0882A724:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(31, 0x0882A730u);
    // nop
    goto L_08829238;
L_0882A730:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0882A748u);
    // nop
    goto L_088292B4;
L_0882A748:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(31, 0x0882A754u);
    // nop
    goto L_08829238;
L_0882A754:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[2]);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 14465u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A798;
      }
      goto L_0882A76C;
    }
L_0882A76C:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 14465u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A798;
      }
      goto L_0882A780;
    }
L_0882A780:
    ctx.set_gpr(2, ctx.gpr[30] + ctx.gpr[2]);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 34465u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882A7C4;
      }
      goto L_0882A798;
    }
L_0882A798:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6256));
    ctx.set_gpr(31, 0x0882A7ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882A7ACu) goto L_0882A7AC;
    return;
L_0882A7AC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0882A7BCu);
    // nop
    goto L_0882930C;
L_0882A7BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882ABC4;
      }
      goto L_0882A7C4;
    }
L_0882A7C4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 34464u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[25] = ctx.fpr[2] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[24] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[23] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[22] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[22]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[21] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[23]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[20] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[30]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[27] = ctx.fpr[0] / ctx.fpr[1];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[26] = ctx.fpr[0] / ctx.fpr[1];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 2048u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882AA78;
      }
      goto L_0882A848;
    }
L_0882A848:
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(-31270));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0882A858;
      }
      goto L_0882A854;
    }
L_0882A854:
    { const bool signed_ok = ctx.execute_signed_sub(2u, 0u, 2u);
      if (!signed_ok) { rt.arithmetic_overflow(0x0882A854u, 0x00021022u); return; } }
    goto L_0882A858;
L_0882A858:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 1001 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A93C;
      }
      goto L_0882A864;
    }
L_0882A864:
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-132));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0882A878;
      }
      goto L_0882A874;
    }
L_0882A874:
    { const bool signed_ok = ctx.execute_signed_sub(2u, 0u, 2u);
      if (!signed_ok) { rt.arithmetic_overflow(0x0882A874u, 0x00021022u); return; } }
    goto L_0882A878;
L_0882A878:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 1001 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A93C;
      }
      goto L_0882A884;
    }
L_0882A884:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31232));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0882A898;
      }
      goto L_0882A894;
    }
L_0882A894:
    { const bool signed_ok = ctx.execute_signed_sub(2u, 0u, 2u);
      if (!signed_ok) { rt.arithmetic_overflow(0x0882A894u, 0x00021022u); return; } }
    goto L_0882A898;
L_0882A898:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 1001 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A93C;
      }
      goto L_0882A8A4;
    }
L_0882A8A4:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-232));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0882A8B8;
      }
      goto L_0882A8B4;
    }
L_0882A8B4:
    { const bool signed_ok = ctx.execute_signed_sub(2u, 0u, 2u);
      if (!signed_ok) { rt.arithmetic_overflow(0x0882A8B4u, 0x00021022u); return; } }
    goto L_0882A8B8;
L_0882A8B8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 1001 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A93C;
      }
      goto L_0882A8C4;
    }
L_0882A8C4:
    ctx.set_gpr(2, ctx.gpr[22] + static_cast<std::uint32_t>(-30000));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0882A8D4;
      }
      goto L_0882A8D0;
    }
L_0882A8D0:
    { const bool signed_ok = ctx.execute_signed_sub(2u, 0u, 2u);
      if (!signed_ok) { rt.arithmetic_overflow(0x0882A8D0u, 0x00021022u); return; } }
    goto L_0882A8D4;
L_0882A8D4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 1001 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A93C;
      }
      goto L_0882A8E0;
    }
L_0882A8E0:
    ctx.set_gpr(2, ctx.gpr[23] + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-27232));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0882A8F4;
      }
      goto L_0882A8F0;
    }
L_0882A8F0:
    { const bool signed_ok = ctx.execute_signed_sub(2u, 0u, 2u);
      if (!signed_ok) { rt.arithmetic_overflow(0x0882A8F0u, 0x00021022u); return; } }
    goto L_0882A8F4;
L_0882A8F4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 1001 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A93C;
      }
      goto L_0882A900;
    }
L_0882A900:
    ctx.set_gpr(2, ctx.gpr[30] + static_cast<std::uint32_t>(-15000));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0882A910;
      }
      goto L_0882A90C;
    }
L_0882A90C:
    { const bool signed_ok = ctx.execute_signed_sub(2u, 0u, 2u);
      if (!signed_ok) { rt.arithmetic_overflow(0x0882A90Cu, 0x00021022u); return; } }
    goto L_0882A910;
L_0882A910:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 1001 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A93C;
      }
      goto L_0882A91C;
    }
L_0882A91C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6000));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0882A930;
      }
      goto L_0882A92C;
    }
L_0882A92C:
    { const bool signed_ok = ctx.execute_signed_sub(2u, 0u, 2u);
      if (!signed_ok) { rt.arithmetic_overflow(0x0882A92Cu, 0x00021022u); return; } }
    goto L_0882A930;
L_0882A930:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 1001 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882AA60;
      }
      goto L_0882A93C;
    }
L_0882A93C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6280));
    ctx.set_gpr(31, 0x0882A950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882A950u) goto L_0882A950;
    return;
L_0882A950:
    ctx.set_gpr(31, 0x0882A958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x0882A958u) goto L_0882A958;
    return;
L_0882A958:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(25));
    ctx.set_gpr(31, 0x0882A968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882A968u) goto L_0882A968;
    return;
L_0882A968:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, ctx.gpr[3] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(24));
    ctx.set_gpr(31, 0x0882A97Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882A97Cu) goto L_0882A97C;
    return;
L_0882A97C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(23));
    ctx.set_gpr(31, 0x0882A990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882A990u) goto L_0882A990;
    return;
L_0882A990:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(31, 0x0882A9A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882A9A4u) goto L_0882A9A4;
    return;
L_0882A9A4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6336));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(9, ctx.gpr[16] + 0u);
    ctx.set_gpr(10, ctx.gpr[22] + 0u);
    ctx.set_gpr(11, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x0882A9D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 255u, 0x08811004u>(ctx, &aot_mem) && ctx.pc == 0x0882A9D8u) goto L_0882A9D8;
    return;
L_0882A9D8:
    ctx.set_gpr(31, 0x0882A9E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x0882A9E0u) goto L_0882A9E0;
    return;
L_0882A9E0:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x0882A9F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882A9F0u) goto L_0882A9F0;
    return;
L_0882A9F0:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, ctx.gpr[3] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x0882AA04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882AA04u) goto L_0882AA04;
    return;
L_0882AA04:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(27));
    ctx.set_gpr(31, 0x0882AA18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882AA18u) goto L_0882AA18;
    return;
L_0882AA18:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(26));
    ctx.set_gpr(31, 0x0882AA2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882AA2Cu) goto L_0882AA2C;
    return;
L_0882AA2C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6364));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(9, ctx.gpr[16] + 0u);
    ctx.set_gpr(10, ctx.gpr[22] + 0u);
    ctx.set_gpr(11, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x0882AA60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 255u, 0x08811004u>(ctx, &aot_mem) && ctx.pc == 0x0882AA60u) goto L_0882AA60;
    return;
L_0882AA60:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0882AA70u);
    // nop
    goto L_0882930C;
L_0882AA70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882ABC4;
      }
      goto L_0882AA78;
    }
L_0882AA78:
    ctx.set_fpr_bits(12, ctx.fpr_bits(25));
    ctx.set_gpr(31, 0x0882AA84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882AA84u) goto L_0882AA84;
    return;
L_0882AA84:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[3]);
    ctx.set_fpr_bits(12, ctx.fpr_bits(24));
    ctx.set_gpr(31, 0x0882AA98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882AA98u) goto L_0882AA98;
    return;
L_0882AA98:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[3]);
    ctx.set_fpr_bits(12, ctx.fpr_bits(23));
    ctx.set_gpr(31, 0x0882AAACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882AAACu) goto L_0882AAAC;
    return;
L_0882AAAC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[3]);
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(31, 0x0882AAC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882AAC0u) goto L_0882AAC0;
    return;
L_0882AAC0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[3]);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x0882AAD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882AAD4u) goto L_0882AAD4;
    return;
L_0882AAD4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[3]);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x0882AAE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882AAE8u) goto L_0882AAE8;
    return;
L_0882AAE8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[3]);
    ctx.set_fpr_bits(12, ctx.fpr_bits(27));
    ctx.set_gpr(31, 0x0882AAFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882AAFCu) goto L_0882AAFC;
    return;
L_0882AAFC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[3]);
    ctx.set_fpr_bits(12, ctx.fpr_bits(26));
    ctx.set_gpr(31, 0x0882AB10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882AB10u) goto L_0882AB10;
    return;
L_0882AB10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(31, 0x0882AB80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 389u, 0x0882D9FCu>(ctx, &aot_mem) && ctx.pc == 0x0882AB80u) goto L_0882AB80;
    return;
L_0882AB80:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(9, ctx.gpr[16] + 0u);
    ctx.set_gpr(10, ctx.gpr[22] + 0u);
    ctx.set_gpr(11, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x0882ABB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 434u, 0x0882DDCCu>(ctx, &aot_mem) && ctx.pc == 0x0882ABB4u) goto L_0882ABB4;
    return;
L_0882ABB4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0882ABC4u);
    // nop
    goto L_0882930C;
L_0882ABC4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[27] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[26] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[25] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882AC18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882AC60;
      }
      goto L_0882AC48;
    }
L_0882AC48:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6392));
    ctx.set_gpr(31, 0x0882AC58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x0882AC58u) goto L_0882AC58;
    return;
L_0882AC58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882ACF8;
      }
      goto L_0882AC60;
    }
L_0882AC60:
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882AC94;
      }
      goto L_0882AC6C;
    }
L_0882AC6C:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6420));
    ctx.set_gpr(31, 0x0882AC7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882AC7Cu) goto L_0882AC7C;
    return;
L_0882AC7C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882AC8Cu);
    // nop
    goto L_0882930C;
L_0882AC8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882AF34;
      }
      goto L_0882AC94;
    }
L_0882AC94:
    ctx.set_gpr(2, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882ACB8;
      }
      goto L_0882ACA0;
    }
L_0882ACA0:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6444));
    ctx.set_gpr(31, 0x0882ACB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882ACB0u) goto L_0882ACB0;
    return;
L_0882ACB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882ACF8;
      }
      goto L_0882ACB8;
    }
L_0882ACB8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882ACF8;
      }
      goto L_0882ACC0;
    }
L_0882ACC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 2048u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882ACF8;
      }
      goto L_0882ACD0;
    }
L_0882ACD0:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6468));
    ctx.set_gpr(31, 0x0882ACE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882ACE0u) goto L_0882ACE0;
    return;
L_0882ACE0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882ACF0u);
    // nop
    goto L_0882930C;
L_0882ACF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882AF34;
      }
      goto L_0882ACF8;
    }
L_0882ACF8:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0882AD30;
      }
      goto L_0882AD04;
    }
L_0882AD04:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6492));
    ctx.set_gpr(31, 0x0882AD18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882AD18u) goto L_0882AD18;
    return;
L_0882AD18:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882AD28u);
    // nop
    goto L_0882930C;
L_0882AD28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882AF34;
      }
      goto L_0882AD30;
    }
L_0882AD30:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0882AD40u);
    // nop
    goto L_088292B4;
L_0882AD40:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0882AD50u);
    // nop
    goto L_0882930C;
L_0882AD50:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882AF34;
      }
      goto L_0882AD58;
    }
L_0882AD58:
    ctx.set_gpr(16, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882AD84;
      }
      goto L_0882AD68;
    }
L_0882AD68:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6520));
    ctx.set_gpr(31, 0x0882AD7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882AD7Cu) goto L_0882AD7C;
    return;
L_0882AD7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882AF34;
      }
      goto L_0882AD84;
    }
L_0882AD84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882ADEC;
      }
      goto L_0882AD94;
    }
L_0882AD94:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(236)));
    ctx.set_gpr(2, 0u | 45000u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882ADB8;
      }
      goto L_0882ADA8;
    }
L_0882ADA8:
    ctx.set_gpr(1, 0u | 46001u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882ADEC;
      }
      goto L_0882ADB8;
    }
L_0882ADB8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5836));
    ctx.set_gpr(31, 0x0882ADCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882ADCCu) goto L_0882ADCC;
    return;
L_0882ADCC:
    ctx.set_gpr(31, 0x0882ADD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x0882ADD4u) goto L_0882ADD4;
    return;
L_0882ADD4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6540));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(436)));
    ctx.set_gpr(31, 0x0882ADECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 255u, 0x08811004u>(ctx, &aot_mem) && ctx.pc == 0x0882ADECu) goto L_0882ADEC;
    return;
L_0882ADEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882AF20;
      }
      goto L_0882ADFC;
    }
L_0882ADFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(240)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31270));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0882AE10;
      }
      goto L_0882AE0C;
    }
L_0882AE0C:
    { const bool signed_ok = ctx.execute_signed_sub(2u, 0u, 2u);
      if (!signed_ok) { rt.arithmetic_overflow(0x0882AE0Cu, 0x00021022u); return; } }
    goto L_0882AE10;
L_0882AE10:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 1001 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882AF0C;
      }
      goto L_0882AE1C;
    }
L_0882AE1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(244)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-132));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0882AE34;
      }
      goto L_0882AE30;
    }
L_0882AE30:
    { const bool signed_ok = ctx.execute_signed_sub(2u, 0u, 2u);
      if (!signed_ok) { rt.arithmetic_overflow(0x0882AE30u, 0x00021022u); return; } }
    goto L_0882AE34;
L_0882AE34:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 1001 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882AF0C;
      }
      goto L_0882AE40;
    }
L_0882AE40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(248)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31232));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0882AE58;
      }
      goto L_0882AE54;
    }
L_0882AE54:
    { const bool signed_ok = ctx.execute_signed_sub(2u, 0u, 2u);
      if (!signed_ok) { rt.arithmetic_overflow(0x0882AE54u, 0x00021022u); return; } }
    goto L_0882AE58;
L_0882AE58:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 1001 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882AF0C;
      }
      goto L_0882AE64;
    }
L_0882AE64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(252)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-232));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0882AE7C;
      }
      goto L_0882AE78;
    }
L_0882AE78:
    { const bool signed_ok = ctx.execute_signed_sub(2u, 0u, 2u);
      if (!signed_ok) { rt.arithmetic_overflow(0x0882AE78u, 0x00021022u); return; } }
    goto L_0882AE7C;
L_0882AE7C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 1001 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882AF0C;
      }
      goto L_0882AE88;
    }
L_0882AE88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(256)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-30000));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0882AE9C;
      }
      goto L_0882AE98;
    }
L_0882AE98:
    { const bool signed_ok = ctx.execute_signed_sub(2u, 0u, 2u);
      if (!signed_ok) { rt.arithmetic_overflow(0x0882AE98u, 0x00021022u); return; } }
    goto L_0882AE9C;
L_0882AE9C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 1001 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882AF0C;
      }
      goto L_0882AEA8;
    }
L_0882AEA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(260)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-27232));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0882AEC0;
      }
      goto L_0882AEBC;
    }
L_0882AEBC:
    { const bool signed_ok = ctx.execute_signed_sub(2u, 0u, 2u);
      if (!signed_ok) { rt.arithmetic_overflow(0x0882AEBCu, 0x00021022u); return; } }
    goto L_0882AEC0;
L_0882AEC0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 1001 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882AF0C;
      }
      goto L_0882AECC;
    }
L_0882AECC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(264)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15000));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0882AEE0;
      }
      goto L_0882AEDC;
    }
L_0882AEDC:
    { const bool signed_ok = ctx.execute_signed_sub(2u, 0u, 2u);
      if (!signed_ok) { rt.arithmetic_overflow(0x0882AEDCu, 0x00021022u); return; } }
    goto L_0882AEE0;
L_0882AEE0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 1001 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882AF0C;
      }
      goto L_0882AEEC;
    }
L_0882AEEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(268)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6000));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0882AF00;
      }
      goto L_0882AEFC;
    }
L_0882AEFC:
    { const bool signed_ok = ctx.execute_signed_sub(2u, 0u, 2u);
      if (!signed_ok) { rt.arithmetic_overflow(0x0882AEFCu, 0x00021022u); return; } }
    goto L_0882AF00;
L_0882AF00:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 1001 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882AF20;
      }
      goto L_0882AF0C;
    }
L_0882AF0C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6280));
    ctx.set_gpr(31, 0x0882AF20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882AF20u) goto L_0882AF20;
    return;
L_0882AF20:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882AF34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 559u, 0x0882E714u>(ctx, &aot_mem) && ctx.pc == 0x0882AF34u) goto L_0882AF34;
    return;
L_0882AF34:
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
L_0882AF50:
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
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882AFA4;
      }
      goto L_0882AF8C;
    }
L_0882AF8C:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6572));
    ctx.set_gpr(31, 0x0882AF9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x0882AF9Cu) goto L_0882AF9C;
    return;
L_0882AF9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882AFD8;
      }
      goto L_0882AFA4;
    }
L_0882AFA4:
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882AFD8;
      }
      goto L_0882AFB0;
    }
L_0882AFB0:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6600));
    ctx.set_gpr(31, 0x0882AFC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882AFC0u) goto L_0882AFC0;
    return;
L_0882AFC0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0882AFD0u);
    // nop
    goto L_0882930C;
L_0882AFD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B224;
      }
      goto L_0882AFD8;
    }
L_0882AFD8:
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0882AFE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x0882AFE8u) goto L_0882AFE8;
    return;
L_0882AFE8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0882B000u);
    // nop
    goto L_088292B4;
L_0882B000:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0882B010u);
    // nop
    goto L_0882930C;
L_0882B010:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B030;
      }
      goto L_0882B018;
    }
L_0882B018:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0882B028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x0882B028u) goto L_0882B028;
    return;
L_0882B028:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B224;
      }
      goto L_0882B030;
    }
L_0882B030:
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[20]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B048;
      }
      goto L_0882B044;
    }
L_0882B044:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0882B048;
L_0882B048:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882B044;
      }
      goto L_0882B054;
    }
L_0882B054:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B090;
      }
      goto L_0882B064;
    }
L_0882B064:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0882B074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x0882B074u) goto L_0882B074;
    return;
L_0882B074:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6624));
    ctx.set_gpr(31, 0x0882B088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882B088u) goto L_0882B088;
    return;
L_0882B088:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B224;
      }
      goto L_0882B090;
    }
L_0882B090:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0882B0B8;
      }
      goto L_0882B0AC;
    }
L_0882B0AC:
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B0BC;
      }
      goto L_0882B0B8;
    }
L_0882B0B8:
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(10));
    goto L_0882B0BC;
L_0882B0BC:
    ctx.set_gpr(2, ctx.gpr[16] - ctx.gpr[17]);
    ctx.set_gpr(20, ctx.gpr[20] - ctx.gpr[2]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[20]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[21]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(2, ctx.hi);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B0F8;
      }
      goto L_0882B0D4;
    }
L_0882B0D4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0882B0E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x0882B0E4u) goto L_0882B0E4;
    return;
L_0882B0E4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6648));
    ctx.set_gpr(31, 0x0882B0F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x0882B0F8u) goto L_0882B0F8;
    return;
L_0882B0F8:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[20]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[21]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(3, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[2] << 1u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0882B11Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x0882B11Cu) goto L_0882B11C;
    return;
L_0882B11C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(21, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B1D8;
      }
      goto L_0882B12C;
    }
L_0882B12C:
    ctx.set_gpr(2, ctx.gpr[21] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[21]);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(20, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0882B17C;
      }
      goto L_0882B150;
    }
L_0882B150:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B1C0;
      }
      goto L_0882B17C;
    }
L_0882B17C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882B188u);
    // nop
    goto L_08829298;
L_0882B188:
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0882B198u);
    // nop
    goto L_08829298;
L_0882B198:
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0882B1A8u);
    // nop
    goto L_08829298;
L_0882B1A8:
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x0882B1B8u);
    // nop
    goto L_08829298;
L_0882B1B8:
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    goto L_0882B1C0;
L_0882B1C0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882B1CCu);
    // nop
    goto L_08829298;
L_0882B1CC:
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_0882B1D8;
L_0882B1D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882B12C;
      }
      goto L_0882B1E8;
    }
L_0882B1E8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0882B204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 626u, 0x0882ECB0u>(ctx, &aot_mem) && ctx.pc == 0x0882B204u) goto L_0882B204;
    return;
L_0882B204:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0882B214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x0882B214u) goto L_0882B214;
    return;
L_0882B214:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x0882B224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x0882B224u) goto L_0882B224;
    return;
L_0882B224:
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
L_0882B24C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882B294;
      }
      goto L_0882B27C;
    }
L_0882B27C:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6676));
    ctx.set_gpr(31, 0x0882B28Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x0882B28Cu) goto L_0882B28C;
    return;
L_0882B28C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B308;
      }
      goto L_0882B294;
    }
L_0882B294:
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B2C8;
      }
      goto L_0882B2A0;
    }
L_0882B2A0:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6704));
    ctx.set_gpr(31, 0x0882B2B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882B2B0u) goto L_0882B2B0;
    return;
L_0882B2B0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882B2C0u);
    // nop
    goto L_0882930C;
L_0882B2C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B580;
      }
      goto L_0882B2C8;
    }
L_0882B2C8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B308;
      }
      goto L_0882B2D0;
    }
L_0882B2D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B308;
      }
      goto L_0882B2E0;
    }
L_0882B2E0:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6728));
    ctx.set_gpr(31, 0x0882B2F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882B2F0u) goto L_0882B2F0;
    return;
L_0882B2F0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882B300u);
    // nop
    goto L_0882930C;
L_0882B300:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B580;
      }
      goto L_0882B308;
    }
L_0882B308:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(230)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0882B3E8;
      }
      goto L_0882B318;
    }
L_0882B318:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882B344;
      }
      goto L_0882B328;
    }
L_0882B328:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6752));
    ctx.set_gpr(31, 0x0882B33Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882B33Cu) goto L_0882B33C;
    return;
L_0882B33C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B380;
      }
      goto L_0882B344;
    }
L_0882B344:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B380;
      }
      goto L_0882B354;
    }
L_0882B354:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6780));
    ctx.set_gpr(31, 0x0882B368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882B368u) goto L_0882B368;
    return;
L_0882B368:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882B378u);
    // nop
    goto L_0882930C;
L_0882B378:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B580;
      }
      goto L_0882B380;
    }
L_0882B380:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882B3B4;
      }
      goto L_0882B388;
    }
L_0882B388:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6808));
    ctx.set_gpr(31, 0x0882B39Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882B39Cu) goto L_0882B39C;
    return;
L_0882B39C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882B3ACu);
    // nop
    goto L_0882930C;
L_0882B3AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B580;
      }
      goto L_0882B3B4;
    }
L_0882B3B4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882B3C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x0882B3C4u) goto L_0882B3C4;
    return;
L_0882B3C4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(328), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882B3DCu);
    // nop
    goto L_088292B4;
L_0882B3DC:
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(218), static_cast<std::uint16_t>(ctx.gpr[16]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B518;
      }
      goto L_0882B3E8;
    }
L_0882B3E8:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0882B480;
      }
      goto L_0882B3F4;
    }
L_0882B3F4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0882B42C;
      }
      goto L_0882B400;
    }
L_0882B400:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6780));
    ctx.set_gpr(31, 0x0882B414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882B414u) goto L_0882B414;
    return;
L_0882B414:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882B424u);
    // nop
    goto L_0882930C;
L_0882B424:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B580;
      }
      goto L_0882B42C;
    }
L_0882B42C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882B440u);
    // nop
    goto L_088292B4;
L_0882B440:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(218), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0882B454u);
    // nop
    goto L_08829298;
L_0882B454:
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(334), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(26));
    ctx.set_gpr(31, 0x0882B464u);
    // nop
    goto L_08829298;
L_0882B464:
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(336), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0882B474u);
    // nop
    goto L_08829298;
L_0882B474:
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(338), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B518;
      }
      goto L_0882B480;
    }
L_0882B480:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882B4EC;
      }
      goto L_0882B488;
    }
L_0882B488:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0882B4BC;
      }
      goto L_0882B490;
    }
L_0882B490:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6780));
    ctx.set_gpr(31, 0x0882B4A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882B4A4u) goto L_0882B4A4;
    return;
L_0882B4A4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882B4B4u);
    // nop
    goto L_0882930C;
L_0882B4B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B580;
      }
      goto L_0882B4BC;
    }
L_0882B4BC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0882B4CCu);
    // nop
    goto L_088292B4;
L_0882B4CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(218), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0882B4E0u);
    // nop
    goto L_08829298;
L_0882B4E0:
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(340), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B518;
      }
      goto L_0882B4EC;
    }
L_0882B4EC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6832));
    ctx.set_gpr(31, 0x0882B500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882B500u) goto L_0882B500;
    return;
L_0882B500:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882B510u);
    // nop
    goto L_0882930C;
L_0882B510:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B580;
      }
      goto L_0882B518;
    }
L_0882B518:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0882B528u);
    // nop
    goto L_0882930C;
L_0882B528:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882B580;
      }
      goto L_0882B530;
    }
L_0882B530:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8192));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x0882B548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 74u, 0x088204FCu>(ctx, &aot_mem) && ctx.pc == 0x0882B548u) goto L_0882B548;
    return;
L_0882B548:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(230)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0882B564;
      }
      goto L_0882B558;
    }
L_0882B558:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
    ctx.set_gpr(2, ctx.gpr[2] | 8192u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(404), ctx.gpr[2]);
    goto L_0882B564;
L_0882B564:
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(218)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(328)));
    ctx.set_gpr(8, ctx.gpr[18] + static_cast<std::uint32_t>(332));
    ctx.set_gpr(31, 0x0882B580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 615u, 0x0882EC24u>(ctx, &aot_mem) && ctx.pc == 0x0882B580u) goto L_0882B580;
    return;
L_0882B580:
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
L_0882B59C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882B5E4;
      }
      goto L_0882B5CC;
    }
L_0882B5CC:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6876));
    ctx.set_gpr(31, 0x0882B5DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x0882B5DCu) goto L_0882B5DC;
    return;
L_0882B5DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B6A0;
      }
      goto L_0882B5E4;
    }
L_0882B5E4:
    ctx.set_gpr(2, ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B618;
      }
      goto L_0882B5F0;
    }
L_0882B5F0:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6904));
    ctx.set_gpr(31, 0x0882B600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882B600u) goto L_0882B600;
    return;
L_0882B600:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882B610u);
    // nop
    goto L_0882930C;
L_0882B610:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B864;
      }
      goto L_0882B618;
    }
L_0882B618:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(230)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0882B65C;
      }
      goto L_0882B628;
    }
L_0882B628:
    ctx.set_gpr(2, ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882B65C;
      }
      goto L_0882B634;
    }
L_0882B634:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6928));
    ctx.set_gpr(31, 0x0882B644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882B644u) goto L_0882B644;
    return;
L_0882B644:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882B654u);
    // nop
    goto L_0882930C;
L_0882B654:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B864;
      }
      goto L_0882B65C;
    }
L_0882B65C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B6A0;
      }
      goto L_0882B664;
    }
L_0882B664:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B6A0;
      }
      goto L_0882B674;
    }
L_0882B674:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6956));
    ctx.set_gpr(31, 0x0882B688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882B688u) goto L_0882B688;
    return;
L_0882B688:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882B698u);
    // nop
    goto L_0882930C;
L_0882B698:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B864;
      }
      goto L_0882B6A0;
    }
L_0882B6A0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(230)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0882B6BC;
      }
      goto L_0882B6B0;
    }
L_0882B6B0:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B6D8;
      }
      goto L_0882B6BC;
    }
L_0882B6BC:
    ctx.set_gpr(2, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B6D4;
      }
      goto L_0882B6C8;
    }
L_0882B6C8:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B6D8;
      }
      goto L_0882B6D4;
    }
L_0882B6D4:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    goto L_0882B6D8;
L_0882B6D8:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0882B70C;
      }
      goto L_0882B6E0;
    }
L_0882B6E0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6980));
    ctx.set_gpr(31, 0x0882B6F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882B6F4u) goto L_0882B6F4;
    return;
L_0882B6F4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882B704u);
    // nop
    goto L_0882930C;
L_0882B704:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B864;
      }
      goto L_0882B70C;
    }
L_0882B70C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0882B71Cu);
    // nop
    goto L_088292B4;
L_0882B71C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0882B72Cu);
    // nop
    goto L_0882930C;
L_0882B72C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882B864;
      }
      goto L_0882B734;
    }
L_0882B734:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(230)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0882B7F0;
      }
      goto L_0882B744;
    }
L_0882B744:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(248), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B850;
      }
      goto L_0882B758;
    }
L_0882B758:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B798;
      }
      goto L_0882B76C;
    }
L_0882B76C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7008));
    ctx.set_gpr(31, 0x0882B780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882B780u) goto L_0882B780;
    return;
L_0882B780:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882B790u);
    // nop
    goto L_0882930C;
L_0882B790:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B864;
      }
      goto L_0882B798;
    }
L_0882B798:
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(250), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(252), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(254), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B850;
      }
      goto L_0882B7F0;
    }
L_0882B7F0:
    ctx.set_gpr(2, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882B820;
      }
      goto L_0882B7FC;
    }
L_0882B7FC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0882B808u);
    // nop
    goto L_08829298;
L_0882B808:
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(256), static_cast<std::uint16_t>(ctx.gpr[2]));
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(254), static_cast<std::uint16_t>(ctx.gpr[2]));
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(252), static_cast<std::uint16_t>(ctx.gpr[2]));
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(250), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B850;
      }
      goto L_0882B820;
    }
L_0882B820:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0882B82Cu);
    // nop
    goto L_08829298;
L_0882B82C:
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(250), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(26));
    ctx.set_gpr(31, 0x0882B83Cu);
    // nop
    goto L_08829298;
L_0882B83C:
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(252), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0882B84Cu);
    // nop
    goto L_08829298;
L_0882B84C:
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(254), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_0882B850;
L_0882B850:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(248));
    ctx.set_gpr(31, 0x0882B864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 383u, 0x0882D9A0u>(ctx, &aot_mem) && ctx.pc == 0x0882B864u) goto L_0882B864;
    return;
L_0882B864:
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
L_0882B880:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882B8CC;
      }
      goto L_0882B8B4;
    }
L_0882B8B4:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7044));
    ctx.set_gpr(31, 0x0882B8C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x0882B8C4u) goto L_0882B8C4;
    return;
L_0882B8C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B974;
      }
      goto L_0882B8CC;
    }
L_0882B8CC:
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B900;
      }
      goto L_0882B8D8;
    }
L_0882B8D8:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7072));
    ctx.set_gpr(31, 0x0882B8E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882B8E8u) goto L_0882B8E8;
    return;
L_0882B8E8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0882B8F8u);
    // nop
    goto L_0882930C;
L_0882B8F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BA74;
      }
      goto L_0882B900;
    }
L_0882B900:
    ctx.set_gpr(2, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882B934;
      }
      goto L_0882B90C;
    }
L_0882B90C:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7096));
    ctx.set_gpr(31, 0x0882B91Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882B91Cu) goto L_0882B91C;
    return;
L_0882B91C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0882B92Cu);
    // nop
    goto L_0882930C;
L_0882B92C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BA74;
      }
      goto L_0882B934;
    }
L_0882B934:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B974;
      }
      goto L_0882B93C;
    }
L_0882B93C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 64u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B974;
      }
      goto L_0882B94C;
    }
L_0882B94C:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7124));
    ctx.set_gpr(31, 0x0882B95Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882B95Cu) goto L_0882B95C;
    return;
L_0882B95C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0882B96Cu);
    // nop
    goto L_0882930C;
L_0882B96C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BA74;
      }
      goto L_0882B974;
    }
L_0882B974:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0882B9B0;
      }
      goto L_0882B984;
    }
L_0882B984:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7148));
    ctx.set_gpr(31, 0x0882B998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882B998u) goto L_0882B998;
    return;
L_0882B998:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0882B9A8u);
    // nop
    goto L_0882930C;
L_0882B9A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BA74;
      }
      goto L_0882B9B0;
    }
L_0882B9B0:
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0882B9C4;
      }
      goto L_0882B9BC;
    }
L_0882B9BC:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    goto L_0882B9C4;
L_0882B9C4:
    ctx.set_gpr(5, ctx.gpr[16] << 1u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0882B9D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x0882B9D4u) goto L_0882B9D4;
    return;
L_0882B9D4:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(360), ctx.gpr[2]);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BA18;
      }
      goto L_0882B9E4;
    }
L_0882B9E4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0882B9F8u);
    // nop
    goto L_088292B4;
L_0882B9F8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0882BA04u);
    // nop
    goto L_08829298;
L_0882BA04:
    ctx.set_gpr(4, ctx.gpr[17] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(360)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0882BA18;
L_0882BA18:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882B9E4;
      }
      goto L_0882BA24;
    }
L_0882BA24:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0882BA34u);
    // nop
    goto L_0882930C;
L_0882BA34:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882BA74;
      }
      goto L_0882BA3C;
    }
L_0882BA3C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x0882BA54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 74u, 0x088204FCu>(ctx, &aot_mem) && ctx.pc == 0x0882BA54u) goto L_0882BA54;
    return;
L_0882BA54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(404)));
    ctx.set_gpr(2, ctx.gpr[2] | 8u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(404), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(360)));
    ctx.set_gpr(31, 0x0882BA74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 490u, 0x0882E288u>(ctx, &aot_mem) && ctx.pc == 0x0882BA74u) goto L_0882BA74;
    return;
L_0882BA74:
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
L_0882BA94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882BADC;
      }
      goto L_0882BAC4;
    }
L_0882BAC4:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7176));
    ctx.set_gpr(31, 0x0882BAD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x0882BAD4u) goto L_0882BAD4;
    return;
L_0882BAD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BB50;
      }
      goto L_0882BADC;
    }
L_0882BADC:
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BB10;
      }
      goto L_0882BAE8;
    }
L_0882BAE8:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7204));
    ctx.set_gpr(31, 0x0882BAF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882BAF8u) goto L_0882BAF8;
    return;
L_0882BAF8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882BB08u);
    // nop
    goto L_0882930C;
L_0882BB08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BBE8;
      }
      goto L_0882BB10;
    }
L_0882BB10:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BB50;
      }
      goto L_0882BB18;
    }
L_0882BB18:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 128u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BB50;
      }
      goto L_0882BB28;
    }
L_0882BB28:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7228));
    ctx.set_gpr(31, 0x0882BB38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882BB38u) goto L_0882BB38;
    return;
L_0882BB38:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882BB48u);
    // nop
    goto L_0882930C;
L_0882BB48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BBE8;
      }
      goto L_0882BB50;
    }
L_0882BB50:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0882BB88;
      }
      goto L_0882BB5C;
    }
L_0882BB5C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7252));
    ctx.set_gpr(31, 0x0882BB70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882BB70u) goto L_0882BB70;
    return;
L_0882BB70:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882BB80u);
    // nop
    goto L_0882930C;
L_0882BB80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BBE8;
      }
      goto L_0882BB88;
    }
L_0882BB88:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0882BB98u);
    // nop
    goto L_088292B4;
L_0882BB98:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0882BBA8u);
    // nop
    goto L_0882930C;
L_0882BBA8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882BBE8;
      }
      goto L_0882BBB0;
    }
L_0882BBB0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0882BBBCu);
    // nop
    goto L_08829238;
L_0882BBBC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0882BBCCu);
    // nop
    goto L_08829238;
L_0882BBCC:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0882BBE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 538u, 0x0882E61Cu>(ctx, &aot_mem) && ctx.pc == 0x0882BBE8u) goto L_0882BBE8;
    return;
L_0882BBE8:
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
L_0882BC04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882BC4C;
      }
      goto L_0882BC34;
    }
L_0882BC34:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7280));
    ctx.set_gpr(31, 0x0882BC44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x0882BC44u) goto L_0882BC44;
    return;
L_0882BC44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BCC0;
      }
      goto L_0882BC4C;
    }
L_0882BC4C:
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BC80;
      }
      goto L_0882BC58;
    }
L_0882BC58:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7308));
    ctx.set_gpr(31, 0x0882BC68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882BC68u) goto L_0882BC68;
    return;
L_0882BC68:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882BC78u);
    // nop
    goto L_0882930C;
L_0882BC78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BD58;
      }
      goto L_0882BC80;
    }
L_0882BC80:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BCC0;
      }
      goto L_0882BC88;
    }
L_0882BC88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 256u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BCC0;
      }
      goto L_0882BC98;
    }
L_0882BC98:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7332));
    ctx.set_gpr(31, 0x0882BCA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882BCA8u) goto L_0882BCA8;
    return;
L_0882BCA8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882BCB8u);
    // nop
    goto L_0882930C;
L_0882BCB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BD58;
      }
      goto L_0882BCC0;
    }
L_0882BCC0:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0882BCF8;
      }
      goto L_0882BCCC;
    }
L_0882BCCC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7356));
    ctx.set_gpr(31, 0x0882BCE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882BCE0u) goto L_0882BCE0;
    return;
L_0882BCE0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882BCF0u);
    // nop
    goto L_0882930C;
L_0882BCF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BD58;
      }
      goto L_0882BCF8;
    }
L_0882BCF8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0882BD08u);
    // nop
    goto L_088292B4;
L_0882BD08:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0882BD18u);
    // nop
    goto L_0882930C;
L_0882BD18:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882BD58;
      }
      goto L_0882BD20;
    }
L_0882BD20:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0882BD2Cu);
    // nop
    goto L_08829268;
L_0882BD2C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0882BD3Cu);
    // nop
    goto L_08829268;
L_0882BD3C:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0882BD58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 510u, 0x0882E3E0u>(ctx, &aot_mem) && ctx.pc == 0x0882BD58u) goto L_0882BD58;
    return;
L_0882BD58:
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
L_0882BD74:
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
    ctx.set_gpr(23, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882BDD4;
      }
      goto L_0882BDBC;
    }
L_0882BDBC:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7384));
    ctx.set_gpr(31, 0x0882BDCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 169u, 0x08820B40u>(ctx, &aot_mem) && ctx.pc == 0x0882BDCCu) goto L_0882BDCC;
    return;
L_0882BDCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BE48;
      }
      goto L_0882BDD4;
    }
L_0882BDD4:
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BE08;
      }
      goto L_0882BDE0;
    }
L_0882BDE0:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7412));
    ctx.set_gpr(31, 0x0882BDF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882BDF0u) goto L_0882BDF0;
    return;
L_0882BDF0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882BE00u);
    // nop
    goto L_0882930C;
L_0882BE00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 17u, 0x0882C0FCu>(ctx, &aot_mem); return;
      }
      goto L_0882BE08;
    }
L_0882BE08:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BE48;
      }
      goto L_0882BE10;
    }
L_0882BE10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 1024u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BE48;
      }
      goto L_0882BE20;
    }
L_0882BE20:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7436));
    ctx.set_gpr(31, 0x0882BE30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882BE30u) goto L_0882BE30;
    return;
L_0882BE30:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882BE40u);
    // nop
    goto L_0882930C;
L_0882BE40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 17u, 0x0882C0FCu>(ctx, &aot_mem); return;
      }
      goto L_0882BE48;
    }
L_0882BE48:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0882BE58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 289u, 0x0882123Cu>(ctx, &aot_mem) && ctx.pc == 0x0882BE58u) goto L_0882BE58;
    return;
L_0882BE58:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882BE70u);
    // nop
    goto L_088292B4;
L_0882BE70:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0882BE80u);
    // nop
    goto L_0882930C;
L_0882BE80:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BEA0;
      }
      goto L_0882BE88;
    }
L_0882BE88:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0882BE98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x0882BE98u) goto L_0882BE98;
    return;
L_0882BE98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 17u, 0x0882C0FCu>(ctx, &aot_mem); return;
      }
      goto L_0882BEA0;
    }
L_0882BEA0:
    ctx.set_gpr(17, ctx.gpr[20] + ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(19, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BEB8;
      }
      goto L_0882BEB4;
    }
L_0882BEB4:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0882BEB8;
L_0882BEB8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882BEB4;
      }
      goto L_0882BEC4;
    }
L_0882BEC4:
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882BF00;
      }
      goto L_0882BED4;
    }
L_0882BED4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7460));
    ctx.set_gpr(31, 0x0882BEE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882BEE8u) goto L_0882BEE8;
    return;
L_0882BEE8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0882BEF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x0882BEF8u) goto L_0882BEF8;
    return;
L_0882BEF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 17u, 0x0882C0FCu>(ctx, &aot_mem); return;
      }
      goto L_0882BF00;
    }
L_0882BF00:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0882BF0Cu);
    // nop
    goto L_08829268;
L_0882BF0C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x0882BF1Cu);
    // nop
    goto L_08829268;
L_0882BF1C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(16, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(18, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(10)));
    ctx.set_gpr(30, ctx.gpr[19] + static_cast<std::uint32_t>(11));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882BF44;
      }
      goto L_0882BF34;
    }
L_0882BF34:
    ctx.set_gpr(3, ctx.gpr[18] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0882BF98;
      }
      goto L_0882BF44;
    }
L_0882BF44:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0882BF60;
      }
      goto L_0882BF50;
    }
L_0882BF50:
    ctx.set_gpr(3, ctx.gpr[18] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0882BF98;
      }
      goto L_0882BF60;
    }
L_0882BF60:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0882BF7C;
      }
      goto L_0882BF6C;
    }
L_0882BF6C:
    ctx.set_gpr(3, ctx.gpr[18] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0882BF98;
      }
      goto L_0882BF7C;
    }
L_0882BF7C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0882BFC4;
      }
      goto L_0882BF88;
    }
L_0882BF88:
    ctx.set_gpr(3, ctx.gpr[18] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0882BFC4;
      }
      goto L_0882BF98;
    }
L_0882BF98:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7480));
    ctx.set_gpr(31, 0x0882BFACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882BFACu) goto L_0882BFAC;
    return;
L_0882BFAC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0882BFBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 301u, 0x088212F0u>(ctx, &aot_mem) && ctx.pc == 0x0882BFBCu) goto L_0882BFBC;
    return;
L_0882BFBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 17u, 0x0882C0FCu>(ctx, &aot_mem); return;
      }
      goto L_0882BFC4;
    }
L_0882BFC4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882BFE4;
      }
      goto L_0882BFD0;
    }
L_0882BFD0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7524));
    ctx.set_gpr(31, 0x0882BFE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 173u, 0x08820B94u>(ctx, &aot_mem) && ctx.pc == 0x0882BFE4u) goto L_0882BFE4;
    return;
L_0882BFE4:
    ctx.set_gpr(19, ctx.gpr[30] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BFF4;
      }
      goto L_0882BFF0;
    }
L_0882BFF0:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0882BFF4;
L_0882BFF4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882BFF0;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 1u, 0x0882C000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0009(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0009_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_9(Runtime &runtime) {
    runtime.register_generated_unit(9u, 0x08828000u, 16384u, &recomp_unit_0009, &recomp_unit_0009_entry);
    runtime.register_function(0x08828000u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828008u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828010u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828054u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828078u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828088u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882808Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828094u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088280A0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088280B0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088280B8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088280C8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088280E8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088280F8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828108u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828114u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828128u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828134u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882813Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828148u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882816Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828188u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882819Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088281ACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088281C8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088281D4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882820Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828218u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828220u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828230u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828254u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828264u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828274u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828284u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828294u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088282A0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088282C4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088282D0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088282D8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088282E4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828308u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828324u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828340u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882835Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828370u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828380u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088283BCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088283C8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088283F8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828400u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828414u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882841Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882842Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882843Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882847Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828488u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088284C0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088284CCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088284D4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088284E4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088284F4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828534u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828540u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828578u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828584u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882858Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882859Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088285A8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088285C0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088285CCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088285D4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882861Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828634u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882863Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882864Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882865Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828674u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882867Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828690u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088286A8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088286B8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088286C8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088286D8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088286E8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088286F4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828708u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828720u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828738u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882874Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828764u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882877Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882878Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882879Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088287A8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088287C0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088287CCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088287E4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088287FCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882880Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828818u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882882Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828844u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882885Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828870u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828888u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088288A0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088288B0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088288C0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088288CCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088288DCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088288F0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828908u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828910u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882891Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828934u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828940u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882894Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828950u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828960u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882896Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828980u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828998u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088289B0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088289C4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088289DCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088289F4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828A04u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828A14u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828A20u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828A28u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828A38u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828A4Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828A50u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828A60u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828A6Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828A70u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828A78u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828A88u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828A8Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828A9Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828AA8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828AACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828AB8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828ABCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828AC4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828AC8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828AF4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828B0Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828B14u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828B2Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828B44u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828B54u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828B64u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828B7Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828B90u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828B9Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828BACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828BC0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828BCCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828BE4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828BFCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828C08u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828C20u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828C38u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828C50u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828C64u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828C7Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828C8Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828C94u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828CD4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828CE0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828CE4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828CF0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828CF8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828D30u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828D40u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828D48u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828D54u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828D6Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828DACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828DC0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828DD4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828DECu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828E04u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828E18u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828E30u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828E48u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828E58u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828E78u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828E84u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828E88u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828E94u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828EACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828EB8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828ED0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828EE8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828EF8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828F10u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828F50u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828F64u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828F78u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828F90u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828FA8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828FBCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828FD4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828FECu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828FFCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882901Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829028u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882902Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829038u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829048u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829060u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829068u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829074u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882908Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829094u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088290A0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088290B8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088290C8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088290DCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829118u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882912Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829140u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829158u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829170u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829184u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882919Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088291B4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088291C4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088291E0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088291ECu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088291F0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088291FCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829238u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829268u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829298u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088292B4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088292DCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088292F0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882930Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829334u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829348u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882934Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829358u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829360u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829374u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829380u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829388u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829398u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088293A8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088293B0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088293C0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088293D4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088293DCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088293F0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088293FCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829400u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882941Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829444u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829458u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829464u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829474u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829478u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882948Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829494u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088294A0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088294B4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088294B8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088294D0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882951Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829550u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829560u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882956Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829578u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829584u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829590u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829598u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088295ACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088295B8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088295C4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088295D8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088295F0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829610u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829618u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882961Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829634u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882963Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829648u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829654u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882965Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829678u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829690u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088296A4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088296B4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088296D4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088296ECu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088296FCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829718u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829730u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882973Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882974Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829758u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829764u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829770u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829788u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829790u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882979Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088297B4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088297BCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088297D4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088297E4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088297F0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829804u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829814u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882982Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882983Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829850u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829858u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882985Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829870u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088298A8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088298F0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829900u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882990Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829920u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829940u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829950u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882995Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882996Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882998Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882999Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088299A4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088299B4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088299C8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088299D4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088299E0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088299ECu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088299F8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829A04u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829A18u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829A20u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829A2Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829A38u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829A44u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829A58u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829A64u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829A70u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829A7Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829A88u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829A94u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829AA0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829AB4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829AC0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829AD4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829ADCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829AF0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829AF8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829B0Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829B30u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829B3Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829B48u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829B54u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829B5Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829B64u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829B74u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829B84u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829B94u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829B9Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829BF8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829C2Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829C68u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829C78u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829C80u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829C8Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829C9Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829CACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829CB4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829CC0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829CD0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829CE8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829CFCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829D0Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829D20u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829D30u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829D38u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829D4Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829D68u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829D7Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829D90u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829DB0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829DBCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829DCCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829DECu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829E10u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829E20u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829E28u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829E38u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829E4Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829E60u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829E64u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829E74u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829E88u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829E8Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829EB4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829EE4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829EF0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829F04u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829F0Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829F20u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829F34u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829F44u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829F60u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829F90u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829FA0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829FA8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829FB4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829FC4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829FD4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829FDCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829FE8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829FF8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A000u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A008u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A018u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A024u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A034u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A044u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A04Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A058u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A06Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A07Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A084u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A094u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A0A4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A0ACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A0B8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A0C4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A0D4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A0E4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A0F4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A108u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A110u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A128u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A130u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A158u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A170u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A184u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A1A0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A1E0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A1F0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A1F8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A204u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A214u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A224u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A22Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A238u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A248u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A250u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A258u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A268u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A278u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A288u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A290u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A2A0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A2A8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A2ACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A2B4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A2C8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A2D8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A2E0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A2F0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A300u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A308u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A318u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A340u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A368u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A37Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A398u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A400u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A410u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A418u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A424u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A434u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A444u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A44Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A458u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A468u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A470u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A478u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A488u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A494u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A4A4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A4B4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A4BCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A4C8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A4DCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A4ECu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A4F4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A508u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A514u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A52Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A538u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A550u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A564u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A57Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A590u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A5A0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A5A8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A5BCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A5C8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A5E0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A5ECu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A604u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A618u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A630u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A644u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A654u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A65Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A670u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A67Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A694u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A6A0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A6B8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A6CCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A6E4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A6F8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A708u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A710u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A724u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A730u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A748u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A754u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A76Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A780u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A798u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A7ACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A7BCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A7C4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A848u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A854u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A858u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A864u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A874u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A878u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A884u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A894u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A898u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A8A4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A8B4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A8B8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A8C4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A8D0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A8D4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A8E0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A8F0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A8F4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A900u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A90Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A910u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A91Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A92Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A930u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A93Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A950u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A958u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A968u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A97Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A990u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A9A4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A9D8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A9E0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A9F0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AA04u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AA18u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AA2Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AA60u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AA70u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AA78u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AA84u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AA98u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AAACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AAC0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AAD4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AAE8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AAFCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AB10u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AB80u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ABB4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ABC4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AC18u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AC48u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AC58u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AC60u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AC6Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AC7Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AC8Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AC94u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ACA0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ACB0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ACB8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ACC0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ACD0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ACE0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ACF0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ACF8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AD04u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AD18u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AD28u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AD30u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AD40u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AD50u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AD58u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AD68u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AD7Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AD84u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AD94u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ADA8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ADB8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ADCCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ADD4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ADECu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ADFCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AE0Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AE10u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AE1Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AE30u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AE34u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AE40u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AE54u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AE58u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AE64u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AE78u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AE7Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AE88u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AE98u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AE9Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AEA8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AEBCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AEC0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AECCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AEDCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AEE0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AEECu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AEFCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AF00u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AF0Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AF20u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AF34u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AF50u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AF8Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AF9Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AFA4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AFB0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AFC0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AFD0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AFD8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AFE8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B000u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B010u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B018u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B028u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B030u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B044u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B048u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B054u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B064u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B074u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B088u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B090u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B0ACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B0B8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B0BCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B0D4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B0E4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B0F8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B11Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B12Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B150u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B17Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B188u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B198u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B1A8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B1B8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B1C0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B1CCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B1D8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B1E8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B204u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B214u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B224u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B24Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B27Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B28Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B294u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B2A0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B2B0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B2C0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B2C8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B2D0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B2E0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B2F0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B300u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B308u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B318u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B328u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B33Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B344u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B354u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B368u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B378u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B380u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B388u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B39Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B3ACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B3B4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B3C4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B3DCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B3E8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B3F4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B400u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B414u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B424u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B42Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B440u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B454u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B464u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B474u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B480u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B488u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B490u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B4A4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B4B4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B4BCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B4CCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B4E0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B4ECu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B500u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B510u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B518u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B528u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B530u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B548u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B558u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B564u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B580u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B59Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B5CCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B5DCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B5E4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B5F0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B600u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B610u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B618u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B628u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B634u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B644u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B654u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B65Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B664u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B674u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B688u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B698u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B6A0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B6B0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B6BCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B6C8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B6D4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B6D8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B6E0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B6F4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B704u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B70Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B71Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B72Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B734u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B744u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B758u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B76Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B780u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B790u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B798u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B7F0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B7FCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B808u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B820u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B82Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B83Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B84Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B850u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B864u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B880u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B8B4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B8C4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B8CCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B8D8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B8E8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B8F8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B900u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B90Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B91Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B92Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B934u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B93Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B94Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B95Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B96Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B974u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B984u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B998u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B9A8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B9B0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B9BCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B9C4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B9D4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B9E4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B9F8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BA04u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BA18u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BA24u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BA34u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BA3Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BA54u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BA74u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BA94u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BAC4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BAD4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BADCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BAE8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BAF8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BB08u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BB10u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BB18u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BB28u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BB38u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BB48u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BB50u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BB5Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BB70u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BB80u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BB88u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BB98u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BBA8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BBB0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BBBCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BBCCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BBE8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BC04u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BC34u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BC44u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BC4Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BC58u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BC68u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BC78u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BC80u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BC88u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BC98u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BCA8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BCB8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BCC0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BCCCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BCE0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BCF0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BCF8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BD08u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BD18u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BD20u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BD2Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BD3Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BD58u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BD74u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BDBCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BDCCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BDD4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BDE0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BDF0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BE00u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BE08u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BE10u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BE20u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BE30u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BE40u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BE48u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BE58u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BE70u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BE80u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BE88u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BE98u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BEA0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BEB4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BEB8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BEC4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BED4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BEE8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BEF8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF00u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF0Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF1Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF34u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF44u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF50u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF60u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF6Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF7Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF88u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF98u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BFACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BFBCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BFC4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BFD0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BFE4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BFF0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BFF4u, &recomp_unit_0009, "recomp_unit_0009");
}
} // namespace psprecomp
