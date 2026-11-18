#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0066[4086] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 7, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 12, 13, 0, 14, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17,
    0, 18, 0, 19, 0, 0, 20, 0, 21, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 27, 0,
    0, 0, 0, 28, 0, 0, 29, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0,
    35, 36, 0, 0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 40, 41, 0, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0, 0, 45,
    0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0, 50, 0, 0, 51, 0, 0, 52, 0, 53, 0, 0, 0, 54, 0, 55, 0, 0, 56, 0,
    0, 0, 0, 57, 0, 58, 0, 59, 0, 0, 60, 0, 61, 62, 0, 63, 0, 64, 0, 65, 66, 0, 67, 0, 0, 68, 69, 0, 70, 0, 0, 71,
    0, 0, 72, 0, 0, 73, 0, 74, 0, 0, 0, 75, 0, 76, 0, 0, 77, 0, 0, 78, 0, 79, 0, 0, 0, 80, 0, 81, 0, 0, 82, 0,
    0, 83, 0, 84, 0, 0, 0, 85, 0, 86, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 91, 0, 0, 0, 92, 0, 93, 0, 0, 94,
    0, 0, 95, 0, 96, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 101, 0, 102, 0, 0, 0, 103, 0, 104, 0,
    0, 0, 105, 0, 106, 0, 0, 0, 107, 0, 108, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 113, 0, 0, 0, 114, 0,
    115, 0, 0, 0, 116, 0, 117, 0, 0, 0, 118, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 122, 0, 0, 123, 0, 0, 0, 124, 0,
    0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 132, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0,
    146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 149, 0, 0, 0, 150, 0, 0, 151, 0, 152, 0, 0, 153, 0, 154, 0,
    0, 0, 0, 155, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0,
    0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0,
    166, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 179, 0, 180, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0,
    183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189,
    0, 0, 190, 0, 0, 191, 0, 192, 0, 0, 193, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 198, 199, 0,
    0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0,
    0, 0, 0, 207, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 212, 0, 0, 0, 213, 0, 0, 0,
    0, 0, 0, 0, 0, 214, 215, 0, 0, 216, 0, 217, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0,
    222, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0,
    229, 0, 0, 230, 0, 231, 0, 0, 232, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 237, 238, 0, 0, 239,
    0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0,
    0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 251, 252, 0, 253, 254, 0, 255, 0, 0, 0, 256, 0, 0, 0, 257, 258, 0,
    259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0,
    0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268,
    0, 0, 269, 0, 0, 270, 0, 0, 271, 0, 0, 272, 0, 0, 273, 0, 0, 274, 0, 0, 275, 0, 0, 276, 0, 0, 277, 0, 0, 0, 0, 278,
    0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 283, 284, 0, 0, 285, 0, 0, 0, 286,
    0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 291, 292, 0, 0, 293, 0, 0, 0, 294, 0, 0,
    0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 301, 0, 302, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0,
    0, 305, 306, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0,
    0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 316, 0, 0, 317, 0, 318, 0, 0, 319, 0, 320, 0, 0, 321,
    0, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 324, 325, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 328,
    0, 0, 329, 0, 0, 330, 0, 0, 331, 0, 332, 0, 0, 333, 0, 334, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 338,
    339, 0, 0, 340, 0, 0, 0, 0, 341, 342, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 346, 0, 347, 0, 0, 0, 0, 0, 348,
    0, 0, 349, 0, 0, 350, 0, 351, 0, 0, 352, 0, 353, 0, 0, 354, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0,
    0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 359, 360, 0, 361, 362, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 365, 0, 0,
    0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 369, 0, 0, 0, 0, 370, 0, 371, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0,
    0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379,
    0, 0, 380, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0,
    0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 387, 388, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0,
    0, 0, 0, 391, 0, 392, 393, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 397, 398, 0, 0, 0, 0, 0,
    0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 401, 402, 0, 403, 404, 0, 405, 0, 406, 0, 0, 0, 407, 408, 0, 0, 409, 0, 0, 410, 0, 0,
    411, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    414, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 416, 417, 0, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 421, 422,
    0, 423, 424, 0, 425, 0, 0, 0, 426, 427, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0,
    0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0,
    0, 0, 0, 0, 0, 437, 0, 0, 438, 439, 440, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 444, 445, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 449, 450, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 454, 455, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 459, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 464, 465, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 469, 470, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 475, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 480, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 482,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 485, 0, 0, 0, 0, 486, 0, 0, 0, 0,
    0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 490, 0, 0, 0, 0, 491,
    0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 494, 495, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 500, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 505, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 510, 0, 0, 511, 512,
    0, 0, 0, 0, 513, 514, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 517, 0, 518, 0, 0, 519, 520, 0, 0, 0, 0, 521, 522, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 526, 0, 0, 527, 528, 0, 0, 0, 0, 529, 530, 0, 0, 0, 0, 0, 0,
    0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 534, 0, 0, 535, 536, 0, 0,
    0, 0, 537, 538, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 541, 0, 542, 0, 0, 543, 544, 0, 0, 0, 0, 545, 546, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 550, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0,
    0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 558, 559, 0, 0, 560, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0,
    0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 566, 567, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 572, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 576, 0, 577, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 580, 0, 0, 0, 581, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 584, 0, 0, 0, 585, 0, 0, 586, 0,
    0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0,
    0, 0, 591, 592, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0,
    0, 596, 0, 0, 597, 0, 0, 0, 598, 0, 0, 599, 0, 0, 600, 0, 0, 0, 601, 0, 602, 0, 0, 0, 603, 604, 0, 0, 0, 0, 605, 0,
    0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 608, 0, 609, 0, 0, 0, 610, 611, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0,
    0, 0, 0, 0, 614, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 617, 0, 0, 0, 0, 0, 618,
    619, 0, 620, 0, 0, 621, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 623, 624, 0, 625, 0, 0, 0, 0, 0, 626, 0, 0, 627, 0, 0, 0,
    0, 0, 628, 0, 0, 0, 0, 0, 629, 630, 0, 631, 0, 0, 0, 0, 0, 632, 0, 0, 633, 0, 0, 0, 0, 634, 0, 0, 635, 0, 0, 636,
    0, 0, 0, 637, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 641, 0, 0, 0, 0,
    642, 0, 0, 643, 0, 0, 0, 644, 0, 645, 0, 0, 646, 0, 0, 0, 647, 0, 0, 648, 0, 649, 0, 0, 650, 0, 651, 0, 0, 0, 0, 652,
    0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 655, 656, 0, 657, 0, 0, 658, 0, 0, 0, 659, 0, 0, 0, 0, 0,
    660, 661, 0, 662, 0, 0, 0, 0, 0, 663, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 666, 0, 0, 667,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 669, 0, 0, 670, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 0, 672, 0, 673, 0,
    0, 0, 0, 674, 0, 0, 0, 675, 0, 0, 0, 676, 0, 0, 0, 677, 0, 0, 0, 678, 0, 0, 0, 0, 679, 0, 0, 680, 0, 0, 681, 0,
    0, 682, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 684, 0, 0, 685, 0, 686, 0, 0, 687, 0, 688, 0, 0, 0, 0, 689, 0, 0, 0,
    0, 690, 0, 0, 0, 0, 0, 691, 692, 0, 693, 0, 0, 0, 0, 0, 694, 0, 0, 695, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0,
    697, 0, 0, 698, 699, 0, 0, 700, 0, 0, 701, 0, 0, 0, 0, 0, 0, 0, 0, 0, 702, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 704,
    0, 705, 0, 0, 706, 0, 0, 707, 708, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 711, 0,
    0, 712, 0, 0, 713, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 716, 0, 0, 717, 718, 0, 0, 0, 719, 0, 720,
    0, 0, 0, 721, 0, 0, 0, 0, 722, 0, 0, 0, 723, 0, 0, 0, 724, 0, 0, 0, 725, 0, 0, 0, 726, 0, 0, 0, 0, 727, 0, 0,
    728, 0, 0, 0, 0, 0, 0, 729, 0, 730, 0, 0, 731, 0, 0, 732, 0, 0, 0, 0, 733, 0, 0, 0, 734, 0, 0, 735, 0, 736, 0, 0,
    737, 0, 738, 0, 0, 0, 0, 739, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 741, 742, 0, 743, 0, 0, 0, 0, 0, 744, 0, 0, 745, 0,
    0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 0, 747, 0, 0, 748, 0, 0, 0, 0, 0, 749, 750, 0, 0, 751, 0, 0, 752, 753, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 756, 0, 0, 757, 0, 0, 0, 758, 0, 0, 759, 0, 0, 760,
    0, 0, 0, 761, 0, 0, 762, 0, 0, 0, 0, 0, 763, 0, 764, 0, 0, 0, 0, 0, 0, 765, 0, 0, 766, 0, 0, 767, 0, 0, 0, 768,
    0, 0, 0, 0, 0, 0, 769, 0, 0, 770, 0, 0, 0, 0, 0, 771, 772, 0, 0, 0, 0, 0, 0, 773, 0, 774, 0, 0, 775, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 776, 0, 0, 0, 0, 0, 0, 777, 0, 778, 0, 0, 0, 0, 0, 779, 780, 0, 0, 0, 0, 781, 782, 0, 0,
    0, 0, 0, 0, 0, 783, 0, 0, 784, 0, 0, 785, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 786, 0, 0, 787, 0, 0, 788, 0, 0, 789,
    0, 0, 0, 0, 0, 0, 790, 0, 0, 0, 791, 0, 0, 0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 793, 0, 0, 0, 0, 0, 794, 0,
    0, 0, 0, 0, 0, 0, 0, 795, 0, 0, 0, 0, 0, 0, 0, 0, 0, 796, 0, 797, 798, 0, 799, 0, 0, 800, 0, 0, 801, 802, 0, 0,
    803, 0, 0, 804, 0, 0, 0, 0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 806,
    0, 0, 0, 0, 807, 0, 808, 0, 0, 809, 0, 810, 0, 0, 811, 812, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 814, 0, 0, 815, 0, 0, 816, 0, 0, 0, 0, 0, 0, 0, 0, 0, 817, 0, 0,
    0, 0, 818, 0, 0, 0, 0, 819, 0, 0, 0, 0, 0, 0, 0, 0, 0, 820, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 821, 0,
    0, 0, 0, 0, 822, 0, 0, 823, 0, 0, 824, 0, 0, 0, 0, 0, 0, 0, 0, 825, 0, 0, 0, 0, 0, 0, 0, 0, 826, 0, 0, 0,
    0, 0, 0, 0, 827, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 828, 0, 0, 0, 0, 0, 0, 0, 829, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 830, 0, 0, 0, 0, 831, 0, 832, 0, 0, 833, 0, 834, 0, 0, 835, 836, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 837, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 838, 0, 0, 839, 0, 0, 840, 0, 0, 0, 0,
    0, 0, 0, 841, 0, 0, 0, 842, 0, 0, 0, 0, 843, 0, 0, 0, 0, 0, 0, 0, 0, 844,
};
void recomp_unit_0066_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0890C000u;
        entry_id = (entry_delta < 16344u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0066[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0890C000;
    case 2u: goto L_0890C01C;
    case 3u: goto L_0890C028;
    case 4u: goto L_0890C03C;
    case 5u: goto L_0890C044;
    case 6u: goto L_0890C080;
    case 7u: goto L_0890C088;
    case 8u: goto L_0890C0A0;
    case 9u: goto L_0890C0A8;
    case 10u: goto L_0890C0C0;
    case 11u: goto L_0890C0D4;
    case 12u: goto L_0890C0E0;
    case 13u: goto L_0890C0E4;
    case 14u: goto L_0890C0EC;
    case 15u: goto L_0890C11C;
    case 16u: goto L_0890C170;
    case 17u: goto L_0890C17C;
    case 18u: goto L_0890C184;
    case 19u: goto L_0890C18C;
    case 20u: goto L_0890C198;
    case 21u: goto L_0890C1A0;
    case 22u: goto L_0890C1A8;
    case 23u: goto L_0890C1B4;
    case 24u: goto L_0890C1CC;
    case 25u: goto L_0890C1DC;
    case 26u: goto L_0890C1EC;
    case 27u: goto L_0890C1F8;
    case 28u: goto L_0890C20C;
    case 29u: goto L_0890C218;
    case 30u: goto L_0890C224;
    case 31u: goto L_0890C22C;
    case 32u: goto L_0890C244;
    case 33u: goto L_0890C25C;
    case 34u: goto L_0890C274;
    case 35u: goto L_0890C280;
    case 36u: goto L_0890C284;
    case 37u: goto L_0890C290;
    case 38u: goto L_0890C2A0;
    case 39u: goto L_0890C2AC;
    case 40u: goto L_0890C2C4;
    case 41u: goto L_0890C2C8;
    case 42u: goto L_0890C2D8;
    case 43u: goto L_0890C2E4;
    case 44u: goto L_0890C2F0;
    case 45u: goto L_0890C2FC;
    case 46u: goto L_0890C308;
    case 47u: goto L_0890C314;
    case 48u: goto L_0890C320;
    case 49u: goto L_0890C32C;
    case 50u: goto L_0890C334;
    case 51u: goto L_0890C340;
    case 52u: goto L_0890C34C;
    case 53u: goto L_0890C354;
    case 54u: goto L_0890C364;
    case 55u: goto L_0890C36C;
    case 56u: goto L_0890C378;
    case 57u: goto L_0890C38C;
    case 58u: goto L_0890C394;
    case 59u: goto L_0890C39C;
    case 60u: goto L_0890C3A8;
    case 61u: goto L_0890C3B0;
    case 62u: goto L_0890C3B4;
    case 63u: goto L_0890C3BC;
    case 64u: goto L_0890C3C4;
    case 65u: goto L_0890C3CC;
    case 66u: goto L_0890C3D0;
    case 67u: goto L_0890C3D8;
    case 68u: goto L_0890C3E4;
    case 69u: goto L_0890C3E8;
    case 70u: goto L_0890C3F0;
    case 71u: goto L_0890C3FC;
    case 72u: goto L_0890C408;
    case 73u: goto L_0890C414;
    case 74u: goto L_0890C41C;
    case 75u: goto L_0890C42C;
    case 76u: goto L_0890C434;
    case 77u: goto L_0890C440;
    case 78u: goto L_0890C44C;
    case 79u: goto L_0890C454;
    case 80u: goto L_0890C464;
    case 81u: goto L_0890C46C;
    case 82u: goto L_0890C478;
    case 83u: goto L_0890C484;
    case 84u: goto L_0890C48C;
    case 85u: goto L_0890C49C;
    case 86u: goto L_0890C4A4;
    case 87u: goto L_0890C4AC;
    case 88u: goto L_0890C4B8;
    case 89u: goto L_0890C4C4;
    case 90u: goto L_0890C4D0;
    case 91u: goto L_0890C4D8;
    case 92u: goto L_0890C4E8;
    case 93u: goto L_0890C4F0;
    case 94u: goto L_0890C4FC;
    case 95u: goto L_0890C508;
    case 96u: goto L_0890C510;
    case 97u: goto L_0890C520;
    case 98u: goto L_0890C528;
    case 99u: goto L_0890C540;
    case 100u: goto L_0890C54C;
    case 101u: goto L_0890C558;
    case 102u: goto L_0890C560;
    case 103u: goto L_0890C570;
    case 104u: goto L_0890C578;
    case 105u: goto L_0890C588;
    case 106u: goto L_0890C590;
    case 107u: goto L_0890C5A0;
    case 108u: goto L_0890C5A8;
    case 109u: goto L_0890C5B4;
    case 110u: goto L_0890C5C8;
    case 111u: goto L_0890C5D4;
    case 112u: goto L_0890C5E0;
    case 113u: goto L_0890C5E8;
    case 114u: goto L_0890C5F8;
    case 115u: goto L_0890C600;
    case 116u: goto L_0890C610;
    case 117u: goto L_0890C618;
    case 118u: goto L_0890C628;
    case 119u: goto L_0890C630;
    case 120u: goto L_0890C63C;
    case 121u: goto L_0890C658;
    case 122u: goto L_0890C65C;
    case 123u: goto L_0890C668;
    case 124u: goto L_0890C678;
    case 125u: goto L_0890C688;
    case 126u: goto L_0890C694;
    case 127u: goto L_0890C6A8;
    case 128u: goto L_0890C6BC;
    case 129u: goto L_0890C6C8;
    case 130u: goto L_0890C6D4;
    case 131u: goto L_0890C6DC;
    case 132u: goto L_0890C714;
    case 133u: goto L_0890C71C;
    case 134u: goto L_0890C724;
    case 135u: goto L_0890C74C;
    case 136u: goto L_0890C770;
    case 137u: goto L_0890C78C;
    case 138u: goto L_0890C798;
    case 139u: goto L_0890C7CC;
    case 140u: goto L_0890C7F4;
    case 141u: goto L_0890C820;
    case 142u: goto L_0890C83C;
    case 143u: goto L_0890C84C;
    case 144u: goto L_0890C858;
    case 145u: goto L_0890C864;
    case 146u: goto L_0890C880;
    case 147u: goto L_0890C8A8;
    case 148u: goto L_0890C8B4;
    case 149u: goto L_0890C8C0;
    case 150u: goto L_0890C8D0;
    case 151u: goto L_0890C8DC;
    case 152u: goto L_0890C8E4;
    case 153u: goto L_0890C8F0;
    case 154u: goto L_0890C8F8;
    case 155u: goto L_0890C90C;
    case 156u: goto L_0890C910;
    case 157u: goto L_0890C928;
    case 158u: goto L_0890C940;
    case 159u: goto L_0890C954;
    case 160u: goto L_0890C960;
    case 161u: goto L_0890C978;
    case 162u: goto L_0890C990;
    case 163u: goto L_0890C9B4;
    case 164u: goto L_0890C9CC;
    case 165u: goto L_0890C9F0;
    case 166u: goto L_0890CA00;
    case 167u: goto L_0890CA10;
    case 168u: goto L_0890CA1C;
    case 169u: goto L_0890CA3C;
    case 170u: goto L_0890CA4C;
    case 171u: goto L_0890CA58;
    case 172u: goto L_0890CA8C;
    case 173u: goto L_0890CAA0;
    case 174u: goto L_0890CACC;
    case 175u: goto L_0890CADC;
    case 176u: goto L_0890CAE4;
    case 177u: goto L_0890CB3C;
    case 178u: goto L_0890CB44;
    case 179u: goto L_0890CB4C;
    case 180u: goto L_0890CB54;
    case 181u: goto L_0890CB60;
    case 182u: goto L_0890CB70;
    case 183u: goto L_0890CB80;
    case 184u: goto L_0890CB94;
    case 185u: goto L_0890CBAC;
    case 186u: goto L_0890CBB4;
    case 187u: goto L_0890CBC8;
    case 188u: goto L_0890CBF0;
    case 189u: goto L_0890CBFC;
    case 190u: goto L_0890CC08;
    case 191u: goto L_0890CC14;
    case 192u: goto L_0890CC1C;
    case 193u: goto L_0890CC28;
    case 194u: goto L_0890CC30;
    case 195u: goto L_0890CC3C;
    case 196u: goto L_0890CC5C;
    case 197u: goto L_0890CC68;
    case 198u: goto L_0890CC74;
    case 199u: goto L_0890CC78;
    case 200u: goto L_0890CC84;
    case 201u: goto L_0890CC94;
    case 202u: goto L_0890CCB0;
    case 203u: goto L_0890CCC8;
    case 204u: goto L_0890CCD4;
    case 205u: goto L_0890CCE4;
    case 206u: goto L_0890CCF4;
    case 207u: goto L_0890CD0C;
    case 208u: goto L_0890CD14;
    case 209u: goto L_0890CD2C;
    case 210u: goto L_0890CD44;
    case 211u: goto L_0890CD58;
    case 212u: goto L_0890CD60;
    case 213u: goto L_0890CD70;
    case 214u: goto L_0890CD94;
    case 215u: goto L_0890CD98;
    case 216u: goto L_0890CDA4;
    case 217u: goto L_0890CDAC;
    case 218u: goto L_0890CDC0;
    case 219u: goto L_0890CDC8;
    case 220u: goto L_0890CDE4;
    case 221u: goto L_0890CDEC;
    case 222u: goto L_0890CE00;
    case 223u: goto L_0890CE10;
    case 224u: goto L_0890CE24;
    case 225u: goto L_0890CE2C;
    case 226u: goto L_0890CE40;
    case 227u: goto L_0890CE68;
    case 228u: goto L_0890CE74;
    case 229u: goto L_0890CE80;
    case 230u: goto L_0890CE8C;
    case 231u: goto L_0890CE94;
    case 232u: goto L_0890CEA0;
    case 233u: goto L_0890CEA8;
    case 234u: goto L_0890CEB4;
    case 235u: goto L_0890CED4;
    case 236u: goto L_0890CEE0;
    case 237u: goto L_0890CEEC;
    case 238u: goto L_0890CEF0;
    case 239u: goto L_0890CEFC;
    case 240u: goto L_0890CF0C;
    case 241u: goto L_0890CF28;
    case 242u: goto L_0890CF40;
    case 243u: goto L_0890CF44;
    case 244u: goto L_0890CF50;
    case 245u: goto L_0890CF98;
    case 246u: goto L_0890CFD4;
    case 247u: goto L_0890CFF8;
    case 248u: goto L_0890D010;
    case 249u: goto L_0890D01C;
    case 250u: goto L_0890D02C;
    case 251u: goto L_0890D03C;
    case 252u: goto L_0890D040;
    case 253u: goto L_0890D048;
    case 254u: goto L_0890D04C;
    case 255u: goto L_0890D054;
    case 256u: goto L_0890D064;
    case 257u: goto L_0890D074;
    case 258u: goto L_0890D078;
    case 259u: goto L_0890D080;
    case 260u: goto L_0890D0A8;
    case 261u: goto L_0890D0CC;
    case 262u: goto L_0890D0DC;
    case 263u: goto L_0890D0F4;
    case 264u: goto L_0890D104;
    case 265u: goto L_0890D11C;
    case 266u: goto L_0890D130;
    case 267u: goto L_0890D144;
    case 268u: goto L_0890D17C;
    case 269u: goto L_0890D188;
    case 270u: goto L_0890D194;
    case 271u: goto L_0890D1A0;
    case 272u: goto L_0890D1AC;
    case 273u: goto L_0890D1B8;
    case 274u: goto L_0890D1C4;
    case 275u: goto L_0890D1D0;
    case 276u: goto L_0890D1DC;
    case 277u: goto L_0890D1E8;
    case 278u: goto L_0890D1FC;
    case 279u: goto L_0890D214;
    case 280u: goto L_0890D228;
    case 281u: goto L_0890D23C;
    case 282u: goto L_0890D254;
    case 283u: goto L_0890D25C;
    case 284u: goto L_0890D260;
    case 285u: goto L_0890D26C;
    case 286u: goto L_0890D27C;
    case 287u: goto L_0890D290;
    case 288u: goto L_0890D29C;
    case 289u: goto L_0890D2B4;
    case 290u: goto L_0890D2CC;
    case 291u: goto L_0890D2D4;
    case 292u: goto L_0890D2D8;
    case 293u: goto L_0890D2E4;
    case 294u: goto L_0890D2F4;
    case 295u: goto L_0890D308;
    case 296u: goto L_0890D314;
    case 297u: goto L_0890D380;
    case 298u: goto L_0890D394;
    case 299u: goto L_0890D3AC;
    case 300u: goto L_0890D3C4;
    case 301u: goto L_0890D3C8;
    case 302u: goto L_0890D3D0;
    case 303u: goto L_0890D3DC;
    case 304u: goto L_0890D3EC;
    case 305u: goto L_0890D404;
    case 306u: goto L_0890D408;
    case 307u: goto L_0890D410;
    case 308u: goto L_0890D428;
    case 309u: goto L_0890D434;
    case 310u: goto L_0890D44C;
    case 311u: goto L_0890D45C;
    case 312u: goto L_0890D46C;
    case 313u: goto L_0890D48C;
    case 314u: goto L_0890D4B0;
    case 315u: goto L_0890D4BC;
    case 316u: goto L_0890D4C8;
    case 317u: goto L_0890D4D4;
    case 318u: goto L_0890D4DC;
    case 319u: goto L_0890D4E8;
    case 320u: goto L_0890D4F0;
    case 321u: goto L_0890D4FC;
    case 322u: goto L_0890D518;
    case 323u: goto L_0890D524;
    case 324u: goto L_0890D530;
    case 325u: goto L_0890D534;
    case 326u: goto L_0890D540;
    case 327u: goto L_0890D558;
    case 328u: goto L_0890D57C;
    case 329u: goto L_0890D588;
    case 330u: goto L_0890D594;
    case 331u: goto L_0890D5A0;
    case 332u: goto L_0890D5A8;
    case 333u: goto L_0890D5B4;
    case 334u: goto L_0890D5BC;
    case 335u: goto L_0890D5C8;
    case 336u: goto L_0890D5E4;
    case 337u: goto L_0890D5F0;
    case 338u: goto L_0890D5FC;
    case 339u: goto L_0890D600;
    case 340u: goto L_0890D60C;
    case 341u: goto L_0890D620;
    case 342u: goto L_0890D624;
    case 343u: goto L_0890D630;
    case 344u: goto L_0890D640;
    case 345u: goto L_0890D658;
    case 346u: goto L_0890D65C;
    case 347u: goto L_0890D664;
    case 348u: goto L_0890D67C;
    case 349u: goto L_0890D688;
    case 350u: goto L_0890D694;
    case 351u: goto L_0890D69C;
    case 352u: goto L_0890D6A8;
    case 353u: goto L_0890D6B0;
    case 354u: goto L_0890D6BC;
    case 355u: goto L_0890D6C4;
    case 356u: goto L_0890D6EC;
    case 357u: goto L_0890D70C;
    case 358u: goto L_0890D71C;
    case 359u: goto L_0890D72C;
    case 360u: goto L_0890D730;
    case 361u: goto L_0890D738;
    case 362u: goto L_0890D73C;
    case 363u: goto L_0890D744;
    case 364u: goto L_0890D76C;
    case 365u: goto L_0890D774;
    case 366u: goto L_0890D784;
    case 367u: goto L_0890D78C;
    case 368u: goto L_0890D7A8;
    case 369u: goto L_0890D7B0;
    case 370u: goto L_0890D7C4;
    case 371u: goto L_0890D7CC;
    case 372u: goto L_0890D7E0;
    case 373u: goto L_0890D7E8;
    case 374u: goto L_0890D804;
    case 375u: goto L_0890D820;
    case 376u: goto L_0890D848;
    case 377u: goto L_0890D854;
    case 378u: goto L_0890D86C;
    case 379u: goto L_0890D87C;
    case 380u: goto L_0890D888;
    case 381u: goto L_0890D890;
    case 382u: goto L_0890D8AC;
    case 383u: goto L_0890D8EC;
    case 384u: goto L_0890D904;
    case 385u: goto L_0890D920;
    case 386u: goto L_0890D944;
    case 387u: goto L_0890D950;
    case 388u: goto L_0890D954;
    case 389u: goto L_0890D968;
    case 390u: goto L_0890D978;
    case 391u: goto L_0890D98C;
    case 392u: goto L_0890D994;
    case 393u: goto L_0890D998;
    case 394u: goto L_0890D9A4;
    case 395u: goto L_0890D9B8;
    case 396u: goto L_0890D9D8;
    case 397u: goto L_0890D9E4;
    case 398u: goto L_0890D9E8;
    case 399u: goto L_0890DA08;
    case 400u: goto L_0890DA18;
    case 401u: goto L_0890DA28;
    case 402u: goto L_0890DA2C;
    case 403u: goto L_0890DA34;
    case 404u: goto L_0890DA38;
    case 405u: goto L_0890DA40;
    case 406u: goto L_0890DA48;
    case 407u: goto L_0890DA58;
    case 408u: goto L_0890DA5C;
    case 409u: goto L_0890DA68;
    case 410u: goto L_0890DA74;
    case 411u: goto L_0890DA80;
    case 412u: goto L_0890DA84;
    case 413u: goto L_0890DAB0;
    case 414u: goto L_0890DB00;
    case 415u: goto L_0890DB20;
    case 416u: goto L_0890DB2C;
    case 417u: goto L_0890DB30;
    case 418u: goto L_0890DB3C;
    case 419u: goto L_0890DB58;
    case 420u: goto L_0890DB68;
    case 421u: goto L_0890DB78;
    case 422u: goto L_0890DB7C;
    case 423u: goto L_0890DB84;
    case 424u: goto L_0890DB88;
    case 425u: goto L_0890DB90;
    case 426u: goto L_0890DBA0;
    case 427u: goto L_0890DBA4;
    case 428u: goto L_0890DBB0;
    case 429u: goto L_0890DBC8;
    case 430u: goto L_0890DBF0;
    case 431u: goto L_0890DC10;
    case 432u: goto L_0890DC20;
    case 433u: goto L_0890DC30;
    case 434u: goto L_0890DC40;
    case 435u: goto L_0890DC4C;
    case 436u: goto L_0890DC74;
    case 437u: goto L_0890DC94;
    case 438u: goto L_0890DCA0;
    case 439u: goto L_0890DCA4;
    case 440u: goto L_0890DCA8;
    case 441u: goto L_0890DCBC;
    case 442u: goto L_0890DCDC;
    case 443u: goto L_0890DD04;
    case 444u: goto L_0890DD28;
    case 445u: goto L_0890DD2C;
    case 446u: goto L_0890DD40;
    case 447u: goto L_0890DD5C;
    case 448u: goto L_0890DD84;
    case 449u: goto L_0890DDA8;
    case 450u: goto L_0890DDAC;
    case 451u: goto L_0890DDC0;
    case 452u: goto L_0890DDDC;
    case 453u: goto L_0890DE04;
    case 454u: goto L_0890DE28;
    case 455u: goto L_0890DE2C;
    case 456u: goto L_0890DE40;
    case 457u: goto L_0890DE5C;
    case 458u: goto L_0890DE84;
    case 459u: goto L_0890DEA8;
    case 460u: goto L_0890DEAC;
    case 461u: goto L_0890DEC0;
    case 462u: goto L_0890DEDC;
    case 463u: goto L_0890DF04;
    case 464u: goto L_0890DF28;
    case 465u: goto L_0890DF2C;
    case 466u: goto L_0890DF40;
    case 467u: goto L_0890DF5C;
    case 468u: goto L_0890DF84;
    case 469u: goto L_0890DFA8;
    case 470u: goto L_0890DFAC;
    case 471u: goto L_0890DFC0;
    case 472u: goto L_0890DFDC;
    case 473u: goto L_0890E00C;
    case 474u: goto L_0890E034;
    case 475u: goto L_0890E038;
    case 476u: goto L_0890E04C;
    case 477u: goto L_0890E06C;
    case 478u: goto L_0890E09C;
    case 479u: goto L_0890E0C4;
    case 480u: goto L_0890E0C8;
    case 481u: goto L_0890E0DC;
    case 482u: goto L_0890E0FC;
    case 483u: goto L_0890E12C;
    case 484u: goto L_0890E154;
    case 485u: goto L_0890E158;
    case 486u: goto L_0890E16C;
    case 487u: goto L_0890E18C;
    case 488u: goto L_0890E1BC;
    case 489u: goto L_0890E1E4;
    case 490u: goto L_0890E1E8;
    case 491u: goto L_0890E1FC;
    case 492u: goto L_0890E21C;
    case 493u: goto L_0890E260;
    case 494u: goto L_0890E290;
    case 495u: goto L_0890E294;
    case 496u: goto L_0890E2A0;
    case 497u: goto L_0890E2C8;
    case 498u: goto L_0890E300;
    case 499u: goto L_0890E32C;
    case 500u: goto L_0890E330;
    case 501u: goto L_0890E344;
    case 502u: goto L_0890E368;
    case 503u: goto L_0890E3A0;
    case 504u: goto L_0890E3C8;
    case 505u: goto L_0890E3D0;
    case 506u: goto L_0890E3E4;
    case 507u: goto L_0890E40C;
    case 508u: goto L_0890E43C;
    case 509u: goto L_0890E464;
    case 510u: goto L_0890E46C;
    case 511u: goto L_0890E478;
    case 512u: goto L_0890E47C;
    case 513u: goto L_0890E490;
    case 514u: goto L_0890E494;
    case 515u: goto L_0890E4B4;
    case 516u: goto L_0890E4E4;
    case 517u: goto L_0890E50C;
    case 518u: goto L_0890E514;
    case 519u: goto L_0890E520;
    case 520u: goto L_0890E524;
    case 521u: goto L_0890E538;
    case 522u: goto L_0890E53C;
    case 523u: goto L_0890E55C;
    case 524u: goto L_0890E58C;
    case 525u: goto L_0890E5B4;
    case 526u: goto L_0890E5BC;
    case 527u: goto L_0890E5C8;
    case 528u: goto L_0890E5CC;
    case 529u: goto L_0890E5E0;
    case 530u: goto L_0890E5E4;
    case 531u: goto L_0890E604;
    case 532u: goto L_0890E634;
    case 533u: goto L_0890E65C;
    case 534u: goto L_0890E664;
    case 535u: goto L_0890E670;
    case 536u: goto L_0890E674;
    case 537u: goto L_0890E688;
    case 538u: goto L_0890E68C;
    case 539u: goto L_0890E6AC;
    case 540u: goto L_0890E6DC;
    case 541u: goto L_0890E704;
    case 542u: goto L_0890E70C;
    case 543u: goto L_0890E718;
    case 544u: goto L_0890E71C;
    case 545u: goto L_0890E730;
    case 546u: goto L_0890E734;
    case 547u: goto L_0890E754;
    case 548u: goto L_0890E784;
    case 549u: goto L_0890E7A8;
    case 550u: goto L_0890E7B4;
    case 551u: goto L_0890E7C8;
    case 552u: goto L_0890E7EC;
    case 553u: goto L_0890E834;
    case 554u: goto L_0890E840;
    case 555u: goto L_0890E860;
    case 556u: goto L_0890E884;
    case 557u: goto L_0890E8AC;
    case 558u: goto L_0890E8B4;
    case 559u: goto L_0890E8B8;
    case 560u: goto L_0890E8C4;
    case 561u: goto L_0890E8D0;
    case 562u: goto L_0890E904;
    case 563u: goto L_0890E960;
    case 564u: goto L_0890E984;
    case 565u: goto L_0890E9AC;
    case 566u: goto L_0890E9B4;
    case 567u: goto L_0890E9B8;
    case 568u: goto L_0890E9C4;
    case 569u: goto L_0890EA04;
    case 570u: goto L_0890EA60;
    case 571u: goto L_0890EAA0;
    case 572u: goto L_0890EAA8;
    case 573u: goto L_0890EAB4;
    case 574u: goto L_0890EAEC;
    case 575u: goto L_0890EB48;
    case 576u: goto L_0890EB88;
    case 577u: goto L_0890EB90;
    case 578u: goto L_0890EB9C;
    case 579u: goto L_0890EBD4;
    case 580u: goto L_0890EC10;
    case 581u: goto L_0890EC20;
    case 582u: goto L_0890EC2C;
    case 583u: goto L_0890EC58;
    case 584u: goto L_0890EC5C;
    case 585u: goto L_0890EC6C;
    case 586u: goto L_0890EC78;
    case 587u: goto L_0890EC84;
    case 588u: goto L_0890ECAC;
    case 589u: goto L_0890ECBC;
    case 590u: goto L_0890ECE4;
    case 591u: goto L_0890ED08;
    case 592u: goto L_0890ED0C;
    case 593u: goto L_0890ED20;
    case 594u: goto L_0890ED3C;
    case 595u: goto L_0890ED78;
    case 596u: goto L_0890ED84;
    case 597u: goto L_0890ED90;
    case 598u: goto L_0890EDA0;
    case 599u: goto L_0890EDAC;
    case 600u: goto L_0890EDB8;
    case 601u: goto L_0890EDC8;
    case 602u: goto L_0890EDD0;
    case 603u: goto L_0890EDE0;
    case 604u: goto L_0890EDE4;
    case 605u: goto L_0890EDF8;
    case 606u: goto L_0890EE08;
    case 607u: goto L_0890EE38;
    case 608u: goto L_0890EE48;
    case 609u: goto L_0890EE50;
    case 610u: goto L_0890EE60;
    case 611u: goto L_0890EE64;
    case 612u: goto L_0890EE8C;
    case 613u: goto L_0890EEF4;
    case 614u: goto L_0890EF10;
    case 615u: goto L_0890EF24;
    case 616u: goto L_0890EF54;
    case 617u: goto L_0890EF64;
    case 618u: goto L_0890EF7C;
    case 619u: goto L_0890EF80;
    case 620u: goto L_0890EF88;
    case 621u: goto L_0890EF94;
    case 622u: goto L_0890EFA8;
    case 623u: goto L_0890EFC0;
    case 624u: goto L_0890EFC4;
    case 625u: goto L_0890EFCC;
    case 626u: goto L_0890EFE4;
    case 627u: goto L_0890EFF0;
    case 628u: goto L_0890F008;
    case 629u: goto L_0890F020;
    case 630u: goto L_0890F024;
    case 631u: goto L_0890F02C;
    case 632u: goto L_0890F044;
    case 633u: goto L_0890F050;
    case 634u: goto L_0890F064;
    case 635u: goto L_0890F070;
    case 636u: goto L_0890F07C;
    case 637u: goto L_0890F08C;
    case 638u: goto L_0890F0A0;
    case 639u: goto L_0890F0B8;
    case 640u: goto L_0890F0D8;
    case 641u: goto L_0890F0EC;
    case 642u: goto L_0890F100;
    case 643u: goto L_0890F10C;
    case 644u: goto L_0890F11C;
    case 645u: goto L_0890F124;
    case 646u: goto L_0890F130;
    case 647u: goto L_0890F140;
    case 648u: goto L_0890F14C;
    case 649u: goto L_0890F154;
    case 650u: goto L_0890F160;
    case 651u: goto L_0890F168;
    case 652u: goto L_0890F17C;
    case 653u: goto L_0890F190;
    case 654u: goto L_0890F1A8;
    case 655u: goto L_0890F1C0;
    case 656u: goto L_0890F1C4;
    case 657u: goto L_0890F1CC;
    case 658u: goto L_0890F1D8;
    case 659u: goto L_0890F1E8;
    case 660u: goto L_0890F200;
    case 661u: goto L_0890F204;
    case 662u: goto L_0890F20C;
    case 663u: goto L_0890F224;
    case 664u: goto L_0890F230;
    case 665u: goto L_0890F268;
    case 666u: goto L_0890F270;
    case 667u: goto L_0890F27C;
    case 668u: goto L_0890F2AC;
    case 669u: goto L_0890F2B4;
    case 670u: goto L_0890F2C0;
    case 671u: goto L_0890F2D0;
    case 672u: goto L_0890F2F0;
    case 673u: goto L_0890F2F8;
    case 674u: goto L_0890F30C;
    case 675u: goto L_0890F31C;
    case 676u: goto L_0890F32C;
    case 677u: goto L_0890F33C;
    case 678u: goto L_0890F34C;
    case 679u: goto L_0890F360;
    case 680u: goto L_0890F36C;
    case 681u: goto L_0890F378;
    case 682u: goto L_0890F384;
    case 683u: goto L_0890F398;
    case 684u: goto L_0890F3B4;
    case 685u: goto L_0890F3C0;
    case 686u: goto L_0890F3C8;
    case 687u: goto L_0890F3D4;
    case 688u: goto L_0890F3DC;
    case 689u: goto L_0890F3F0;
    case 690u: goto L_0890F404;
    case 691u: goto L_0890F41C;
    case 692u: goto L_0890F420;
    case 693u: goto L_0890F428;
    case 694u: goto L_0890F440;
    case 695u: goto L_0890F44C;
    case 696u: goto L_0890F464;
    case 697u: goto L_0890F480;
    case 698u: goto L_0890F48C;
    case 699u: goto L_0890F490;
    case 700u: goto L_0890F49C;
    case 701u: goto L_0890F4A8;
    case 702u: goto L_0890F4D0;
    case 703u: goto L_0890F4E0;
    case 704u: goto L_0890F4FC;
    case 705u: goto L_0890F504;
    case 706u: goto L_0890F510;
    case 707u: goto L_0890F51C;
    case 708u: goto L_0890F520;
    case 709u: goto L_0890F534;
    case 710u: goto L_0890F570;
    case 711u: goto L_0890F578;
    case 712u: goto L_0890F584;
    case 713u: goto L_0890F590;
    case 714u: goto L_0890F5A0;
    case 715u: goto L_0890F5CC;
    case 716u: goto L_0890F5D4;
    case 717u: goto L_0890F5E0;
    case 718u: goto L_0890F5E4;
    case 719u: goto L_0890F5F4;
    case 720u: goto L_0890F5FC;
    case 721u: goto L_0890F60C;
    case 722u: goto L_0890F620;
    case 723u: goto L_0890F630;
    case 724u: goto L_0890F640;
    case 725u: goto L_0890F650;
    case 726u: goto L_0890F660;
    case 727u: goto L_0890F674;
    case 728u: goto L_0890F680;
    case 729u: goto L_0890F69C;
    case 730u: goto L_0890F6A4;
    case 731u: goto L_0890F6B0;
    case 732u: goto L_0890F6BC;
    case 733u: goto L_0890F6D0;
    case 734u: goto L_0890F6E0;
    case 735u: goto L_0890F6EC;
    case 736u: goto L_0890F6F4;
    case 737u: goto L_0890F700;
    case 738u: goto L_0890F708;
    case 739u: goto L_0890F71C;
    case 740u: goto L_0890F730;
    case 741u: goto L_0890F748;
    case 742u: goto L_0890F74C;
    case 743u: goto L_0890F754;
    case 744u: goto L_0890F76C;
    case 745u: goto L_0890F778;
    case 746u: goto L_0890F790;
    case 747u: goto L_0890F7AC;
    case 748u: goto L_0890F7B8;
    case 749u: goto L_0890F7D0;
    case 750u: goto L_0890F7D4;
    case 751u: goto L_0890F7E0;
    case 752u: goto L_0890F7EC;
    case 753u: goto L_0890F7F0;
    case 754u: goto L_0890F81C;
    case 755u: goto L_0890F83C;
    case 756u: goto L_0890F848;
    case 757u: goto L_0890F854;
    case 758u: goto L_0890F864;
    case 759u: goto L_0890F870;
    case 760u: goto L_0890F87C;
    case 761u: goto L_0890F88C;
    case 762u: goto L_0890F898;
    case 763u: goto L_0890F8B0;
    case 764u: goto L_0890F8B8;
    case 765u: goto L_0890F8D4;
    case 766u: goto L_0890F8E0;
    case 767u: goto L_0890F8EC;
    case 768u: goto L_0890F8FC;
    case 769u: goto L_0890F918;
    case 770u: goto L_0890F924;
    case 771u: goto L_0890F93C;
    case 772u: goto L_0890F940;
    case 773u: goto L_0890F95C;
    case 774u: goto L_0890F964;
    case 775u: goto L_0890F970;
    case 776u: goto L_0890F99C;
    case 777u: goto L_0890F9B8;
    case 778u: goto L_0890F9C0;
    case 779u: goto L_0890F9D8;
    case 780u: goto L_0890F9DC;
    case 781u: goto L_0890F9F0;
    case 782u: goto L_0890F9F4;
    case 783u: goto L_0890FA14;
    case 784u: goto L_0890FA20;
    case 785u: goto L_0890FA2C;
    case 786u: goto L_0890FA58;
    case 787u: goto L_0890FA64;
    case 788u: goto L_0890FA70;
    case 789u: goto L_0890FA7C;
    case 790u: goto L_0890FA98;
    case 791u: goto L_0890FAA8;
    case 792u: goto L_0890FAC0;
    case 793u: goto L_0890FAE0;
    case 794u: goto L_0890FAF8;
    case 795u: goto L_0890FB1C;
    case 796u: goto L_0890FB44;
    case 797u: goto L_0890FB4C;
    case 798u: goto L_0890FB50;
    case 799u: goto L_0890FB58;
    case 800u: goto L_0890FB64;
    case 801u: goto L_0890FB70;
    case 802u: goto L_0890FB74;
    case 803u: goto L_0890FB80;
    case 804u: goto L_0890FB8C;
    case 805u: goto L_0890FBA8;
    case 806u: goto L_0890FBFC;
    case 807u: goto L_0890FC10;
    case 808u: goto L_0890FC18;
    case 809u: goto L_0890FC24;
    case 810u: goto L_0890FC2C;
    case 811u: goto L_0890FC38;
    case 812u: goto L_0890FC3C;
    case 813u: goto L_0890FC68;
    case 814u: goto L_0890FCB4;
    case 815u: goto L_0890FCC0;
    case 816u: goto L_0890FCCC;
    case 817u: goto L_0890FCF4;
    case 818u: goto L_0890FD08;
    case 819u: goto L_0890FD1C;
    case 820u: goto L_0890FD44;
    case 821u: goto L_0890FD78;
    case 822u: goto L_0890FD90;
    case 823u: goto L_0890FD9C;
    case 824u: goto L_0890FDA8;
    case 825u: goto L_0890FDCC;
    case 826u: goto L_0890FDF0;
    case 827u: goto L_0890FE10;
    case 828u: goto L_0890FE40;
    case 829u: goto L_0890FE60;
    case 830u: goto L_0890FEA8;
    case 831u: goto L_0890FEBC;
    case 832u: goto L_0890FEC4;
    case 833u: goto L_0890FED0;
    case 834u: goto L_0890FED8;
    case 835u: goto L_0890FEE4;
    case 836u: goto L_0890FEE8;
    case 837u: goto L_0890FF10;
    case 838u: goto L_0890FF54;
    case 839u: goto L_0890FF60;
    case 840u: goto L_0890FF6C;
    case 841u: goto L_0890FF8C;
    case 842u: goto L_0890FF9C;
    case 843u: goto L_0890FFB0;
    case 844u: goto L_0890FFD4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0890C000:
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    ctx.set_gpr(23, ctx.gpr[10] + 0u);
    ctx.set_gpr(22, ctx.gpr[11] + 0u);
    ctx.set_gpr(31, 0x0890C01Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0890C01Cu) goto L_0890C01C;
    return;
L_0890C01C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C0A0;
      }
      goto L_0890C028;
    }
L_0890C028:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890C03Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890C03Cu) goto L_0890C03C;
    return;
L_0890C03C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C0A0;
      }
      goto L_0890C044;
    }
L_0890C044:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    ctx.set_gpr(11, ctx.gpr[23] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890C080u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890C080u) goto L_0890C080;
    return;
L_0890C080:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890C0A0;
      }
      goto L_0890C088;
    }
L_0890C088:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, ctx.gpr[21] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C0EC;
      }
      goto L_0890C0A0;
    }
L_0890C0A0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C0D4;
      }
      goto L_0890C0A8;
    }
L_0890C0A8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13304));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0890C0C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0890C0C0u) goto L_0890C0C0;
    return;
L_0890C0C0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0890C0D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x0890C0D4u) goto L_0890C0D4;
    return;
L_0890C0D4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C0E4;
      }
      goto L_0890C0E0;
    }
L_0890C0E0:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_0890C0E4;
L_0890C0E4:
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0890C0EC;
L_0890C0EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890C11C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-560));
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
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(22, ctx.gpr[6] + 0u);
    ctx.set_gpr(23, ctx.gpr[7] + 0u);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
    ctx.set_gpr(30, ctx.gpr[9] + 0u);
    ctx.set_gpr(18, ctx.gpr[10] + 0u);
    ctx.set_gpr(17, ctx.gpr[11] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C17C;
      }
      goto L_0890C170;
    }
L_0890C170:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890C184;
      }
      goto L_0890C17C;
    }
L_0890C17C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30608)));
    goto L_0890C184;
L_0890C184:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C198;
      }
      goto L_0890C18C;
    }
L_0890C18C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890C1A0;
      }
      goto L_0890C198;
    }
L_0890C198:
    ctx.set_gpr(18, 2228u << 16u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-13296));
    goto L_0890C1A0;
L_0890C1A0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C6BC;
      }
      goto L_0890C1A8;
    }
L_0890C1A8:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C6BC;
      }
      goto L_0890C1B4;
    }
L_0890C1B4:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(34));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0890C2C8;
      }
      goto L_0890C1CC;
    }
L_0890C1CC:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(39));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0890C2C8;
      }
      goto L_0890C1DC;
    }
L_0890C1DC:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C284;
      }
      goto L_0890C1EC;
    }
L_0890C1EC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(92));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0890C274;
      }
      goto L_0890C1F8;
    }
L_0890C1F8:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(116));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0890C25C;
      }
      goto L_0890C20C;
    }
L_0890C20C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(114));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0890C244;
      }
      goto L_0890C218;
    }
L_0890C218:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(110));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0890C22C;
      }
      goto L_0890C224;
    }
L_0890C224:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C280;
      }
      goto L_0890C22C;
    }
L_0890C22C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C280;
      }
      goto L_0890C244;
    }
L_0890C244:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C280;
      }
      goto L_0890C25C;
    }
L_0890C25C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C280;
      }
      goto L_0890C274;
    }
L_0890C274:
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_0890C280;
L_0890C280:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0890C284;
L_0890C284:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C2AC;
      }
      goto L_0890C290;
    }
L_0890C290:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[5]))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(39));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0890C2AC;
      }
      goto L_0890C2A0;
    }
L_0890C2A0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890C1EC;
      }
      goto L_0890C2AC;
    }
L_0890C2AC:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(39));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0890C2C8;
      }
      goto L_0890C2C4;
    }
L_0890C2C4:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0890C2C8;
L_0890C2C8:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(34));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0890C65C;
      }
      goto L_0890C2D8;
    }
L_0890C2D8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(92));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890C528;
      }
      goto L_0890C2E4;
    }
L_0890C2E4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(115));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0890C4F0;
      }
      goto L_0890C2F0;
    }
L_0890C2F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(112));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0890C4A4;
      }
      goto L_0890C2FC;
    }
L_0890C2FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(111));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0890C46C;
      }
      goto L_0890C308;
    }
L_0890C308:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(108));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0890C434;
      }
      goto L_0890C314;
    }
L_0890C314:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(102));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0890C36C;
      }
      goto L_0890C320;
    }
L_0890C320:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(97));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0890C334;
      }
      goto L_0890C32C;
    }
L_0890C32C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C694;
      }
      goto L_0890C334;
    }
L_0890C334:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(304))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C34C;
      }
      goto L_0890C340;
    }
L_0890C340:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C354;
      }
      goto L_0890C34C;
    }
L_0890C34C:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13304));
    goto L_0890C354;
L_0890C354:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0890C364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0890C364u) goto L_0890C364;
    return;
L_0890C364:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C6A8;
      }
      goto L_0890C36C;
    }
L_0890C36C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0890C378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 613u, 0x08816CDCu>(ctx, &aot_mem) && ctx.pc == 0x0890C378u) goto L_0890C378;
    return;
L_0890C378:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(47));
    ctx.set_gpr(31, 0x0890C38Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 613u, 0x08816CDCu>(ctx, &aot_mem) && ctx.pc == 0x0890C38Cu) goto L_0890C38C;
    return;
L_0890C38C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C3BC;
      }
      goto L_0890C394;
    }
L_0890C394:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C3BC;
      }
      goto L_0890C39C;
    }
L_0890C39C:
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C3B0;
      }
      goto L_0890C3A8;
    }
L_0890C3A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C3B4;
      }
      goto L_0890C3B0;
    }
L_0890C3B0:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    goto L_0890C3B4;
L_0890C3B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C3D0;
      }
      goto L_0890C3BC;
    }
L_0890C3BC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C3CC;
      }
      goto L_0890C3C4;
    }
L_0890C3C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C3D0;
      }
      goto L_0890C3CC;
    }
L_0890C3CC:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    goto L_0890C3D0;
L_0890C3D0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C3E4;
      }
      goto L_0890C3D8;
    }
L_0890C3D8:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C3E8;
      }
      goto L_0890C3E4;
    }
L_0890C3E4:
    ctx.set_gpr(20, ctx.gpr[19] + 0u);
    goto L_0890C3E8;
L_0890C3E8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C6A8;
      }
      goto L_0890C3F0;
    }
L_0890C3F0:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C6A8;
      }
      goto L_0890C3FC;
    }
L_0890C3FC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(304))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C414;
      }
      goto L_0890C408;
    }
L_0890C408:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C41C;
      }
      goto L_0890C414;
    }
L_0890C414:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13316));
    goto L_0890C41C;
L_0890C41C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0890C42Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0890C42Cu) goto L_0890C42C;
    return;
L_0890C42C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C6A8;
      }
      goto L_0890C434;
    }
L_0890C434:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(304))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C44C;
      }
      goto L_0890C440;
    }
L_0890C440:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C454;
      }
      goto L_0890C44C;
    }
L_0890C44C:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13336));
    goto L_0890C454;
L_0890C454:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(6, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x0890C464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0890C464u) goto L_0890C464;
    return;
L_0890C464:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C6A8;
      }
      goto L_0890C46C;
    }
L_0890C46C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(304))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C484;
      }
      goto L_0890C478;
    }
L_0890C478:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C48C;
      }
      goto L_0890C484;
    }
L_0890C484:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13336));
    goto L_0890C48C;
L_0890C48C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x0890C49Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0890C49Cu) goto L_0890C49C;
    return;
L_0890C49C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C6A8;
      }
      goto L_0890C4A4;
    }
L_0890C4A4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C6A8;
      }
      goto L_0890C4AC;
    }
L_0890C4AC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C6A8;
      }
      goto L_0890C4B8;
    }
L_0890C4B8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(304))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C4D0;
      }
      goto L_0890C4C4;
    }
L_0890C4C4:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C4D8;
      }
      goto L_0890C4D0;
    }
L_0890C4D0:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13316));
    goto L_0890C4D8;
L_0890C4D8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0890C4E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0890C4E8u) goto L_0890C4E8;
    return;
L_0890C4E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C6A8;
      }
      goto L_0890C4F0;
    }
L_0890C4F0:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(304))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C508;
      }
      goto L_0890C4FC;
    }
L_0890C4FC:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C510;
      }
      goto L_0890C508;
    }
L_0890C508:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13316));
    goto L_0890C510;
L_0890C510:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x0890C520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0890C520u) goto L_0890C520;
    return;
L_0890C520:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C6A8;
      }
      goto L_0890C528;
    }
L_0890C528:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(116));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0890C590;
      }
      goto L_0890C540;
    }
L_0890C540:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(114));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0890C578;
      }
      goto L_0890C54C;
    }
L_0890C54C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(110));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0890C560;
      }
      goto L_0890C558;
    }
L_0890C558:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C6A8;
      }
      goto L_0890C560;
    }
L_0890C560:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(31, 0x0890C570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0890C570u) goto L_0890C570;
    return;
L_0890C570:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C6A8;
      }
      goto L_0890C578;
    }
L_0890C578:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32716));
    ctx.set_gpr(31, 0x0890C588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0890C588u) goto L_0890C588;
    return;
L_0890C588:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C6A8;
      }
      goto L_0890C590;
    }
L_0890C590:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32712));
    ctx.set_gpr(31, 0x0890C5A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0890C5A0u) goto L_0890C5A0;
    return;
L_0890C5A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C6A8;
      }
      goto L_0890C5A8;
    }
L_0890C5A8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(92));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0890C630;
      }
      goto L_0890C5B4;
    }
L_0890C5B4:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(116));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0890C618;
      }
      goto L_0890C5C8;
    }
L_0890C5C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(114));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0890C600;
      }
      goto L_0890C5D4;
    }
L_0890C5D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(110));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0890C5E8;
      }
      goto L_0890C5E0;
    }
L_0890C5E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C658;
      }
      goto L_0890C5E8;
    }
L_0890C5E8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(31, 0x0890C5F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x0890C5F8u) goto L_0890C5F8;
    return;
L_0890C5F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C658;
      }
      goto L_0890C600;
    }
L_0890C600:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32716));
    ctx.set_gpr(31, 0x0890C610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x0890C610u) goto L_0890C610;
    return;
L_0890C610:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C658;
      }
      goto L_0890C618;
    }
L_0890C618:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32712));
    ctx.set_gpr(31, 0x0890C628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x0890C628u) goto L_0890C628;
    return;
L_0890C628:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C658;
      }
      goto L_0890C630;
    }
L_0890C630:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x0890C63Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0890C63Cu) goto L_0890C63C;
    return;
L_0890C63C:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13284));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0890C658u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0890C658u) goto L_0890C658;
    return;
L_0890C658:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0890C65C;
L_0890C65C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C678;
      }
      goto L_0890C668;
    }
L_0890C668:
    ctx.set_gpr(20, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(34));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0890C5A8;
      }
      goto L_0890C678;
    }
L_0890C678:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(34));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0890C6A8;
      }
      goto L_0890C688;
    }
L_0890C688:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C6A8;
      }
      goto L_0890C694;
    }
L_0890C694:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13284));
    ctx.set_gpr(31, 0x0890C6A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0890C6A8u) goto L_0890C6A8;
    return;
L_0890C6A8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0890C6BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 530u, 0x088168E4u>(ctx, &aot_mem) && ctx.pc == 0x0890C6BCu) goto L_0890C6BC;
    return;
L_0890C6BC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890C1B4;
      }
      goto L_0890C6C8;
    }
L_0890C6C8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890C6DC;
      }
      goto L_0890C6D4;
    }
L_0890C6D4:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[17]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(0u));
    goto L_0890C6DC;
L_0890C6DC:
    ctx.set_gpr(2, 0u + 0u);
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(560));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890C714:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890C71C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890C724:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x0890C74Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 58u, 0x088D8444u>(ctx, &aot_mem) && ctx.pc == 0x0890C74Cu) goto L_0890C74C;
    return;
L_0890C74C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890C770u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890C770u) goto L_0890C770;
    return;
L_0890C770:
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
L_0890C78C:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890C798:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890C7CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890C7CCu) goto L_0890C7CC;
    return;
L_0890C7CC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[16]));
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
L_0890C7F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0890C820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0890C820u) goto L_0890C820;
    return;
L_0890C820:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13336));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0890C83Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x0890C83Cu) goto L_0890C83C;
    return;
L_0890C83C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C858;
      }
      goto L_0890C84C;
    }
L_0890C84C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C864;
      }
      goto L_0890C858;
    }
L_0890C858:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_0890C864;
L_0890C864:
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
L_0890C880:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1040));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13336));
    ctx.set_gpr(31, 0x0890C8A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0890C8A8u) goto L_0890C8A8;
    return;
L_0890C8A8:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890C8C0;
      }
      goto L_0890C8B4;
    }
L_0890C8B4:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C910;
      }
      goto L_0890C8C0;
    }
L_0890C8C0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890C8F8;
      }
      goto L_0890C8D0;
    }
L_0890C8D0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0890C8DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0890C8DCu) goto L_0890C8DC;
    return;
L_0890C8DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C8F0;
      }
      goto L_0890C8E4;
    }
L_0890C8E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0890C8F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0890C8F0u) goto L_0890C8F0;
    return;
L_0890C8F0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0890C8F8;
L_0890C8F8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0890C90Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0890C90Cu) goto L_0890C90C;
    return;
L_0890C90C:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_0890C910;
L_0890C910:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890C928:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0890C940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 501u, 0x0894227Cu>(ctx, &aot_mem) && ctx.pc == 0x0890C940u) goto L_0890C940;
    return;
L_0890C940:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(18460));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C960;
      }
      goto L_0890C954;
    }
L_0890C954:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0890C960u);
    // nop
    goto L_0890C978;
L_0890C960:
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
L_0890C978:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0890C990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 505u, 0x089422D0u>(ctx, &aot_mem) && ctx.pc == 0x0890C990u) goto L_0890C990;
    return;
L_0890C990:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(18460));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
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
L_0890C9B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0890C9CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 519u, 0x08942410u>(ctx, &aot_mem) && ctx.pc == 0x0890C9CCu) goto L_0890C9CC;
    return;
L_0890C9CC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(18460));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
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
L_0890C9F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0890CA00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 534u, 0x0894259Cu>(ctx, &aot_mem) && ctx.pc == 0x0890CA00u) goto L_0890CA00;
    return;
L_0890CA00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890CA10:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890CA1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(31));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890CA3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890CA3Cu) goto L_0890CA3C;
    return;
L_0890CA3C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890CA4C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890CA58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890CA8Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890CA8Cu) goto L_0890CA8C;
    return;
L_0890CA8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27040));
    ctx.set_gpr(31, 0x0890CAA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x0890CAA0u) goto L_0890CAA0;
    return;
L_0890CAA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
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
L_0890CACC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29344)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890CADC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890CAE4:
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-13280)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 2228u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-13280), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CF50;
      }
      goto L_0890CB3C;
    }
L_0890CB3C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CF50;
      }
      goto L_0890CB44;
    }
L_0890CB44:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890CB54;
      }
      goto L_0890CB4C;
    }
L_0890CB4C:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    goto L_0890CB54;
L_0890CB54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CF50;
      }
      goto L_0890CB60;
    }
L_0890CB60:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890CB70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890CB70u) goto L_0890CB70;
    return;
L_0890CB70:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x0890CB80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0890CB80u) goto L_0890CB80;
    return;
L_0890CB80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(300)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890CB94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890CB94u) goto L_0890CB94;
    return;
L_0890CB94:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(72)));
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.hi);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CBB4;
      }
      goto L_0890CBAC;
    }
L_0890CBAC:
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    goto L_0890CBB4;
L_0890CBB4:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CC1C;
      }
      goto L_0890CBC8;
    }
L_0890CBC8:
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    ctx.set_gpr(3, ctx.gpr[7] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CBFC;
      }
      goto L_0890CBF0;
    }
L_0890CBF0:
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CC1C;
      }
      goto L_0890CBFC;
    }
L_0890CBFC:
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CC14;
      }
      goto L_0890CC08;
    }
L_0890CC08:
    ctx.set_gpr(5, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CC1C;
      }
      goto L_0890CC14;
    }
L_0890CC14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CC78;
      }
      goto L_0890CC1C;
    }
L_0890CC1C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890CBC8;
      }
      goto L_0890CC28;
    }
L_0890CC28:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890CC3C;
      }
      goto L_0890CC30;
    }
L_0890CC30:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CC78;
      }
      goto L_0890CC3C;
    }
L_0890CC3C:
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890CC68;
      }
      goto L_0890CC5C;
    }
L_0890CC5C:
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CC74;
      }
      goto L_0890CC68;
    }
L_0890CC68:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CC78;
      }
      goto L_0890CC74;
    }
L_0890CC74:
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    goto L_0890CC78;
L_0890CC78:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0890CCC8;
      }
      goto L_0890CC84;
    }
L_0890CC84:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x0890CC94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 816u, 0x08987470u>(ctx, &aot_mem) && ctx.pc == 0x0890CC94u) goto L_0890CC94;
    return;
L_0890CC94:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x0890CCB0u);
    // nop
    goto L_0890FF10;
L_0890CCB0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x0890CCC8u);
    // nop
    goto L_0890FF10;
L_0890CCC8:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x0890CCD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x0890CCD4u) goto L_0890CCD4;
    return;
L_0890CCD4:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CF44;
      }
      goto L_0890CCE4;
    }
L_0890CCE4:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0890CCF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0890CCF4u) goto L_0890CCF4;
    return;
L_0890CCF4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26984)));
    ctx.set_gpr(31, 0x0890CD0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0890CD0Cu) goto L_0890CD0C;
    return;
L_0890CD0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CDAC;
      }
      goto L_0890CD14;
    }
L_0890CD14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CF40;
      }
      goto L_0890CD2C;
    }
L_0890CD2C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0890CD44u);
    // nop
    goto L_0890CAE4;
L_0890CD44:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28824)));
    ctx.set_gpr(31, 0x0890CD58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0890CD58u) goto L_0890CD58;
    return;
L_0890CD58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CF40;
      }
      goto L_0890CD60;
    }
L_0890CD60:
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CD98;
      }
      goto L_0890CD70;
    }
L_0890CD70:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0890CD94u);
    // nop
    goto L_0890CAE4;
L_0890CD94:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0890CD98;
L_0890CD98:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890CD70;
      }
      goto L_0890CDA4;
    }
L_0890CDA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CF40;
      }
      goto L_0890CDAC;
    }
L_0890CDAC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26848)));
    ctx.set_gpr(31, 0x0890CDC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0890CDC0u) goto L_0890CDC0;
    return;
L_0890CDC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CF40;
      }
      goto L_0890CDC8;
    }
L_0890CDC8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CF40;
      }
      goto L_0890CDE4;
    }
L_0890CDE4:
    ctx.set_gpr(31, 0x0890CDECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 445u, 0x08929F74u>(ctx, &aot_mem) && ctx.pc == 0x0890CDECu) goto L_0890CDEC;
    return;
L_0890CDEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(300)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890CE00u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890CE00u) goto L_0890CE00;
    return;
L_0890CE00:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x0890CE10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 442u, 0x08929F30u>(ctx, &aot_mem) && ctx.pc == 0x0890CE10u) goto L_0890CE10;
    return;
L_0890CE10:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[16]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(3, ctx.hi);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CE2C;
      }
      goto L_0890CE24;
    }
L_0890CE24:
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    goto L_0890CE2C;
L_0890CE2C:
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CE94;
      }
      goto L_0890CE40;
    }
L_0890CE40:
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[6]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    ctx.set_gpr(4, ctx.gpr[8] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CE74;
      }
      goto L_0890CE68;
    }
L_0890CE68:
    ctx.set_gpr(7, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CE94;
      }
      goto L_0890CE74;
    }
L_0890CE74:
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CE8C;
      }
      goto L_0890CE80;
    }
L_0890CE80:
    ctx.set_gpr(6, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CE94;
      }
      goto L_0890CE8C;
    }
L_0890CE8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CEF0;
      }
      goto L_0890CE94;
    }
L_0890CE94:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890CE40;
      }
      goto L_0890CEA0;
    }
L_0890CEA0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890CEB4;
      }
      goto L_0890CEA8;
    }
L_0890CEA8:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CEF0;
      }
      goto L_0890CEB4;
    }
L_0890CEB4:
    ctx.set_gpr(4, ctx.gpr[7] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890CEE0;
      }
      goto L_0890CED4;
    }
L_0890CED4:
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CEEC;
      }
      goto L_0890CEE0;
    }
L_0890CEE0:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CEF0;
      }
      goto L_0890CEEC;
    }
L_0890CEEC:
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    goto L_0890CEF0;
L_0890CEF0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0890CF40;
      }
      goto L_0890CEFC;
    }
L_0890CEFC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x0890CF0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 816u, 0x08987470u>(ctx, &aot_mem) && ctx.pc == 0x0890CF0Cu) goto L_0890CF0C;
    return;
L_0890CF0C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x0890CF28u);
    // nop
    goto L_0890FF10;
L_0890CF28:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x0890CF40u);
    // nop
    goto L_0890FF10;
L_0890CF40:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0890CF44;
L_0890CF44:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890CCE4;
      }
      goto L_0890CF50;
    }
L_0890CF50:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-13280)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, 2228u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-13280), ctx.gpr[4]);
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
L_0890CF98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D078;
      }
      goto L_0890CFD4;
    }
L_0890CFD4:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(320)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890CFF8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890CFF8u) goto L_0890CFF8;
    return;
L_0890CFF8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(212)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890D010u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890D010u) goto L_0890D010;
    return;
L_0890D010:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D04C;
      }
      goto L_0890D01C;
    }
L_0890D01C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890D040;
      }
      goto L_0890D02C;
    }
L_0890D02C:
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890D040;
      }
      goto L_0890D03C;
    }
L_0890D03C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0890D040;
L_0890D040:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D04C;
      }
      goto L_0890D048;
    }
L_0890D048:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0890D04C;
L_0890D04C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890D074;
      }
      goto L_0890D054;
    }
L_0890D054:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0890D064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x0890D064u) goto L_0890D064;
    return;
L_0890D064:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0890D074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x0890D074u) goto L_0890D074;
    return;
L_0890D074:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    goto L_0890D078;
L_0890D078:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0890CFD4;
      }
      goto L_0890D080;
    }
L_0890D080:
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
L_0890D0A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0890D0CCu);
    // nop
    goto L_0890CA58;
L_0890D0CC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0890D0DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 816u, 0x08987470u>(ctx, &aot_mem) && ctx.pc == 0x0890D0DCu) goto L_0890D0DC;
    return;
L_0890D0DC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0890D0F4u);
    // nop
    goto L_0890FF10;
L_0890D0F4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0890D104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 816u, 0x08987470u>(ctx, &aot_mem) && ctx.pc == 0x0890D104u) goto L_0890D104;
    return;
L_0890D104:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0890D11Cu);
    // nop
    goto L_0890FF10;
L_0890D11C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13276));
    ctx.set_gpr(31, 0x0890D130u);
    // nop
    goto L_0890CADC;
L_0890D130:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890D144:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0890D17Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0890D17Cu) goto L_0890D17C;
    return;
L_0890D17C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0890D188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x0890D188u) goto L_0890D188;
    return;
L_0890D188:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0890D194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0890D194u) goto L_0890D194;
    return;
L_0890D194:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0890D1A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 111u, 0x088F8A08u>(ctx, &aot_mem) && ctx.pc == 0x0890D1A0u) goto L_0890D1A0;
    return;
L_0890D1A0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0890D1ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x0890D1ACu) goto L_0890D1AC;
    return;
L_0890D1AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0890D1B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0890D1B8u) goto L_0890D1B8;
    return;
L_0890D1B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0890D1C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 599u, 0x088F7284u>(ctx, &aot_mem) && ctx.pc == 0x0890D1C4u) goto L_0890D1C4;
    return;
L_0890D1C4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0890D1D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x0890D1D0u) goto L_0890D1D0;
    return;
L_0890D1D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0890D1DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0890D1DCu) goto L_0890D1DC;
    return;
L_0890D1DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0890D1E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 111u, 0x088F8A08u>(ctx, &aot_mem) && ctx.pc == 0x0890D1E8u) goto L_0890D1E8;
    return;
L_0890D1E8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0890D1FCu);
    // nop
    goto L_0890D0A8;
L_0890D1FC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0890D214u);
    // nop
    goto L_0890CAE4;
L_0890D214:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x0890D228u);
    // nop
    goto L_0890CF98;
L_0890D228:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(21, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D260;
      }
      goto L_0890D23C;
    }
L_0890D23C:
    ctx.set_gpr(3, ctx.gpr[21] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D25C;
      }
      goto L_0890D254;
    }
L_0890D254:
    ctx.set_gpr(31, 0x0890D25Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0890D25Cu) goto L_0890D25C;
    return;
L_0890D25C:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_0890D260;
L_0890D260:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890D23C;
      }
      goto L_0890D26C;
    }
L_0890D26C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D290;
      }
      goto L_0890D27C;
    }
L_0890D27C:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_0890D290;
L_0890D290:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890D27C;
      }
      goto L_0890D29C;
    }
L_0890D29C:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(21, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D2D8;
      }
      goto L_0890D2B4;
    }
L_0890D2B4:
    ctx.set_gpr(3, ctx.gpr[21] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D2D4;
      }
      goto L_0890D2CC;
    }
L_0890D2CC:
    ctx.set_gpr(31, 0x0890D2D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0890D2D4u) goto L_0890D2D4;
    return;
L_0890D2D4:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_0890D2D8;
L_0890D2D8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890D2B4;
      }
      goto L_0890D2E4;
    }
L_0890D2E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D308;
      }
      goto L_0890D2F4;
    }
L_0890D2F4:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_0890D308;
L_0890D308:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890D2F4;
      }
      goto L_0890D314;
    }
L_0890D314:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[6]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890D380u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890D380u) goto L_0890D380;
    return;
L_0890D380:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21808));
    ctx.set_gpr(31, 0x0890D394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x0890D394u) goto L_0890D394;
    return;
L_0890D394:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D3C8;
      }
      goto L_0890D3AC;
    }
L_0890D3AC:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D3C8;
      }
      goto L_0890D3C4;
    }
L_0890D3C4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0890D3C8;
L_0890D3C8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D3DC;
      }
      goto L_0890D3D0;
    }
L_0890D3D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    goto L_0890D3DC;
L_0890D3DC:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D408;
      }
      goto L_0890D3EC;
    }
L_0890D3EC:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D408;
      }
      goto L_0890D404;
    }
L_0890D404:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0890D408;
L_0890D408:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D434;
      }
      goto L_0890D410;
    }
L_0890D410:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890D434;
      }
      goto L_0890D428;
    }
L_0890D428:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0890D434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0890D434u) goto L_0890D434;
    return;
L_0890D434:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0890D44Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0890D44Cu) goto L_0890D44C;
    return;
L_0890D44C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D624;
      }
      goto L_0890D45C;
    }
L_0890D45C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0890D46Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 141u, 0x08910940u>(ctx, &aot_mem) && ctx.pc == 0x0890D46Cu) goto L_0890D46C;
    return;
L_0890D46C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D4DC;
      }
      goto L_0890D48C;
    }
L_0890D48C:
    ctx.set_gpr(5, ctx.gpr[10] + ctx.gpr[9]);
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.set_gpr(6, ctx.gpr[11] << 2u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D4BC;
      }
      goto L_0890D4B0;
    }
L_0890D4B0:
    ctx.set_gpr(10, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D4DC;
      }
      goto L_0890D4BC;
    }
L_0890D4BC:
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D4D4;
      }
      goto L_0890D4C8;
    }
L_0890D4C8:
    ctx.set_gpr(9, ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D4DC;
      }
      goto L_0890D4D4;
    }
L_0890D4D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D534;
      }
      goto L_0890D4DC;
    }
L_0890D4DC:
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890D48C;
      }
      goto L_0890D4E8;
    }
L_0890D4E8:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890D4FC;
      }
      goto L_0890D4F0;
    }
L_0890D4F0:
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D534;
      }
      goto L_0890D4FC;
    }
L_0890D4FC:
    ctx.set_gpr(6, ctx.gpr[10] << 2u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[3] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890D524;
      }
      goto L_0890D518;
    }
L_0890D518:
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D530;
      }
      goto L_0890D524;
    }
L_0890D524:
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D534;
      }
      goto L_0890D530;
    }
L_0890D530:
    ctx.set_gpr(11, ctx.gpr[10] + 0u);
    goto L_0890D534;
L_0890D534:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890D620;
      }
      goto L_0890D540;
    }
L_0890D540:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D5A8;
      }
      goto L_0890D558;
    }
L_0890D558:
    ctx.set_gpr(5, ctx.gpr[10] + ctx.gpr[9]);
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.set_gpr(6, ctx.gpr[11] << 2u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D588;
      }
      goto L_0890D57C;
    }
L_0890D57C:
    ctx.set_gpr(10, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D5A8;
      }
      goto L_0890D588;
    }
L_0890D588:
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D5A0;
      }
      goto L_0890D594;
    }
L_0890D594:
    ctx.set_gpr(9, ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D5A8;
      }
      goto L_0890D5A0;
    }
L_0890D5A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D600;
      }
      goto L_0890D5A8;
    }
L_0890D5A8:
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890D558;
      }
      goto L_0890D5B4;
    }
L_0890D5B4:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890D5C8;
      }
      goto L_0890D5BC;
    }
L_0890D5BC:
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D600;
      }
      goto L_0890D5C8;
    }
L_0890D5C8:
    ctx.set_gpr(6, ctx.gpr[10] << 2u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[3] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890D5F0;
      }
      goto L_0890D5E4;
    }
L_0890D5E4:
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D5FC;
      }
      goto L_0890D5F0;
    }
L_0890D5F0:
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D600;
      }
      goto L_0890D5FC;
    }
L_0890D5FC:
    ctx.set_gpr(11, ctx.gpr[10] + 0u);
    goto L_0890D600;
L_0890D600:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0890D620;
      }
      goto L_0890D60C;
    }
L_0890D60C:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890D620u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890D620u) goto L_0890D620;
    return;
L_0890D620:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0890D624;
L_0890D624:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890D45C;
      }
      goto L_0890D630;
    }
L_0890D630:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D65C;
      }
      goto L_0890D640;
    }
L_0890D640:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D65C;
      }
      goto L_0890D658;
    }
L_0890D658:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0890D65C;
L_0890D65C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D688;
      }
      goto L_0890D664;
    }
L_0890D664:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890D688;
      }
      goto L_0890D67C;
    }
L_0890D67C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0890D688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0890D688u) goto L_0890D688;
    return;
L_0890D688:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D69C;
      }
      goto L_0890D694;
    }
L_0890D694:
    ctx.set_gpr(31, 0x0890D69Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0890D69Cu) goto L_0890D69C;
    return;
L_0890D69C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D6B0;
      }
      goto L_0890D6A8;
    }
L_0890D6A8:
    ctx.set_gpr(31, 0x0890D6B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0890D6B0u) goto L_0890D6B0;
    return;
L_0890D6B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D6C4;
      }
      goto L_0890D6BC;
    }
L_0890D6BC:
    ctx.set_gpr(31, 0x0890D6C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0890D6C4u) goto L_0890D6C4;
    return;
L_0890D6C4:
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
L_0890D6EC:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D73C;
      }
      goto L_0890D70C;
    }
L_0890D70C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890D730;
      }
      goto L_0890D71C;
    }
L_0890D71C:
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890D730;
      }
      goto L_0890D72C;
    }
L_0890D72C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0890D730;
L_0890D730:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D73C;
      }
      goto L_0890D738;
    }
L_0890D738:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0890D73C;
L_0890D73C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890D744:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D804;
      }
      goto L_0890D76C;
    }
L_0890D76C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D804;
      }
      goto L_0890D774;
    }
L_0890D774:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890D784u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890D784u) goto L_0890D784;
    return;
L_0890D784:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D7B0;
      }
      goto L_0890D78C;
    }
L_0890D78C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890D7A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890D7A8u) goto L_0890D7A8;
    return;
L_0890D7A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D804;
      }
      goto L_0890D7B0;
    }
L_0890D7B0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27016)));
    ctx.set_gpr(31, 0x0890D7C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0890D7C4u) goto L_0890D7C4;
    return;
L_0890D7C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890D804;
      }
      goto L_0890D7CC;
    }
L_0890D7CC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26848)));
    ctx.set_gpr(31, 0x0890D7E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0890D7E0u) goto L_0890D7E0;
    return;
L_0890D7E0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890D804;
      }
      goto L_0890D7E8;
    }
L_0890D7E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890D804u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890D804u) goto L_0890D804;
    return;
L_0890D804:
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
L_0890D820:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x0890D848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0890D848u) goto L_0890D848;
    return;
L_0890D848:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0890D854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 415u, 0x088FA450u>(ctx, &aot_mem) && ctx.pc == 0x0890D854u) goto L_0890D854;
    return;
L_0890D854:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0890D86Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0890D86Cu) goto L_0890D86C;
    return;
L_0890D86C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0890D87Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x0890D87Cu) goto L_0890D87C;
    return;
L_0890D87C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D890;
      }
      goto L_0890D888;
    }
L_0890D888:
    ctx.set_gpr(31, 0x0890D890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0890D890u) goto L_0890D890;
    return;
L_0890D890:
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
L_0890D8AC:
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
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890D8ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890D8ECu) goto L_0890D8EC;
    return;
L_0890D8EC:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x0890D904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0890D904u) goto L_0890D904;
    return;
L_0890D904:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, ctx.gpr[20] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D998;
      }
      goto L_0890D920;
    }
L_0890D920:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D950;
      }
      goto L_0890D944;
    }
L_0890D944:
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D954;
      }
      goto L_0890D950;
    }
L_0890D950:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0890D954;
L_0890D954:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27072)));
    ctx.set_gpr(31, 0x0890D968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0890D968u) goto L_0890D968;
    return;
L_0890D968:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D994;
      }
      goto L_0890D978;
    }
L_0890D978:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D994;
      }
      goto L_0890D98C;
    }
L_0890D98C:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_0890D994;
L_0890D994:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0890D998;
L_0890D998:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890D920;
      }
      goto L_0890D9A4;
    }
L_0890D9A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890DA5C;
      }
      goto L_0890D9B8;
    }
L_0890D9B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D9E4;
      }
      goto L_0890D9D8;
    }
L_0890D9D8:
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D9E8;
      }
      goto L_0890D9E4;
    }
L_0890D9E4:
    ctx.set_gpr(5, 0u + 0u);
    goto L_0890D9E8;
L_0890D9E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890DA38;
      }
      goto L_0890DA08;
    }
L_0890DA08:
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890DA2C;
      }
      goto L_0890DA18;
    }
L_0890DA18:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[6]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890DA2C;
      }
      goto L_0890DA28;
    }
L_0890DA28:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    goto L_0890DA2C;
L_0890DA2C:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890DA38;
      }
      goto L_0890DA34;
    }
L_0890DA34:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    goto L_0890DA38;
L_0890DA38:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890DA58;
      }
      goto L_0890DA40;
    }
L_0890DA40:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890DA58;
      }
      goto L_0890DA48;
    }
L_0890DA48:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(256)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890DA58u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890DA58u) goto L_0890DA58;
    return;
L_0890DA58:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0890DA5C;
L_0890DA5C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890D9B8;
      }
      goto L_0890DA68;
    }
L_0890DA68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890DA80;
      }
      goto L_0890DA74;
    }
L_0890DA74:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890DA84;
      }
      goto L_0890DA80;
    }
L_0890DA80:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0890DA84;
L_0890DA84:
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
L_0890DAB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(19, ctx.gpr[5] - ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[19] - ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890DBA4;
      }
      goto L_0890DB00;
    }
L_0890DB00:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890DB2C;
      }
      goto L_0890DB20;
    }
L_0890DB20:
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890DB30;
      }
      goto L_0890DB2C;
    }
L_0890DB2C:
    ctx.set_gpr(5, 0u + 0u);
    goto L_0890DB30;
L_0890DB30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890DBA0;
      }
      goto L_0890DB3C;
    }
L_0890DB3C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890DB88;
      }
      goto L_0890DB58;
    }
L_0890DB58:
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890DB7C;
      }
      goto L_0890DB68;
    }
L_0890DB68:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[6]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890DB7C;
      }
      goto L_0890DB78;
    }
L_0890DB78:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    goto L_0890DB7C;
L_0890DB7C:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890DB88;
      }
      goto L_0890DB84;
    }
L_0890DB84:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    goto L_0890DB88;
L_0890DB88:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890DBA0;
      }
      goto L_0890DB90;
    }
L_0890DB90:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890DBA0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890DBA0u) goto L_0890DBA0;
    return;
L_0890DBA0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0890DBA4;
L_0890DBA4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890DB00;
      }
      goto L_0890DBB0;
    }
L_0890DBB0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890DBC8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890DBC8u) goto L_0890DBC8;
    return;
L_0890DBC8:
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
L_0890DBF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890DC10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890DC10u) goto L_0890DC10;
    return;
L_0890DC10:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890DC20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0890DC30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 428u, 0x08945EB4u>(ctx, &aot_mem) && ctx.pc == 0x0890DC30u) goto L_0890DC30;
    return;
L_0890DC30:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890DC40:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890DC4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890DCA8;
      }
      goto L_0890DC74;
    }
L_0890DC74:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890DC94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890DC94u) goto L_0890DC94;
    return;
L_0890DC94:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890DCA4;
      }
      goto L_0890DCA0;
    }
L_0890DCA0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_0890DCA4;
L_0890DCA4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0890DCA8;
L_0890DCA8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890DC74;
      }
      goto L_0890DCBC;
    }
L_0890DCBC:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_0890DCDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
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
          goto L_0890DD2C;
      }
      goto L_0890DD04;
    }
L_0890DD04:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890DD28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890DD28u) goto L_0890DD28;
    return;
L_0890DD28:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0890DD2C;
L_0890DD2C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890DD04;
      }
      goto L_0890DD40;
    }
L_0890DD40:
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
L_0890DD5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
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
          goto L_0890DDAC;
      }
      goto L_0890DD84;
    }
L_0890DD84:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890DDA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890DDA8u) goto L_0890DDA8;
    return;
L_0890DDA8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0890DDAC;
L_0890DDAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890DD84;
      }
      goto L_0890DDC0;
    }
L_0890DDC0:
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
L_0890DDDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
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
          goto L_0890DE2C;
      }
      goto L_0890DE04;
    }
L_0890DE04:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890DE28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890DE28u) goto L_0890DE28;
    return;
L_0890DE28:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0890DE2C;
L_0890DE2C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890DE04;
      }
      goto L_0890DE40;
    }
L_0890DE40:
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
L_0890DE5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
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
          goto L_0890DEAC;
      }
      goto L_0890DE84;
    }
L_0890DE84:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890DEA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890DEA8u) goto L_0890DEA8;
    return;
L_0890DEA8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0890DEAC;
L_0890DEAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890DE84;
      }
      goto L_0890DEC0;
    }
L_0890DEC0:
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
L_0890DEDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
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
          goto L_0890DF2C;
      }
      goto L_0890DF04;
    }
L_0890DF04:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890DF28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890DF28u) goto L_0890DF28;
    return;
L_0890DF28:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0890DF2C;
L_0890DF2C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890DF04;
      }
      goto L_0890DF40;
    }
L_0890DF40:
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
L_0890DF5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
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
          goto L_0890DFAC;
      }
      goto L_0890DF84;
    }
L_0890DF84:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890DFA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890DFA8u) goto L_0890DFA8;
    return;
L_0890DFA8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0890DFAC;
L_0890DFAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890DF84;
      }
      goto L_0890DFC0;
    }
L_0890DFC0:
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
L_0890DFDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E038;
      }
      goto L_0890E00C;
    }
L_0890E00C:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890E034u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890E034u) goto L_0890E034;
    return;
L_0890E034:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0890E038;
L_0890E038:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890E00C;
      }
      goto L_0890E04C;
    }
L_0890E04C:
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
L_0890E06C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E0C8;
      }
      goto L_0890E09C;
    }
L_0890E09C:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890E0C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890E0C4u) goto L_0890E0C4;
    return;
L_0890E0C4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0890E0C8;
L_0890E0C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890E09C;
      }
      goto L_0890E0DC;
    }
L_0890E0DC:
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
L_0890E0FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E158;
      }
      goto L_0890E12C;
    }
L_0890E12C:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890E154u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890E154u) goto L_0890E154;
    return;
L_0890E154:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0890E158;
L_0890E158:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890E12C;
      }
      goto L_0890E16C;
    }
L_0890E16C:
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
L_0890E18C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E1E8;
      }
      goto L_0890E1BC;
    }
L_0890E1BC:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890E1E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890E1E4u) goto L_0890E1E4;
    return;
L_0890E1E4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0890E1E8;
L_0890E1E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890E1BC;
      }
      goto L_0890E1FC;
    }
L_0890E1FC:
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
L_0890E21C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E294;
      }
      goto L_0890E260;
    }
L_0890E260:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890E290u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890E290u) goto L_0890E290;
    return;
L_0890E290:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0890E294;
L_0890E294:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890E260;
      }
      goto L_0890E2A0;
    }
L_0890E2A0:
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
L_0890E2C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E330;
      }
      goto L_0890E300;
    }
L_0890E300:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890E32Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890E32Cu) goto L_0890E32C;
    return;
L_0890E32C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0890E330;
L_0890E330:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890E300;
      }
      goto L_0890E344;
    }
L_0890E344:
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
L_0890E368:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E3D0;
      }
      goto L_0890E3A0;
    }
L_0890E3A0:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890E3C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890E3C8u) goto L_0890E3C8;
    return;
L_0890E3C8:
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0890E3D0;
L_0890E3D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890E3A0;
      }
      goto L_0890E3E4;
    }
L_0890E3E4:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_0890E40C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E47C;
      }
      goto L_0890E43C;
    }
L_0890E43C:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890E464u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890E464u) goto L_0890E464;
    return;
L_0890E464:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E478;
      }
      goto L_0890E46C;
    }
L_0890E46C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E494;
      }
      goto L_0890E478;
    }
L_0890E478:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0890E47C;
L_0890E47C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890E43C;
      }
      goto L_0890E490;
    }
L_0890E490:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0890E494;
L_0890E494:
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
L_0890E4B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E524;
      }
      goto L_0890E4E4;
    }
L_0890E4E4:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890E50Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890E50Cu) goto L_0890E50C;
    return;
L_0890E50C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890E520;
      }
      goto L_0890E514;
    }
L_0890E514:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E53C;
      }
      goto L_0890E520;
    }
L_0890E520:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0890E524;
L_0890E524:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890E4E4;
      }
      goto L_0890E538;
    }
L_0890E538:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0890E53C;
L_0890E53C:
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
L_0890E55C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E5CC;
      }
      goto L_0890E58C;
    }
L_0890E58C:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890E5B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890E5B4u) goto L_0890E5B4;
    return;
L_0890E5B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890E5C8;
      }
      goto L_0890E5BC;
    }
L_0890E5BC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E5E4;
      }
      goto L_0890E5C8;
    }
L_0890E5C8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0890E5CC;
L_0890E5CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890E58C;
      }
      goto L_0890E5E0;
    }
L_0890E5E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0890E5E4;
L_0890E5E4:
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
L_0890E604:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E674;
      }
      goto L_0890E634;
    }
L_0890E634:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890E65Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890E65Cu) goto L_0890E65C;
    return;
L_0890E65C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890E670;
      }
      goto L_0890E664;
    }
L_0890E664:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E68C;
      }
      goto L_0890E670;
    }
L_0890E670:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0890E674;
L_0890E674:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890E634;
      }
      goto L_0890E688;
    }
L_0890E688:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0890E68C;
L_0890E68C:
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
L_0890E6AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E71C;
      }
      goto L_0890E6DC;
    }
L_0890E6DC:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890E704u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890E704u) goto L_0890E704;
    return;
L_0890E704:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890E718;
      }
      goto L_0890E70C;
    }
L_0890E70C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E734;
      }
      goto L_0890E718;
    }
L_0890E718:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0890E71C;
L_0890E71C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890E6DC;
      }
      goto L_0890E730;
    }
L_0890E730:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0890E734;
L_0890E734:
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
L_0890E754:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E7B4;
      }
      goto L_0890E784;
    }
L_0890E784:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(200)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890E7A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890E7A8u) goto L_0890E7A8;
    return;
L_0890E7A8:
    ctx.set_gpr(2, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0890E7B4;
L_0890E7B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890E784;
      }
      goto L_0890E7C8;
    }
L_0890E7C8:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_0890E7EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
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
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(22, ctx.gpr[8] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(38)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890E840;
      }
      goto L_0890E834;
    }
L_0890E834:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E8D0;
      }
      goto L_0890E840;
    }
L_0890E840:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(23, ctx.gpr[5] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E8B8;
      }
      goto L_0890E860;
    }
L_0890E860:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(38)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0890E8B4;
      }
      goto L_0890E884;
    }
L_0890E884:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[23] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[16]);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(212)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890E8ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890E8ACu) goto L_0890E8AC;
    return;
L_0890E8AC:
    ctx.set_gpr(20, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
    goto L_0890E8B4;
L_0890E8B4:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0890E8B8;
L_0890E8B8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890E860;
      }
      goto L_0890E8C4;
    }
L_0890E8C4:
    ctx.set_gpr(3, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    goto L_0890E8D0;
L_0890E8D0:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890E904:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
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
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(22, ctx.gpr[8] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(30, ctx.gpr[5] + ctx.gpr[16]);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E9B8;
      }
      goto L_0890E960;
    }
L_0890E960:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(38)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0890E9B4;
      }
      goto L_0890E984;
    }
L_0890E984:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[30] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[16]);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890E9ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890E9ACu) goto L_0890E9AC;
    return;
L_0890E9AC:
    ctx.set_gpr(20, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
    goto L_0890E9B4;
L_0890E9B4:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0890E9B8;
L_0890E9B8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890E960;
      }
      goto L_0890E9C4;
    }
L_0890E9C4:
    ctx.set_gpr(3, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890EA04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
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
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(23, ctx.gpr[8] + 0u);
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(21, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890EAA8;
      }
      goto L_0890EA60;
    }
L_0890EA60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[21] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[20]);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, ctx.gpr[23] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(212)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890EAA0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890EAA0u) goto L_0890EAA0;
    return;
L_0890EAA0:
    ctx.set_gpr(22, ctx.gpr[22] + ctx.gpr[2]);
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_0890EAA8;
L_0890EAA8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890EA60;
      }
      goto L_0890EAB4;
    }
L_0890EAB4:
    ctx.set_gpr(2, ctx.gpr[22] + 0u);
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890EAEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
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
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(23, ctx.gpr[8] + 0u);
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(21, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890EB90;
      }
      goto L_0890EB48;
    }
L_0890EB48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[21] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[20]);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, ctx.gpr[23] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890EB88u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890EB88u) goto L_0890EB88;
    return;
L_0890EB88:
    ctx.set_gpr(22, ctx.gpr[22] + ctx.gpr[2]);
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_0890EB90;
L_0890EB90:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890EB48;
      }
      goto L_0890EB9C;
    }
L_0890EB9C:
    ctx.set_gpr(2, ctx.gpr[22] + 0u);
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890EBD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890EC10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890EC10u) goto L_0890EC10;
    return;
L_0890EC10:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890EC78;
      }
      goto L_0890EC20;
    }
L_0890EC20:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890EC5C;
      }
      goto L_0890EC2C;
    }
L_0890EC2C:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890EC58u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890EC58u) goto L_0890EC58;
    return;
L_0890EC58:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0890EC5C;
L_0890EC5C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890EC2C;
      }
      goto L_0890EC6C;
    }
L_0890EC6C:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0890EC78;
L_0890EC78:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890EC20;
      }
      goto L_0890EC84;
    }
L_0890EC84:
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
L_0890ECAC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26724)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890ECBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
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
          goto L_0890ED0C;
      }
      goto L_0890ECE4;
    }
L_0890ECE4:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(224)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890ED08u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890ED08u) goto L_0890ED08;
    return;
L_0890ED08:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0890ED0C;
L_0890ED0C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890ECE4;
      }
      goto L_0890ED20;
    }
L_0890ED20:
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
L_0890ED3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(21, ctx.gpr[7] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0890ED78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0890ED78u) goto L_0890ED78;
    return;
L_0890ED78:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890ED90;
      }
      goto L_0890ED84;
    }
L_0890ED84:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890EE64;
      }
      goto L_0890ED90;
    }
L_0890ED90:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32708));
    ctx.set_gpr(31, 0x0890EDA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 934u, 0x08817FC0u>(ctx, &aot_mem) && ctx.pc == 0x0890EDA0u) goto L_0890EDA0;
    return;
L_0890EDA0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890EDB8;
      }
      goto L_0890EDAC;
    }
L_0890EDAC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890EE64;
      }
      goto L_0890EDB8;
    }
L_0890EDB8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32704));
    ctx.set_gpr(31, 0x0890EDC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0890EDC8u) goto L_0890EDC8;
    return;
L_0890EDC8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890EDE4;
      }
      goto L_0890EDD0;
    }
L_0890EDD0:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32708));
    ctx.set_gpr(31, 0x0890EDE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 934u, 0x08817FC0u>(ctx, &aot_mem) && ctx.pc == 0x0890EDE0u) goto L_0890EDE0;
    return;
L_0890EDE0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    goto L_0890EDE4;
L_0890EDE4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890EDF8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890EDF8u) goto L_0890EDF8;
    return;
L_0890EDF8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890EE50;
      }
      goto L_0890EE08;
    }
L_0890EE08:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(236)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890EE38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890EE38u) goto L_0890EE38;
    return;
L_0890EE38:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32708));
    ctx.set_gpr(31, 0x0890EE48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 934u, 0x08817FC0u>(ctx, &aot_mem) && ctx.pc == 0x0890EE48u) goto L_0890EE48;
    return;
L_0890EE48:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0890EE50;
L_0890EE50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890EE08;
      }
      goto L_0890EE60;
    }
L_0890EE60:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    goto L_0890EE64;
L_0890EE64:
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
L_0890EE8C:
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(23, ctx.gpr[6] + 0u);
    ctx.set_gpr(30, ctx.gpr[7] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13256));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13252));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890EEF4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890EEF4u) goto L_0890EEF4;
    return;
L_0890EEF4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0890EF10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 9u, 0x089480C0u>(ctx, &aot_mem) && ctx.pc == 0x0890EF10u) goto L_0890EF10;
    return;
L_0890EF10:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F070;
      }
      goto L_0890EF24;
    }
L_0890EF24:
    ctx.set_gpr(21, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[21]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[23] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(7, ctx.gpr[30] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(240)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890EF54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890EF54u) goto L_0890EF54;
    return;
L_0890EF54:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890EF80;
      }
      goto L_0890EF64;
    }
L_0890EF64:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890EF80;
      }
      goto L_0890EF7C;
    }
L_0890EF7C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0890EF80;
L_0890EF80:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890EF94;
      }
      goto L_0890EF88;
    }
L_0890EF88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    goto L_0890EF94;
L_0890EF94:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(21, ctx.gpr[22] + ctx.gpr[21]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890EFC4;
      }
      goto L_0890EFA8;
    }
L_0890EFA8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890EFC4;
      }
      goto L_0890EFC0;
    }
L_0890EFC0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0890EFC4;
L_0890EFC4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890EFF0;
      }
      goto L_0890EFCC;
    }
L_0890EFCC:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890EFF0;
      }
      goto L_0890EFE4;
    }
L_0890EFE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0890EFF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0890EFF0u) goto L_0890EFF0;
    return;
L_0890EFF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F024;
      }
      goto L_0890F008;
    }
L_0890F008:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F024;
      }
      goto L_0890F020;
    }
L_0890F020:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0890F024;
L_0890F024:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F050;
      }
      goto L_0890F02C;
    }
L_0890F02C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890F050;
      }
      goto L_0890F044;
    }
L_0890F044:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0890F050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0890F050u) goto L_0890F050;
    return;
L_0890F050:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x0890F064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0890F064u) goto L_0890F064;
    return;
L_0890F064:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0890F070;
L_0890F070:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890EF24;
      }
      goto L_0890F07C;
    }
L_0890F07C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0890F08Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 3u, 0x08948028u>(ctx, &aot_mem) && ctx.pc == 0x0890F08Cu) goto L_0890F08C;
    return;
L_0890F08C:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x0890F0A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0890F0A0u) goto L_0890F0A0;
    return;
L_0890F0A0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(19, ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F100;
      }
      goto L_0890F0B8;
    }
L_0890F0B8:
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(17, ctx.gpr[22] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0890F0D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0890F0D8u) goto L_0890F0D8;
    return;
L_0890F0D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x0890F0ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0890F0ECu) goto L_0890F0EC;
    return;
L_0890F0EC:
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(19, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0890F100;
L_0890F100:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890F0B8;
      }
      goto L_0890F10C;
    }
L_0890F10C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x0890F11Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0890F11Cu) goto L_0890F11C;
    return;
L_0890F11C:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890F130;
      }
      goto L_0890F124;
    }
L_0890F124:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F17C;
      }
      goto L_0890F130;
    }
L_0890F130:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890F168;
      }
      goto L_0890F140;
    }
L_0890F140:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0890F14Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0890F14Cu) goto L_0890F14C;
    return;
L_0890F14C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F160;
      }
      goto L_0890F154;
    }
L_0890F154:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0890F160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0890F160u) goto L_0890F160;
    return;
L_0890F160:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0890F168;
L_0890F168:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0890F17Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0890F17Cu) goto L_0890F17C;
    return;
L_0890F17C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0890F190u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x0890F190u) goto L_0890F190;
    return;
L_0890F190:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F1C4;
      }
      goto L_0890F1A8;
    }
L_0890F1A8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F1C4;
      }
      goto L_0890F1C0;
    }
L_0890F1C0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0890F1C4;
L_0890F1C4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F1D8;
      }
      goto L_0890F1CC;
    }
L_0890F1CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    goto L_0890F1D8;
L_0890F1D8:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F204;
      }
      goto L_0890F1E8;
    }
L_0890F1E8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F204;
      }
      goto L_0890F200;
    }
L_0890F200:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0890F204;
L_0890F204:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F230;
      }
      goto L_0890F20C;
    }
L_0890F20C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890F230;
      }
      goto L_0890F224;
    }
L_0890F224:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0890F230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0890F230u) goto L_0890F230;
    return;
L_0890F230:
    ctx.set_gpr(2, 0u + 0u);
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
L_0890F268:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890F270:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890F27C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890F4A8;
      }
      goto L_0890F2AC;
    }
L_0890F2AC:
    ctx.set_gpr(31, 0x0890F2B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0890F2B4u) goto L_0890F2B4;
    return;
L_0890F2B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0890F2C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 336u, 0x088F9D60u>(ctx, &aot_mem) && ctx.pc == 0x0890F2C0u) goto L_0890F2C0;
    return;
L_0890F2C0:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0890F2D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0890F2D0u) goto L_0890F2D0;
    return;
L_0890F2D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890F2F8;
      }
      goto L_0890F2F0;
    }
L_0890F2F0:
    ctx.set_gpr(31, 0x0890F2F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0890F2F8u) goto L_0890F2F8;
    return;
L_0890F2F8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890F30Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890F30Cu) goto L_0890F30C;
    return;
L_0890F30C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-17776));
    ctx.set_gpr(31, 0x0890F31Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 233u, 0x0894516Cu>(ctx, &aot_mem) && ctx.pc == 0x0890F31Cu) goto L_0890F31C;
    return;
L_0890F31C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0890F32Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 225u, 0x089450D0u>(ctx, &aot_mem) && ctx.pc == 0x0890F32Cu) goto L_0890F32C;
    return;
L_0890F32C:
    ctx.set_gpr(21, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F490;
      }
      goto L_0890F33C;
    }
L_0890F33C:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0890F34Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 212u, 0x08944FE0u>(ctx, &aot_mem) && ctx.pc == 0x0890F34Cu) goto L_0890F34C;
    return;
L_0890F34C:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(26)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0890F36C;
      }
      goto L_0890F360;
    }
L_0890F360:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F48C;
      }
      goto L_0890F36C;
    }
L_0890F36C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0890F378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0890F378u) goto L_0890F378;
    return;
L_0890F378:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0890F384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 302u, 0x088F9A68u>(ctx, &aot_mem) && ctx.pc == 0x0890F384u) goto L_0890F384;
    return;
L_0890F384:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0890F398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0890F398u) goto L_0890F398;
    return;
L_0890F398:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(20, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890F3DC;
      }
      goto L_0890F3B4;
    }
L_0890F3B4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0890F3C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0890F3C0u) goto L_0890F3C0;
    return;
L_0890F3C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F3D4;
      }
      goto L_0890F3C8;
    }
L_0890F3C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0890F3D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0890F3D4u) goto L_0890F3D4;
    return;
L_0890F3D4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0890F3DC;
L_0890F3DC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0890F3F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0890F3F0u) goto L_0890F3F0;
    return;
L_0890F3F0:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F420;
      }
      goto L_0890F404;
    }
L_0890F404:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F420;
      }
      goto L_0890F41C;
    }
L_0890F41C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0890F420;
L_0890F420:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F44C;
      }
      goto L_0890F428;
    }
L_0890F428:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890F44C;
      }
      goto L_0890F440;
    }
L_0890F440:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0890F44Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0890F44Cu) goto L_0890F44C;
    return;
L_0890F44C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0890F464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x0890F464u) goto L_0890F464;
    return;
L_0890F464:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890F48C;
      }
      goto L_0890F480;
    }
L_0890F480:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0890F48Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0890F48Cu) goto L_0890F48C;
    return;
L_0890F48C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0890F490;
L_0890F490:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890F33C;
      }
      goto L_0890F49C;
    }
L_0890F49C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    goto L_0890F4A8;
L_0890F4A8:
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
L_0890F4D0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30128)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890F4E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890F504;
      }
      goto L_0890F4FC;
    }
L_0890F4FC:
    ctx.set_gpr(31, 0x0890F504u);
    // nop
    goto L_0890F27C;
L_0890F504:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_0890F51C;
      }
      goto L_0890F510;
    }
L_0890F510:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F520;
      }
      goto L_0890F51C;
    }
L_0890F51C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_0890F520;
L_0890F520:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890F534:
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
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890F578;
      }
      goto L_0890F570;
    }
L_0890F570:
    ctx.set_gpr(31, 0x0890F578u);
    // nop
    goto L_0890F27C;
L_0890F578:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_0890F590;
      }
      goto L_0890F584;
    }
L_0890F584:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F7F0;
      }
      goto L_0890F590;
    }
L_0890F590:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F5E4;
      }
      goto L_0890F5A0;
    }
L_0890F5A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0890F5CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0890F5CCu) goto L_0890F5CC;
    return;
L_0890F5CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890F5E0;
      }
      goto L_0890F5D4;
    }
L_0890F5D4:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F5E4;
      }
      goto L_0890F5E0;
    }
L_0890F5E0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0890F5E4;
L_0890F5E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F5FC;
      }
      goto L_0890F5F4;
    }
L_0890F5F4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890F5A0;
      }
      goto L_0890F5FC;
    }
L_0890F5FC:
    ctx.set_gpr(3, ctx.gpr[17] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0890F7EC;
      }
      goto L_0890F60C;
    }
L_0890F60C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890F620u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890F620u) goto L_0890F620;
    return;
L_0890F620:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-17776));
    ctx.set_gpr(31, 0x0890F630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 233u, 0x0894516Cu>(ctx, &aot_mem) && ctx.pc == 0x0890F630u) goto L_0890F630;
    return;
L_0890F630:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0890F640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 225u, 0x089450D0u>(ctx, &aot_mem) && ctx.pc == 0x0890F640u) goto L_0890F640;
    return;
L_0890F640:
    ctx.set_gpr(22, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F7D4;
      }
      goto L_0890F650;
    }
L_0890F650:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0890F660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 212u, 0x08944FE0u>(ctx, &aot_mem) && ctx.pc == 0x0890F660u) goto L_0890F660;
    return;
L_0890F660:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(26)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0890F680;
      }
      goto L_0890F674;
    }
L_0890F674:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F7D0;
      }
      goto L_0890F680;
    }
L_0890F680:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(16, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0890F69Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0890F69Cu) goto L_0890F69C;
    return;
L_0890F69C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890F7D0;
      }
      goto L_0890F6A4;
    }
L_0890F6A4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0890F6B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0890F6B0u) goto L_0890F6B0;
    return;
L_0890F6B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0890F6BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 302u, 0x088F9A68u>(ctx, &aot_mem) && ctx.pc == 0x0890F6BCu) goto L_0890F6BC;
    return;
L_0890F6BC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0890F6D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0890F6D0u) goto L_0890F6D0;
    return;
L_0890F6D0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890F708;
      }
      goto L_0890F6E0;
    }
L_0890F6E0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0890F6ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0890F6ECu) goto L_0890F6EC;
    return;
L_0890F6EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F700;
      }
      goto L_0890F6F4;
    }
L_0890F6F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0890F700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0890F700u) goto L_0890F700;
    return;
L_0890F700:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0890F708;
L_0890F708:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0890F71Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0890F71Cu) goto L_0890F71C;
    return;
L_0890F71C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F74C;
      }
      goto L_0890F730;
    }
L_0890F730:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F74C;
      }
      goto L_0890F748;
    }
L_0890F748:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0890F74C;
L_0890F74C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F778;
      }
      goto L_0890F754;
    }
L_0890F754:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890F778;
      }
      goto L_0890F76C;
    }
L_0890F76C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0890F778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0890F778u) goto L_0890F778;
    return;
L_0890F778:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0890F790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x0890F790u) goto L_0890F790;
    return;
L_0890F790:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890F7B8;
      }
      goto L_0890F7AC;
    }
L_0890F7AC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0890F7B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0890F7B8u) goto L_0890F7B8;
    return;
L_0890F7B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F7F0;
      }
      goto L_0890F7D0;
    }
L_0890F7D0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0890F7D4;
L_0890F7D4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890F650;
      }
      goto L_0890F7E0;
    }
L_0890F7E0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F7F0;
      }
      goto L_0890F7EC;
    }
L_0890F7EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_0890F7F0;
L_0890F7F0:
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
L_0890F81C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0890F83Cu);
    // nop
    goto L_0890F534;
L_0890F83C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890F854;
      }
      goto L_0890F848;
    }
L_0890F848:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F940;
      }
      goto L_0890F854;
    }
L_0890F854:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0890F864u);
    // nop
    goto L_0890F970;
L_0890F864:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890F93C;
      }
      goto L_0890F870;
    }
L_0890F870:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0890F87Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0890F87Cu) goto L_0890F87C;
    return;
L_0890F87C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0890F88Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x0890F88Cu) goto L_0890F88C;
    return;
L_0890F88C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F93C;
      }
      goto L_0890F898;
    }
L_0890F898:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890F8B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890F8B0u) goto L_0890F8B0;
    return;
L_0890F8B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890F8EC;
      }
      goto L_0890F8B8;
    }
L_0890F8B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890F8E0;
      }
      goto L_0890F8D4;
    }
L_0890F8D4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0890F8E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0890F8E0u) goto L_0890F8E0;
    return;
L_0890F8E0:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F93C;
      }
      goto L_0890F8EC;
    }
L_0890F8EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0890F8FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x0890F8FCu) goto L_0890F8FC;
    return;
L_0890F8FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890F924;
      }
      goto L_0890F918;
    }
L_0890F918:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0890F924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0890F924u) goto L_0890F924;
    return;
L_0890F924:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890F93Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890F93Cu) goto L_0890F93C;
    return;
L_0890F93C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_0890F940;
L_0890F940:
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
L_0890F95C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890F964:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890F970:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F9DC;
      }
      goto L_0890F99C;
    }
L_0890F99C:
    ctx.set_gpr(16, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0890F9B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0890F9B8u) goto L_0890F9B8;
    return;
L_0890F9B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F9D8;
      }
      goto L_0890F9C0;
    }
L_0890F9C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F9F4;
      }
      goto L_0890F9D8;
    }
L_0890F9D8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0890F9DC;
L_0890F9DC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890F99C;
      }
      goto L_0890F9F0;
    }
L_0890F9F0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0890F9F4;
L_0890F9F4:
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
L_0890FA14:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890FA20:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890FA2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890FA70;
      }
      goto L_0890FA58;
    }
L_0890FA58:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x0890FA64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x0890FA64u) goto L_0890FA64;
    return;
L_0890FA64:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890FAF8;
      }
      goto L_0890FA70;
    }
L_0890FA70:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0890FAF8;
      }
      goto L_0890FA7C;
    }
L_0890FA7C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29936)));
    ctx.set_gpr(19, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(18))))));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890FA98u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890FA98u) goto L_0890FA98;
    return;
L_0890FA98:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[19]))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0890FAA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0890FAA8u) goto L_0890FAA8;
    return;
L_0890FAA8:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890FAC0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890FAC0u) goto L_0890FAC0;
    return;
L_0890FAC0:
    ctx.set_gpr(3, ctx.gpr[2] & 65535u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[3]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(16, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0890FAE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0890FAE0u) goto L_0890FAE0;
    return;
L_0890FAE0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0890FAF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 213u, 0x08940F60u>(ctx, &aot_mem) && ctx.pc == 0x0890FAF8u) goto L_0890FAF8;
    return;
L_0890FAF8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
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
L_0890FB1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890FB4C;
      }
      goto L_0890FB44;
    }
L_0890FB44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890FB50;
      }
      goto L_0890FB4C;
    }
L_0890FB4C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    goto L_0890FB50;
L_0890FB50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890FB74;
      }
      goto L_0890FB58;
    }
L_0890FB58:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 1024 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890FB70;
      }
      goto L_0890FB64;
    }
L_0890FB64:
    ctx.set_gpr(5, ctx.gpr[5] << 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890FB74;
      }
      goto L_0890FB70;
    }
L_0890FB70:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1024));
    goto L_0890FB74;
L_0890FB74:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890FB58;
      }
      goto L_0890FB80;
    }
L_0890FB80:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0890FB8Cu);
    // nop
    goto L_0890FA2C;
L_0890FB8C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
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
L_0890FBA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
    ctx.set_gpr(18, ctx.gpr[9] + 0u);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890FC2C;
      }
      goto L_0890FBFC;
    }
L_0890FBFC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    jump_target = ctx.gpr[20];
    ctx.set_gpr(31, 0x0890FC10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890FC10u) goto L_0890FC10;
    return;
L_0890FC10:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890FC24;
      }
      goto L_0890FC18;
    }
L_0890FC18:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890FC3C;
      }
      goto L_0890FC24;
    }
L_0890FC24:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[19]);
    goto L_0890FC2C;
L_0890FC2C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890FBFC;
      }
      goto L_0890FC38;
    }
L_0890FC38:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_0890FC3C;
L_0890FC3C:
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
L_0890FC68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[20]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890FCC0;
      }
      goto L_0890FCB4;
    }
L_0890FCB4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890FCCC;
      }
      goto L_0890FCC0;
    }
L_0890FCC0:
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0890FCCCu);
    // nop
    goto L_0890FB1C;
L_0890FCCC:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[21])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, ctx.gpr[2] + ctx.gpr[3]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(20, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[16] - ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890FD08;
      }
      goto L_0890FCF4;
    }
L_0890FCF4:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0890FD08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 679u, 0x08812C2Cu>(ctx, &aot_mem) && ctx.pc == 0x0890FD08u) goto L_0890FD08;
    return;
L_0890FD08:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0890FD1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0890FD1Cu) goto L_0890FD1C;
    return;
L_0890FD1C:
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
L_0890FD44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
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
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890FDCC;
      }
      goto L_0890FD78;
    }
L_0890FD78:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[19]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890FD9C;
      }
      goto L_0890FD90;
    }
L_0890FD90:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890FDA8;
      }
      goto L_0890FD9C;
    }
L_0890FD9C:
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0890FDA8u);
    // nop
    goto L_0890FB1C;
L_0890FDA8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0890FDCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0890FDCCu) goto L_0890FDCC;
    return;
L_0890FDCC:
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
L_0890FDF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0890FE40;
      }
      goto L_0890FE10;
    }
L_0890FE10:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[7] - ctx.gpr[2]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0890FE40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 679u, 0x08812C2Cu>(ctx, &aot_mem) && ctx.pc == 0x0890FE40u) goto L_0890FE40;
    return;
L_0890FE40:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890FE60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[7] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890FED8;
      }
      goto L_0890FEA8;
    }
L_0890FEA8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    jump_target = ctx.gpr[20];
    ctx.set_gpr(31, 0x0890FEBCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890FEBCu) goto L_0890FEBC;
    return;
L_0890FEBC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890FED0;
      }
      goto L_0890FEC4;
    }
L_0890FEC4:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890FEE8;
      }
      goto L_0890FED0;
    }
L_0890FED0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    goto L_0890FED8;
L_0890FED8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890FEA8;
      }
      goto L_0890FEE4;
    }
L_0890FEE4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_0890FEE8;
L_0890FEE8:
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
L_0890FF10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
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
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890FF60;
      }
      goto L_0890FF54;
    }
L_0890FF54:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890FF6C;
      }
      goto L_0890FF60;
    }
L_0890FF60:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0890FF6Cu);
    // nop
    goto L_0890FB1C;
L_0890FF6C:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(20, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, ctx.gpr[18] << 2u);
    ctx.set_gpr(4, ctx.gpr[20] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[16] - ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890FF9C;
      }
      goto L_0890FF8C;
    }
L_0890FF8C:
    ctx.set_gpr(6, ctx.gpr[2] << 2u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0890FF9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 679u, 0x08812C2Cu>(ctx, &aot_mem) && ctx.pc == 0x0890FF9Cu) goto L_0890FF9C;
    return;
L_0890FF9C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0890FFB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0890FFB0u) goto L_0890FFB0;
    return;
L_0890FFB0:
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
L_0890FFD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 5u, 0x0891004Cu>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 1u, 0x08910000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0066(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0066_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_66(Runtime &runtime) {
    runtime.register_generated_unit(66u, 0x0890C000u, 16384u, &recomp_unit_0066, &recomp_unit_0066_entry);
    runtime.register_function(0x0890C000u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C01Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C028u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C03Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C044u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C080u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C088u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C0A0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C0A8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C0C0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C0D4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C0E0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C0E4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C0ECu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C11Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C170u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C17Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C184u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C18Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C198u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C1A0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C1A8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C1B4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C1CCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C1DCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C1ECu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C1F8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C20Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C218u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C224u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C22Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C244u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C25Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C274u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C280u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C284u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C290u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C2A0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C2ACu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C2C4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C2C8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C2D8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C2E4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C2F0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C2FCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C308u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C314u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C320u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C32Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C334u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C340u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C34Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C354u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C364u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C36Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C378u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C38Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C394u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C39Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C3A8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C3B0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C3B4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C3BCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C3C4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C3CCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C3D0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C3D8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C3E4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C3E8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C3F0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C3FCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C408u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C414u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C41Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C42Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C434u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C440u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C44Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C454u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C464u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C46Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C478u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C484u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C48Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C49Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C4A4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C4ACu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C4B8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C4C4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C4D0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C4D8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C4E8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C4F0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C4FCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C508u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C510u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C520u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C528u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C540u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C54Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C558u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C560u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C570u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C578u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C588u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C590u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C5A0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C5A8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C5B4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C5C8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C5D4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C5E0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C5E8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C5F8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C600u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C610u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C618u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C628u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C630u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C63Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C658u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C65Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C668u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C678u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C688u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C694u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C6A8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C6BCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C6C8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C6D4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C6DCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C714u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C71Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C724u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C74Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C770u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C78Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C798u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C7CCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C7F4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C820u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C83Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C84Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C858u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C864u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C880u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C8A8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C8B4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C8C0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C8D0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C8DCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C8E4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C8F0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C8F8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C90Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C910u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C928u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C940u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C954u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C960u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C978u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C990u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C9B4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C9CCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C9F0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CA00u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CA10u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CA1Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CA3Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CA4Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CA58u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CA8Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CAA0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CACCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CADCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CAE4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CB3Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CB44u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CB4Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CB54u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CB60u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CB70u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CB80u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CB94u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CBACu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CBB4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CBC8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CBF0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CBFCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CC08u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CC14u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CC1Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CC28u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CC30u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CC3Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CC5Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CC68u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CC74u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CC78u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CC84u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CC94u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CCB0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CCC8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CCD4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CCE4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CCF4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CD0Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CD14u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CD2Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CD44u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CD58u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CD60u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CD70u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CD94u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CD98u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CDA4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CDACu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CDC0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CDC8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CDE4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CDECu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CE00u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CE10u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CE24u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CE2Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CE40u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CE68u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CE74u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CE80u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CE8Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CE94u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CEA0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CEA8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CEB4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CED4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CEE0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CEECu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CEF0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CEFCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CF0Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CF28u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CF40u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CF44u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CF50u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CF98u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CFD4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CFF8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D010u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D01Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D02Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D03Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D040u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D048u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D04Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D054u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D064u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D074u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D078u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D080u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D0A8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D0CCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D0DCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D0F4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D104u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D11Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D130u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D144u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D17Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D188u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D194u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D1A0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D1ACu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D1B8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D1C4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D1D0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D1DCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D1E8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D1FCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D214u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D228u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D23Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D254u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D25Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D260u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D26Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D27Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D290u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D29Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D2B4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D2CCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D2D4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D2D8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D2E4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D2F4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D308u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D314u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D380u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D394u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D3ACu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D3C4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D3C8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D3D0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D3DCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D3ECu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D404u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D408u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D410u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D428u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D434u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D44Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D45Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D46Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D48Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D4B0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D4BCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D4C8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D4D4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D4DCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D4E8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D4F0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D4FCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D518u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D524u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D530u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D534u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D540u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D558u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D57Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D588u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D594u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D5A0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D5A8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D5B4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D5BCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D5C8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D5E4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D5F0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D5FCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D600u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D60Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D620u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D624u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D630u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D640u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D658u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D65Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D664u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D67Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D688u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D694u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D69Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D6A8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D6B0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D6BCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D6C4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D6ECu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D70Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D71Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D72Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D730u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D738u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D73Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D744u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D76Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D774u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D784u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D78Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D7A8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D7B0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D7C4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D7CCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D7E0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D7E8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D804u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D820u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D848u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D854u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D86Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D87Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D888u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D890u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D8ACu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D8ECu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D904u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D920u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D944u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D950u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D954u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D968u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D978u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D98Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D994u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D998u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D9A4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D9B8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D9D8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D9E4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D9E8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DA08u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DA18u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DA28u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DA2Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DA34u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DA38u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DA40u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DA48u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DA58u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DA5Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DA68u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DA74u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DA80u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DA84u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DAB0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DB00u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DB20u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DB2Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DB30u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DB3Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DB58u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DB68u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DB78u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DB7Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DB84u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DB88u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DB90u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DBA0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DBA4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DBB0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DBC8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DBF0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DC10u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DC20u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DC30u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DC40u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DC4Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DC74u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DC94u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DCA0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DCA4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DCA8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DCBCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DCDCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DD04u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DD28u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DD2Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DD40u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DD5Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DD84u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DDA8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DDACu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DDC0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DDDCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DE04u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DE28u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DE2Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DE40u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DE5Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DE84u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DEA8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DEACu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DEC0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DEDCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DF04u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DF28u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DF2Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DF40u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DF5Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DF84u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DFA8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DFACu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DFC0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DFDCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E00Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E034u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E038u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E04Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E06Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E09Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E0C4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E0C8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E0DCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E0FCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E12Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E154u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E158u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E16Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E18Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E1BCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E1E4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E1E8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E1FCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E21Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E260u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E290u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E294u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E2A0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E2C8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E300u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E32Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E330u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E344u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E368u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E3A0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E3C8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E3D0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E3E4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E40Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E43Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E464u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E46Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E478u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E47Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E490u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E494u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E4B4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E4E4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E50Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E514u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E520u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E524u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E538u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E53Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E55Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E58Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E5B4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E5BCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E5C8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E5CCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E5E0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E5E4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E604u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E634u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E65Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E664u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E670u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E674u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E688u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E68Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E6ACu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E6DCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E704u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E70Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E718u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E71Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E730u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E734u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E754u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E784u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E7A8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E7B4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E7C8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E7ECu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E834u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E840u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E860u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E884u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E8ACu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E8B4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E8B8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E8C4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E8D0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E904u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E960u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E984u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E9ACu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E9B4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E9B8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E9C4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EA04u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EA60u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EAA0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EAA8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EAB4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EAECu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EB48u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EB88u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EB90u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EB9Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EBD4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EC10u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EC20u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EC2Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EC58u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EC5Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EC6Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EC78u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EC84u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890ECACu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890ECBCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890ECE4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890ED08u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890ED0Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890ED20u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890ED3Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890ED78u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890ED84u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890ED90u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EDA0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EDACu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EDB8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EDC8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EDD0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EDE0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EDE4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EDF8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EE08u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EE38u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EE48u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EE50u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EE60u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EE64u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EE8Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EEF4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EF10u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EF24u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EF54u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EF64u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EF7Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EF80u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EF88u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EF94u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EFA8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EFC0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EFC4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EFCCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EFE4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EFF0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F008u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F020u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F024u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F02Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F044u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F050u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F064u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F070u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F07Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F08Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F0A0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F0B8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F0D8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F0ECu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F100u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F10Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F11Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F124u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F130u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F140u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F14Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F154u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F160u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F168u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F17Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F190u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F1A8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F1C0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F1C4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F1CCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F1D8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F1E8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F200u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F204u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F20Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F224u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F230u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F268u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F270u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F27Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F2ACu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F2B4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F2C0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F2D0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F2F0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F2F8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F30Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F31Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F32Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F33Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F34Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F360u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F36Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F378u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F384u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F398u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F3B4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F3C0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F3C8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F3D4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F3DCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F3F0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F404u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F41Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F420u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F428u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F440u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F44Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F464u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F480u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F48Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F490u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F49Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F4A8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F4D0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F4E0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F4FCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F504u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F510u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F51Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F520u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F534u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F570u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F578u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F584u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F590u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F5A0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F5CCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F5D4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F5E0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F5E4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F5F4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F5FCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F60Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F620u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F630u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F640u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F650u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F660u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F674u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F680u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F69Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F6A4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F6B0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F6BCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F6D0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F6E0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F6ECu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F6F4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F700u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F708u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F71Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F730u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F748u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F74Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F754u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F76Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F778u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F790u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F7ACu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F7B8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F7D0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F7D4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F7E0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F7ECu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F7F0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F81Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F83Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F848u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F854u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F864u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F870u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F87Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F88Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F898u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F8B0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F8B8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F8D4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F8E0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F8ECu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F8FCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F918u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F924u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F93Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F940u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F95Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F964u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F970u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F99Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F9B8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F9C0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F9D8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F9DCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F9F0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F9F4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FA14u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FA20u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FA2Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FA58u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FA64u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FA70u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FA7Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FA98u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FAA8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FAC0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FAE0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FAF8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FB1Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FB44u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FB4Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FB50u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FB58u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FB64u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FB70u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FB74u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FB80u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FB8Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FBA8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FBFCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FC10u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FC18u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FC24u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FC2Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FC38u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FC3Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FC68u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FCB4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FCC0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FCCCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FCF4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FD08u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FD1Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FD44u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FD78u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FD90u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FD9Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FDA8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FDCCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FDF0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FE10u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FE40u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FE60u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FEA8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FEBCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FEC4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FED0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FED8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FEE4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FEE8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FF10u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FF54u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FF60u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FF6Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FF8Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FF9Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FFB0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FFD4u, &recomp_unit_0066, "recomp_unit_0066");
}
} // namespace psprecomp
